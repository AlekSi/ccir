#ifndef _LIMITS_H_
#define _LIMITS_H_

#if defined __MODEL_32__
#define ULONG_MAX 4294967295ul
#define LONG_MAX 2147483647l
#elif defined __MODEL_64__
#define ULONG_MAX 18446744073709551615ul
#define LONG_MAX 9223372036854775807l
#else
#error
#endif

#define CHAR_BIT 8
#define CHAR_MAX SCHAR_MAX
#define CHAR_MIN SCHAR_MIN
#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)
#define LLONG_MAX 9223372036854775807ll
#define LLONG_MIN (-LLONG_MAX - 1ll)
#define LONG_MIN (-LONG_MAX - 1L)
#define SCHAR_MAX 127
#define SCHAR_MIN (-128)
#define SHRT_MAX 32767
#define SHRT_MIN (-32768)
#define UCHAR_MAX 255
#define UINT_MAX 4294967295u
#define ULLONG_MAX 18446744073709551615ull
#define ULONG_LONG_MAX ULLONG_MAX

#endif				/* _LIMITS_H_ */
