// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

	typedef unsigned long long size_t ;
typedef long long ssize_t ;
typedef size_t rsize_t ;
typedef long long intptr_t ;
typedef unsigned long long uintptr_t ;
typedef long long ptrdiff_t ;
typedef unsigned short wchar_t ;
typedef unsigned short wint_t ;
typedef unsigned short wctype_t ;
typedef int errno_t ;
typedef long __time32_t ;
typedef long long __time64_t ;
typedef __time64_t time_t ;
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
// m:\mingw\x86_64-w64-mingw32\include\inttypes.h

typedef struct {intmax_t quot ;intmax_t rem ;}imaxdiv_t ;
intmax_t imaxabs (intmax_t j );
imaxdiv_t imaxdiv (intmax_t numer ,intmax_t denom );
intmax_t strtoimax (const char *nptr ,char **endptr ,int base );
uintmax_t strtoumax (const char *nptr ,char **endptr ,int base );
intmax_t wcstoimax (const wchar_t *nptr ,wchar_t **endptr ,int base );
uintmax_t wcstoumax (const wchar_t *nptr ,wchar_t **endptr ,int base );
#define PRIX16 "X"
#define PRIX32 "X"
#define PRIX64 "I64X"
#define PRIX8 "X"
#define PRIXFAST16 "X"
#define PRIXFAST32 "X"
#define PRIXFAST64 "I64X"
#define PRIXFAST8 "X"
#define PRIXLEAST16 "X"
#define PRIXLEAST32 "X"
#define PRIXLEAST64 "I64X"
#define PRIXLEAST8 "X"
#define PRIXMAX "I64X"
#define PRIXPTR "I64X"
#define PRId16 "d"
#define PRId32 "d"
#define PRId64 "I64d"
#define PRId8 "d"
#define PRIdFAST16 "d"
#define PRIdFAST32 "d"
#define PRIdFAST64 "I64d"
#define PRIdFAST8 "d"
#define PRIdLEAST16 "d"
#define PRIdLEAST32 "d"
#define PRIdLEAST64 "I64d"
#define PRIdLEAST8 "d"
#define PRIdMAX "I64d"
#define PRIdPTR "I64d"
#define PRIi16 "i"
#define PRIi32 "i"
#define PRIi64 "I64i"
#define PRIi8 "i"
#define PRIiFAST16 "i"
#define PRIiFAST32 "i"
#define PRIiFAST64 "I64i"
#define PRIiFAST8 "i"
#define PRIiLEAST16 "i"
#define PRIiLEAST32 "i"
#define PRIiLEAST64 "I64i"
#define PRIiLEAST8 "i"
#define PRIiMAX "I64i"
#define PRIiPTR "I64i"
#define PRIo16 "o"
#define PRIo32 "o"
#define PRIo64 "I64o"
#define PRIo8 "o"
#define PRIoFAST16 "o"
#define PRIoFAST32 "o"
#define PRIoFAST64 "I64o"
#define PRIoFAST8 "o"
#define PRIoLEAST16 "o"
#define PRIoLEAST32 "o"
#define PRIoLEAST64 "I64o"
#define PRIoLEAST8 "o"
#define PRIoMAX "I64o"
#define PRIoPTR "I64o"
#define PRIu16 "u"
#define PRIu32 "u"
#define PRIu64 "I64u"
#define PRIu8 "u"
#define PRIuFAST16 "u"
#define PRIuFAST32 "u"
#define PRIuFAST64 "I64u"
#define PRIuFAST8 "u"
#define PRIuLEAST16 "u"
#define PRIuLEAST32 "u"
#define PRIuLEAST64 "I64u"
#define PRIuLEAST8 "u"
#define PRIuMAX "I64u"
#define PRIuPTR "I64u"
#define PRIx16 "x"
#define PRIx32 "x"
#define PRIx64 "I64x"
#define PRIx8 "x"
#define PRIxFAST16 "x"
#define PRIxFAST32 "x"
#define PRIxFAST64 "I64x"
#define PRIxFAST8 "x"
#define PRIxLEAST16 "x"
#define PRIxLEAST32 "x"
#define PRIxLEAST64 "I64x"
#define PRIxLEAST8 "x"
#define PRIxMAX "I64x"
#define PRIxPTR "I64x"
#define SCNd16 "hd"
#define SCNd32 "d"
#define SCNd64 "I64d"
#define SCNd8 "hhd"
#define SCNdFAST16 "hd"
#define SCNdFAST32 "d"
#define SCNdFAST64 "I64d"
#define SCNdFAST8 "hhd"
#define SCNdLEAST16 "hd"
#define SCNdLEAST32 "d"
#define SCNdLEAST64 "I64d"
#define SCNdLEAST8 "hhd"
#define SCNdMAX "I64d"
#define SCNdPTR "I64d"
#define SCNi16 "hi"
#define SCNi32 "i"
#define SCNi64 "I64i"
#define SCNi8 "hhi"
#define SCNiFAST16 "hi"
#define SCNiFAST32 "i"
#define SCNiFAST64 "I64i"
#define SCNiFAST8 "hhi"
#define SCNiLEAST16 "hi"
#define SCNiLEAST32 "i"
#define SCNiLEAST64 "I64i"
#define SCNiLEAST8 "hhi"
#define SCNiMAX "I64i"
#define SCNiPTR "I64i"
#define SCNo16 "ho"
#define SCNo32 "o"
#define SCNo64 "I64o"
#define SCNo8 "hho"
#define SCNoFAST16 "ho"
#define SCNoFAST32 "o"
#define SCNoFAST64 "I64o"
#define SCNoFAST8 "hho"
#define SCNoLEAST16 "ho"
#define SCNoLEAST32 "o"
#define SCNoLEAST64 "I64o"
#define SCNoLEAST8 "hho"
#define SCNoMAX "I64o"
#define SCNoPTR "I64o"
#define SCNu16 "hu"
#define SCNu32 "u"
#define SCNu64 "I64u"
#define SCNu8 "hhu"
#define SCNuFAST16 "hu"
#define SCNuFAST32 "u"
#define SCNuFAST64 "I64u"
#define SCNuFAST8 "hhu"
#define SCNuLEAST16 "hu"
#define SCNuLEAST32 "u"
#define SCNuLEAST64 "I64u"
#define SCNuLEAST8 "hhu"
#define SCNuMAX "I64u"
#define SCNuPTR "I64u"
#define SCNx16 "hx"
#define SCNx32 "x"
#define SCNx64 "I64x"
#define SCNx8 "hhx"
#define SCNxFAST16 "hx"
#define SCNxFAST32 "x"
#define SCNxFAST64 "I64x"
#define SCNxFAST8 "hhx"
#define SCNxLEAST16 "hx"
#define SCNxLEAST32 "x"
#define SCNxLEAST64 "I64x"
#define SCNxLEAST8 "hhx"
#define SCNxMAX "I64x"
#define SCNxPTR "I64x"
#define _CRTNOALIAS 
#define _CRTRESTRICT 
#define _CRT_PACKING (8)
#define _CRT_SECURE_CPP_NOTHROW throw ( )
#define _ERRCODE_DEFINED 
#define _INC_CRTDEFS 
#define _INC_CRTDEFS_MACRO 
#define _INTPTR_T_DEFINED 
#define _INTTYPES_H_ 
#define _M_AMD64 (100)
#define _M_X64 (100)
#define _PTRDIFF_T_ 
#define _PTRDIFF_T_DEFINED 
#define _RSIZE_T_DEFINED 
#define _SIZE_T_DEFINED 
#define _SSIZE_T_DEFINED 
#define _TAGLC_ID_DEFINED 
#define _THREADLOCALEINFO 
#define _TIME32_T_DEFINED 
#define _TIME64_T_DEFINED 
#define _TIME_T_DEFINED 
#define _UINTPTR_T_DEFINED 
#define _WCHAR_T_DEFINED 
#define _WCTYPE_T_DEFINED 
#define _WINT_T 
#define __C89_NAMELESS __MINGW_EXTENSION
#define __C89_NAMELESSSTRUCTNAME 
#define __C89_NAMELESSSTRUCTNAME1 
#define __C89_NAMELESSSTRUCTNAME2 
#define __C89_NAMELESSSTRUCTNAME3 
#define __C89_NAMELESSSTRUCTNAME4 
#define __C89_NAMELESSSTRUCTNAME5 
#define __C89_NAMELESSUNIONNAME 
#define __C89_NAMELESSUNIONNAME1 
#define __C89_NAMELESSUNIONNAME2 
#define __C89_NAMELESSUNIONNAME3 
#define __C89_NAMELESSUNIONNAME4 
#define __C89_NAMELESSUNIONNAME5 
#define __C89_NAMELESSUNIONNAME6 
#define __C89_NAMELESSUNIONNAME7 
#define __C89_NAMELESSUNIONNAME8 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(__ret, __func, __dsttype, __dst) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(__ret, __func, __dsttype, __dst, __type1, __arg1) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(__ret, __func, __vfunc, __dsttype, __dst, __type1, __arg1) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(__ret, __func, __vfunc, __dsttype, __dst, __type1, __arg1, __type2, __arg2) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3, __type4, __arg4) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1, __type2, __arg2) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(__ret, __func, __type1, __arg1, __type2, __arg2, __dsttype, __dst) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(__ret, __func, __dsttype, __src) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst )
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 )
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 )
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 , __arg3_type , __arg3 )
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 , __arg3_type , __arg3 , __arg4_type , __arg4 )
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4) 
#define __GNU_EXTENSION __MINGW_EXTENSION
#define __MINGW32_MAJOR_VERSION (3)
#define __MINGW32_MINOR_VERSION (11)
#define __MINGW64_STRINGIFY(x) __STRINGIFY ( x )
#define __MINGW64_VERSION_MAJOR (5)
#define __MINGW64_VERSION_MINOR (0)
#define __MINGW64_VERSION_RC (0)
#define __MINGW64_VERSION_STATE "alpha"
#define __MINGW64_VERSION_STR __MINGW64_STRINGIFY ( __MINGW64_VERSION_MAJOR ) "." __MINGW64_STRINGIFY ( __MINGW64_VERSION_MINOR )
#define __MINGW_ATTRIB_DEPRECATED_MSVC2005 __MINGW_ATTRIB_DEPRECATED_STR ( __MINGW_MSVC2005_DEPREC_STR )
#define __MINGW_ATTRIB_DEPRECATED_SEC_WARN __MINGW_ATTRIB_DEPRECATED_STR ( __MINGW_SEC_WARN_STR )
#define __MINGW_ATTRIB_DEPRECATED_STR(X) 
#define __MINGW_EXTENSION 
#define __MINGW_GCC_VERSION (0)
#define __MINGW_GNUC_PREREQ(major, minor) 0
#define __MINGW_GNU_PRINTF(__format, __args) __attribute__ ( ( __format__ ( gnu_printf , __format , __args ) ) )
#define __MINGW_GNU_SCANF(__format, __args) __attribute__ ( ( __format__ ( gnu_scanf , __format , __args ) ) )
#define __MINGW_HAVE_ANSI_C99_PRINTF (1)
#define __MINGW_HAVE_ANSI_C99_SCANF (1)
#define __MINGW_HAVE_WIDE_C99_PRINTF (1)
#define __MINGW_HAVE_WIDE_C99_SCANF (1)
#define __MINGW_IMP_LSYMBOL(sym) __imp_ ## sym
#define __MINGW_IMP_SYMBOL(sym) __imp_ ## sym
#define __MINGW_LSYMBOL(sym) _ ## sym
#define __MINGW_MSC_PREREQ(major, minor) ( _MSC_VER >= ( major * 100 + minor * 10 ) )
#define __MINGW_MSVC2005_DEPREC_STR "This POSIX function is deprecated beginning in Visual C++ 2005, use _CRT_NONSTDC_NO_DEPRECATE to disable deprecation"
#define __MINGW_MS_PRINTF(__format, __args) __attribute__ ( ( __format__ ( ms_printf , __format , __args ) ) )
#define __MINGW_MS_SCANF(__format, __args) __attribute__ ( ( __format__ ( ms_scanf , __format , __args ) ) )
#define __MINGW_POISON_NAME(__IFACE) __IFACE ## _layout_has_not_been_verified_and_its_declaration_is_most_likely_incorrect
#define __MINGW_SEC_WARN_STR "This function or variable may be unsafe, use _CRT_SECURE_NO_WARNINGS to disable deprecation"
#define __MINGW_USE_UNDERSCORE_PREFIX (0)
#define __MINGW_USYMBOL(sym) sym
#define __MSABI_LONG(x) x ## l
#define __STRINGIFY(x) # x
#define __crt_typefix(ctype) 
#define __intptr_t_defined 
#define __mingw_ovr static __cdecl
#define __uintptr_t_defined