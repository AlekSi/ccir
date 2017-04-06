// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// source: /usr/include/i386-linux-gnu/sys/time.h

#define _SYS_TIME_H 1
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
#define __time_t_defined 1
typedef __time_t time_t;
