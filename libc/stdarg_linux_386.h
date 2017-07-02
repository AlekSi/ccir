// Code generated by running "go generate". DO NOT EDIT.

	// +build ignore
	
// ----------------------------------------------------------------------------
//      /usr/lib/gcc/i686-linux-gnu/6/include/stdarg.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

	// BEGIN OF FILE /usr/lib/gcc/i686-linux-gnu/6/include/stdarg.h 

typedef __builtin_va_list __gnuc_va_list ;
typedef __gnuc_va_list va_list ;
// BEGIN OF FILE /usr/lib/gcc/i686-linux-gnu/6/include/stdarg.h 

#define va_arg(v, l) __builtin_va_arg ( v , l )
#define _VA_LIST 
#define __va_copy(d, s) __builtin_va_copy ( d , s )
#define __GNUC_VA_LIST 
#define va_start(v, l) __builtin_va_start ( v , l )
#define _ANSI_STDARG_H_ 
#define _VA_LIST_T_H 
#define va_end(v) __builtin_va_end ( v )
#define _VA_LIST_DEFINED 
#define _VA_LIST_ 
#define va_copy(d, s) __builtin_va_copy ( d , s )
#define __va_list__ 
#define _STDARG_H
