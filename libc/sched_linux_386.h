// Code generated by running "go generate". DO NOT EDIT.

	// +build ignore
	
	// BEGIN OF FILE /usr/include/i386-linux-gnu/bits/types.h 

typedef unsigned char __u_char ;
typedef unsigned short int __u_short ;
typedef unsigned int __u_int ;
typedef unsigned long int __u_long ;
typedef signed char __int8_t ;
typedef unsigned char __uint8_t ;
typedef signed short int __int16_t ;
typedef unsigned short int __uint16_t ;
typedef signed int __int32_t ;
typedef unsigned int __uint32_t ;
typedef signed long long int __int64_t ;
typedef unsigned long long int __uint64_t ;
typedef long long int __quad_t ;
typedef unsigned long long int __u_quad_t ;
typedef __u_quad_t __dev_t ;
typedef unsigned int __uid_t ;
typedef unsigned int __gid_t ;
typedef unsigned long int __ino_t ;
typedef __u_quad_t __ino64_t ;
typedef unsigned int __mode_t ;
typedef unsigned int __nlink_t ;
typedef long int __off_t ;
typedef __quad_t __off64_t ;
typedef int __pid_t ;
typedef struct {int __val [2 ];}__fsid_t ;
typedef long int __clock_t ;
typedef unsigned long int __rlim_t ;
typedef __u_quad_t __rlim64_t ;
typedef unsigned int __id_t ;
typedef long int __time_t ;
typedef unsigned int __useconds_t ;
typedef long int __suseconds_t ;
typedef int __daddr_t ;
typedef int __key_t ;
typedef int __clockid_t ;
typedef void *__timer_t ;
typedef long int __blksize_t ;
typedef long int __blkcnt_t ;
typedef __quad_t __blkcnt64_t ;
typedef unsigned long int __fsblkcnt_t ;
typedef __u_quad_t __fsblkcnt64_t ;
typedef unsigned long int __fsfilcnt_t ;
typedef __u_quad_t __fsfilcnt64_t ;
typedef int __fsword_t ;
typedef int __ssize_t ;
typedef long int __syscall_slong_t ;
typedef unsigned long int __syscall_ulong_t ;
typedef __off64_t __loff_t ;
typedef __quad_t *__qaddr_t ;
typedef char *__caddr_t ;
typedef int __intptr_t ;
typedef unsigned int __socklen_t ;
// BEGIN OF FILE /usr/include/sched.h 

typedef __pid_t pid_t ;
extern int sched_setparam (__pid_t __pid ,const struct sched_param *__param );
extern int sched_getparam (__pid_t __pid ,struct sched_param *__param );
extern int sched_setscheduler (__pid_t __pid ,int __policy ,const struct sched_param *__param );
extern int sched_getscheduler (__pid_t __pid );
extern int sched_yield (void );
extern int sched_get_priority_max (int __algorithm );
extern int sched_get_priority_min (int __algorithm );
extern int sched_rr_get_interval (__pid_t __pid ,struct timespec *__t );
// BEGIN OF FILE /usr/include/i386-linux-gnu/bits/types.h 

#define __S16_TYPE short int
#define __U64_TYPE __u_quad_t
#define __UQUAD_TYPE __u_quad_t
// BEGIN OF FILE /usr/include/sched.h 

#define _SCHED_H (1)
// BEGIN OF FILE /usr/include/i386-linux-gnu/bits/types.h 

#define __U32_TYPE unsigned int
#define __ULONG32_TYPE unsigned long int
// BEGIN OF FILE /usr/include/sched.h 

#define __pid_t_defined 
// BEGIN OF FILE /usr/include/i386-linux-gnu/bits/types.h 

#define _BITS_TYPES_H (1)
#define __SLONG32_TYPE long int
#define __SQUAD_TYPE __quad_t
#define __ULONGWORD_TYPE unsigned long int
#define __S32_TYPE int
#define __UWORD_TYPE unsigned int
#define __SLONGWORD_TYPE long int
#define __S64_TYPE __quad_t
#define __SWORD_TYPE int
// BEGIN OF FILE /usr/include/sched.h 

#define sched_priority __sched_priority
// BEGIN OF FILE /usr/include/i386-linux-gnu/bits/types.h 

#define __U16_TYPE unsigned short int