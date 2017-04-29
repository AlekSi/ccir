// Code generated by running "go generate". DO NOT EDIT.

	// +build ignore
	
	// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

typedef unsigned int size_t ;
typedef int ssize_t ;
typedef size_t rsize_t ;
typedef int intptr_t ;
typedef unsigned int uintptr_t ;
typedef int ptrdiff_t ;
typedef unsigned short wchar_t ;
typedef unsigned short wint_t ;
typedef unsigned short wctype_t ;
typedef int errno_t ;
typedef long __time32_t ;
typedef long long __time64_t ;
typedef __time32_t time_t ;
struct threadlocaleinfostruct ;
struct threadmbcinfostruct ;
typedef struct threadlocaleinfostruct *pthreadlocinfo ;
typedef struct threadmbcinfostruct *pthreadmbcinfo ;
struct __lc_time_data ;
typedef struct localeinfo_struct {pthreadlocinfo locinfo ;pthreadmbcinfo mbcinfo ;}_locale_tstruct ;
typedef struct localeinfo_struct {pthreadlocinfo locinfo ;pthreadmbcinfo mbcinfo ;}*_locale_t ;

typedef struct tagLC_ID {unsigned short wLanguage ;unsigned short wCountry ;unsigned short wCodePage ;}LC_ID ;
typedef struct tagLC_ID {unsigned short wLanguage ;unsigned short wCountry ;unsigned short wCodePage ;}*LPLC_ID ;

typedef struct threadlocaleinfostruct {int refcount ;unsigned int lc_codepage ;unsigned int lc_collate_cp ;unsigned long lc_handle [6 ];LC_ID lc_id [6 ];struct {char *locale ;wchar_t *wlocale ;int *refcount ;int *wrefcount ;}lc_category [6 ];int lc_clike ;int mb_cur_max ;int *lconv_intl_refcount ;int *lconv_num_refcount ;int *lconv_mon_refcount ;struct lconv *lconv ;int *ctype1_refcount ;unsigned short *ctype1 ;const unsigned short *pctype ;const unsigned char *pclmap ;const unsigned char *pcumap ;struct __lc_time_data *lc_time_curr ;}threadlocinfo ;
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

void *_memccpy (void *_Dst ,const void *_Src ,int _Val ,size_t _MaxCount );
void *memchr (const void *_Buf ,int _Val ,size_t _MaxCount );
int _memicmp (const void *_Buf1 ,const void *_Buf2 ,size_t _Size );
int _memicmp_l (const void *_Buf1 ,const void *_Buf2 ,size_t _Size ,_locale_t _Locale );
int memcmp (const void *_Buf1 ,const void *_Buf2 ,size_t _Size );
void *memcpy (void *_Dst ,const void *_Src ,size_t _Size );
errno_t memcpy_s (void *_dest ,size_t _numberOfElements ,const void *_src ,size_t _count );
void *mempcpy (void *_Dst ,const void *_Src ,size_t _Size );
void *memset (void *_Dst ,int _Val ,size_t _Size );
void *memccpy (void *_Dst ,const void *_Src ,int _Val ,size_t _Size );
int memicmp (const void *_Buf1 ,const void *_Buf2 ,size_t _Size );
char *_strset (char *_Str ,int _Val );
char *_strset_l (char *_Str ,int _Val ,_locale_t _Locale );
char *strcpy (char *_Dest ,const char *_Source );
char *strcat (char *_Dest ,const char *_Source );
int strcmp (const char *_Str1 ,const char *_Str2 );
size_t strlen (const char *_Str );
size_t strnlen (const char *_Str ,size_t _MaxCount );
void *memmove (void *_Dst ,const void *_Src ,size_t _Size );
char *_strdup (const char *_Src );
char *strchr (const char *_Str ,int _Val );
int _stricmp (const char *_Str1 ,const char *_Str2 );
int _strcmpi (const char *_Str1 ,const char *_Str2 );
int _stricmp_l (const char *_Str1 ,const char *_Str2 ,_locale_t _Locale );
int strcoll (const char *_Str1 ,const char *_Str2 );
int _strcoll_l (const char *_Str1 ,const char *_Str2 ,_locale_t _Locale );
int _stricoll (const char *_Str1 ,const char *_Str2 );
int _stricoll_l (const char *_Str1 ,const char *_Str2 ,_locale_t _Locale );
int _strncoll (const char *_Str1 ,const char *_Str2 ,size_t _MaxCount );
int _strncoll_l (const char *_Str1 ,const char *_Str2 ,size_t _MaxCount ,_locale_t _Locale );
int _strnicoll (const char *_Str1 ,const char *_Str2 ,size_t _MaxCount );
int _strnicoll_l (const char *_Str1 ,const char *_Str2 ,size_t _MaxCount ,_locale_t _Locale );
size_t strcspn (const char *_Str ,const char *_Control );
char *_strerror (const char *_ErrMsg );
char *strerror (int );
char *_strlwr (char *_String );
char *strlwr_l (char *_String ,_locale_t _Locale );
char *strncat (char *_Dest ,const char *_Source ,size_t _Count );
int strncmp (const char *_Str1 ,const char *_Str2 ,size_t _MaxCount );
int _strnicmp (const char *_Str1 ,const char *_Str2 ,size_t _MaxCount );
int _strnicmp_l (const char *_Str1 ,const char *_Str2 ,size_t _MaxCount ,_locale_t _Locale );
char *strncpy (char *_Dest ,const char *_Source ,size_t _Count );
char *_strnset (char *_Str ,int _Val ,size_t _MaxCount );
char *_strnset_l (char *str ,int c ,size_t count ,_locale_t _Locale );
char *strpbrk (const char *_Str ,const char *_Control );
char *strrchr (const char *_Str ,int _Ch );
char *_strrev (char *_Str );
size_t strspn (const char *_Str ,const char *_Control );
char *strstr (const char *_Str ,const char *_SubStr );
char *strtok (char *_Str ,const char *_Delim );
char *strtok_r (char *_Str ,const char *_Delim ,char **__last );
char *_strupr (char *_String );
char *_strupr_l (char *_String ,_locale_t _Locale );
size_t strxfrm (char *_Dst ,const char *_Src ,size_t _MaxCount );
size_t _strxfrm_l (char *_Dst ,const char *_Src ,size_t _MaxCount ,_locale_t _Locale );
char *strdup (const char *_Src );
int strcmpi (const char *_Str1 ,const char *_Str2 );
int stricmp (const char *_Str1 ,const char *_Str2 );
char *strlwr (char *_Str );
int strnicmp (const char *_Str1 ,const char *_Str ,size_t _MaxCount );
int strncasecmp (const char *,const char *,size_t );
int strcasecmp (const char *,const char *);
char *strnset (char *_Str ,int _Val ,size_t _MaxCount );
char *strrev (char *_Str );
char *strset (char *_Str ,int _Val );
char *strupr (char *_Str );
wchar_t *_wcsdup (const wchar_t *_Str );
wchar_t *wcscat (wchar_t *_Dest ,const wchar_t *_Source );
wchar_t *wcschr (const wchar_t *_Str ,wchar_t _Ch );
int wcscmp (const wchar_t *_Str1 ,const wchar_t *_Str2 );
wchar_t *wcscpy (wchar_t *_Dest ,const wchar_t *_Source );
size_t wcscspn (const wchar_t *_Str ,const wchar_t *_Control );
size_t wcslen (const wchar_t *_Str );
size_t wcsnlen (const wchar_t *_Src ,size_t _MaxCount );
wchar_t *wcsncat (wchar_t *_Dest ,const wchar_t *_Source ,size_t _Count );
int wcsncmp (const wchar_t *_Str1 ,const wchar_t *_Str2 ,size_t _MaxCount );
wchar_t *wcsncpy (wchar_t *_Dest ,const wchar_t *_Source ,size_t _Count );
wchar_t *_wcsncpy_l (wchar_t *_Dest ,const wchar_t *_Source ,size_t _Count ,_locale_t _Locale );
wchar_t *wcspbrk (const wchar_t *_Str ,const wchar_t *_Control );
wchar_t *wcsrchr (const wchar_t *_Str ,wchar_t _Ch );
size_t wcsspn (const wchar_t *_Str ,const wchar_t *_Control );
wchar_t *wcsstr (const wchar_t *_Str ,const wchar_t *_SubStr );
wchar_t *wcstok (wchar_t *_Str ,const wchar_t *_Delim );
wchar_t *_wcserror (int _ErrNum );
wchar_t *__wcserror (const wchar_t *_Str );
int _wcsicmp (const wchar_t *_Str1 ,const wchar_t *_Str2 );
int _wcsicmp_l (const wchar_t *_Str1 ,const wchar_t *_Str2 ,_locale_t _Locale );
int _wcsnicmp (const wchar_t *_Str1 ,const wchar_t *_Str2 ,size_t _MaxCount );
int _wcsnicmp_l (const wchar_t *_Str1 ,const wchar_t *_Str2 ,size_t _MaxCount ,_locale_t _Locale );
wchar_t *_wcsnset (wchar_t *_Str ,wchar_t _Val ,size_t _MaxCount );
wchar_t *_wcsrev (wchar_t *_Str );
wchar_t *_wcsset (wchar_t *_Str ,wchar_t _Val );
wchar_t *_wcslwr (wchar_t *_String );
wchar_t *_wcslwr_l (wchar_t *_String ,_locale_t _Locale );
wchar_t *_wcsupr (wchar_t *_String );
wchar_t *_wcsupr_l (wchar_t *_String ,_locale_t _Locale );
size_t wcsxfrm (wchar_t *_Dst ,const wchar_t *_Src ,size_t _MaxCount );
size_t _wcsxfrm_l (wchar_t *_Dst ,const wchar_t *_Src ,size_t _MaxCount ,_locale_t _Locale );
int wcscoll (const wchar_t *_Str1 ,const wchar_t *_Str2 );
int _wcscoll_l (const wchar_t *_Str1 ,const wchar_t *_Str2 ,_locale_t _Locale );
int _wcsicoll (const wchar_t *_Str1 ,const wchar_t *_Str2 );
int _wcsicoll_l (const wchar_t *_Str1 ,const wchar_t *_Str2 ,_locale_t _Locale );
int _wcsncoll (const wchar_t *_Str1 ,const wchar_t *_Str2 ,size_t _MaxCount );
int _wcsncoll_l (const wchar_t *_Str1 ,const wchar_t *_Str2 ,size_t _MaxCount ,_locale_t _Locale );
int _wcsnicoll (const wchar_t *_Str1 ,const wchar_t *_Str2 ,size_t _MaxCount );
int _wcsnicoll_l (const wchar_t *_Str1 ,const wchar_t *_Str2 ,size_t _MaxCount ,_locale_t _Locale );
wchar_t *wcsdup (const wchar_t *_Str );
int wcsicmp (const wchar_t *_Str1 ,const wchar_t *_Str2 );
int wcsnicmp (const wchar_t *_Str1 ,const wchar_t *_Str2 ,size_t _MaxCount );
wchar_t *wcsnset (wchar_t *_Str ,wchar_t _Val ,size_t _MaxCount );
wchar_t *wcsrev (wchar_t *_Str );
wchar_t *wcsset (wchar_t *_Str ,wchar_t _Val );
wchar_t *wcslwr (wchar_t *_Str );
wchar_t *wcsupr (wchar_t *_Str );
int wcsicoll (const wchar_t *_Str1 ,const wchar_t *_Str2 );
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

#define _NLSCMP_DEFINED 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 , __arg3_type , __arg3 , __arg4_type , __arg4 )
#define _INC_CRTDEFS 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3) 
#define _SIZE_T_DEFINED 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(__ret, __func, __type1, __arg1, __type2, __arg2, __dsttype, __dst) 
#define _TIME_T_DEFINED 
#define _WCHAR_T_DEFINED 
#define __intptr_t_defined 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 )
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(__ret, __func, __dsttype, __dst) 
#define _UINTPTR_T_DEFINED 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

#define _WSTRING_DEFINED 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _ERRCODE_DEFINED 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 )
#define _WINT_T 
#define __crt_typefix(ctype) 
#define _TIME32_T_DEFINED 
#define _CRT_PACKING (8)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(__ret, __func, __dsttype, __src) 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

#define NULL ( ( void * ) 0 )
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _INTPTR_T_DEFINED 
#define _WCTYPE_T_DEFINED 
#define _RSIZE_T_DEFINED 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

#define _INC_STRING 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst )
#define _PTRDIFF_T_DEFINED 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(__ret, __func, __dsttype, __dst, __type1, __arg1) 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

#define strcasecmp _stricmp
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _PTRDIFF_T_ 
#define __uintptr_t_defined 
#define _THREADLOCALEINFO 
#define _CRTRESTRICT 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

#define strncasecmp _strnicmp
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3) 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

#define _CRT_MEMORY_DEFINED 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _TAGLC_ID_DEFINED 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

#define wcswcs wcsstr
#define _WConst_return _CONST_RETURN
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _CRT_SECURE_CPP_NOTHROW throw ( )
#define _TIME64_T_DEFINED 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(__ret, __func, __vfunc, __dsttype, __dst, __type1, __arg1) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(__ret, __func, __vfunc, __dsttype, __dst, __type1, __arg1, __type2, __arg2) 
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\string.h 

#define _NLSCMPERROR (2147483647)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3, __type4, __arg4) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst) 
#define _CRTNOALIAS 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 , __arg3_type , __arg3 )
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1, __type2, __arg2) 
#define _SSIZE_T_DEFINED
