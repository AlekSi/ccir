// Code generated by running "go generate". DO NOT EDIT.

// ----------------------------------------------------------------------------
//      /usr/include/unistd.h
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
//      /usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h
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

package libc

const (
	Xunistd_F_LOCK                              = 1
	Xunistd_F_OK                                = 0
	Xunistd_F_TEST                              = 3
	Xunistd_F_TLOCK                             = 2
	Xunistd_F_ULOCK                             = 0
	Xunistd_R_OK                                = 4
	Xunistd_SEEK_CUR                            = 1
	Xunistd_SEEK_END                            = 2
	Xunistd_SEEK_SET                            = 0
	Xunistd_STDERR_FILENO                       = 2
	Xunistd_STDIN_FILENO                        = 0
	Xunistd_STDOUT_FILENO                       = 1
	Xunistd_W_OK                                = 2
	Xunistd_X_OK                                = 1
	Xunistd__BITS_TYPES_H                       = 1
	Xunistd__BUILTIN_H_                         = true
	Xunistd__LP64                               = 1
	Xunistd__POSIX2_C_BIND                      = 199506
	Xunistd__POSIX2_C_DEV                       = 199506
	Xunistd__POSIX2_C_VERSION                   = 199506
	Xunistd__POSIX2_LOCALEDEF                   = 199506
	Xunistd__POSIX2_SW_DEV                      = 199506
	Xunistd__POSIX2_VERSION                     = 199506
	Xunistd__POSIX_VERSION                      = 199506
	Xunistd__PREDEFINED_H_                      = true
	Xunistd__STDC_PREDEF_H                      = 1
	Xunistd__STDDEF_H_                          = true
	Xunistd__UNISTD_H                           = 1
	Xunistd__UNISTD_H_                          = true
	Xunistd__XOPEN_CRYPT                        = 1
	Xunistd__XOPEN_ENH_I18N                     = 1
	Xunistd__XOPEN_LEGACY                       = 1
	Xunistd__XOPEN_UNIX                         = 1
	Xunistd__XOPEN_VERSION                      = 500
	Xunistd__XOPEN_XCU_VERSION                  = 4
	Xunistd__XOPEN_XPG2                         = 1
	Xunistd__XOPEN_XPG3                         = 1
	Xunistd__XOPEN_XPG4                         = 1
	Xunistd___ATOMIC_ACQUIRE                    = 2
	Xunistd___ATOMIC_ACQ_REL                    = 4
	Xunistd___ATOMIC_CONSUME                    = 1
	Xunistd___ATOMIC_HLE_ACQUIRE                = 65536
	Xunistd___ATOMIC_HLE_RELEASE                = 131072
	Xunistd___ATOMIC_RELAXED                    = 0
	Xunistd___ATOMIC_RELEASE                    = 3
	Xunistd___ATOMIC_SEQ_CST                    = 5
	Xunistd___BIGGEST_ALIGNMENT__               = 16
	Xunistd___BYTE_ORDER__                      = 1234
	Xunistd___CHAR_BIT__                        = 8
	Xunistd___DBL_DECIMAL_DIG__                 = 17
	Xunistd___DBL_DIG__                         = 15
	Xunistd___DBL_HAS_DENORM__                  = 1
	Xunistd___DBL_HAS_INFINITY__                = 1
	Xunistd___DBL_HAS_QUIET_NAN__               = 1
	Xunistd___DBL_MANT_DIG__                    = 53
	Xunistd___DBL_MAX_10_EXP__                  = 308
	Xunistd___DBL_MAX_EXP__                     = 1024
	Xunistd___DBL_MIN_10_EXP__                  = -307
	Xunistd___DBL_MIN_EXP__                     = -1021
	Xunistd___DEC128_MANT_DIG__                 = 34
	Xunistd___DEC128_MAX_EXP__                  = 6145
	Xunistd___DEC128_MIN_EXP__                  = -6142
	Xunistd___DEC32_MANT_DIG__                  = 7
	Xunistd___DEC32_MAX_EXP__                   = 97
	Xunistd___DEC32_MIN_EXP__                   = -94
	Xunistd___DEC64_MANT_DIG__                  = 16
	Xunistd___DEC64_MAX_EXP__                   = 385
	Xunistd___DEC64_MIN_EXP__                   = -382
	Xunistd___DECIMAL_BID_FORMAT__              = 1
	Xunistd___DECIMAL_DIG__                     = 21
	Xunistd___DEC_EVAL_METHOD__                 = 2
	Xunistd___FINITE_MATH_ONLY__                = 0
	Xunistd___FLOAT_WORD_ORDER__                = 1234
	Xunistd___FLT_DECIMAL_DIG__                 = 9
	Xunistd___FLT_DENORM_MIN__                  = 1e-45
	Xunistd___FLT_DIG__                         = 6
	Xunistd___FLT_EPSILON__                     = 1.1920929e-07
	Xunistd___FLT_EVAL_METHOD__                 = 0
	Xunistd___FLT_HAS_DENORM__                  = 1
	Xunistd___FLT_HAS_INFINITY__                = 1
	Xunistd___FLT_HAS_QUIET_NAN__               = 1
	Xunistd___FLT_MANT_DIG__                    = 24
	Xunistd___FLT_MAX_10_EXP__                  = 38
	Xunistd___FLT_MAX_EXP__                     = 128
	Xunistd___FLT_MAX__                         = 3.4028235e+38
	Xunistd___FLT_MIN_10_EXP__                  = -37
	Xunistd___FLT_MIN_EXP__                     = -125
	Xunistd___FLT_MIN__                         = 1.1754944e-38
	Xunistd___FLT_RADIX__                       = 2
	Xunistd___FUNCTION__                        = 0
	Xunistd___FXSR__                            = 1
	Xunistd___GXX_ABI_VERSION                   = 1010
	Xunistd___INT16_MAX__                       = 32767
	Xunistd___INT32_MAX__                       = 2147483647
	Xunistd___INT32_TYPE__                      = 0
	Xunistd___INT64_MAX__                       = 9223372036854775807
	Xunistd___INT8_MAX__                        = 127
	Xunistd___INTMAX_MAX__                      = 9223372036854775807
	Xunistd___INTPTR_MAX__                      = 9223372036854775807
	Xunistd___INT_FAST16_MAX__                  = 9223372036854775807
	Xunistd___INT_FAST32_MAX__                  = 9223372036854775807
	Xunistd___INT_FAST64_MAX__                  = 9223372036854775807
	Xunistd___INT_FAST8_MAX__                   = 127
	Xunistd___INT_LEAST16_MAX__                 = 32767
	Xunistd___INT_LEAST32_MAX__                 = 2147483647
	Xunistd___INT_LEAST32_TYPE__                = 0
	Xunistd___INT_LEAST64_MAX__                 = 9223372036854775807
	Xunistd___INT_LEAST8_MAX__                  = 127
	Xunistd___INT_MAX__                         = 2147483647
	Xunistd___LDBL_DENORM_MIN__                 = 0
	Xunistd___LDBL_DIG__                        = 18
	Xunistd___LDBL_EPSILON__                    = 1.0842021724855044e-19
	Xunistd___LDBL_HAS_DENORM__                 = 1
	Xunistd___LDBL_HAS_INFINITY__               = 1
	Xunistd___LDBL_HAS_QUIET_NAN__              = 1
	Xunistd___LDBL_MANT_DIG__                   = 64
	Xunistd___LDBL_MAX_10_EXP__                 = 4932
	Xunistd___LDBL_MAX_EXP__                    = 16384
	Xunistd___LDBL_MAX__                        = 0
	Xunistd___LDBL_MIN_10_EXP__                 = -4931
	Xunistd___LDBL_MIN_EXP__                    = -16381
	Xunistd___LDBL_MIN__                        = 0
	Xunistd___LONG_LONG_MAX__                   = 9223372036854775807
	Xunistd___LONG_MAX__                        = 9223372036854775807
	Xunistd___LP64__                            = 1
	Xunistd___MMX__                             = 1
	Xunistd___NO_INLINE__                       = 1
	Xunistd___ORDER_BIG_ENDIAN__                = 4321
	Xunistd___ORDER_LITTLE_ENDIAN__             = 1234
	Xunistd___ORDER_PDP_ENDIAN__                = 3412
	Xunistd___PIC__                             = 2
	Xunistd___PIE__                             = 2
	Xunistd___POSIX2_THIS_VERSION               = 199506
	Xunistd___PRAGMA_REDEFINE_EXTNAME           = 1
	Xunistd___PTRDIFF_MAX__                     = 9223372036854775807
	Xunistd___REGISTER_PREFIX__                 = true
	Xunistd___S32_TYPE                          = 0
	Xunistd___SCHAR_MAX__                       = 127
	Xunistd___SEG_FS                            = 1
	Xunistd___SEG_GS                            = 1
	Xunistd___SHRT_MAX__                        = 32767
	Xunistd___SIG_ATOMIC_MAX__                  = 2147483647
	Xunistd___SIG_ATOMIC_MIN__                  = -2147483648
	Xunistd___SIG_ATOMIC_TYPE__                 = 0
	Xunistd___SIZEOF_DOUBLE__                   = 8
	Xunistd___SIZEOF_FLOAT128__                 = 16
	Xunistd___SIZEOF_FLOAT80__                  = 16
	Xunistd___SIZEOF_FLOAT__                    = 4
	Xunistd___SIZEOF_INT__                      = 4
	Xunistd___SIZEOF_LONG_DOUBLE__              = 16
	Xunistd___SIZEOF_LONG_LONG__                = 8
	Xunistd___SIZEOF_LONG__                     = 8
	Xunistd___SIZEOF_POINTER__                  = 8
	Xunistd___SIZEOF_PTRDIFF_T__                = 8
	Xunistd___SIZEOF_SHORT__                    = 2
	Xunistd___SIZEOF_SIZE_T__                   = 8
	Xunistd___SIZEOF_WCHAR_T__                  = 4
	Xunistd___SIZEOF_WINT_T__                   = 4
	Xunistd___SIZE_MAX__                        = 18446744073709551615
	Xunistd___SLONG32_TYPE                      = 0
	Xunistd___SSE2_MATH__                       = 1
	Xunistd___SSE2__                            = 1
	Xunistd___SSE_MATH__                        = 1
	Xunistd___SSE__                             = 1
	Xunistd___SSP_STRONG__                      = 3
	Xunistd___STDC_HOSTED__                     = 1
	Xunistd___STDC_IEC_559_COMPLEX__            = 1
	Xunistd___STDC_IEC_559__                    = 1
	Xunistd___STDC_ISO_10646__                  = 201505
	Xunistd___STDC_NO_THREADS__                 = 1
	Xunistd___STDC_VERSION__                    = 199901
	Xunistd___STDC__                            = 1
	Xunistd___STRICT_ANSI__                     = 1
	Xunistd___UINT16_MAX__                      = 65535
	Xunistd___UINT32_MAX__                      = 4294967295
	Xunistd___UINT64_MAX__                      = 18446744073709551615
	Xunistd___UINT8_MAX__                       = 255
	Xunistd___UINTMAX_MAX__                     = 18446744073709551615
	Xunistd___UINTPTR_MAX__                     = 18446744073709551615
	Xunistd___UINT_FAST16_MAX__                 = 18446744073709551615
	Xunistd___UINT_FAST32_MAX__                 = 18446744073709551615
	Xunistd___UINT_FAST64_MAX__                 = 18446744073709551615
	Xunistd___UINT_FAST8_MAX__                  = 255
	Xunistd___UINT_LEAST16_MAX__                = 65535
	Xunistd___UINT_LEAST32_MAX__                = 4294967295
	Xunistd___UINT_LEAST64_MAX__                = 18446744073709551615
	Xunistd___UINT_LEAST8_MAX__                 = 255
	Xunistd___USER_LABEL_PREFIX__               = true
	Xunistd___VERSION__                         = 39831
	Xunistd___WCHAR_MAX__                       = 2147483647
	Xunistd___WCHAR_MIN__                       = -2147483648
	Xunistd___WCHAR_TYPE__                      = 0
	Xunistd___WINT_MAX__                        = 4294967295
	Xunistd___WINT_MIN__                        = 0
	Xunistd___amd64                             = 1
	Xunistd___amd64__                           = 1
	Xunistd___arch__                            = 0
	Xunistd___code_model_small__                = 1
	Xunistd___complex__                         = 0
	Xunistd___const                             = 0
	Xunistd___extension__                       = true
	Xunistd___inline                            = 0
	Xunistd___k8                                = 1
	Xunistd___k8__                              = 1
	Xunistd___linux                             = 1
	Xunistd___linux__                           = 1
	Xunistd___os__                              = 0
	Xunistd___pic__                             = 2
	Xunistd___pie__                             = 2
	Xunistd___restrict                          = 0
	Xunistd___unix                              = 1
	Xunistd___unix__                            = 1
	Xunistd___volatile                          = 0
	Xunistd___x86_64                            = 1
	Xunistd___x86_64__                          = 1
	Xunistd__CS_GNU_LIBC_VERSION                = 2
	Xunistd__CS_GNU_LIBPTHREAD_VERSION          = 3
	Xunistd__CS_LFS64_CFLAGS                    = 1004
	Xunistd__CS_LFS64_LDFLAGS                   = 1005
	Xunistd__CS_LFS64_LIBS                      = 1006
	Xunistd__CS_LFS64_LINTFLAGS                 = 1007
	Xunistd__CS_LFS_CFLAGS                      = 1000
	Xunistd__CS_LFS_LDFLAGS                     = 1001
	Xunistd__CS_LFS_LIBS                        = 1002
	Xunistd__CS_LFS_LINTFLAGS                   = 1003
	Xunistd__CS_PATH                            = 0
	Xunistd__CS_POSIX_V6_ILP32_OFF32_CFLAGS     = 1116
	Xunistd__CS_POSIX_V6_ILP32_OFF32_LDFLAGS    = 1117
	Xunistd__CS_POSIX_V6_ILP32_OFF32_LIBS       = 1118
	Xunistd__CS_POSIX_V6_ILP32_OFF32_LINTFLAGS  = 1119
	Xunistd__CS_POSIX_V6_ILP32_OFFBIG_CFLAGS    = 1120
	Xunistd__CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS   = 1121
	Xunistd__CS_POSIX_V6_ILP32_OFFBIG_LIBS      = 1122
	Xunistd__CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS = 1123
	Xunistd__CS_POSIX_V6_LP64_OFF64_CFLAGS      = 1124
	Xunistd__CS_POSIX_V6_LP64_OFF64_LDFLAGS     = 1125
	Xunistd__CS_POSIX_V6_LP64_OFF64_LIBS        = 1126
	Xunistd__CS_POSIX_V6_LP64_OFF64_LINTFLAGS   = 1127
	Xunistd__CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS    = 1128
	Xunistd__CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS   = 1129
	Xunistd__CS_POSIX_V6_LPBIG_OFFBIG_LIBS      = 1130
	Xunistd__CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS = 1131
	Xunistd__CS_POSIX_V7_ILP32_OFF32_CFLAGS     = 1132
	Xunistd__CS_POSIX_V7_ILP32_OFF32_LDFLAGS    = 1133
	Xunistd__CS_POSIX_V7_ILP32_OFF32_LIBS       = 1134
	Xunistd__CS_POSIX_V7_ILP32_OFF32_LINTFLAGS  = 1135
	Xunistd__CS_POSIX_V7_ILP32_OFFBIG_CFLAGS    = 1136
	Xunistd__CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS   = 1137
	Xunistd__CS_POSIX_V7_ILP32_OFFBIG_LIBS      = 1138
	Xunistd__CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS = 1139
	Xunistd__CS_POSIX_V7_LP64_OFF64_CFLAGS      = 1140
	Xunistd__CS_POSIX_V7_LP64_OFF64_LDFLAGS     = 1141
	Xunistd__CS_POSIX_V7_LP64_OFF64_LIBS        = 1142
	Xunistd__CS_POSIX_V7_LP64_OFF64_LINTFLAGS   = 1143
	Xunistd__CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS    = 1144
	Xunistd__CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS   = 1145
	Xunistd__CS_POSIX_V7_LPBIG_OFFBIG_LIBS      = 1146
	Xunistd__CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS = 1147
	Xunistd__CS_V5_WIDTH_RESTRICTED_ENVS        = 4
	Xunistd__CS_V6_ENV                          = 1148
	Xunistd__CS_V6_WIDTH_RESTRICTED_ENVS        = 1
	Xunistd__CS_V7_ENV                          = 1149
	Xunistd__CS_V7_WIDTH_RESTRICTED_ENVS        = 5
	Xunistd__CS_XBS5_ILP32_OFF32_CFLAGS         = 1100
	Xunistd__CS_XBS5_ILP32_OFF32_LDFLAGS        = 1101
	Xunistd__CS_XBS5_ILP32_OFF32_LIBS           = 1102
	Xunistd__CS_XBS5_ILP32_OFF32_LINTFLAGS      = 1103
	Xunistd__CS_XBS5_ILP32_OFFBIG_CFLAGS        = 1104
	Xunistd__CS_XBS5_ILP32_OFFBIG_LDFLAGS       = 1105
	Xunistd__CS_XBS5_ILP32_OFFBIG_LIBS          = 1106
	Xunistd__CS_XBS5_ILP32_OFFBIG_LINTFLAGS     = 1107
	Xunistd__CS_XBS5_LP64_OFF64_CFLAGS          = 1108
	Xunistd__CS_XBS5_LP64_OFF64_LDFLAGS         = 1109
	Xunistd__CS_XBS5_LP64_OFF64_LIBS            = 1110
	Xunistd__CS_XBS5_LP64_OFF64_LINTFLAGS       = 1111
	Xunistd__CS_XBS5_LPBIG_OFFBIG_CFLAGS        = 1112
	Xunistd__CS_XBS5_LPBIG_OFFBIG_LDFLAGS       = 1113
	Xunistd__CS_XBS5_LPBIG_OFFBIG_LIBS          = 1114
	Xunistd__CS_XBS5_LPBIG_OFFBIG_LINTFLAGS     = 1115
	Xunistd__PC_2_SYMLINKS                      = 20
	Xunistd__PC_ALLOC_SIZE_MIN                  = 18
	Xunistd__PC_ASYNC_IO                        = 10
	Xunistd__PC_CHOWN_RESTRICTED                = 6
	Xunistd__PC_FILESIZEBITS                    = 13
	Xunistd__PC_LINK_MAX                        = 0
	Xunistd__PC_MAX_CANON                       = 1
	Xunistd__PC_MAX_INPUT                       = 2
	Xunistd__PC_NAME_MAX                        = 3
	Xunistd__PC_NO_TRUNC                        = 7
	Xunistd__PC_PATH_MAX                        = 4
	Xunistd__PC_PIPE_BUF                        = 5
	Xunistd__PC_PRIO_IO                         = 11
	Xunistd__PC_REC_INCR_XFER_SIZE              = 14
	Xunistd__PC_REC_MAX_XFER_SIZE               = 15
	Xunistd__PC_REC_MIN_XFER_SIZE               = 16
	Xunistd__PC_REC_XFER_ALIGN                  = 17
	Xunistd__PC_SOCK_MAXBUF                     = 12
	Xunistd__PC_SYMLINK_MAX                     = 19
	Xunistd__PC_SYNC_IO                         = 9
	Xunistd__PC_VDISABLE                        = 8
	Xunistd__SC_2_CHAR_TERM                     = 95
	Xunistd__SC_2_C_BIND                        = 47
	Xunistd__SC_2_C_DEV                         = 48
	Xunistd__SC_2_C_VERSION                     = 96
	Xunistd__SC_2_FORT_DEV                      = 49
	Xunistd__SC_2_FORT_RUN                      = 50
	Xunistd__SC_2_LOCALEDEF                     = 52
	Xunistd__SC_2_PBS                           = 168
	Xunistd__SC_2_PBS_ACCOUNTING                = 169
	Xunistd__SC_2_PBS_CHECKPOINT                = 175
	Xunistd__SC_2_PBS_LOCATE                    = 170
	Xunistd__SC_2_PBS_MESSAGE                   = 171
	Xunistd__SC_2_PBS_TRACK                     = 172
	Xunistd__SC_2_SW_DEV                        = 51
	Xunistd__SC_2_UPE                           = 97
	Xunistd__SC_2_VERSION                       = 46
	Xunistd__SC_ADVISORY_INFO                   = 132
	Xunistd__SC_AIO_LISTIO_MAX                  = 23
	Xunistd__SC_AIO_MAX                         = 24
	Xunistd__SC_AIO_PRIO_DELTA_MAX              = 25
	Xunistd__SC_ARG_MAX                         = 0
	Xunistd__SC_ASYNCHRONOUS_IO                 = 12
	Xunistd__SC_ATEXIT_MAX                      = 87
	Xunistd__SC_AVPHYS_PAGES                    = 86
	Xunistd__SC_BARRIERS                        = 133
	Xunistd__SC_BASE                            = 134
	Xunistd__SC_BC_BASE_MAX                     = 36
	Xunistd__SC_BC_DIM_MAX                      = 37
	Xunistd__SC_BC_SCALE_MAX                    = 38
	Xunistd__SC_BC_STRING_MAX                   = 39
	Xunistd__SC_CHARCLASS_NAME_MAX              = 45
	Xunistd__SC_CHAR_BIT                        = 101
	Xunistd__SC_CHAR_MAX                        = 102
	Xunistd__SC_CHAR_MIN                        = 103
	Xunistd__SC_CHILD_MAX                       = 1
	Xunistd__SC_CLK_TCK                         = 2
	Xunistd__SC_CLOCK_SELECTION                 = 137
	Xunistd__SC_COLL_WEIGHTS_MAX                = 40
	Xunistd__SC_CPUTIME                         = 138
	Xunistd__SC_C_LANG_SUPPORT                  = 135
	Xunistd__SC_C_LANG_SUPPORT_R                = 136
	Xunistd__SC_DELAYTIMER_MAX                  = 26
	Xunistd__SC_DEVICE_IO                       = 140
	Xunistd__SC_DEVICE_SPECIFIC                 = 141
	Xunistd__SC_DEVICE_SPECIFIC_R               = 142
	Xunistd__SC_EQUIV_CLASS_MAX                 = 41
	Xunistd__SC_EXPR_NEST_MAX                   = 42
	Xunistd__SC_FD_MGMT                         = 143
	Xunistd__SC_FIFO                            = 144
	Xunistd__SC_FILE_ATTRIBUTES                 = 146
	Xunistd__SC_FILE_LOCKING                    = 147
	Xunistd__SC_FILE_SYSTEM                     = 148
	Xunistd__SC_FSYNC                           = 15
	Xunistd__SC_GETGR_R_SIZE_MAX                = 69
	Xunistd__SC_GETPW_R_SIZE_MAX                = 70
	Xunistd__SC_HOST_NAME_MAX                   = 180
	Xunistd__SC_INT_MAX                         = 104
	Xunistd__SC_INT_MIN                         = 105
	Xunistd__SC_IOV_MAX                         = 60
	Xunistd__SC_IPV6                            = 235
	Xunistd__SC_JOB_CONTROL                     = 7
	Xunistd__SC_LEVEL1_DCACHE_ASSOC             = 189
	Xunistd__SC_LEVEL1_DCACHE_LINESIZE          = 190
	Xunistd__SC_LEVEL1_DCACHE_SIZE              = 188
	Xunistd__SC_LEVEL1_ICACHE_ASSOC             = 186
	Xunistd__SC_LEVEL1_ICACHE_LINESIZE          = 187
	Xunistd__SC_LEVEL1_ICACHE_SIZE              = 185
	Xunistd__SC_LEVEL2_CACHE_ASSOC              = 192
	Xunistd__SC_LEVEL2_CACHE_LINESIZE           = 193
	Xunistd__SC_LEVEL2_CACHE_SIZE               = 191
	Xunistd__SC_LEVEL3_CACHE_ASSOC              = 195
	Xunistd__SC_LEVEL3_CACHE_LINESIZE           = 196
	Xunistd__SC_LEVEL3_CACHE_SIZE               = 194
	Xunistd__SC_LEVEL4_CACHE_ASSOC              = 198
	Xunistd__SC_LEVEL4_CACHE_LINESIZE           = 199
	Xunistd__SC_LEVEL4_CACHE_SIZE               = 197
	Xunistd__SC_LINE_MAX                        = 43
	Xunistd__SC_LOGIN_NAME_MAX                  = 71
	Xunistd__SC_LONG_BIT                        = 106
	Xunistd__SC_MAPPED_FILES                    = 16
	Xunistd__SC_MB_LEN_MAX                      = 108
	Xunistd__SC_MEMLOCK                         = 17
	Xunistd__SC_MEMLOCK_RANGE                   = 18
	Xunistd__SC_MEMORY_PROTECTION               = 19
	Xunistd__SC_MESSAGE_PASSING                 = 20
	Xunistd__SC_MONOTONIC_CLOCK                 = 149
	Xunistd__SC_MQ_OPEN_MAX                     = 27
	Xunistd__SC_MQ_PRIO_MAX                     = 28
	Xunistd__SC_MULTI_PROCESS                   = 150
	Xunistd__SC_NETWORKING                      = 152
	Xunistd__SC_NGROUPS_MAX                     = 3
	Xunistd__SC_NL_ARGMAX                       = 119
	Xunistd__SC_NL_LANGMAX                      = 120
	Xunistd__SC_NL_MSGMAX                       = 121
	Xunistd__SC_NL_NMAX                         = 122
	Xunistd__SC_NL_SETMAX                       = 123
	Xunistd__SC_NL_TEXTMAX                      = 124
	Xunistd__SC_NPROCESSORS_CONF                = 83
	Xunistd__SC_NPROCESSORS_ONLN                = 84
	Xunistd__SC_NZERO                           = 109
	Xunistd__SC_OPEN_MAX                        = 4
	Xunistd__SC_PAGESIZE                        = 30
	Xunistd__SC_PASS_MAX                        = 88
	Xunistd__SC_PHYS_PAGES                      = 85
	Xunistd__SC_PII                             = 53
	Xunistd__SC_PII_INTERNET                    = 56
	Xunistd__SC_PII_INTERNET_DGRAM              = 62
	Xunistd__SC_PII_INTERNET_STREAM             = 61
	Xunistd__SC_PII_OSI                         = 57
	Xunistd__SC_PII_OSI_CLTS                    = 64
	Xunistd__SC_PII_OSI_COTS                    = 63
	Xunistd__SC_PII_OSI_M                       = 65
	Xunistd__SC_PII_SOCKET                      = 55
	Xunistd__SC_PII_XTI                         = 54
	Xunistd__SC_PIPE                            = 145
	Xunistd__SC_POLL                            = 58
	Xunistd__SC_PRIORITIZED_IO                  = 13
	Xunistd__SC_PRIORITY_SCHEDULING             = 10
	Xunistd__SC_RAW_SOCKETS                     = 236
	Xunistd__SC_READER_WRITER_LOCKS             = 153
	Xunistd__SC_REALTIME_SIGNALS                = 9
	Xunistd__SC_REGEXP                          = 155
	Xunistd__SC_REGEX_VERSION                   = 156
	Xunistd__SC_RE_DUP_MAX                      = 44
	Xunistd__SC_RTSIG_MAX                       = 31
	Xunistd__SC_SAVED_IDS                       = 8
	Xunistd__SC_SCHAR_MAX                       = 111
	Xunistd__SC_SCHAR_MIN                       = 112
	Xunistd__SC_SELECT                          = 59
	Xunistd__SC_SEMAPHORES                      = 21
	Xunistd__SC_SEM_NSEMS_MAX                   = 32
	Xunistd__SC_SEM_VALUE_MAX                   = 33
	Xunistd__SC_SHARED_MEMORY_OBJECTS           = 22
	Xunistd__SC_SHELL                           = 157
	Xunistd__SC_SHRT_MAX                        = 113
	Xunistd__SC_SHRT_MIN                        = 114
	Xunistd__SC_SIGNALS                         = 158
	Xunistd__SC_SIGQUEUE_MAX                    = 34
	Xunistd__SC_SINGLE_PROCESS                  = 151
	Xunistd__SC_SPAWN                           = 159
	Xunistd__SC_SPIN_LOCKS                      = 154
	Xunistd__SC_SPORADIC_SERVER                 = 160
	Xunistd__SC_SSIZE_MAX                       = 110
	Xunistd__SC_SS_REPL_MAX                     = 241
	Xunistd__SC_STREAMS                         = 174
	Xunistd__SC_STREAM_MAX                      = 5
	Xunistd__SC_SYMLOOP_MAX                     = 173
	Xunistd__SC_SYNCHRONIZED_IO                 = 14
	Xunistd__SC_SYSTEM_DATABASE                 = 162
	Xunistd__SC_SYSTEM_DATABASE_R               = 163
	Xunistd__SC_THREADS                         = 67
	Xunistd__SC_THREAD_ATTR_STACKADDR           = 77
	Xunistd__SC_THREAD_ATTR_STACKSIZE           = 78
	Xunistd__SC_THREAD_CPUTIME                  = 139
	Xunistd__SC_THREAD_DESTRUCTOR_ITERATIONS    = 73
	Xunistd__SC_THREAD_KEYS_MAX                 = 74
	Xunistd__SC_THREAD_PRIORITY_SCHEDULING      = 79
	Xunistd__SC_THREAD_PRIO_INHERIT             = 80
	Xunistd__SC_THREAD_PRIO_PROTECT             = 81
	Xunistd__SC_THREAD_PROCESS_SHARED           = 82
	Xunistd__SC_THREAD_ROBUST_PRIO_INHERIT      = 247
	Xunistd__SC_THREAD_ROBUST_PRIO_PROTECT      = 248
	Xunistd__SC_THREAD_SAFE_FUNCTIONS           = 68
	Xunistd__SC_THREAD_SPORADIC_SERVER          = 161
	Xunistd__SC_THREAD_STACK_MIN                = 75
	Xunistd__SC_THREAD_THREADS_MAX              = 76
	Xunistd__SC_TIMEOUTS                        = 164
	Xunistd__SC_TIMERS                          = 11
	Xunistd__SC_TIMER_MAX                       = 35
	Xunistd__SC_TRACE                           = 181
	Xunistd__SC_TRACE_EVENT_FILTER              = 182
	Xunistd__SC_TRACE_EVENT_NAME_MAX            = 242
	Xunistd__SC_TRACE_INHERIT                   = 183
	Xunistd__SC_TRACE_LOG                       = 184
	Xunistd__SC_TRACE_NAME_MAX                  = 243
	Xunistd__SC_TRACE_SYS_MAX                   = 244
	Xunistd__SC_TRACE_USER_EVENT_MAX            = 245
	Xunistd__SC_TTY_NAME_MAX                    = 72
	Xunistd__SC_TYPED_MEMORY_OBJECTS            = 165
	Xunistd__SC_TZNAME_MAX                      = 6
	Xunistd__SC_T_IOV_MAX                       = 66
	Xunistd__SC_UCHAR_MAX                       = 115
	Xunistd__SC_UINT_MAX                        = 116
	Xunistd__SC_UIO_MAXIOV                      = 60
	Xunistd__SC_ULONG_MAX                       = 117
	Xunistd__SC_USER_GROUPS                     = 166
	Xunistd__SC_USER_GROUPS_R                   = 167
	Xunistd__SC_USHRT_MAX                       = 118
	Xunistd__SC_V6_ILP32_OFF32                  = 176
	Xunistd__SC_V6_ILP32_OFFBIG                 = 177
	Xunistd__SC_V6_LP64_OFF64                   = 178
	Xunistd__SC_V6_LPBIG_OFFBIG                 = 179
	Xunistd__SC_V7_ILP32_OFF32                  = 237
	Xunistd__SC_V7_ILP32_OFFBIG                 = 238
	Xunistd__SC_V7_LP64_OFF64                   = 239
	Xunistd__SC_V7_LPBIG_OFFBIG                 = 240
	Xunistd__SC_VERSION                         = 29
	Xunistd__SC_WORD_BIT                        = 107
	Xunistd__SC_XBS5_ILP32_OFF32                = 125
	Xunistd__SC_XBS5_ILP32_OFFBIG               = 126
	Xunistd__SC_XBS5_LP64_OFF64                 = 127
	Xunistd__SC_XBS5_LPBIG_OFFBIG               = 128
	Xunistd__SC_XOPEN_CRYPT                     = 92
	Xunistd__SC_XOPEN_ENH_I18N                  = 93
	Xunistd__SC_XOPEN_LEGACY                    = 129
	Xunistd__SC_XOPEN_REALTIME                  = 130
	Xunistd__SC_XOPEN_REALTIME_THREADS          = 131
	Xunistd__SC_XOPEN_SHM                       = 94
	Xunistd__SC_XOPEN_STREAMS                   = 246
	Xunistd__SC_XOPEN_UNIX                      = 91
	Xunistd__SC_XOPEN_VERSION                   = 89
	Xunistd__SC_XOPEN_XCU_VERSION               = 90
	Xunistd__SC_XOPEN_XPG2                      = 98
	Xunistd__SC_XOPEN_XPG3                      = 99
	Xunistd__SC_XOPEN_XPG4                      = 100
)
