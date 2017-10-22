// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

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
// /usr/include/x86_64-linux-gnu/bits/fcntl.h

struct flock {
	short int l_type;
	short int l_whence;
	__off64_t l_start;
	__off64_t l_len;
	__pid_t l_pid;
};
struct flock64 {
	short int l_type;
	short int l_whence;
	__off64_t l_start;
	__off64_t l_len;
	__pid_t l_pid;
};
// /usr/include/fcntl.h

typedef __mode_t mode_t;
typedef __off64_t off_t;
typedef __off64_t off64_t;
typedef __pid_t pid_t;
// /usr/include/x86_64-linux-gnu/bits/stat.h

struct stat {
	__dev_t st_dev;
	__ino_t st_ino;
	__nlink_t st_nlink;
	__mode_t st_mode;
	__uid_t st_uid;
	__gid_t st_gid;
	int __pad0;
	__dev_t st_rdev;
	__off_t st_size;
	__blksize_t st_blksize;
	__blkcnt_t st_blocks;
	__time_t st_atime;
	__syscall_ulong_t st_atimensec;
	__time_t st_mtime;
	__syscall_ulong_t st_mtimensec;
	__time_t st_ctime;
	__syscall_ulong_t st_ctimensec;
	__syscall_slong_t __glibc_reserved[3];
};
struct stat64 {
	__dev_t st_dev;
	__ino64_t st_ino;
	__nlink_t st_nlink;
	__mode_t st_mode;
	__uid_t st_uid;
	__gid_t st_gid;
	int __pad0;
	__dev_t st_rdev;
	__off_t st_size;
	__blksize_t st_blksize;
	__blkcnt64_t st_blocks;
	__time_t st_atime;
	__syscall_ulong_t st_atimensec;
	__time_t st_mtime;
	__syscall_ulong_t st_mtimensec;
	__time_t st_ctime;
	__syscall_ulong_t st_ctimensec;
	__syscall_slong_t __glibc_reserved[3];
};
// /usr/include/fcntl.h

extern int fcntl(int __fd, int __cmd, ...);
extern int open64(const char *__file, int __oflag, ...);
extern int creat64(const char *__file, mode_t __mode);

// /usr/include/x86_64-linux-gnu/bits/fcntl.h 

#define F_SETLKW64 (7)

// /usr/include/fcntl.h 

#define SEEK_END (2)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define F_SETLKW F_SETLKW64
#define __F_GETSIG (11)
#define __POSIX_FADV_DONTNEED (4)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define _BITS_STAT_H (1)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __SLONGWORD_TYPE long int

// /usr/include/fcntl.h 

#define S_IRWXO (7)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define __O_TMPFILE (4259840)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __ULONG32_TYPE unsigned int

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_TYPEISSEM(buf) ( ( buf ) -> st_mode - ( buf ) -> st_mode )

// /usr/include/fcntl.h 

#define S_IXUSR __S_IEXEC

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_TYPEISMQ(buf) ( ( buf ) -> st_mode - ( buf ) -> st_mode )

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_LARGEFILE __O_LARGEFILE

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IFCHR (8192)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define F_GETLK F_GETLK64
#define O_SYNC (1052672)

// /usr/include/fcntl.h 

#define S_ISUID __S_ISUID

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define __F_SETOWN (8)
#define __O_DIRECTORY (65536)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define _STATBUF_ST_RDEV

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define F_WRLCK (1)

// /usr/include/fcntl.h 

#define __off64_t_defined
#define S_IROTH (4)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __U64_TYPE unsigned long int

// /usr/include/fcntl.h 

#define S_IFBLK __S_IFBLK

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define __F_SETSIG (10)

// /usr/include/fcntl.h 

#define __mode_t_defined
#define S_IXOTH (1)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_ISUID (2048)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __U16_TYPE unsigned short int

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_NONBLOCK (2048)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define _STATBUF_ST_BLKSIZE

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define __O_CLOEXEC (524288)
#define F_SETOWN __F_SETOWN
#define F_GETFL (3)
#define __O_NOFOLLOW (131072)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IFIFO (4096)

// /usr/include/fcntl.h 

#define S_IRGRP (32)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IFSOCK (49152)

// /usr/include/fcntl.h 

#define S_IXGRP (8)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define __O_DSYNC (4096)
#define O_WRONLY (1)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __UQUAD_TYPE unsigned long int

// /usr/include/fcntl.h 

#define __OPEN_NEEDS_MODE(oflag) ( ( ( oflag ) & O_CREAT ) != 0 || ( ( oflag ) & __O_TMPFILE ) == __O_TMPFILE )

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_RDWR (2)
#define FD_CLOEXEC (1)

// /usr/include/fcntl.h 

#define S_IRWXG (56)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_TYPEISSHM(buf) ( ( buf ) -> st_mode - ( buf ) -> st_mode )

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define __O_PATH (2097152)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_ISGID (1024)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define __POSIX_FADV_NOREUSE (5)
#define O_NDELAY O_NONBLOCK
#define O_ASYNC (8192)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define _STAT_VER _STAT_VER_LINUX

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define F_UNLCK (2)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IFREG (32768)
#define __S_IFLNK (40960)

// /usr/include/fcntl.h 

#define S_IFIFO __S_IFIFO

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define F_GETOWN __F_GETOWN

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __ULONGWORD_TYPE unsigned long int

// /usr/include/fcntl.h 

#define S_IFDIR __S_IFDIR

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_ISVTX (512)

// /usr/include/fcntl.h 

#define open open64
#define S_IFCHR __S_IFCHR

// /usr/include/x86_64-linux-gnu/bits/fcntl.h 

#define F_GETLK64 (5)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_RDONLY (0)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IFDIR (16384)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define __O_DIRECT (16384)
#define F_SHLCK (8)
#define O_RSYNC O_SYNC
#define __O_NOATIME (262144)

// /usr/include/x86_64-linux-gnu/bits/fcntl.h 

#define __O_LARGEFILE (0)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __SWORD_TYPE long int
#define __S16_TYPE short int

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_TRUNC (512)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define _STAT_VER_LINUX (1)

// /usr/include/fcntl.h 

#define S_ISVTX __S_ISVTX

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define _STATBUF_ST_NSEC

// /usr/include/fcntl.h 

#define S_IWOTH (2)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IEXEC (64)

// /usr/include/fcntl.h 

#define S_IFLNK __S_IFLNK
#define __pid_t_defined
#define S_IWGRP (16)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_CREAT (64)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IFBLK (24576)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_DSYNC __O_DSYNC

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IFMT (61440)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define F_SETFD (2)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IWRITE (128)
#define _STAT_VER_KERNEL (0)

// /usr/include/fcntl.h 

#define S_IRUSR __S_IREAD

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define F_SETFL (4)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __SQUAD_TYPE long int

// /usr/include/fcntl.h 

#define SEEK_SET (0)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __U32_TYPE unsigned int

// /usr/include/fcntl.h 

#define S_IFSOCK __S_IFSOCK
#define SEEK_CUR (1)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define F_EXLCK (4)
#define __F_GETOWN (9)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define _MKNOD_VER_LINUX (0)

// /usr/include/fcntl.h 

#define creat creat64

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __S32_TYPE int

// /usr/include/fcntl.h 

#define __off_t_defined

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_NOCTTY (256)

// /usr/include/fcntl.h 

#define S_ISGID __S_ISGID
#define S_IFREG __S_IFREG

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __UWORD_TYPE unsigned long int

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define F_GETFD (1)
#define F_SETLK F_SETLK64
#define O_ACCMODE (3)
#define __F_GETOWN_EX (16)
#define F_DUPFD (0)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define _BITS_TYPES_H (1)

// /usr/include/fcntl.h 

#define S_IRWXU (448)
#define S_IFMT __S_IFMT

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __SLONG32_TYPE int

// /usr/include/fcntl.h 

#define _FCNTL_H (1)

// /usr/include/x86_64-linux-gnu/bits/types.h 

#define __S64_TYPE long int

// /usr/include/x86_64-linux-gnu/bits/fcntl.h 

#define F_SETLK64 (6)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_EXCL (128)
#define O_FSYNC O_SYNC
#define F_RDLCK (0)

// /usr/include/x86_64-linux-gnu/bits/stat.h 

#define __S_IREAD (256)

// /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h 

#define O_APPEND (1024)
#define __F_SETOWN_EX (15)

// /usr/include/fcntl.h 

#define S_IWUSR __S_IWRITE
