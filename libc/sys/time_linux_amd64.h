// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// ----------------------------------------------------------------------------
//      /usr/include/time.h
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
//      /usr/include/x86_64-linux-gnu/sys/time.h
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

#define _BITS_TYPES_H (1)
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
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#define __S16_TYPE short int
#define __U16_TYPE unsigned short int
#define __S32_TYPE int
#define __U32_TYPE unsigned int
#define __SLONGWORD_TYPE long int
#define __ULONGWORD_TYPE unsigned long int
#define __SQUAD_TYPE long int
#define __UQUAD_TYPE unsigned long int
#define __SWORD_TYPE long int
#define __UWORD_TYPE unsigned long int
#define __SLONG32_TYPE int
#define __ULONG32_TYPE unsigned int
#define __S64_TYPE long int
#define __U64_TYPE unsigned long int
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct {
	int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
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
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
#define __time_t_defined (1)
typedef __time_t time_t;
#define _STRUCT_TIMEVAL (1)
struct timeval {
	__time_t tv_sec;
	__suseconds_t tv_usec;
};
#define _SIGSET_H_types (1)
typedef int __sig_atomic_t;
#define _SIGSET_NWORDS ( 1024 / ( 8 * sizeof ( unsigned long int ) ) )
typedef struct {
	unsigned long int __val[16l];
} __sigset_t;
#define _SYS_SELECT_H (1)
#define __sigset_t_defined
typedef __sigset_t sigset_t;
typedef __suseconds_t suseconds_t;
#define __suseconds_t_defined
typedef long int __fd_mask;
#define __NFDBITS ( 8 * ( int ) sizeof ( __fd_mask ) )
#define __FD_ELT(d) ( ( d ) / __NFDBITS )
#define __FD_MASK(d) ( ( __fd_mask ) ( 1UL << ( ( d ) % __NFDBITS ) ) )
typedef struct {
	__fd_mask fds_bits[16];
} fd_set;
#define __FDS_BITS(set) ( ( set ) -> fds_bits )
#define FD_SETSIZE __FD_SETSIZE
#define FD_SET(fd, fdsetp) __FD_SET ( fd , fdsetp )
#define FD_CLR(fd, fdsetp) __FD_CLR ( fd , fdsetp )
#define FD_ISSET(fd, fdsetp) __FD_ISSET ( fd , fdsetp )
#define FD_ZERO(fdsetp) __FD_ZERO ( fdsetp )
extern int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, struct timeval *__timeout);
#define _SYS_TIME_H (1)
typedef void *__timezone_ptr_t;
extern int gettimeofday(struct timeval *__tv, __timezone_ptr_t __tz);
enum __itimer_which { ITIMER_REAL = 0, ITIMER_VIRTUAL = 1, ITIMER_PROF = 2 };
#define ITIMER_REAL ITIMER_REAL
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define ITIMER_PROF ITIMER_PROF
struct itimerval {
	struct timeval it_interval;
	struct timeval it_value;
};
typedef int __itimer_which_t;
extern int getitimer(__itimer_which_t __which, struct itimerval *__value);
extern int setitimer(__itimer_which_t __which, struct itimerval *__new, struct itimerval *__old);
extern int utimes(char *__file, struct timeval __tvp[2]);
