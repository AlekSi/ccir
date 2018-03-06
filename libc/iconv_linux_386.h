// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// ----------------------------------------------------------------------------
//      /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1989-2015 Free Software Foundation, Inc.

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

// ----------------------------------------------------------------------------
//      /usr/include/iconv.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1997-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

typedef unsigned int size_t;
// /usr/include/iconv.h

typedef void *iconv_t;
extern iconv_t iconv_open(const char *__tocode, const char *__fromcode);
extern size_t iconv(iconv_t __cd, char **__inbuf, size_t * __inbytesleft, char **__outbuf, size_t * __outbytesleft);
extern int iconv_close(iconv_t __cd);
#define _BSD_SIZE_T_
#define _BSD_SIZE_T_DEFINED_
#define _GCC_SIZE_T
#define _ICONV_H (1)
#define _SIZET_
#define _SIZE_T
#define _SIZE_T_
#define _SIZE_T_DECLARED
#define _SIZE_T_DEFINED
#define _SIZE_T_DEFINED_
#define _SYS_SIZE_T_H
#define _T_SIZE
#define _T_SIZE_
#define __SIZE_T
#define __SIZE_T__
#define ___int_size_t_h
#define __size_t
#define __size_t__
