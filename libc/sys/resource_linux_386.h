// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// ----------------------------------------------------------------------------
//      /usr/include/i386-linux-gnu/sys/resource.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1992-2016 Free Software Foundation, Inc.
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

typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long long int __int64_t;
typedef unsigned long long int __uint64_t;
typedef long long int __quad_t;
typedef unsigned long long int __u_quad_t;
typedef __u_quad_t __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef __u_quad_t __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef __quad_t __off64_t;
typedef int __pid_t;
typedef struct {
	int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef __u_quad_t __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef __quad_t __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef __u_quad_t __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef __u_quad_t __fsfilcnt64_t;
typedef int __fsword_t;
typedef int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef int __intptr_t;
typedef unsigned int __socklen_t;
// /usr/include/i386-linux-gnu/bits/resource.h

enum __rlimit_resource { RLIMIT_CPU = 0, RLIMIT_FSIZE = 1, RLIMIT_DATA = 2, RLIMIT_STACK = 3, RLIMIT_CORE = 4, __RLIMIT_RSS = 5, RLIMIT_NOFILE = 7, __RLIMIT_OFILE = 7, RLIMIT_AS = 9, __RLIMIT_NPROC = 6, __RLIMIT_MEMLOCK = 8, __RLIMIT_LOCKS = 10, __RLIMIT_SIGPENDING = 11, __RLIMIT_MSGQUEUE = 12, __RLIMIT_NICE = 13, __RLIMIT_RTPRIO = 14, __RLIMIT_RTTIME = 15, __RLIMIT_NLIMITS = 16, __RLIM_NLIMITS = 16 };
typedef __rlim64_t rlim_t;
typedef __rlim64_t rlim64_t;
struct rlimit {
	rlim_t rlim_cur;
	rlim_t rlim_max;
};
struct rlimit64 {
	rlim64_t rlim_cur;
	rlim64_t rlim_max;
};
enum __rusage_who { RUSAGE_SELF = 0, RUSAGE_CHILDREN = -1 };
// /usr/include/i386-linux-gnu/bits/time.h

struct timeval {
	__time_t tv_sec;
	__suseconds_t tv_usec;
};
// /usr/include/i386-linux-gnu/bits/resource.h

struct rusage {
	struct timeval ru_utime;
	struct timeval ru_stime;
	union {
		long int ru_maxrss;
		__syscall_slong_t __ru_maxrss_word;
	};
	union {
		long int ru_ixrss;
		__syscall_slong_t __ru_ixrss_word;
	};
	union {
		long int ru_idrss;
		__syscall_slong_t __ru_idrss_word;
	};
	union {
		long int ru_isrss;
		__syscall_slong_t __ru_isrss_word;
	};
	union {
		long int ru_minflt;
		__syscall_slong_t __ru_minflt_word;
	};
	union {
		long int ru_majflt;
		__syscall_slong_t __ru_majflt_word;
	};
	union {
		long int ru_nswap;
		__syscall_slong_t __ru_nswap_word;
	};
	union {
		long int ru_inblock;
		__syscall_slong_t __ru_inblock_word;
	};
	union {
		long int ru_oublock;
		__syscall_slong_t __ru_oublock_word;
	};
	union {
		long int ru_msgsnd;
		__syscall_slong_t __ru_msgsnd_word;
	};
	union {
		long int ru_msgrcv;
		__syscall_slong_t __ru_msgrcv_word;
	};
	union {
		long int ru_nsignals;
		__syscall_slong_t __ru_nsignals_word;
	};
	union {
		long int ru_nvcsw;
		__syscall_slong_t __ru_nvcsw_word;
	};
	union {
		long int ru_nivcsw;
		__syscall_slong_t __ru_nivcsw_word;
	};
};
enum __priority_which { PRIO_PROCESS = 0, PRIO_PGRP = 1, PRIO_USER = 2 };
// /usr/include/i386-linux-gnu/sys/resource.h

typedef __id_t id_t;
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;
extern int getrlimit64(__rlimit_resource_t __resource, struct rlimit64 *__rlimits);
extern int setrlimit64(__rlimit_resource_t __resource, const struct rlimit64 *__rlimits);
extern int getrusage(__rusage_who_t __who, struct rusage *__usage);
extern int getpriority(__priority_which_t __which, id_t __who);
extern int setpriority(__priority_which_t __which, id_t __who, int __prio);
#define PRIO_MAX (20)
#define PRIO_MIN (-20)
#define PRIO_PGRP PRIO_PGRP
#define PRIO_PROCESS PRIO_PROCESS
#define PRIO_USER PRIO_USER
#define RLIM64_INFINITY (18446744073709551615ull)
#define RLIMIT_AS RLIMIT_AS
#define RLIMIT_CORE RLIMIT_CORE
#define RLIMIT_CPU RLIMIT_CPU
#define RLIMIT_DATA RLIMIT_DATA
#define RLIMIT_FSIZE RLIMIT_FSIZE
#define RLIMIT_LOCKS __RLIMIT_LOCKS
#define RLIMIT_MEMLOCK __RLIMIT_MEMLOCK
#define RLIMIT_MSGQUEUE __RLIMIT_MSGQUEUE
#define RLIMIT_NICE __RLIMIT_NICE
#define RLIMIT_NLIMITS __RLIMIT_NLIMITS
#define RLIMIT_NOFILE RLIMIT_NOFILE
#define RLIMIT_NPROC __RLIMIT_NPROC
#define RLIMIT_OFILE __RLIMIT_OFILE
#define RLIMIT_RSS __RLIMIT_RSS
#define RLIMIT_RTPRIO __RLIMIT_RTPRIO
#define RLIMIT_RTTIME __RLIMIT_RTTIME
#define RLIMIT_SIGPENDING __RLIMIT_SIGPENDING
#define RLIMIT_STACK RLIMIT_STACK
#define RLIM_INFINITY (18446744073709551615ull)
#define RLIM_NLIMITS __RLIM_NLIMITS
#define RLIM_SAVED_CUR RLIM_INFINITY
#define RLIM_SAVED_MAX RLIM_INFINITY
#define RUSAGE_CHILDREN RUSAGE_CHILDREN
#define RUSAGE_SELF RUSAGE_SELF
#define _BITS_TYPES_H (1)
#define _STRUCT_TIMEVAL (1)
#define _SYS_RESOURCE_H (1)
#define __S16_TYPE short int
#define __S32_TYPE int
#define __S64_TYPE __quad_t
#define __SLONG32_TYPE long int
#define __SLONGWORD_TYPE long int
#define __SQUAD_TYPE __quad_t
#define __SWORD_TYPE int
#define __U16_TYPE unsigned short int
#define __U32_TYPE unsigned int
#define __U64_TYPE __u_quad_t
#define __ULONG32_TYPE unsigned long int
#define __ULONGWORD_TYPE unsigned long int
#define __UQUAD_TYPE __u_quad_t
#define __UWORD_TYPE unsigned int
#define __id_t_defined
#define getrlimit getrlimit64
#define setrlimit setrlimit64
