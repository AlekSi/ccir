// Code generated by running "go generate". DO NOT EDIT.

// ----------------------------------------------------------------------------
//      /usr/include/fcntl.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
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

// ----------------------------------------------------------------------------
//      /usr/include/x86_64-linux-gnu/bits/stat.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1999-2016 Free Software Foundation, Inc.
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

package libc

const (
	Xfcntl_FD_CLOEXEC                = 1
	Xfcntl_F_DUPFD                   = 0
	Xfcntl_F_EXLCK                   = 4
	Xfcntl_F_GETFD                   = 1
	Xfcntl_F_GETFL                   = 3
	Xfcntl_F_GETLK                   = 5
	Xfcntl_F_GETLK64                 = 5
	Xfcntl_F_GETOWN                  = 9
	Xfcntl_F_RDLCK                   = 0
	Xfcntl_F_SETFD                   = 2
	Xfcntl_F_SETFL                   = 4
	Xfcntl_F_SETLK                   = 6
	Xfcntl_F_SETLK64                 = 6
	Xfcntl_F_SETLKW                  = 7
	Xfcntl_F_SETLKW64                = 7
	Xfcntl_F_SETOWN                  = 8
	Xfcntl_F_SHLCK                   = 8
	Xfcntl_F_UNLCK                   = 2
	Xfcntl_F_WRLCK                   = 1
	Xfcntl_O_ACCMODE                 = 3
	Xfcntl_O_APPEND                  = 1024
	Xfcntl_O_ASYNC                   = 8192
	Xfcntl_O_CREAT                   = 64
	Xfcntl_O_DSYNC                   = 4096
	Xfcntl_O_EXCL                    = 128
	Xfcntl_O_FSYNC                   = 1052672
	Xfcntl_O_NDELAY                  = 2048
	Xfcntl_O_NOCTTY                  = 256
	Xfcntl_O_NONBLOCK                = 2048
	Xfcntl_O_RDONLY                  = 0
	Xfcntl_O_RDWR                    = 2
	Xfcntl_O_RSYNC                   = 1052672
	Xfcntl_O_SYNC                    = 1052672
	Xfcntl_O_TRUNC                   = 512
	Xfcntl_O_WRONLY                  = 1
	Xfcntl_SEEK_CUR                  = 1
	Xfcntl_SEEK_END                  = 2
	Xfcntl_SEEK_SET                  = 0
	Xfcntl_S_IFBLK                   = 24576
	Xfcntl_S_IFCHR                   = 8192
	Xfcntl_S_IFDIR                   = 16384
	Xfcntl_S_IFIFO                   = 4096
	Xfcntl_S_IFLNK                   = 40960
	Xfcntl_S_IFMT                    = 61440
	Xfcntl_S_IFREG                   = 32768
	Xfcntl_S_IFSOCK                  = 49152
	Xfcntl_S_IRGRP                   = 32
	Xfcntl_S_IROTH                   = 4
	Xfcntl_S_IRUSR                   = 256
	Xfcntl_S_IRWXG                   = 56
	Xfcntl_S_IRWXO                   = 7
	Xfcntl_S_IRWXU                   = 448
	Xfcntl_S_ISGID                   = 1024
	Xfcntl_S_ISUID                   = 2048
	Xfcntl_S_ISVTX                   = 512
	Xfcntl_S_IWGRP                   = 16
	Xfcntl_S_IWOTH                   = 2
	Xfcntl_S_IWUSR                   = 128
	Xfcntl_S_IXGRP                   = 8
	Xfcntl_S_IXOTH                   = 1
	Xfcntl_S_IXUSR                   = 64
	Xfcntl__BITS_STAT_H              = 1
	Xfcntl__BITS_TYPES_H             = 1
	Xfcntl__BUILTIN_H_               = true
	Xfcntl__FCNTL_H                  = 1
	Xfcntl__FCNTL_H_                 = true
	Xfcntl__LP64                     = 1
	Xfcntl__MKNOD_VER_LINUX          = 0
	Xfcntl__PREDEFINED_H_            = true
	Xfcntl__STAT_VER                 = 1
	Xfcntl__STAT_VER_KERNEL          = 0
	Xfcntl__STAT_VER_LINUX           = 1
	Xfcntl__STDC_PREDEF_H            = 1
	Xfcntl___ATOMIC_ACQUIRE          = 2
	Xfcntl___ATOMIC_ACQ_REL          = 4
	Xfcntl___ATOMIC_CONSUME          = 1
	Xfcntl___ATOMIC_HLE_ACQUIRE      = 65536
	Xfcntl___ATOMIC_HLE_RELEASE      = 131072
	Xfcntl___ATOMIC_RELAXED          = 0
	Xfcntl___ATOMIC_RELEASE          = 3
	Xfcntl___ATOMIC_SEQ_CST          = 5
	Xfcntl___BIGGEST_ALIGNMENT__     = 16
	Xfcntl___BYTE_ORDER__            = 1234
	Xfcntl___CHAR_BIT__              = 8
	Xfcntl___DBL_DECIMAL_DIG__       = 17
	Xfcntl___DBL_DIG__               = 15
	Xfcntl___DBL_HAS_DENORM__        = 1
	Xfcntl___DBL_HAS_INFINITY__      = 1
	Xfcntl___DBL_HAS_QUIET_NAN__     = 1
	Xfcntl___DBL_MANT_DIG__          = 53
	Xfcntl___DBL_MAX_10_EXP__        = 308
	Xfcntl___DBL_MAX_EXP__           = 1024
	Xfcntl___DBL_MIN_10_EXP__        = -307
	Xfcntl___DBL_MIN_EXP__           = -1021
	Xfcntl___DEC128_MANT_DIG__       = 34
	Xfcntl___DEC128_MAX_EXP__        = 6145
	Xfcntl___DEC128_MIN_EXP__        = -6142
	Xfcntl___DEC32_MANT_DIG__        = 7
	Xfcntl___DEC32_MAX_EXP__         = 97
	Xfcntl___DEC32_MIN_EXP__         = -94
	Xfcntl___DEC64_MANT_DIG__        = 16
	Xfcntl___DEC64_MAX_EXP__         = 385
	Xfcntl___DEC64_MIN_EXP__         = -382
	Xfcntl___DECIMAL_BID_FORMAT__    = 1
	Xfcntl___DECIMAL_DIG__           = 21
	Xfcntl___DEC_EVAL_METHOD__       = 2
	Xfcntl___FINITE_MATH_ONLY__      = 0
	Xfcntl___FLOAT_WORD_ORDER__      = 1234
	Xfcntl___FLT_DECIMAL_DIG__       = 9
	Xfcntl___FLT_DENORM_MIN__        = 1e-45
	Xfcntl___FLT_DIG__               = 6
	Xfcntl___FLT_EPSILON__           = 1.1920929e-07
	Xfcntl___FLT_EVAL_METHOD__       = 0
	Xfcntl___FLT_HAS_DENORM__        = 1
	Xfcntl___FLT_HAS_INFINITY__      = 1
	Xfcntl___FLT_HAS_QUIET_NAN__     = 1
	Xfcntl___FLT_MANT_DIG__          = 24
	Xfcntl___FLT_MAX_10_EXP__        = 38
	Xfcntl___FLT_MAX_EXP__           = 128
	Xfcntl___FLT_MAX__               = 3.4028235e+38
	Xfcntl___FLT_MIN_10_EXP__        = -37
	Xfcntl___FLT_MIN_EXP__           = -125
	Xfcntl___FLT_MIN__               = 1.1754944e-38
	Xfcntl___FLT_RADIX__             = 2
	Xfcntl___FUNCTION__              = 0
	Xfcntl___FXSR__                  = 1
	Xfcntl___F_GETOWN                = 9
	Xfcntl___F_GETOWN_EX             = 16
	Xfcntl___F_GETSIG                = 11
	Xfcntl___F_SETOWN                = 8
	Xfcntl___F_SETOWN_EX             = 15
	Xfcntl___F_SETSIG                = 10
	Xfcntl___GXX_ABI_VERSION         = 1010
	Xfcntl___INT16_MAX__             = 32767
	Xfcntl___INT32_MAX__             = 2147483647
	Xfcntl___INT32_TYPE__            = 0
	Xfcntl___INT64_MAX__             = 9223372036854775807
	Xfcntl___INT8_MAX__              = 127
	Xfcntl___INTMAX_MAX__            = 9223372036854775807
	Xfcntl___INTPTR_MAX__            = 9223372036854775807
	Xfcntl___INT_FAST16_MAX__        = 9223372036854775807
	Xfcntl___INT_FAST32_MAX__        = 9223372036854775807
	Xfcntl___INT_FAST64_MAX__        = 9223372036854775807
	Xfcntl___INT_FAST8_MAX__         = 127
	Xfcntl___INT_LEAST16_MAX__       = 32767
	Xfcntl___INT_LEAST32_MAX__       = 2147483647
	Xfcntl___INT_LEAST32_TYPE__      = 0
	Xfcntl___INT_LEAST64_MAX__       = 9223372036854775807
	Xfcntl___INT_LEAST8_MAX__        = 127
	Xfcntl___INT_MAX__               = 2147483647
	Xfcntl___LDBL_DENORM_MIN__       = 0
	Xfcntl___LDBL_DIG__              = 18
	Xfcntl___LDBL_EPSILON__          = 1.0842021724855044e-19
	Xfcntl___LDBL_HAS_DENORM__       = 1
	Xfcntl___LDBL_HAS_INFINITY__     = 1
	Xfcntl___LDBL_HAS_QUIET_NAN__    = 1
	Xfcntl___LDBL_MANT_DIG__         = 64
	Xfcntl___LDBL_MAX_10_EXP__       = 4932
	Xfcntl___LDBL_MAX_EXP__          = 16384
	Xfcntl___LDBL_MAX__              = 0
	Xfcntl___LDBL_MIN_10_EXP__       = -4931
	Xfcntl___LDBL_MIN_EXP__          = -16381
	Xfcntl___LDBL_MIN__              = 0
	Xfcntl___LONG_LONG_MAX__         = 9223372036854775807
	Xfcntl___LONG_MAX__              = 9223372036854775807
	Xfcntl___LP64__                  = 1
	Xfcntl___MMX__                   = 1
	Xfcntl___NO_INLINE__             = 1
	Xfcntl___ORDER_BIG_ENDIAN__      = 4321
	Xfcntl___ORDER_LITTLE_ENDIAN__   = 1234
	Xfcntl___ORDER_PDP_ENDIAN__      = 3412
	Xfcntl___O_CLOEXEC               = 524288
	Xfcntl___O_DIRECT                = 16384
	Xfcntl___O_DIRECTORY             = 65536
	Xfcntl___O_DSYNC                 = 4096
	Xfcntl___O_LARGEFILE             = 0
	Xfcntl___O_NOATIME               = 262144
	Xfcntl___O_NOFOLLOW              = 131072
	Xfcntl___O_PATH                  = 2097152
	Xfcntl___O_TMPFILE               = 4259840
	Xfcntl___PIC__                   = 2
	Xfcntl___PIE__                   = 2
	Xfcntl___POSIX_FADV_DONTNEED     = 4
	Xfcntl___POSIX_FADV_NOREUSE      = 5
	Xfcntl___PRAGMA_REDEFINE_EXTNAME = 1
	Xfcntl___PTRDIFF_MAX__           = 9223372036854775807
	Xfcntl___REGISTER_PREFIX__       = true
	Xfcntl___S32_TYPE                = 0
	Xfcntl___SCHAR_MAX__             = 127
	Xfcntl___SEG_FS                  = 1
	Xfcntl___SEG_GS                  = 1
	Xfcntl___SHRT_MAX__              = 32767
	Xfcntl___SIG_ATOMIC_MAX__        = 2147483647
	Xfcntl___SIG_ATOMIC_MIN__        = -2147483648
	Xfcntl___SIG_ATOMIC_TYPE__       = 0
	Xfcntl___SIZEOF_DOUBLE__         = 8
	Xfcntl___SIZEOF_FLOAT128__       = 16
	Xfcntl___SIZEOF_FLOAT80__        = 16
	Xfcntl___SIZEOF_FLOAT__          = 4
	Xfcntl___SIZEOF_INT__            = 4
	Xfcntl___SIZEOF_LONG_DOUBLE__    = 16
	Xfcntl___SIZEOF_LONG_LONG__      = 8
	Xfcntl___SIZEOF_LONG__           = 8
	Xfcntl___SIZEOF_POINTER__        = 8
	Xfcntl___SIZEOF_PTRDIFF_T__      = 8
	Xfcntl___SIZEOF_SHORT__          = 2
	Xfcntl___SIZEOF_SIZE_T__         = 8
	Xfcntl___SIZEOF_WCHAR_T__        = 4
	Xfcntl___SIZEOF_WINT_T__         = 4
	Xfcntl___SIZE_MAX__              = 18446744073709551615
	Xfcntl___SLONG32_TYPE            = 0
	Xfcntl___SSE2_MATH__             = 1
	Xfcntl___SSE2__                  = 1
	Xfcntl___SSE_MATH__              = 1
	Xfcntl___SSE__                   = 1
	Xfcntl___SSP_STRONG__            = 3
	Xfcntl___STDC_HOSTED__           = 1
	Xfcntl___STDC_IEC_559_COMPLEX__  = 1
	Xfcntl___STDC_IEC_559__          = 1
	Xfcntl___STDC_ISO_10646__        = 201505
	Xfcntl___STDC_NO_THREADS__       = 1
	Xfcntl___STDC_VERSION__          = 199901
	Xfcntl___STDC__                  = 1
	Xfcntl___STRICT_ANSI__           = 1
	Xfcntl___S_IEXEC                 = 64
	Xfcntl___S_IFBLK                 = 24576
	Xfcntl___S_IFCHR                 = 8192
	Xfcntl___S_IFDIR                 = 16384
	Xfcntl___S_IFIFO                 = 4096
	Xfcntl___S_IFLNK                 = 40960
	Xfcntl___S_IFMT                  = 61440
	Xfcntl___S_IFREG                 = 32768
	Xfcntl___S_IFSOCK                = 49152
	Xfcntl___S_IREAD                 = 256
	Xfcntl___S_ISGID                 = 1024
	Xfcntl___S_ISUID                 = 2048
	Xfcntl___S_ISVTX                 = 512
	Xfcntl___S_IWRITE                = 128
	Xfcntl___UINT16_MAX__            = 65535
	Xfcntl___UINT32_MAX__            = 4294967295
	Xfcntl___UINT64_MAX__            = 18446744073709551615
	Xfcntl___UINT8_MAX__             = 255
	Xfcntl___UINTMAX_MAX__           = 18446744073709551615
	Xfcntl___UINTPTR_MAX__           = 18446744073709551615
	Xfcntl___UINT_FAST16_MAX__       = 18446744073709551615
	Xfcntl___UINT_FAST32_MAX__       = 18446744073709551615
	Xfcntl___UINT_FAST64_MAX__       = 18446744073709551615
	Xfcntl___UINT_FAST8_MAX__        = 255
	Xfcntl___UINT_LEAST16_MAX__      = 65535
	Xfcntl___UINT_LEAST32_MAX__      = 4294967295
	Xfcntl___UINT_LEAST64_MAX__      = 18446744073709551615
	Xfcntl___UINT_LEAST8_MAX__       = 255
	Xfcntl___USER_LABEL_PREFIX__     = true
	Xfcntl___VERSION__               = 39831
	Xfcntl___WCHAR_MAX__             = 2147483647
	Xfcntl___WCHAR_MIN__             = -2147483648
	Xfcntl___WCHAR_TYPE__            = 0
	Xfcntl___WINT_MAX__              = 4294967295
	Xfcntl___WINT_MIN__              = 0
	Xfcntl___amd64                   = 1
	Xfcntl___amd64__                 = 1
	Xfcntl___arch__                  = 0
	Xfcntl___code_model_small__      = 1
	Xfcntl___complex__               = 0
	Xfcntl___const                   = 0
	Xfcntl___extension__             = true
	Xfcntl___inline                  = 0
	Xfcntl___k8                      = 1
	Xfcntl___k8__                    = 1
	Xfcntl___linux                   = 1
	Xfcntl___linux__                 = 1
	Xfcntl___os__                    = 0
	Xfcntl___pic__                   = 2
	Xfcntl___pie__                   = 2
	Xfcntl___restrict                = 0
	Xfcntl___unix                    = 1
	Xfcntl___unix__                  = 1
	Xfcntl___volatile                = 0
	Xfcntl___x86_64                  = 1
	Xfcntl___x86_64__                = 1
)
