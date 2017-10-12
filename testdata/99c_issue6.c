#include <stdlib.h>

typedef struct Node Node;

struct Node {
  size_t weight;
  Node* tail;
  int count;
};

void foo(void*) {}

int main() { // https://github.com/cznic/99c/issues/5
  Node* (*lists)[2];
  lists = (Node* (*)[2])malloc(42 * sizeof(*lists));
  foo(lists);
  foo(lists[0]);
  foo(lists[0][0]);
  __builtin_printf("ok\n");
}

// 99c_issue6.c:16:7 *[2]*struct{weight uint64,tail *struct{},count int32}  ->  **struct{weight uint64,tail *struct{},count int32}
// 99c: mismatched types, got *[2]*struct{weight uint64,tail *struct{},count int32}, expected **struct{weight uint64,tail *struct{},count int32}
// main:0x12: 	convert         	**struct{weight uint64,tail *struct{},count int32}, *struct{}	; 99c_issue6.c:16:7

// ir.Objects 99c_issue6.o:
// # [56]: *ir.FunctionDefinition { ExternalLinkage foo  func(*struct{})  99c_issue6.c:11:1} []
// 0x00000		beginScope      		; 99c_issue6.c:11:17
// 0x00001		return          		; 99c_issue6.c:11:18
// 0x00002		endScope        		; 99c_issue6.c:11:18
// # [57]: *ir.DataDefinition { InternalLinkage foo __func__ 0  [4]int8  -} "foo"+0
// # [58]: *ir.FunctionDefinition { ExternalLinkage main  func()int32  99c_issue6.c:13:1} []
// 0x00000		result          	&#0, *int32								; 99c_issue6.c:13:12
// 0x00001		const           	0x0, int32								; 99c_issue6.c:13:12
// 0x00002		store           	int32									; 99c_issue6.c:13:12
// 0x00003		drop            	int32									; 99c_issue6.c:13:12
// 0x00004		beginScope      										; 99c_issue6.c:13:12
// 0x00005		varDecl         	#0, lists, *[2]*struct{weight uint64,tail *struct{},count int32}	; *[2]*XNode 99c_issue6.c:14:7
// 0x00006		variable        	&#0, **[2]*struct{weight uint64,tail *struct{},count int32}		; 99c_issue6.c:15:3
// 0x00007		allocResult     	*struct{}								;  99c_issue6.c:15:25
// 0x00008		global          	&malloc, *func(uint64)*struct{}						;  99c_issue6.c:15:25
// 0x00009		arguments       										; 99c_issue6.c:15:32
// 0x0000a		const           	0x2a0, uint64								; 99c_issue6.c:15:32
// 0x0000b		callfp          	1, *func(uint64)*struct{}						; 99c_issue6.c:15:25
// 0x0000c		convert         	*struct{}, *[2]*struct{weight uint64,tail *struct{},count int32}	; 99c_issue6.c:15:11
// 0x0000d		store           	*[2]*struct{weight uint64,tail *struct{},count int32}			; 99c_issue6.c:15:9
// 0x0000e		drop            	*[2]*struct{weight uint64,tail *struct{},count int32}			; 99c_issue6.c:15:3
// 0x0000f		global          	&foo, *func(*struct{})							;  99c_issue6.c:16:3
// 0x00010		arguments       										; 99c_issue6.c:16:7
// 0x00011		variable        	#0, *[2]*struct{weight uint64,tail *struct{},count int32}		; 99c_issue6.c:16:7
// 0x00012		convert         	**struct{weight uint64,tail *struct{},count int32}, *struct{}		; 99c_issue6.c:16:7
// 0x00013		callfp          	1, *func(*struct{})							; 99c_issue6.c:16:3
// 0x00014		return          										; 99c_issue6.c:17:1
// 0x00015		endScope        										; 99c_issue6.c:17:1
// # [59]: *ir.DataDefinition { InternalLinkage main __func__ 0  [5]int8  -} "main"+0
