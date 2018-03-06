// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

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
// /usr/include/i386-linux-gnu/bits/sigset.h

typedef int __sig_atomic_t;
typedef struct {
	unsigned long int __val[32];
} __sigset_t;
// /usr/include/i386-linux-gnu/sys/select.h

typedef __sigset_t sigset_t;
// /usr/include/i386-linux-gnu/bits/time.h

struct timeval {
	__time_t tv_sec;
	__suseconds_t tv_usec;
};
// /usr/include/i386-linux-gnu/sys/select.h

typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct {
	__fd_mask fds_bits[32];
} fd_set;
extern int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, struct timeval *__timeout);
#define FD_CLR(fd, fdsetp) __FD_CLR ( fd , fdsetp )
#define FD_ISSET(fd, fdsetp) __FD_ISSET ( fd , fdsetp )
#define FD_SET(fd, fdsetp) __FD_SET ( fd , fdsetp )
#define FD_SETSIZE __FD_SETSIZE
#define FD_ZERO(fdsetp) __FD_ZERO ( fdsetp )
#define _BITS_TYPESIZES_H (1)
#define _BITS_TYPES_H (1)
#define _SIGSET_H_types (1)
#define _SIGSET_NWORDS ( 1024 / ( 8 * sizeof ( unsigned long int ) ) )
#define _STRUCT_TIMEVAL (1)
#define _SYS_SELECT_H (1)
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __BLKCNT_T_TYPE __SYSCALL_SLONG_TYPE
#define __BLKSIZE_T_TYPE __SYSCALL_SLONG_TYPE
#define __CLOCKID_T_TYPE __S32_TYPE
#define __CLOCK_T_TYPE __SYSCALL_SLONG_TYPE
#define __CPU_MASK_TYPE __SYSCALL_ULONG_TYPE
#define __DADDR_T_TYPE __S32_TYPE
#define __DEV_T_TYPE __UQUAD_TYPE
#define __FDS_BITS(set) ( ( set ) -> fds_bits )
#define __FD_ELT(d) ( ( d ) / __NFDBITS )
#define __FD_MASK(d) ( ( __fd_mask ) ( 1UL << ( ( d ) % __NFDBITS ) ) )
#define __FD_SETSIZE (1024)
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define __FSBLKCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __FSFILCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define __FSID_T_TYPE struct { int __val [ 2 ] ; }
#define __FSWORD_T_TYPE __SWORD_TYPE
#define __GID_T_TYPE __U32_TYPE
#define __ID_T_TYPE __U32_TYPE
#define __INO64_T_TYPE __UQUAD_TYPE
#define __INO_T_TYPE __SYSCALL_ULONG_TYPE
#define __KEY_T_TYPE __S32_TYPE
#define __MODE_T_TYPE __U32_TYPE
#define __NFDBITS ( 8 * ( int ) sizeof ( __fd_mask ) )
#define __NLINK_T_TYPE __UWORD_TYPE
#define __OFF64_T_TYPE __SQUAD_TYPE
#define __OFF_T_TYPE __SYSCALL_SLONG_TYPE
#define __PID_T_TYPE __S32_TYPE
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define __RLIM_T_TYPE __SYSCALL_ULONG_TYPE
#define __S16_TYPE short int
#define __S32_TYPE int
#define __S64_TYPE __quad_t
#define __SLONG32_TYPE long int
#define __SLONGWORD_TYPE long int
#define __SQUAD_TYPE __quad_t
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __SUSECONDS_T_TYPE __SYSCALL_SLONG_TYPE
#define __SWORD_TYPE int
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define __TIMER_T_TYPE void *
#define __TIME_T_TYPE __SYSCALL_SLONG_TYPE
#define __U16_TYPE unsigned short int
#define __U32_TYPE unsigned int
#define __U64_TYPE __u_quad_t
#define __UID_T_TYPE __U32_TYPE
#define __ULONG32_TYPE unsigned long int
#define __ULONGWORD_TYPE unsigned long int
#define __UQUAD_TYPE __u_quad_t
#define __USECONDS_T_TYPE __U32_TYPE
#define __UWORD_TYPE unsigned int
#define __sigset_t_defined
#define __suseconds_t_defined
