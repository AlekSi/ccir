// Copyright 2017 The CCIR Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// Package ccir translates cc[0] ASTs to intermediate representation. (Work In Progress)
//
//  [0]: https://github.com/cznic/cc
package ccir

import (
	"fmt"
	"go/token"
	"os"
	"path"
	"runtime"

	"github.com/cznic/cc"
	"github.com/cznic/internal/buffer"
	"github.com/cznic/ir"
)

var (
	// Testing amends things for tests.
	Testing bool

	sizes = map[int]string{
		0:  "0",
		1:  "8",
		2:  "16",
		4:  "32",
		8:  "64",
		16: "128",
	}
)

//TODO remove me.
func TODO(more ...interface{}) string { //TODOOK
	_, fn, fl, _ := runtime.Caller(1)
	fmt.Fprintf(os.Stderr, "%s:%d: %v\n", path.Base(fn), fl, fmt.Sprint(more...)) //TODOOK
	os.Stderr.Sync()
	panic("TODO")
}

type fdata struct {
	f      *ir.FunctionDefinition
	static map[*cc.Declarator]int
}

type c struct {
	ast    *cc.TranslationUnit
	ctypes map[cc.Type]ir.Type
	f      fdata
	model  ir.MemoryModel
	out    []ir.Object
	types  ir.TypeCache
}

func newC(model ir.MemoryModel, ast *cc.TranslationUnit) *c {
	return &c{
		ast:    ast,
		ctypes: map[cc.Type]ir.Type{},
		model:  model,
		types:  ir.TypeCache{},
	}
}

func (c *c) nm2(d *cc.Declarator) (ir.NameID, *cc.Bindings) {
	id, sc := d.Identifier()
	return ir.NameID(id), sc
}

func (c *c) nm(d *cc.Declarator) ir.NameID {
	id, _ := d.Identifier()
	return ir.NameID(id)
}

func (c *c) tnm(d *cc.Declarator) ir.NameID { return ir.NameID(d.RawSpecifier().TypedefName()) }

func (c *c) typ0(dst *buffer.Bytes, t cc.Type) {
	for t.Kind() == cc.Ptr {
		dst.WriteByte('*')
		t = t.Element()
	}

	sou := "struct{"
	switch k := t.Kind(); k {
	case cc.Enum:
		dst.WriteString("int")
		dst.WriteString(sizes[c.ast.Model.Items[cc.Int].Size])
	case cc.Char, cc.SChar, cc.Short, cc.Int, cc.Long, cc.LongLong:
		dst.WriteString("int")
		dst.WriteString(sizes[c.ast.Model.Items[k].Size])
	case cc.UChar, cc.UShort, cc.UInt, cc.ULong, cc.ULongLong:
		dst.WriteString("uint")
		dst.WriteString(sizes[c.ast.Model.Items[k].Size])
	case cc.Float, cc.Double:
		dst.WriteString("float")
		dst.WriteString(sizes[c.ast.Model.Items[k].Size])
	case cc.Function:
		dst.WriteString("func(")
		p, variadic := t.Parameters()
		for i, v := range p {
			c.typ0(dst, v.Type)
			if i+1 < len(p) {
				dst.WriteByte(',')
			}
		}
		if variadic {
			dst.WriteString("...")
		}
		dst.WriteByte(')')
		if r := t.Result(); r.Kind() != cc.Void {
			c.typ0(dst, r)
		}
	case cc.Array:
		switch n := t.Elements(); {
		case n < 0:
			panic("internal error")
		default:
			dst.WriteByte('[')
			fmt.Fprintf(dst, "%d", n)
			dst.WriteByte(']')
			c.typ0(dst, t.Element())
		}
	case cc.Union:
		sou = "union{"
		fallthrough
	case cc.Struct:
		dst.WriteString(sou)
		switch m, incomplete := t.Members(); {
		case incomplete:
			TODO()
		default:
			for i, v := range m {
				t := v.Type
				if v.Bits != 0 {
					if v.BitOffsetOf != 0 {
						continue
					}

					t = v.BitFieldType
				}

				c.typ0(dst, t)
				if i+1 < len(m) {
					dst.WriteByte(',')
				}
			}
		}
		dst.WriteByte('}')
	case cc.Void:
		dst.WriteString("struct{}")
	default:
		panic(fmt.Errorf("internal error %v", k))
	}
}

func (c *c) typ(in cc.Type) ir.Type {
	if r := c.ctypes[in]; r != nil {
		return r
	}

	var dst buffer.Bytes
	c.typ0(&dst, in)
	out, err := c.types.Type(ir.TypeID(dict.ID(dst.Bytes())))
	if err != nil {
		dst.Close()
		panic(fmt.Errorf("internal error: %v", err))
	}

	dst.Close()
	return out
}

func (c *c) linkage(l cc.Linkage) ir.Linkage {
	switch l {
	case cc.External:
		return ir.ExternalLinkage
	case cc.Internal:
		return ir.InternalLinkage
	case cc.None:
		return ir.Linkage(-1)
	default:
		panic("internal error")
	}
}

func (c *c) initializer(n *cc.Initializer) ir.Value {
	if n == nil {
		return nil
	}

	switch n.Case {
	case 0: // Expression
		switch x := n.Expression.Value.(type) {
		case nil:
			TODO(position(n))
		case cc.StringLitID:
			return &ir.StringLitValue{StringID: ir.StringID(x)}
		default:
			TODO(position(n), fmt.Sprintf("%T", x))
		}
	case 1: // '{' InitializerList CommaOpt '}'  // Case 1
		TODO(position(n))
	}
	panic("internal error")
}

func (c *c) initDeclarator(n *cc.InitDeclarator) (p token.Position, nm, tnm ir.NameID, typ ir.TypeID, l ir.Linkage, v ir.Value) {
	d := n.Declarator
	return position(n), c.nm(d), c.tnm(d), c.typ(d.Type).ID(), c.linkage(d.Linkage), c.initializer(n.Initializer)
}

func (c *c) declaration(n *cc.Declaration) {
	switch n.Case {
	case 0: // DeclarationSpecifiers InitDeclaratorListOpt ';'
		if n.DeclarationSpecifiers.IsTypedef() {
			return
		}

		if o := n.InitDeclaratorListOpt; o != nil {
			for l := o.InitDeclaratorList; l != nil; l = l.InitDeclaratorList {
				d := l.InitDeclarator.Declarator
				switch p, nm, tnm, typ, ln, v := c.initDeclarator(l.InitDeclarator); {
				case ln < 0: // linkage none
					switch {
					case d.RawSpecifier().IsStatic():
						var b buffer.Bytes
						ix := len(c.f.static)
						c.f.static[d] = ix
						// func\x00varname\x00index
						b.Write(dict.S(int(c.f.f.NameID)))
						b.WriteByte(0)
						b.Write(dict.S(int(nm)))
						b.WriteByte(0)
						fmt.Fprint(&b, "%v", ix)
						c.out = append(c.out, ir.NewDeclaration(p, ir.NameID(dict.ID(b.Bytes())), tnm, typ, ir.InternalLinkage, v))
						b.Close()
					default:
						TODO(position(n))
					}
				default: // external, internal
					c.out = append(c.out, ir.NewDeclaration(p, nm, tnm, typ, ln, v))
				}
			}
		}
	case 1: // StaticAssertDeclaration                          // Case 1
		TODO(position(n))
	default:
		panic("internal error")
	}
}

func (c *c) newFData(f *ir.FunctionDefinition) {
	c.f = fdata{
		f:      f,
		static: map[*cc.Declarator]int{},
	}
}

func (c *c) emit(op ir.Operation) { c.f.f.Body = append(c.f.f.Body, op) }

func (c *c) call(f cc.Type, n *cc.ArgumentExpressionListOpt) {
	if r := f.Result(); r.Kind() != cc.Void {
		c.emit(&ir.Result{TypeID: c.typ(r).ID(), TypeName: 0, Position: position(n)})
	}
	args := 0
	if n != nil {
		for l := n.ArgumentExpressionList; l != nil; l = l.ArgumentExpressionList {
			args++
		}
	}
	c.emit(&ir.Arguments{Position: position(n)})
	p, _ := f.Parameters()
	if n != nil {
		i := 0
		for l := n.ArgumentExpressionList; l != nil; l = l.ArgumentExpressionList {
			var t cc.Type
			if i < len(p) {
				t = p[i].Type
			}
			switch l.Expression.Type.Kind() {
			case cc.Float:
				t = c.ast.Model.DoubleType
			}
			c.expression(t, l.Expression)
			i++
		}
	}
}

func (c *c) expression(ot cc.Type, n *cc.Expression) {
	if v := n.Value; v != nil {
		_ = v
		TODO(position(n))
		return
	}

	t := n.Type
	switch t.Kind() {
	case cc.Array:
		switch {
		case t.Elements() < 0:
			TODO(position(n))
		default:
			TODO(position(n))
		}
	case cc.Function:
		TODO(position(n))
	}

	switch {
	case ot != nil && ot.Kind() != t.Kind():
		switch ot.Kind() {
		case cc.Void:
			TODO(position(n), t)
		default:
			TODO(position(n), t)
		}
	}

	switch n.Case {
	case 0: // IDENTIFIER
		TODO(position(n))
	case
		1, // CHARCONST                                          // Case 1
		2, // FLOATCONST                                         // Case 2
		3, // INTCONST                                           // Case 3
		4, // LONGCHARCONST                                      // Case 4
		5, // LONGSTRINGLITERAL                                  // Case 5
		6: // STRINGLITERAL                                      // Case 6

		panic("internal error")
	case 7: // '(' ExpressionList ')'                             // Case 7
		TODO(position(n))
	case 8: // Expression '[' ExpressionList ']'                  // Case 8
		TODO(position(n))
	case 9: // Expression '(' ArgumentExpressionListOpt ')'       // Case 9
		switch t := n.Expression.Type; t.Kind() {
		case cc.Function:
			c.call(t, n.ArgumentExpressionListOpt)
			TODO(position(n))
			// c.expression(t.Pointer(), n.Expression)
			// c.f.Emit(ir.Call, c.typ(t.Pointer()), nil, position(n))
		case cc.Ptr:
			TODO(position(n))
			// ft := t.Element()
			// if ft.Kind() != cc.Function {
			// 	panic("internal error")
			// }

			// c.call(ft, n.ArgumentExpressionListOpt)
			// c.expression(t, n.Expression)
			// c.f.Emit(ir.Call, c.typ(t), nil, position(n))
		default:
			TODO(position(n), t.Kind())
		}
	case 10: // Expression '.' IDENTIFIER                          // Case 10
		TODO(position(n))
	case 11: // Expression "->" IDENTIFIER                         // Case 11
		TODO(position(n))
	case 12: // Expression "++"                                    // Case 12
		TODO(position(n))
	case 13: // Expression "--"                                    // Case 13
		TODO(position(n))
	case 14: // '(' TypeName ')' '{' InitializerList CommaOpt '}'  // Case 14
		TODO(position(n))
	case 15: // "++" Expression                                    // Case 15
		TODO(position(n))
	case 16: // "--" Expression                                    // Case 16
		TODO(position(n))
	case 17: // '&' Expression                                     // Case 17
		TODO(position(n))
	case 18: // '*' Expression                                     // Case 18
		TODO(position(n))
	case 19: // '+' Expression                                     // Case 19
		TODO(position(n))
	case 20: // '-' Expression                                     // Case 20
		TODO(position(n))
	case 21: // '~' Expression                                     // Case 21
		TODO(position(n))
	case 22: // '!' Expression                                     // Case 22
		TODO(position(n))
	case 23: // "sizeof" Expression                                // Case 23
		TODO(position(n))
	case 24: // "sizeof" '(' TypeName ')'                          // Case 24
		TODO(position(n))
	case 25: // '(' TypeName ')' Expression                        // Case 25
		TODO(position(n))
	case 26: // Expression '*' Expression                          // Case 26
		TODO(position(n))
	case 27: // Expression '/' Expression                          // Case 27
		TODO(position(n))
	case 28: // Expression '%' Expression                          // Case 28
		TODO(position(n))
	case 29: // Expression '+' Expression                          // Case 29
		TODO(position(n))
	case 30: // Expression '-' Expression                          // Case 30
		TODO(position(n))
	case 31: // Expression "<<" Expression                         // Case 31
		TODO(position(n))
	case 32: // Expression ">>" Expression                         // Case 32
		TODO(position(n))
	case 33: // Expression '<' Expression                          // Case 33
		TODO(position(n))
	case 34: // Expression '>' Expression                          // Case 34
		TODO(position(n))
	case 35: // Expression "<=" Expression                         // Case 35
		TODO(position(n))
	case 36: // Expression ">=" Expression                         // Case 36
		TODO(position(n))
	case 37: // Expression "==" Expression                         // Case 37
		TODO(position(n))
	case 38: // Expression "!=" Expression                         // Case 38
		TODO(position(n))
	case 39: // Expression '&' Expression                          // Case 39
		TODO(position(n))
	case 40: // Expression '^' Expression                          // Case 40
		TODO(position(n))
	case 41: // Expression '|' Expression                          // Case 41
		TODO(position(n))
	case 42: // Expression "&&" Expression                         // Case 42
		TODO(position(n))
	case 43: // Expression "||" Expression                         // Case 43
		TODO(position(n))
	case 44: // Expression '?' ExpressionList ':' Expression       // Case 44
		TODO(position(n))
	case 45: // Expression '=' Expression                          // Case 45
		TODO(position(n))
	case 46: // Expression "*=" Expression                         // Case 46
		TODO(position(n))
	case 47: // Expression "/=" Expression                         // Case 47
		TODO(position(n))
	case 48: // Expression "%=" Expression                         // Case 48
		TODO(position(n))
	case 49: // Expression "+=" Expression                         // Case 49
		TODO(position(n))
	case 50: // Expression "-=" Expression                         // Case 50
		TODO(position(n))
	case 51: // Expression "<<=" Expression                        // Case 51
		TODO(position(n))
	case 52: // Expression ">>=" Expression                        // Case 52
		TODO(position(n))
	case 53: // Expression "&=" Expression                         // Case 53
		TODO(position(n))
	case 54: // Expression "^=" Expression                         // Case 54
		TODO(position(n))
	case 55: // Expression "|=" Expression                         // Case 55
		TODO(position(n))
	case 56: // "_Alignof" '(' TypeName ')'                        // Case 56
		TODO(position(n))
	default:
		panic("internal error")
	}
}

func (c *c) expressionList(ot cc.Type, n *cc.ExpressionList) {
	t := c.ast.Model.VoidType
	for l := n; l != nil; l = l.ExpressionList {
		if l.ExpressionList == nil {
			t = ot
		}
		c.expression(t, l.Expression)
	}
}

func (c *c) expressionListOpt(ot cc.Type, n *cc.ExpressionListOpt) {
	if n == nil {
		return
	}

	c.expressionList(ot, n.ExpressionList)
}

func (c *c) expressionStatement(n *cc.ExpressionStatement) {
	c.expressionListOpt(c.ast.Model.VoidType, n.ExpressionListOpt)
}

func (c *c) statement(n *cc.Statement) {
	switch n.Case {
	case 0: // LabeledStatement
		TODO(position(n))
	case 1: // CompoundStatement    // Case 1
		TODO(position(n))
	case 2: // ExpressionStatement  // Case 2
		c.expressionStatement(n.ExpressionStatement)
	case 3: // SelectionStatement   // Case 3
		TODO(position(n))
	case 4: // IterationStatement   // Case 4
		TODO(position(n))
	case 5: // JumpStatement        // Case 5
		TODO(position(n))
	case 6: // AssemblerStatement   // Case 6
		TODO(position(n))
	default:
		panic("internal error")
	}
}

func (c *c) blockItem(n *cc.BlockItem) {
	switch n.Case {
	case 0: // Declaration
		c.declaration(n.Declaration)
	case 1: // Statement    // Case 1
		c.statement(n.Statement)
	default:
		panic("internal error")
	}
}

func (c *c) compoundStatement(n *cc.CompoundStatement) {
	c.emit(&ir.BeginScope{})
	if o := n.BlockItemListOpt; o != nil {
		for l := o.BlockItemList; l != nil; l = l.BlockItemList {
			c.blockItem(l.BlockItem)
		}
	}
	c.emit(&ir.EndScope{})
}

func (c *c) functionBody(n *cc.FunctionBody) {
	switch n.Case {
	case 0: // CompoundStatement
		c.compoundStatement(n.CompoundStatement)
	case 1: // AssemblerStatement ';'  // Case 1
		TODO(position(n))
	default:
		panic("internal error")
	}
}

func (c *c) functionDefinition(n *cc.FunctionDefinition) {
	switch n.Case {
	case 0: // DeclarationSpecifiers Declarator DeclarationListOpt FunctionBody
		d := n.Declarator
		p, _ := d.Type.Parameters()
		var args []ir.NameID
		if len(p) != 0 && p[0].Name != 0 {
			args = make([]ir.NameID, len(p))
			for i, v := range p {
				args[i] = ir.NameID(v.Name)
			}
		}
		c.newFData(ir.NewFunctionDefinition(position(n), c.nm(d), c.tnm(d), c.typ(d.Type).ID(), c.linkage(d.Linkage), args, nil))
		c.functionBody(n.FunctionBody)
		c.f = fdata{}
	case 1: // Declarator DeclarationListOpt FunctionBody                        // Case 1
		TODO(position(n))
	default:
		panic("internal error")
	}
}

func (c *c) externalDeclaration(n *cc.ExternalDeclaration) {
	switch n.Case {
	case 0: // FunctionDefinition
		c.functionDefinition(n.FunctionDefinition)
	case 1: // Declaration                  // Case 1
		c.declaration(n.Declaration)
	case 2: // BasicAssemblerStatement ';'  // Case 2
		TODO(position(n))
	case 3: // ';'                          // Case 3
		TODO(position(n))
	default:
		panic("internal error")
	}
}

func (c *c) gen() {
	for l := c.ast; l != nil; l = l.TranslationUnit {
		c.externalDeclaration(l.ExternalDeclaration)
	}
}

// New returns ir.Objects generated from ast or an error, if any. The modelName
// parameter is used to select a named memory model from ir.MemoryModels. The
// ast must have been produced using a cc.Model provided by the Model function
// for the same modelName. Scheme/example (error handling elided):
//
//	model, _ := ccir.Model(modelName)
//	ast, _ := cc.Parse(..., model, ...)
//	objects, ... := ccir.New(modelName, ast)
func New(modelName string, ast *cc.TranslationUnit) (_ []ir.Object, err error) {
	if !Testing {
		defer func() {
			switch x := recover().(type) {
			case nil:
				// nop
			case error:
				err = x
			default:
				err = fmt.Errorf("%v", x)
			}
		}()
	}

	model, ok := ir.MemoryModels[modelName]
	if !ok {
		return nil, fmt.Errorf("unknown memory model %q", modelName)
	}

	c := newC(model, ast)
	c.gen()
	return c.out, nil
}
