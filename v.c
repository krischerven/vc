#define V_COMMIT_HASH "4e01bf4"

#ifndef V_COMMIT_HASH
#define V_COMMIT_HASH "e464c4a"
#endif


#ifndef V_CURRENT_COMMIT_HASH
#define V_CURRENT_COMMIT_HASH "4e01bf4"
#endif

typedef struct array array;
typedef struct KeyValue KeyValue;
typedef struct DenseArray DenseArray;
typedef struct map map;
typedef struct Option Option;
typedef struct SortedMap SortedMap;
typedef struct mapnode mapnode;
typedef struct string string;
typedef struct ustring ustring;
typedef struct RepIndex RepIndex;
typedef struct strings__Builder strings__Builder;
typedef struct strconv__ftoa__Dec32 strconv__ftoa__Dec32;
typedef struct strconv__ftoa__Uf32 strconv__ftoa__Uf32;
typedef struct strconv__ftoa__Uint128 strconv__ftoa__Uint128;
typedef struct strconv__ftoa__Dec64 strconv__ftoa__Dec64;
typedef struct strconv__ftoa__Uf64 strconv__ftoa__Uf64;
typedef struct strconv__Float64u strconv__Float64u;
typedef struct strconv__PrepNumber strconv__PrepNumber;
typedef struct internal__flag__Instance internal__flag__Instance;
typedef enum {
	internal__flag__MainCmdAction_unspecified, // 0
	internal__flag__MainCmdAction_version, // 1
	internal__flag__MainCmdAction_help, // 2
} internal__flag__MainCmdAction;

typedef struct internal__flag__MainCmdPreferences internal__flag__MainCmdPreferences;
typedef enum {
	os__FileType_regular, // 0
	os__FileType_directory, // 1
	os__FileType_character_device, // 2
	os__FileType_block_device, // 3
	os__FileType_fifo, // 4
	os__FileType_symbolic_link, // 5
	os__FileType_socket, // 6
} os__FileType;

typedef struct os__FilePermission os__FilePermission;
typedef struct os__FileMode os__FileMode;
typedef struct os__File os__File;
typedef struct os__FileInfo os__FileInfo;
typedef struct os__Result os__Result;
typedef struct internal__compile__CFlag internal__compile__CFlag;
typedef struct internal__compile__V internal__compile__V;
typedef struct internal__compile__MsvcResult internal__compile__MsvcResult;
typedef struct internal__compile__WindowsKit internal__compile__WindowsKit;
typedef struct internal__compile__VsInstallation internal__compile__VsInstallation;
typedef struct internal__compile__MsvcStringFlags internal__compile__MsvcStringFlags;
typedef struct internal__compile__Deprecated internal__compile__Deprecated;
typedef struct v__table__TypeSymbol v__table__TypeSymbol;
typedef enum {
	v__table__TypeFlag_unset, // 0
	v__table__TypeFlag_optional, // 1
	v__table__TypeFlag_variadic, // 2
} v__table__TypeFlag;

typedef struct v__table__MultiReturn v__table__MultiReturn;
typedef struct v__table__FnType v__table__FnType;
typedef enum {
	v__table__Kind_placeholder, // 0
	v__table__Kind_void, // 1
	v__table__Kind_voidptr, // 2
	v__table__Kind_byteptr, // 3
	v__table__Kind_charptr, // 4
	v__table__Kind_i8, // 5
	v__table__Kind_i16, // 6
	v__table__Kind_int, // 7
	v__table__Kind_i64, // 8
	v__table__Kind_byte, // 9
	v__table__Kind_u16, // 10
	v__table__Kind_u32, // 11
	v__table__Kind_u64, // 12
	v__table__Kind_f32, // 13
	v__table__Kind_f64, // 14
	v__table__Kind_char, // 15
	v__table__Kind_bool, // 16
	v__table__Kind_none_, // 17
	v__table__Kind_string, // 18
	v__table__Kind_array, // 19
	v__table__Kind_array_fixed, // 20
	v__table__Kind_map, // 21
	v__table__Kind_struct_, // 22
	v__table__Kind_multi_return, // 23
	v__table__Kind_sum_type, // 24
	v__table__Kind_alias, // 25
	v__table__Kind_enum_, // 26
	v__table__Kind_function, // 27
} v__table__Kind;

typedef struct v__table__Struct v__table__Struct;
typedef struct v__table__Enum v__table__Enum;
typedef struct v__table__Alias v__table__Alias;
typedef struct v__table__Field v__table__Field;
typedef struct v__table__Array v__table__Array;
typedef struct v__table__ArrayFixed v__table__ArrayFixed;
typedef struct v__table__Map v__table__Map;
typedef struct v__table__SumType v__table__SumType;
typedef struct v__table__Table v__table__Table;
typedef struct v__table__Fn v__table__Fn;
typedef struct v__table__Arg v__table__Arg;
typedef struct v__table__Var v__table__Var;
typedef struct v__doc__Doc v__doc__Doc;
typedef enum {
	v__pref__OS__auto, // 0
	v__pref__OS_mac, // 1
	v__pref__OS_linux, // 2
	v__pref__OS_windows, // 3
	v__pref__OS_freebsd, // 4
	v__pref__OS_openbsd, // 5
	v__pref__OS_netbsd, // 6
	v__pref__OS_dragonfly, // 7
	v__pref__OS_js, // 8
	v__pref__OS_android, // 9
	v__pref__OS_solaris, // 10
	v__pref__OS_haiku, // 11
} v__pref__OS;

typedef enum {
	v__pref__BuildMode_default_mode, // 0
	v__pref__BuildMode_build_module, // 1
} v__pref__BuildMode;

typedef enum {
	v__pref__Backend_c, // 0
	v__pref__Backend_experimental, // 1
	v__pref__Backend_js, // 2
	v__pref__Backend_x64, // 3
} v__pref__Backend;

typedef enum {
	v__pref__VerboseLevel_clean, // 0
	v__pref__VerboseLevel_level_one, // 1
	v__pref__VerboseLevel_level_two, // 2
	v__pref__VerboseLevel_level_three, // 3
} v__pref__VerboseLevel;

typedef struct v__pref__Preferences v__pref__Preferences;
typedef struct v__util__EManager v__util__EManager;
typedef struct time__Time time__Time;
typedef enum {
	time__FormatTime_hhmm12, // 0
	time__FormatTime_hhmm24, // 1
	time__FormatTime_hhmmss12, // 2
	time__FormatTime_hhmmss24, // 3
	time__FormatTime_no_time, // 4
} time__FormatTime;

typedef enum {
	time__FormatDate_ddmmyy, // 0
	time__FormatDate_ddmmyyyy, // 1
	time__FormatDate_mmddyy, // 2
	time__FormatDate_mmddyyyy, // 3
	time__FormatDate_mmmd, // 4
	time__FormatDate_mmmdd, // 5
	time__FormatDate_mmmddyyyy, // 6
	time__FormatDate_no_date, // 7
	time__FormatDate_yyyymmdd, // 8
} time__FormatDate;

typedef enum {
	time__FormatDelimiter_dot, // 0
	time__FormatDelimiter_hyphen, // 1
	time__FormatDelimiter_slash, // 2
	time__FormatDelimiter_space, // 3
} time__FormatDelimiter;

typedef struct benchmark__Benchmark benchmark__Benchmark;
typedef struct v__builder__Builder v__builder__Builder;
typedef struct v__builder__ModFileAndFolder v__builder__ModFileAndFolder;
typedef struct v__builder__ModFileCacher v__builder__ModFileCacher;
typedef struct v__parser__Parser v__parser__Parser;
typedef struct v__ast__Type v__ast__Type;
typedef struct v__ast__Block v__ast__Block;
typedef struct v__ast__ExprStmt v__ast__ExprStmt;
typedef struct v__ast__IntegerLiteral v__ast__IntegerLiteral;
typedef struct v__ast__FloatLiteral v__ast__FloatLiteral;
typedef struct v__ast__StringLiteral v__ast__StringLiteral;
typedef struct v__ast__StringInterLiteral v__ast__StringInterLiteral;
typedef struct v__ast__CharLiteral v__ast__CharLiteral;
typedef struct v__ast__BoolLiteral v__ast__BoolLiteral;
typedef struct v__ast__SelectorExpr v__ast__SelectorExpr;
typedef struct v__ast__Module v__ast__Module;
typedef struct v__ast__StructField v__ast__StructField;
typedef struct v__ast__Field v__ast__Field;
typedef struct v__ast__ConstField v__ast__ConstField;
typedef struct v__ast__ConstDecl v__ast__ConstDecl;
typedef struct v__ast__StructDecl v__ast__StructDecl;
typedef struct v__ast__InterfaceDecl v__ast__InterfaceDecl;
typedef struct v__ast__StructInit v__ast__StructInit;
typedef struct v__ast__Import v__ast__Import;
typedef struct v__ast__FnDecl v__ast__FnDecl;
typedef struct v__ast__BranchStmt v__ast__BranchStmt;
typedef struct v__ast__CallExpr v__ast__CallExpr;
typedef struct v__ast__CallArg v__ast__CallArg;
typedef struct v__ast__Return v__ast__Return;
typedef struct v__ast__Var v__ast__Var;
typedef struct v__ast__GlobalDecl v__ast__GlobalDecl;
typedef struct v__ast__File v__ast__File;
typedef struct v__ast__IdentFn v__ast__IdentFn;
typedef struct v__ast__IdentVar v__ast__IdentVar;
typedef enum {
	v__ast__IdentKind_unresolved, // 0
	v__ast__IdentKind_blank_ident, // 1
	v__ast__IdentKind_variable, // 2
	v__ast__IdentKind_constant, // 3
	v__ast__IdentKind_global, // 4
	v__ast__IdentKind_function, // 5
} v__ast__IdentKind;

typedef struct v__ast__Ident v__ast__Ident;
typedef struct v__ast__InfixExpr v__ast__InfixExpr;
typedef struct v__ast__PostfixExpr v__ast__PostfixExpr;
typedef struct v__ast__PrefixExpr v__ast__PrefixExpr;
typedef struct v__ast__IndexExpr v__ast__IndexExpr;
typedef struct v__ast__IfExpr v__ast__IfExpr;
typedef struct v__ast__IfBranch v__ast__IfBranch;
typedef struct v__ast__MatchExpr v__ast__MatchExpr;
typedef struct v__ast__MatchBranch v__ast__MatchBranch;
typedef struct v__ast__CompIf v__ast__CompIf;
typedef struct v__ast__ForStmt v__ast__ForStmt;
typedef struct v__ast__ForInStmt v__ast__ForInStmt;
typedef struct v__ast__ForCStmt v__ast__ForCStmt;
typedef struct v__ast__ReturnStmt v__ast__ReturnStmt;
typedef struct v__ast__HashStmt v__ast__HashStmt;
typedef struct v__ast__Lambda v__ast__Lambda;
typedef struct v__ast__AssignStmt v__ast__AssignStmt;
typedef struct v__ast__AsCast v__ast__AsCast;
typedef struct v__ast__Attr v__ast__Attr;
typedef struct v__ast__EnumVal v__ast__EnumVal;
typedef struct v__ast__EnumDecl v__ast__EnumDecl;
typedef struct v__ast__AliasTypeDecl v__ast__AliasTypeDecl;
typedef struct v__ast__SumTypeDecl v__ast__SumTypeDecl;
typedef struct v__ast__FnTypeDecl v__ast__FnTypeDecl;
typedef struct v__ast__DeferStmt v__ast__DeferStmt;
typedef struct v__ast__UnsafeStmt v__ast__UnsafeStmt;
typedef struct v__ast__ParExpr v__ast__ParExpr;
typedef struct v__ast__AssignExpr v__ast__AssignExpr;
typedef struct v__ast__GoStmt v__ast__GoStmt;
typedef struct v__ast__GotoLabel v__ast__GotoLabel;
typedef struct v__ast__GotoStmt v__ast__GotoStmt;
typedef struct v__ast__ArrayInit v__ast__ArrayInit;
typedef struct v__ast__MapInit v__ast__MapInit;
typedef struct v__ast__RangeExpr v__ast__RangeExpr;
typedef struct v__ast__CastExpr v__ast__CastExpr;
typedef struct v__ast__AssertStmt v__ast__AssertStmt;
typedef struct v__ast__IfGuardExpr v__ast__IfGuardExpr;
typedef struct v__ast__OrExpr v__ast__OrExpr;
typedef struct v__ast__Assoc v__ast__Assoc;
typedef struct v__ast__SizeOf v__ast__SizeOf;
typedef struct v__ast__TypeOf v__ast__TypeOf;
typedef struct v__ast__Comment v__ast__Comment;
typedef struct v__ast__ConcatExpr v__ast__ConcatExpr;
typedef struct v__ast__None v__ast__None;
typedef struct v__ast__Scope v__ast__Scope;
typedef struct v__token__Position v__token__Position;
typedef struct v__token__Token v__token__Token;
typedef enum {
	v__token__Kind_eof, // 0
	v__token__Kind_name, // 1
	v__token__Kind_number, // 2
	v__token__Kind_string, // 3
	v__token__Kind_str_inter, // 4
	v__token__Kind_chartoken, // 5
	v__token__Kind_plus, // 6
	v__token__Kind_minus, // 7
	v__token__Kind_mul, // 8
	v__token__Kind_div, // 9
	v__token__Kind_mod, // 10
	v__token__Kind_xor, // 11
	v__token__Kind_pipe, // 12
	v__token__Kind_inc, // 13
	v__token__Kind_dec, // 14
	v__token__Kind_and, // 15
	v__token__Kind_logical_or, // 16
	v__token__Kind_not, // 17
	v__token__Kind_bit_not, // 18
	v__token__Kind_question, // 19
	v__token__Kind_comma, // 20
	v__token__Kind_semicolon, // 21
	v__token__Kind_colon, // 22
	v__token__Kind_arrow, // 23
	v__token__Kind_amp, // 24
	v__token__Kind_hash, // 25
	v__token__Kind_dollar, // 26
	v__token__Kind_str_dollar, // 27
	v__token__Kind_left_shift, // 28
	v__token__Kind_right_shift, // 29
	v__token__Kind_assign, // 30
	v__token__Kind_decl_assign, // 31
	v__token__Kind_plus_assign, // 32
	v__token__Kind_minus_assign, // 33
	v__token__Kind_div_assign, // 34
	v__token__Kind_mult_assign, // 35
	v__token__Kind_xor_assign, // 36
	v__token__Kind_mod_assign, // 37
	v__token__Kind_or_assign, // 38
	v__token__Kind_and_assign, // 39
	v__token__Kind_right_shift_assign, // 40
	v__token__Kind_left_shift_assign, // 41
	v__token__Kind_lcbr, // 42
	v__token__Kind_rcbr, // 43
	v__token__Kind_lpar, // 44
	v__token__Kind_rpar, // 45
	v__token__Kind_lsbr, // 46
	v__token__Kind_rsbr, // 47
	v__token__Kind_eq, // 48
	v__token__Kind_ne, // 49
	v__token__Kind_gt, // 50
	v__token__Kind_lt, // 51
	v__token__Kind_ge, // 52
	v__token__Kind_le, // 53
	v__token__Kind_comment, // 54
	v__token__Kind_nl, // 55
	v__token__Kind_dot, // 56
	v__token__Kind_dotdot, // 57
	v__token__Kind_ellipsis, // 58
	v__token__Kind_keyword_beg, // 59
	v__token__Kind_key_as, // 60
	v__token__Kind_key_asm, // 61
	v__token__Kind_key_assert, // 62
	v__token__Kind_key_atomic, // 63
	v__token__Kind_key_break, // 64
	v__token__Kind_key_const, // 65
	v__token__Kind_key_continue, // 66
	v__token__Kind_key_defer, // 67
	v__token__Kind_key_else, // 68
	v__token__Kind_key_embed, // 69
	v__token__Kind_key_enum, // 70
	v__token__Kind_key_false, // 71
	v__token__Kind_key_for, // 72
	v__token__Kind_key_fn, // 73
	v__token__Kind_key_global, // 74
	v__token__Kind_key_go, // 75
	v__token__Kind_key_goto, // 76
	v__token__Kind_key_if, // 77
	v__token__Kind_key_import, // 78
	v__token__Kind_key_import_const, // 79
	v__token__Kind_key_in, // 80
	v__token__Kind_key_interface, // 81
	v__token__Kind_key_match, // 82
	v__token__Kind_key_module, // 83
	v__token__Kind_key_mut, // 84
	v__token__Kind_key_none, // 85
	v__token__Kind_key_return, // 86
	v__token__Kind_key_select, // 87
	v__token__Kind_key_sizeof, // 88
	v__token__Kind_key_offsetof, // 89
	v__token__Kind_key_struct, // 90
	v__token__Kind_key_switch, // 91
	v__token__Kind_key_true, // 92
	v__token__Kind_key_type, // 93
	v__token__Kind_key_typeof, // 94
	v__token__Kind_key_orelse, // 95
	v__token__Kind_key_union, // 96
	v__token__Kind_key_pub, // 97
	v__token__Kind_key_static, // 98
	v__token__Kind_key_unsafe, // 99
	v__token__Kind_keyword_end, // 100
	v__token__Kind__end_, // 101
} v__token__Kind;

typedef enum {
	v__token__Precedence_lowest, // 0
	v__token__Precedence_cond, // 1
	v__token__Precedence_in_as, // 2
	v__token__Precedence_assign, // 3
	v__token__Precedence_eq, // 4
	v__token__Precedence_sum, // 5
	v__token__Precedence_product, // 6
	v__token__Precedence_prefix, // 7
	v__token__Precedence_postfix, // 8
	v__token__Precedence_call, // 9
	v__token__Precedence_index, // 10
} v__token__Precedence;

typedef struct v__checker__Checker v__checker__Checker;
typedef struct v__gen__Gen v__gen__Gen;
typedef struct v__gen__JsGen v__gen__JsGen;
typedef enum {
	v__gen__x64__SectionType_null = 0 ,
	v__gen__x64__SectionType_progbits = 1 ,
	v__gen__x64__SectionType_symtab = 2 ,
	v__gen__x64__SectionType_strtab = 3 ,
	v__gen__x64__SectionType_rela = 4 ,
} v__gen__x64__SectionType;

typedef struct v__gen__x64__SectionConfig v__gen__x64__SectionConfig;
typedef struct v__gen__x64__Gen v__gen__x64__Gen;
typedef enum {
	v__gen__x64__Register_eax, // 0
	v__gen__x64__Register_edi, // 1
	v__gen__x64__Register_rax, // 2
	v__gen__x64__Register_rdi, // 3
	v__gen__x64__Register_rsi, // 4
	v__gen__x64__Register_edx, // 5
	v__gen__x64__Register_rdx, // 6
	v__gen__x64__Register_r12, // 7
} v__gen__x64__Register;

typedef enum {
	v__gen__x64__Size__8, // 0
	v__gen__x64__Size__16, // 1
	v__gen__x64__Size__32, // 2
	v__gen__x64__Size__64, // 3
} v__gen__x64__Size;

typedef struct v__scanner__Scanner v__scanner__Scanner;
typedef enum {
	v__scanner__CommentsMode_skip_comments, // 0
	v__scanner__CommentsMode_parse_comments, // 1
} v__scanner__CommentsMode;

typedef struct v__depgraph__DepGraphNode v__depgraph__DepGraphNode;
typedef struct v__depgraph__DepGraph v__depgraph__DepGraph;
typedef struct v__depgraph__OrderedDepMap v__depgraph__OrderedDepMap;
typedef struct varg_byte varg_byte;
typedef struct varg_string varg_string;
typedef struct varg_int varg_int;
// Generated by the V compiler
#include <inttypes.h>


//================================== builtin types ================================*/

typedef int64_t i64;
typedef int16_t i16;
typedef int8_t i8;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t byte;
typedef uint32_t rune;
typedef float f32;
typedef double f64;
typedef unsigned char* byteptr;
typedef int* intptr;
typedef void* voidptr;
typedef char* charptr;
typedef struct array array;
typedef struct map map;
typedef array array_string;
typedef array array_int;
typedef array array_byte;
typedef array array_f32;
typedef array array_f64;
typedef array array_u16;
typedef array array_u32;
typedef array array_u64;
typedef map map_int;
typedef map map_string;
typedef byte array_fixed_byte_300 [300];
typedef byte array_fixed_byte_400 [400];
#ifndef bool
	typedef int bool;
	#define true 1
	#define false 0
#endif




// c_headers
#include <stdio.h>  // TODO remove all these includes, define all function signatures and types manually
#include <stdlib.h>
#include <float.h>

//#include "fns.h"
#include <signal.h>
#include <stdarg.h> // for va_list
#include <string.h> // memcpy

#if INTPTR_MAX == INT32_MAX
    #define TARGET_IS_32BIT 1
#elif INTPTR_MAX == INT64_MAX
    #define TARGET_IS_64BIT 1
#else
    #error "The environment is not 32 or 64-bit."
#endif

#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || defined(__BIG_ENDIAN__) || defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIBSEB) || defined(__MIBSEB) || defined(__MIBSEB__)
    #define TARGET_ORDER_IS_BIG
#elif defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __LITTLE_ENDIAN || defined(__LITTLE_ENDIAN__) || defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__) || defined(_M_AMD64) || defined(_M_X64) || defined(_M_IX86)
    #define TARGET_ORDER_IS_LITTLE
#else
    #error "Unknown architecture endianness"
#endif

#ifndef _WIN32
#include <ctype.h>
#include <locale.h> // tolower
#include <sys/time.h>
#include <unistd.h> // sleep
extern char **environ;
#endif

#if defined(__CYGWIN__) && !defined(_WIN32)
#error Cygwin is not supported, please use MinGW or Visual Studio.
#endif


#ifdef __linux__
#include <sys/types.h>
#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __FreeBSD__
#include <sys/types.h>
#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __DragonFly__
#include <sys/types.h>
#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __OpenBSD__
#include <sys/types.h>
#include <sys/resource.h>
#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __NetBSD__
#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __sun
#include <sys/types.h>
#include <sys/wait.h> // os__wait uses wait on nix
#endif


#define EMPTY_STRUCT_DECLARATION
#define EMPTY_STRUCT_INITIALIZATION 0
// Due to a tcc bug, the length of an array needs to be specified, but GCC crashes if it is...
#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[])
#define TCCSKIP(x) x

#ifdef __TINYC__
#undef EMPTY_STRUCT_DECLARATION
#undef EMPTY_STRUCT_INITIALIZATION
#define EMPTY_STRUCT_DECLARATION char _dummy
#define EMPTY_STRUCT_INITIALIZATION 0
#undef EMPTY_ARRAY_OF_ELEMS
#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[n])
#undef TCCSKIP
#define TCCSKIP(x)
#endif

// for __offset_of
#ifndef __offsetof
#define __offsetof(s,memb) \
    ((size_t)((char *)&((s *)0)->memb - (char *)0))
#endif

#define OPTION_CAST(x) (x)

#ifndef V64_PRINTFORMAT
#ifdef PRIx64
#define V64_PRINTFORMAT "0x%"PRIx64
#elif defined(__WIN32__)
#define V64_PRINTFORMAT "0x%I64x"
#elif defined(__LINUX__) && defined(__LP64__)
#define V64_PRINTFORMAT "0x%lx"
#else
#define V64_PRINTFORMAT "0x%llx"
#endif
#endif



#ifdef _WIN32
#define WINVER 0x0600
#ifdef _WIN32_WINNT
#undef _WIN32_WINNT
#endif
#define _WIN32_WINNT 0x0600
#define WIN32_LEAN_AND_MEAN
#define _UNICODE
#define UNICODE
#include <windows.h>

#include <io.h> // _waccess
#include <direct.h> // _wgetcwd
//#include <WinSock2.h>
#ifdef _MSC_VER

// On MSVC these are the same (as long as /volatile:ms is passed)
#define _Atomic volatile

// MSVC cannot parse some things properly
#undef EMPTY_STRUCT_DECLARATION
#undef OPTION_CAST

#define EMPTY_STRUCT_DECLARATION int ____dummy_variable
#define OPTION_CAST(x)

#include <dbghelp.h>
#pragma comment(lib, "Dbghelp.lib")

extern wchar_t **_wenviron;

#endif

#else
#include <pthread.h>
#endif


//============================== HELPER C MACROS =============================*/
#define _PUSH(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push(arr, &tmp);}
#define _PUSH_MANY(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many(arr, tmp.data, tmp.len);}
#define _IN(typ, val, arr) array_##typ##_contains(arr, val)
#define _IN_MAP(val, m) map_exists(m, val)
#define DEFAULT_EQUAL(a, b) (a == b)
#define DEFAULT_NOT_EQUAL(a, b) (a != b)
#define DEFAULT_LT(a, b) (a < b)
#define DEFAULT_LE(a, b) (a <= b)
#define DEFAULT_GT(a, b) (a > b)
#define DEFAULT_GE(a, b) (a >= b)

// NB: macro_fXX_eq and macro_fXX_ne are NOT used
// in the generated C code. They are here just for
// completeness/testing.

#define macro_f64_eq(a, b) (a == b)
#define macro_f64_ne(a, b) (a != b)
#define macro_f64_lt(a, b) (a <  b)
#define macro_f64_le(a, b) (a <= b)
#define macro_f64_gt(a, b) (a >  b)
#define macro_f64_ge(a, b) (a >= b)

#define macro_f32_eq(a, b) (a == b)
#define macro_f32_ne(a, b) (a != b)
#define macro_f32_lt(a, b) (a <  b)
#define macro_f32_le(a, b) (a <= b)
#define macro_f32_gt(a, b) (a >  b)
#define macro_f32_ge(a, b) (a >= b)

//================================== GLOBALS =================================*/
byte g_str_buf[1024];
int load_so(byteptr);
void reload_so();
void _vinit();
void _vcleanup();
#define sigaction_size sizeof(sigaction);
#define _ARR_LEN(a) ( (sizeof(a)) / (sizeof(a[0])) )

// ============== wyhash ==============
//	Author: Wang Yi
#ifndef wyhash_version_4
#define wyhash_version_4
#include	<stdint.h>
#include	<string.h>
#if defined(_MSC_VER) && defined(_M_X64)
#include <intrin.h>
#pragma	intrinsic(_umul128)
#endif
const	uint64_t	_wyp0=0xa0761d6478bd642full,	_wyp1=0xe7037ed1a0b428dbull,	_wyp2=0x8ebc6af09c88c6e3ull,	_wyp3=0x589965cc75374cc3ull,	_wyp4=0x1d8e4e27c47d124full;
static	inline	uint64_t	_wyrotr(uint64_t v, unsigned k) {	return	(v>>k)|(v<<(64-k));	}
static	inline	uint64_t	_wymum(uint64_t	A,	uint64_t	B) {
#ifdef	WYHASH32
	uint64_t    hh=(A>>32)*(B>>32), hl=(A>>32)*(unsigned)B, lh=(unsigned)A*(B>>32), ll=(uint64_t)(unsigned)A*(unsigned)B;
	return  _wyrotr(hl,32)^_wyrotr(lh,32)^hh^ll;
#else
	#ifdef __SIZEOF_INT128__
		__uint128_t	r=A;	r*=B;	return	(r>>64)^r;
	#elif	defined(_MSC_VER) && defined(_M_X64)
		A=_umul128(A, B, &B);	return	A^B;
	#else
		uint64_t	ha=A>>32,	hb=B>>32,	la=(uint32_t)A,	lb=(uint32_t)B,	hi, lo;
		uint64_t	rh=ha*hb,	rm0=ha*lb,	rm1=hb*la,	rl=la*lb,	t=rl+(rm0<<32),	c=t<rl;
		lo=t+(rm1<<32);	c+=lo<t;hi=rh+(rm0>>32)+(rm1>>32)+c;	return hi^lo;
	#endif
#endif
}
#ifndef WYHASH_LITTLE_ENDIAN
	#if	defined(_WIN32) || defined(__LITTLE_ENDIAN__) || (defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
		#define WYHASH_LITTLE_ENDIAN 1
	#elif	defined(__BIG_ENDIAN__) || (defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
		#define WYHASH_LITTLE_ENDIAN 0
	#endif
#endif
#if(WYHASH_LITTLE_ENDIAN) || defined(__TINYC__)
static	inline	uint64_t	_wyr8(const	uint8_t	*p)	{	uint64_t	v;	memcpy(&v,  p,  8);	return  v;	}
static	inline	uint64_t	_wyr4(const	uint8_t	*p)	{	unsigned	v;	memcpy(&v,  p,  4);	return  v;	}
#else
	#if defined(__GNUC__) || defined(__INTEL_COMPILER)
static	inline	uint64_t	_wyr8(const	uint8_t	*p)	{	uint64_t	v;	memcpy(&v,  p,  8);	return   __builtin_bswap64(v);	}
static	inline	uint64_t	_wyr4(const	uint8_t	*p)	{	unsigned	v;	memcpy(&v,  p,  4);	return   __builtin_bswap32(v);	}
	#elif	defined(_MSC_VER)
static	inline	uint64_t	_wyr8(const	uint8_t	*p)	{	uint64_t	v;	memcpy(&v,  p,  8);	return  _byteswap_uint64(v);}
static	inline	uint64_t	_wyr4(const	uint8_t	*p)	{	unsigned	v;	memcpy(&v,  p,  4);	return  _byteswap_ulong(v);	}
	#endif
#endif
static	inline	uint64_t	_wyr3(const	uint8_t	*p,	unsigned	k) {	return	(((uint64_t)p[0])<<16)|(((uint64_t)p[k>>1])<<8)|p[k-1];	}
static	inline	uint64_t	wyhash(const void* key,	uint64_t	len,	uint64_t	seed) {
	const	uint8_t	*p=(const	uint8_t*)key;	uint64_t	i=len&63;
	#if defined(__GNUC__) || defined(__INTEL_COMPILER)
		#define	_like_(x)	__builtin_expect(x,1)
		#define	_unlike_(x)	__builtin_expect(x,0)
	#else
		#define _like_(x)  (x)
		#define _unlike_(x)  (x)
	#endif
	if(_unlike_(!i)) {	}
	else	if(_unlike_(i<4))	seed=_wymum(_wyr3(p,i)^seed^_wyp0,seed^_wyp1);
	else	if(_like_(i<=8))	seed=_wymum(_wyr4(p)^seed^_wyp0,_wyr4(p+i-4)^seed^_wyp1);
	else	if(_like_(i<=16))	seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+i-8)^seed^_wyp1);
	else	if(_like_(i<=24))	seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+8)^seed^_wyp1)^_wymum(_wyr8(p+i-8)^seed^_wyp2,seed^_wyp3);
	else	if(_like_(i<=32))	seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+8)^seed^_wyp1)^_wymum(_wyr8(p+16)^seed^_wyp2,_wyr8(p+i-8)^seed^_wyp3);
	else{	seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+8)^seed^_wyp1)^_wymum(_wyr8(p+16)^seed^_wyp2,_wyr8(p+24)^seed^_wyp3)^_wymum(_wyr8(p+i-32)^seed^_wyp1,_wyr8(p+i-24)^seed^_wyp2)^_wymum(_wyr8(p+i-16)^seed^_wyp3,_wyr8(p+i-8)^seed^_wyp0);	}
	if(_like_(i==len))	return	_wymum(seed,len^_wyp4);
	uint64_t	see1=seed,	see2=seed,	see3=seed;
	for(p+=i,i=len-i;	_like_(i>=64); i-=64,p+=64) {
		seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+8)^seed^_wyp1);		see1=_wymum(_wyr8(p+16)^see1^_wyp2,_wyr8(p+24)^see1^_wyp3);
		see2=_wymum(_wyr8(p+32)^see2^_wyp1,_wyr8(p+40)^see2^_wyp2);	see3=_wymum(_wyr8(p+48)^see3^_wyp3,_wyr8(p+56)^see3^_wyp0);
	}
	return	_wymum(seed^see1^see2,see3^len^_wyp4);
}
static	inline	uint64_t	wyhash64(uint64_t	A, uint64_t	B) {	return	_wymum(_wymum(A^_wyp0,	B^_wyp1),	_wyp2);	}
static	inline	uint64_t	wyrand(uint64_t	*seed) {	*seed+=_wyp0;	return	_wymum(*seed^_wyp1,*seed);	}
static	inline	double	wy2u01(uint64_t	r) {	const	double	_wynorm=1.0/(1ull<<52);	return	(r>>11)*_wynorm;	}
static	inline	double	wy2gau(uint64_t	r) {	const	double	_wynorm=1.0/(1ull<<20);	return	((r&0x1fffff)+((r>>21)&0x1fffff)+((r>>42)&0x1fffff))*_wynorm-3.0;	}
static inline uint64_t fastest_hash(const void *key, size_t len, uint64_t seed) {
  const uint8_t *p = (const uint8_t *)key;
  return _like_(len >= 4) ? (_wyr4(p) + _wyr4(p + len - 4)) * (_wyr4(p + (len >> 1) - 2) ^ seed) : (_like_(len) ? _wyr3(p, len) * (_wyp0 ^ seed) : seed);
}
#endif



string _STR(const char*, ...);


string _STR_TMP(const char*, ...);

struct string {
	byteptr str;
	int len;
};

struct array {
	voidptr data;
	int len;
	int cap;
	int element_size;
};

struct KeyValue {
	string key;
	voidptr value;
};

struct DenseArray {
	u32 cap;
	u32 size;
	u32 deletes;
	KeyValue* data;
};

struct map {
	int value_bytes;
	u32 cap;
	byte window;
	byte shift;
	DenseArray key_values;
	u32* metas;
	u32 extra_metas;
	int size;
};

struct Option {
	array_fixed_byte_400 data;
	string v_error;
	int ecode;
	bool ok;
	bool is_none;
};

typedef map map_string_string;
typedef map map_string_int;
typedef map_string_string map_string;
typedef map_string_int map_int;
typedef array array_string;
typedef array array_int;
typedef array array_bool;
typedef array array_byte;
typedef array array_char;
typedef array array_voidptr;
typedef array array_RepIndex;
typedef map map_string_bool;
typedef void (*internal__flag__void_cb)(string,internal__flag__Instance*,voidptr);
typedef array array_ustring;
typedef array array_internal__compile__CFlag;
typedef voidptr internal__compile__RegKey;
typedef array array_internal__compile__Deprecated;
typedef int v__table__Type;
typedef array array_v__table__Fn;
typedef array array_v__table__Type;
typedef array array_v__table__Kind;
typedef array array_v__table__Field;
typedef array array_v__table__TypeSymbol;
typedef map map_string_v__table__Fn;
typedef array array_v__table__Arg;
typedef array array_v__ast__Stmt;
typedef bool (*v__doc__FilterFn)(v__ast__FnDecl);
typedef voidptr time__time_t;
typedef array array_v__ast__File;
typedef map map_string_v__builder__ModFileAndFolder;
typedef map map_string_array_string;
typedef array array_v__ast__CallArg;
typedef array array_v__ast__Import;
typedef array array_v__ast__Comment;
typedef array array_v__ast__Expr;
typedef array array_v__ast__IfBranch;
typedef array array_v__ast__ConstField;
typedef array array_v__ast__StructField;
typedef array array_v__ast__Ident;
typedef array array_v__ast__MatchBranch;
typedef array array_v__ast__Scope_ptr;
typedef map map_string_v__ast__ScopeObject;
typedef array array_v__token__Kind;
typedef array array_v__token__Precedence;
typedef array array_v__ast__DeferStmt;
typedef array array_i64;
typedef map map_string_i64;
typedef array array_v__depgraph__DepGraphNode;
typedef map map_string_v__depgraph__DepGraphNode;
typedef array array_u32;
typedef array array_u64;
typedef array array_strconv__ftoa__Uint128;
typedef array array_v__pref__OS;
// builtin types:
//------------------ #endbuiltin
typedef string array_fixed_string_11 [11];
struct internal__compile__CFlag {
	string mod;
	string os;
	string name;
	string value;
};

struct internal__compile__MsvcResult {
	string full_cl_exe_path;
	string exe_path;
	string um_lib_path;
	string ucrt_lib_path;
	string vs_lib_path;
	string um_include_path;
	string ucrt_include_path;
	string vs_include_path;
	string shared_include_path;
};

struct internal__compile__WindowsKit {
	string um_lib_path;
	string ucrt_lib_path;
	string um_include_path;
	string ucrt_include_path;
	string shared_include_path;
};

struct internal__compile__VsInstallation {
	string include_path;
	string lib_path;
	string exe_path;
};

struct v__table__Alias {
	string foo;
};

// Sum type

				typedef struct {
void* obj;
int typ;
} v__table__TypeInfo;
// Sum type

				typedef struct {
void* obj;
int typ;
} v__ast__Stmt;
struct v__builder__ModFileAndFolder {
	string vmod_file;
	string vmod_folder;
};

struct v__ast__GotoStmt {
	string name;
};

struct v__ast__GotoLabel {
	string name;
};

// Sum type

				typedef struct {
void* obj;
int typ;
} v__ast__Expr;
struct v__ast__Attr {
	string name;
};

struct v__ast__CharLiteral {
	string val;
};

struct v__ast__FloatLiteral {
	string val;
};

struct v__ast__IntegerLiteral {
	string val;
};

struct v__ast__HashStmt {
	string val;
};

// Sum type

				typedef struct {
void* obj;
int typ;
} v__ast__TypeDecl;
// Sum type

				typedef struct {
void* obj;
int typ;
} v__ast__ScopeObject;
// Sum type

				typedef struct {
void* obj;
int typ;
} v__ast__IdentInfo;
struct v__ast__Lambda {
	string name;
};

typedef byte array_fixed_byte_400 [400];
struct SortedMap {
	int value_bytes;
	mapnode* root;
	int size;
};

typedef voidptr array_fixed_voidptr_11 [11];
struct ustring {
	string s;
	array_int runes;
	int len;
};

struct RepIndex {
	int idx;
	int val_idx;
};

struct internal__flag__Instance {
	array_string args;
	string current_flag;
	int current_pos;
	string equal_val;
	map_string_bool encountered;
};

struct internal__flag__MainCmdPreferences {
	v__pref__VerboseLevel verbosity;
	internal__flag__MainCmdAction action;
	string unknown_flag;
};

struct v__pref__Preferences {
	v__pref__OS os;
	v__pref__Backend backend;
	v__pref__BuildMode build_mode;
	v__pref__VerboseLevel verbosity;
	bool is_verbose;
	bool is_test;
	bool is_script;
	bool is_live;
	bool is_solive;
	bool is_so;
	bool is_prof;
	bool translated;
	bool is_prod;
	bool obfuscate;
	bool is_repl;
	bool is_run;
	bool sanitize;
	bool is_debug;
	bool is_vlines;
	bool is_keep_c;
	bool is_pretty_c;
	bool is_cache;
	bool is_stats;
	bool no_auto_free;
	string cflags;
	string ccompiler;
	string third_party_option;
	bool building_v;
	bool autofree;
	bool compress;
	bool fast;
	bool enable_globals;
	bool is_bare;
	array_string lookup_path;
	bool output_cross_c;
	bool prealloc;
	string vroot;
	string out_name;
	string path;
	array_string compile_defines;
	array_string compile_defines_all;
	string mod;
};

struct strings__Builder {
	array_byte buf;
	int len;
	int initial_size;
};

struct strconv__ftoa__Dec32 {
	u32 m;
	int e;
};

struct strconv__ftoa__Uf32 {
	f32 f;
	u32 u;
};

struct strconv__ftoa__Uint128 {
	u64 lo;
	u64 hi;
};

struct strconv__ftoa__Dec64 {
	u64 m;
	int e;
};

struct strconv__ftoa__Uf64 {
	f64 f;
	u64 u;
};

struct strconv__Float64u {
	f64 f;
	u64 u;
};

struct strconv__PrepNumber {
	bool negative;
	int exponent;
	u64 mantissa;
};

struct os__FilePermission {
	bool read;
	bool write;
	bool execute;
};

struct os__File {
	voidptr cfile;
	int fd;
	bool opened;
};

struct os__FileInfo {
	string name;
	int size;
};

struct os__Result {
	int exit_code;
	string output;
};

struct v__builder__ModFileCacher {
	map_string_v__builder__ModFileAndFolder cache;
	map_string_array_string folder_files;
};

struct internal__compile__MsvcStringFlags {
	array_string real_libs;
	array_string inc_paths;
	array_string lib_paths;
	array_string other_flags;
};

struct internal__compile__Deprecated {
	string old;
	string new;
	bool not_exactly;
};

struct v__table__Array {
	int nr_dims;
	v__table__Type elem_type;
};

struct v__table__ArrayFixed {
	int nr_dims;
	int size;
	v__table__Type elem_type;
};

struct v__table__Map {
	v__table__Type key_type;
	v__table__Type value_type;
};

struct v__table__Struct {
	array_v__table__Field fields;
	bool is_typedef;
};

struct v__table__MultiReturn {
	string name;
	array_v__table__Type types;
};

struct v__table__Enum {
	array_string vals;
};

struct v__table__SumType {
	array_v__table__Type variants;
};

struct v__table__Fn {
	string name;
	array_v__table__Arg args;
	v__table__Type return_type;
	bool is_variadic;
	bool is_c;
};

struct v__table__TypeSymbol {
	int parent_idx;
	v__table__TypeInfo info;
	v__table__Kind kind;
	string name;
	array_v__table__Fn methods;
};

struct v__table__Table {
	array_v__table__TypeSymbol types;
	map_string_int type_idxs;
	map_string_v__table__Fn fns;
	array_string imports;
	array_string modules;
};

struct v__table__Field {
	string name;
	v__table__Type typ;
};

struct v__table__Arg {
	string name;
	bool is_mut;
	v__table__Type typ;
};

struct v__table__Var {
	string name;
	bool is_mut;
	v__table__Type typ;
};

struct v__ast__Scope {
	v__ast__Scope* parent;
	array_v__ast__Scope_ptr children;
	int start_pos;
	int end_pos;
	map_string_v__ast__ScopeObject objects;
};

struct v__util__EManager {
	bool support_color;
};

struct v__token__Position {
	int line_nr;
	int pos;
};

struct time__Time {
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int v_unix;
};

struct benchmark__Benchmark {
	i64 bench_start_time;
	i64 bench_end_time;
	i64 step_start_time;
	i64 step_end_time;
	int ntotal;
	int nok;
	int nfail;
	int nskip;
	bool verbose;
	int nexpected_steps;
	int cstep;
	string bok;
	string bfail;
};

struct v__ast__OrExpr {
	array_v__ast__Stmt stmts;
};

struct v__ast__CallArg {
	bool is_mut;
	v__ast__Expr expr;
	v__table__Type typ;
};

struct v__scanner__Scanner {
	string file_path;
	string text;
	int pos;
	int line_nr;
	int last_nl_pos;
	bool is_inside_string;
	bool is_inter_start;
	bool is_inter_end;
	bool is_debug;
	string line_comment;
	bool is_started;
	string fn_name;
	bool is_print_line_on_error;
	bool is_print_colored_error;
	bool is_print_rel_paths_on_error;
	byte quote;
	array_int line_ends;
	int nr_lines;
	bool is_vh;
	bool is_fmt;
	v__scanner__CommentsMode comments_mode;
};

struct v__token__Token {
	v__token__Kind kind;
	string lit;
	int line_nr;
	int pos;
};

struct v__ast__Module {
	string name;
	string path;
	v__ast__Expr expr;
};

struct v__ast__Block {
	array_v__ast__Stmt stmts;
};

struct v__ast__UnsafeStmt {
	array_v__ast__Stmt stmts;
};

struct v__ast__DeferStmt {
	array_v__ast__Stmt stmts;
	string ifdef;
};

struct v__ast__GoStmt {
	v__ast__Expr call_expr;
};

struct v__ast__ExprStmt {
	v__ast__Expr expr;
	v__table__Type typ;
};

struct v__ast__CastExpr {
	v__ast__Expr expr;
	v__ast__Expr arg;
	v__table__Type typ;
	v__table__Type expr_type;
	bool has_arg;
};

struct v__ast__BoolLiteral {
	bool val;
};

struct v__ast__ParExpr {
	v__ast__Expr expr;
};

struct v__ast__None {
	int foo;
};

struct v__ast__SizeOf {
	v__table__Type typ;
	string type_name;
};

struct v__ast__TypeOf {
	v__ast__Expr expr;
	v__table__Type expr_type;
};

struct v__ast__RangeExpr {
	v__ast__Expr low;
	v__ast__Expr high;
	bool has_high;
	bool has_low;
};

struct v__ast__IfGuardExpr {
	string var_name;
	v__ast__Expr expr;
	v__table__Type expr_type;
};

struct v__ast__StringLiteral {
	string val;
	bool is_raw;
	bool is_c;
};

struct v__ast__StringInterLiteral {
	array_string vals;
	array_v__ast__Expr exprs;
	array_string expr_fmts;
	array_v__table__Type expr_types;
};

struct v__ast__InterfaceDecl {
	string name;
	array_string field_names;
};

struct v__ast__IdentVar {
	v__table__Type typ;
	bool is_mut;
	bool is_static;
	bool is_optional;
};

struct v__ast__GlobalDecl {
	string name;
	v__ast__Expr expr;
	v__table__Type typ;
};

struct v__ast__Type {
	v__table__Type typ;
};

struct v__ast__EnumDecl {
	string name;
	bool is_pub;
	array_string vals;
	array_v__ast__Expr default_exprs;
};

struct v__ast__SumTypeDecl {
	string name;
	bool is_pub;
	array_v__table__Type sub_types;
};

struct v__ast__FnTypeDecl {
	string name;
	bool is_pub;
	v__table__Type typ;
};

struct v__ast__AliasTypeDecl {
	string name;
	bool is_pub;
	v__table__Type parent_type;
};

struct v__ast__ConcatExpr {
	array_v__ast__Expr vals;
};

struct v__ast__IdentFn {
	v__table__Type typ;
};

struct v__gen__x64__Gen {
	string out_name;
	array_byte buf;
	int sect_header_name_pos;
	i64 offset;
	array_i64 str_pos;
	array_string strings;
	i64 file_size_pos;
	i64 main_fn_addr;
	i64 code_start_pos;
	map_string_i64 fn_addr;
};

struct v__gen__x64__SectionConfig {
	string name;
	v__gen__x64__SectionType typ;
	i64 flags;
	voidptr data;
	bool is_saa;
	i64 datalen;
	int link;
	int info;
	i64 align;
	i64 entsize;
};

struct v__depgraph__DepGraphNode {
	string name;
	array_string deps;
};

struct v__depgraph__DepGraph {
	bool acyclic;
	array_v__depgraph__DepGraphNode nodes;
};

struct v__depgraph__OrderedDepMap {
	array_string keys;
	map_string_array_string data;
};

typedef byteptr array_fixed_byteptr_100 [100];
typedef byte array_fixed_byte_1000 [1000];
typedef byte array_fixed_byte_26 [26];
typedef byte array_fixed_byte_4096 [4096];
typedef byte array_fixed_byte_50 [50];
struct mapnode {
	array_fixed_string_11 keys;
	array_fixed_voidptr_11 values;
	voidptr* children;
	int size;
};

struct os__FileMode {
	os__FileType typ;
	os__FilePermission owner;
	os__FilePermission group;
	os__FilePermission others;
};

struct internal__compile__V {
	v__builder__ModFileCacher* mod_file_cacher;
	string out_name_c;
	array_string files;
	string compiled_dir;
	v__pref__Preferences* pref;
	strings__Builder vgen_buf;
	map_string_int file_parser_idx;
	map_string_int gen_parser_idx;
	array_string cached_mods;
	array_string module_lookup_paths;
	bool v_fmt_all;
	string v_fmt_file;
	string v_fmt_file_result;
};

struct v__table__FnType {
	bool is_anon;
	bool has_decl;
	v__table__Fn func;
};

struct v__doc__Doc {
	strings__Builder out;
	v__table__Table* table;
	string mod;
	array_v__ast__Stmt stmts;
};

struct v__ast__File {
	string path;
	v__ast__Module mod;
	array_v__ast__Import imports;
	array_v__ast__Stmt stmts;
	v__ast__Scope* scope;
	v__ast__Scope* global_scope;
};

struct v__parser__Parser {
	v__scanner__Scanner* scanner;
	string file_name;
	v__token__Token tok;
	v__token__Token peek_tok;
	v__table__Table* table;
	bool is_c;
	bool inside_if;
	v__pref__Preferences* pref;
	bool builtin_mod;
	string mod;
	string attr;
	string expr_mod;
	v__ast__Scope* scope;
	v__ast__Scope* global_scope;
	map_string_string imports;
	array_v__ast__Import ast_imports;
	bool is_amp;
	bool returns;
	bool inside_match_case;
	array_v__ast__Comment comments;
};

struct v__ast__CompIf {
	string val;
	array_v__ast__Stmt stmts;
	bool is_not;
	v__token__Position pos;
	bool has_else;
	array_v__ast__Stmt else_stmts;
};

struct v__ast__CallExpr {
	v__token__Position pos;
	v__ast__Expr left;
	bool is_method;
	string mod;
	string name;
	array_v__ast__CallArg args;
	array_v__table__Type expected_arg_types;
	bool is_c;
	v__ast__OrExpr or_block;
	v__table__Type left_type;
	v__table__Type receiver_type;
	v__table__Type return_type;
};

struct v__ast__Var {
	string name;
	v__ast__Expr expr;
	bool is_mut;
	v__table__Type typ;
	v__token__Position pos;
};

struct v__ast__Field {
	string name;
	v__token__Position pos;
	v__table__Type typ;
};

struct v__ast__Import {
	v__token__Position pos;
	string mod;
	string alias;
};

struct v__ast__Comment {
	string text;
	bool is_multi;
	int line_nr;
	v__token__Position pos;
};

struct v__ast__AssertStmt {
	v__ast__Expr expr;
	v__token__Position pos;
};

struct v__ast__BranchStmt {
	v__token__Token tok;
};

struct v__ast__AssignExpr {
	v__token__Kind op;
	v__token__Position pos;
	v__ast__Expr left;
	v__ast__Expr val;
	v__table__Type left_type;
	v__table__Type right_type;
};

struct v__ast__IndexExpr {
	v__token__Position pos;
	v__ast__Expr left;
	v__ast__Expr index;
	v__table__Type left_type;
	bool is_setter;
};

struct v__ast__Ident {
	string value;
	bool is_c;
	v__token__Kind tok_kind;
	string mod;
	v__token__Position pos;
	string name;
	v__ast__IdentKind kind;
	v__ast__IdentInfo info;
};

struct v__ast__StructInit {
	v__token__Position pos;
	array_string fields;
	array_v__ast__Expr exprs;
	v__table__Type typ;
	array_v__table__Type expr_types;
	array_v__table__Type expected_types;
};

struct v__ast__MapInit {
	v__token__Position pos;
	array_v__ast__Expr keys;
	array_v__ast__Expr vals;
	v__table__Type typ;
	v__table__Type key_type;
	v__table__Type value_type;
};

struct v__ast__EnumVal {
	string enum_name;
	string val;
	string mod;
	v__token__Position pos;
	v__table__Type typ;
};

struct v__ast__AsCast {
	v__ast__Expr expr;
	v__table__Type typ;
	v__token__Position pos;
	v__table__Type expr_type;
};

struct v__ast__InfixExpr {
	v__token__Kind op;
	v__token__Position pos;
	v__ast__Expr left;
	v__ast__Expr right;
	v__table__Type left_type;
	v__table__Type right_type;
};

struct v__ast__PostfixExpr {
	v__token__Kind op;
	v__ast__Expr expr;
	v__token__Position pos;
};

struct v__ast__PrefixExpr {
	v__token__Kind op;
	v__ast__Expr right;
	v__token__Position pos;
};

struct v__ast__SelectorExpr {
	v__token__Position pos;
	v__ast__Expr expr;
	string field;
	v__table__Type expr_type;
};

struct v__ast__ForStmt {
	v__ast__Expr cond;
	array_v__ast__Stmt stmts;
	bool is_inf;
	v__token__Position pos;
};

struct v__ast__ForCStmt {
	v__ast__Stmt init;
	bool has_init;
	v__ast__Expr cond;
	v__ast__Expr inc;
	array_v__ast__Stmt stmts;
	v__token__Position pos;
};

struct v__ast__ForInStmt {
	string key_var;
	string val_var;
	v__ast__Expr cond;
	bool is_range;
	v__ast__Expr high;
	array_v__ast__Stmt stmts;
	v__token__Position pos;
	v__table__Type key_type;
	v__table__Type val_type;
	v__table__Type cond_type;
	v__table__Kind kind;
};

struct v__ast__IfExpr {
	v__token__Kind tok_kind;
	array_v__ast__IfBranch branches;
	v__ast__Expr left;
	v__token__Position pos;
	bool is_expr;
	v__table__Type typ;
	bool has_else;
};

struct v__ast__IfBranch {
	v__ast__Expr cond;
	array_v__ast__Stmt stmts;
	v__token__Position pos;
};

struct v__ast__ArrayInit {
	v__token__Position pos;
	array_v__ast__Expr exprs;
	v__table__Type elem_type;
	v__table__Type typ;
};

struct v__ast__ConstDecl {
	array_v__ast__ConstField fields;
	bool is_pub;
	v__token__Position pos;
};

struct v__ast__ConstField {
	string name;
	v__ast__Expr expr;
	bool is_pub;
	v__token__Position pos;
	v__table__Type typ;
};

struct v__ast__StructDecl {
	v__token__Position pos;
	string name;
	array_v__ast__StructField fields;
	bool is_pub;
	int mut_pos;
	int pub_pos;
	int pub_mut_pos;
	bool is_c;
};

struct v__ast__Return {
	v__token__Position pos;
	array_v__ast__Expr exprs;
	array_v__table__Type types;
};

struct v__ast__AssignStmt {
	array_v__ast__Ident left;
	array_v__ast__Expr right;
	v__token__Kind op;
	v__token__Position pos;
	array_v__table__Type left_types;
	array_v__table__Type right_types;
	bool is_static;
};

struct v__ast__MatchExpr {
	v__token__Kind tok_kind;
	v__ast__Expr cond;
	array_v__ast__MatchBranch branches;
	v__token__Position pos;
	bool is_expr;
	v__table__Type return_type;
	v__table__Type cond_type;
	v__table__Type expected_type;
	bool is_sum_type;
};

struct v__ast__MatchBranch {
	array_v__ast__Expr exprs;
	array_v__ast__Stmt stmts;
	v__token__Position pos;
};

struct v__ast__Assoc {
	string var_name;
	array_string fields;
	array_v__ast__Expr exprs;
	v__token__Position pos;
	v__table__Type typ;
};

struct v__ast__ReturnStmt {
	v__token__Kind tok_kind;
	array_v__ast__Expr results;
	v__token__Position pos;
};

struct v__gen__JsGen {
	strings__Builder out;
	v__table__Table* table;
};

struct v__ast__FnDecl {
	string name;
	array_v__ast__Stmt stmts;
	v__table__Type return_type;
	array_v__table__Arg args;
	bool is_deprecated;
	bool is_pub;
	bool is_variadic;
	v__ast__Field receiver;
	bool is_method;
	bool rec_mut;
	bool is_c;
	bool no_body;
	v__token__Position pos;
};

struct v__checker__Checker {
	v__table__Table* table;
	v__ast__File file;
	int nr_errors;
	array_string errors;
	array_int error_lines;
	v__table__Type expected_type;
	v__table__Type fn_return_type;
	string const_decl;
	array_string const_deps;
	v__pref__Preferences* pref;
};

struct v__ast__StructField {
	string name;
	v__token__Position pos;
	v__ast__Comment comment;
	v__ast__Expr default_expr;
	v__table__Type typ;
};

struct v__gen__Gen {
	strings__Builder out;
	strings__Builder typedefs;
	strings__Builder definitions;
	strings__Builder inits;
	strings__Builder gowrappers;
	strings__Builder stringliterals;
	v__table__Table* table;
	v__pref__Preferences* pref;
	v__ast__File file;
	v__ast__FnDecl* fn_decl;
	int tmp_count;
	map_string_int variadic_args;
	bool is_c_call;
	bool is_assign_lhs;
	bool is_assign_rhs;
	bool is_array_set;
	bool is_amp;
	array_string optionals;
	bool inside_ternary;
	int stmt_start_pos;
	bool right_is_opt;
	bool autofree;
	int indent;
	bool empty_line;
	bool is_test;
	v__token__Kind assign_op;
	array_v__ast__DeferStmt defer_stmts;
	string defer_ifdef;
	array_string str_types;
	array_string threaded_fns;
};

struct v__builder__Builder {
	v__builder__ModFileCacher* mod_file_cacher;
	v__pref__Preferences* pref;
	v__table__Table* table;
	v__checker__Checker checker;
	v__pref__OS os;
	string compiled_dir;
	string module_path;
	array_string module_search_paths;
	array_v__ast__File parsed_files;
	v__ast__Scope* global_scope;
};

// multi return structs
typedef struct {
	u32 arg0;
	u32 arg1;
} multi_return_u32_u32;

typedef struct {
	v__pref__Preferences* arg0;
	string arg1;
} multi_return_v__pref__Preferences_string;

typedef struct {
	strconv__ftoa__Dec32 arg0;
	bool arg1;
} multi_return_strconv__ftoa__Dec32_bool;

typedef struct {
	strconv__ftoa__Dec64 arg0;
	bool arg1;
} multi_return_strconv__ftoa__Dec64_bool;

typedef struct {
	u32 arg0;
	u32 arg1;
	u32 arg2;
} multi_return_u32_u32_u32;

typedef struct {
	int arg0;
	strconv__PrepNumber arg1;
} multi_return_int_strconv__PrepNumber;

typedef struct {
	int arg0;
	bool arg1;
} multi_return_int_bool;

typedef struct {
	v__pref__Preferences arg0;
	array_string arg1;
} multi_return_v__pref__Preferences_array_string;

typedef struct {
	u64 arg0;
	u64 arg1;
} multi_return_u64_u64;

typedef struct {
	int arg0;
	int arg1;
	int arg2;
} multi_return_int_int_int;

typedef struct {
	int arg0;
	int arg1;
} multi_return_int_int;

typedef struct {
	array_string arg0;
	v__builder__ModFileAndFolder arg1;
} multi_return_array_string_v__builder__ModFileAndFolder;

typedef struct {
	array_v__table__Arg arg0;
	bool arg1;
} multi_return_array_v__table__Arg_bool;

typedef struct {
	v__ast__ScopeObject arg0;
	v__ast__Scope* arg1;
} multi_return_v__ast__ScopeObject_v__ast__Scope;

typedef struct {
	string arg0;
	string arg1;
} multi_return_string_string;

// end of definitions #endif
array new_array(int mylen, int cap, int elm_size);
array make(int len, int cap, int elm_size);
array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array);
array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array);
void array_ensure_cap(array* a, int required);
array array_repeat(array a, int count);
void array_sort_with_compare(array* a, voidptr compare);
void array_insert(array* a, int i, voidptr val);
void array_prepend(array* a, voidptr val);
void array_delete(array* a, int i);
void array_clear(array* a);
void array_trim(array* a, int index);
voidptr array_get(array a, int i);
voidptr array_first(array a);
voidptr array_last(array a);
array array_slice(array a, int start, int _end);
array array_slice2(array a, int start, int _end, bool end_max);
array array_clone(array* a);
array array_slice_clone(array* a, int start, int _end);
void array_set(array* a, int i, voidptr val);
void array_push(array* a, voidptr val);
void array_push_many(array* a3, voidptr val, int size);
array array_reverse(array a);
void array_free(array a);
string array_string_str(array_string a);
string array_int_str(array_int a);
string array_bool_str(array_bool a);
string array_byte_hex(array_byte b);
int copy(array_byte dst, array_byte src);
int compare_ints(int* a, int* b);
void array_int_sort(array_int* a);
int array_string_index(array_string a, string v);
int array_int_index(array_int a, int v);
int array_byte_index(array_byte a, byte v);
int array_char_index(array_char a, char v);
int array_int_reduce(array_int a, int (*iter)(int accum, int curr), int accum_start);
bool array_string_eq(array_string a1, array_string a2);
int compare_i64(i64* a, i64* b);
int compare_f64(f64* a, f64* b);
int compare_f32(f32* a, f32* b);
array_voidptr array_pointers(array a);
byteptr g_m2_buf; // global
byteptr g_m2_ptr; // global
void v_exit(int code);
bool isnil(voidptr v);
void print_backtrace_skipping_top_frames(int skipframes);
void print_backtrace();
void panic_debug(int line_no, string file, string mod, string fn_name, string s);
void v_panic(string s);
void eprintln(string s);
void eprint(string s);
void print(string s);
i64 total_m; // global
int nr_mallocs; // global
void looo();
byteptr v_malloc(int n);
byteptr v_calloc(int n);
byteptr vcalloc(int n);
void v_free(voidptr ptr);
voidptr memdup(voidptr src, int sz);
void v_ptr_free(voidptr ptr);
int is_atty(int fd);
void builtin_init();
void println(string s);
bool print_backtrace_skipping_top_frames_msvc(int skipframes);
bool print_backtrace_skipping_top_frames_mingw(int skipframes);
bool print_backtrace_skipping_top_frames_nix(int xskipframes);
bool print_backtrace_skipping_top_frames_mac(int skipframes);
bool print_backtrace_skipping_top_frames_freebsd(int skipframes);
bool print_backtrace_skipping_top_frames_linux(int skipframes);
int backtrace(voidptr a, int b);
byteptr* backtrace_symbols(voidptr, int);
void backtrace_symbols_fd(voidptr, int, int);
int proc_pidpath(int, voidptr, int);
#include <float.h>
string f64_str(f64 d);
string f64_strsci(f64 x, int digit_num);
string f64_strlong(f64 x);
string f32_str(f32 d);
string f32_strsci(f32 x, int digit_num);
string f32_strlong(f32 x);
f32 f32_abs(f32 a);
f64 f64_abs(f64 a);
bool f64_eq(f64 a, f64 b);
bool f32_eq(f32 a, f32 b);
bool f64_eqbit(f64 a, f64 b);
bool f32_eqbit(f32 a, f32 b);
bool f64_ne(f64 a, f64 b);
bool f32_ne(f32 a, f32 b);
bool f64_nebit(f64 a, f64 b);
bool f32_nebit(f32 a, f32 b);
bool f64_lt(f64 a, f64 b);
bool f32_lt(f32 a, f32 b);
bool f64_ltbit(f64 a, f64 b);
bool f32_ltbit(f32 a, f32 b);
bool f64_le(f64 a, f64 b);
bool f32_le(f32 a, f32 b);
bool f64_lebit(f64 a, f64 b);
bool f32_lebit(f32 a, f32 b);
bool f64_gt(f64 a, f64 b);
bool f32_gt(f32 a, f32 b);
bool f64_gtbit(f64 a, f64 b);
bool f32_gtbit(f32 a, f32 b);
bool f64_ge(f64 a, f64 b);
bool f32_ge(f32 a, f32 b);
bool f64_gebit(f64 a, f64 b);
bool f32_gebit(f32 a, f32 b);
string ptr_str(voidptr ptr);
string _const_digit_pairs; // a string literal, inited later
string int_str_l(int nn, int max);
string i8_str(i8 n);
string i16_str(i16 n);
string u16_str(u16 n);
string int_str(int n);
string u32_str(u32 nn);
string i64_str(i64 nn);
string u64_str(u64 nn);
string bool_str(bool b);
string byte_hex(byte nn);
string i8_hex(i8 nn);
string u16_hex(u16 nn);
string i16_hex(i16 nn);
string u32_hex(u32 nn);
string int_hex(int nn);
string u64_hex(u64 nn);
string i64_hex(i64 nn);
bool array_byte_contains(array_byte a, byte val);
string rune_str(rune c);
string byte_str(byte c);
bool byte_is_capital(byte c);
array_byte array_byte_clone(array_byte b);
#define _const_hashbits 24
#define _const_cached_hashbits 16
#define _const_init_log_capicity 5
int _const_init_capicity; // inited later
f64 _const_max_load_factor; // inited later
int _const_init_cap; // inited later
#define _const_extra_metas_inc 4
u32 _const_hash_mask; // inited later
u32 _const_probe_inc; // inited later
DenseArray new_dense_array();
u32 DenseArray_push(DenseArray* d, KeyValue kv);
void DenseArray_zeros_to_end(DenseArray* d);
map new_map(int n, int value_bytes);
map new_map_init(int n, int value_bytes, string* keys, voidptr values);
multi_return_u32_u32 map_key_to_index(map m, string key);
multi_return_u32_u32 meta_less(u32* metas, u32 i, u32 m);
u32* map_meta_greater(map* m, u32* ms, u32 i, u32 me, u32 kvi);
void map_set(map* m, string key, voidptr value);
void map_expand(map* m);
void map_rehash(map* m);
void map_cached_rehash(map* m, u32 old_cap);
voidptr map_get3(map m, string key, voidptr zero);
bool map_exists(map m, string key);
void map_delete(map* m, string key);
array_string map_keys(map* m);
void map_free(map m);
void map_print(map m);
string map_string_str(map_string m);
Option opt_ok(voidptr data, int size);
Option opt_none();
Option v_error(string s);
Option error_with_code(string s, int code);
#define _const_degree 6
int _const_mid_index; // inited later
int _const_max_size; // inited later
int _const_children_bytes; // inited later
SortedMap new_sorted_map(int n, int value_bytes);
SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values);
mapnode* new_node();
void SortedMap_set(SortedMap* m, string key, voidptr value);
void mapnode_split_child(mapnode* n, int child_index, mapnode* y);
bool SortedMap_get(SortedMap m, string key, voidptr out);
bool SortedMap_exists(SortedMap m, string key);
int mapnode_find_key(mapnode* n, string k);
bool mapnode_remove_key(mapnode* n, string k);
void mapnode_remove_from_leaf(mapnode* n, int idx);
void mapnode_remove_from_non_leaf(mapnode* n, int idx);
void mapnode_fill(mapnode* n, int idx);
void mapnode_borrow_from_prev(mapnode* n, int idx);
void mapnode_borrow_from_next(mapnode* n, int idx);
void mapnode_merge(mapnode* n, int idx);
void SortedMap_delete(SortedMap* m, string key);
int mapnode_subkeys(mapnode* n, array_string* keys, int at);
array_string SortedMap_keys(SortedMap* m);
void mapnode_free(mapnode* n);
void SortedMap_free(SortedMap* m);
void SortedMap_print(SortedMap m);
int vstrlen(byteptr s);
string tos(byteptr s, int len);
string tos_clone(byteptr s);
string tos2(byteptr s);
string tos3(charptr s);
string string_clone(string a);
string cstring_to_vstring(byteptr cstr);
string string_replace_once(string s, string rep, string with);
typedef Option Option_int;
string string_replace(string s, string rep, string with);
int compare_rep_index(RepIndex* a, RepIndex* b);
void array_RepIndex_sort(array_RepIndex* a);
string string_replace_each(string s, array_string vals);
bool string_bool(string s);
int string_int(string s);
i64 string_i64(string s);
i8 string_i8(string s);
i16 string_i16(string s);
f32 string_f32(string s);
f64 string_f64(string s);
u16 string_u16(string s);
u32 string_u32(string s);
u64 string_u64(string s);
bool string_eq(string s, string a);
bool string_ne(string s, string a);
bool string_lt(string s, string a);
bool string_le(string s, string a);
bool string_gt(string s, string a);
bool string_ge(string s, string a);
string string_add(string s, string a);
array_string string_split(string s, string delim);
array_string string_split_nth(string s, string delim, int nth);
array_string string_split_into_lines(string s);
string string_left(string s, int n);
string string_right(string s, int n);
string string_substr2(string s, int start, int _end, bool end_max);
string string_substr(string s, int start, int end);
int string_index_old(string s, string p);
Option_int string_index(string s, string p);
int string_index_kmp(string s, string p);
int string_index_any(string s, string chars);
Option_int string_last_index(string s, string p);
int string_index_after(string s, string p, int start);
int string_index_byte(string s, byte c);
int string_last_index_byte(string s, byte c);
int string_count(string s, string substr);
bool string_contains(string s, string p);
bool string_starts_with(string s, string p);
bool string_ends_with(string s, string p);
string string_to_lower(string s);
string string_to_upper(string s);
string string_capitalize(string s);
string string_title(string s);
string string_find_between(string s, string start, string end);
bool array_string_contains(array_string ar, string val);
bool array_int_contains(array_int ar, int val);
bool byte_is_space(byte c);
string string_trim_space(string s);
string string_trim(string s, string cutset);
string string_trim_left(string s, string cutset);
string string_trim_right(string s, string cutset);
int compare_strings(string* a, string* b);
int compare_strings_by_len(string* a, string* b);
int compare_lower_strings(string* a, string* b);
void array_string_sort(array_string* s);
void array_string_sort_ignore_case(array_string* s);
void array_string_sort_by_len(array_string* s);
string ustring_str(ustring s);
ustring string_ustring(string s);
array_int g_ustring_runes; // global
ustring string_ustring_tmp(string s);
bool ustring_eq(ustring u, ustring a);
bool ustring_ne(ustring u, ustring a);
bool ustring_lt(ustring u, ustring a);
bool ustring_le(ustring u, ustring a);
bool ustring_gt(ustring u, ustring a);
bool ustring_ge(ustring u, ustring a);
ustring ustring_add(ustring u, ustring a);
int ustring_index_after(ustring u, ustring p, int start);
int ustring_count(ustring u, ustring substr);
string ustring_substr(ustring u, int _start, int _end);
string ustring_left(ustring u, int pos);
string ustring_right(ustring u, int pos);
byte string_at(string s, int idx);
string ustring_at(ustring u, int idx);
void ustring_free(ustring u);
bool byte_is_digit(byte c);
bool byte_is_hex_digit(byte c);
bool byte_is_oct_digit(byte c);
bool byte_is_bin_digit(byte c);
bool byte_is_letter(byte c);
void string_free(string s);
string string_all_before(string s, string dot);
string string_all_before_last(string s, string dot);
string string_all_after(string s, string dot);
string string_after(string s, string dot);
string array_string_join(array_string a, string del);
string array_string_join_lines(array_string s);
string string_reverse(string s);
string string_limit(string s, int max);
bool byte_is_white(byte c);
int string_hash(string s);
array_byte string_bytes(string s);
string string_repeat(string s, int count);
string string_strip_margin(string s, varg_byte del);
int utf8_char_len(byte b);
string utf32_to_str(u32 code);
string utf32_to_str_no_malloc(u32 code, voidptr buf);
int string_utf32_code(string _rune);
#define _const_CP_UTF8 65001
u16* string_to_wide(string _str);
string string_from_wide(u16* _wstr);
string string_from_wide2(u16* _wstr, int len);
int utf8_len(byte c);
int utf8_getchar();
array_string _const_list_of_flags_that_allow_duplicates; // inited later
array_string _const_list_of_flags_with_param; // inited later
array_string join_flags_and_argument();
void parse_flags(string flag, internal__flag__Instance* f, internal__flag__MainCmdPreferences* prefs);
typedef Option Option_string;
array_string _const_simple_cmd; // inited later
multi_return_v__pref__Preferences_string parse_args(array_string args);
void invoke_help_and_exit(array_string remaining);
void create_symlink();
typedef Option Option_os__Result;
strings__Builder strings__new_builder(int initial_size);
void strings__Builder_write_bytes(strings__Builder* b, byteptr bytes, int howmany);
void strings__Builder_write_b(strings__Builder* b, byte data);
void strings__Builder_write(strings__Builder* b, string s);
void strings__Builder_go_back(strings__Builder* b, int n);
void strings__Builder_writeln(strings__Builder* b, string s);
string strings__Builder_last_n(strings__Builder* b, int n);
string strings__Builder_after(strings__Builder* b, int n);
string strings__Builder_str(strings__Builder* b);
void strings__Builder_free(strings__Builder* b);
int strings__levenshtein_distance(string a, string b);
f32 strings__levenshtein_distance_percentage(string a, string b);
f32 strings__dice_coefficient(string s1, string s2);
string strings__repeat(byte c, int n);
string strings__repeat_string(string s, int n);
array_u32 _const_strconv__ftoa__ten_pow_table_32; // inited later
u32 _const_strconv__ftoa__mantbits32; // inited later
u32 _const_strconv__ftoa__expbits32; // inited later
u32 _const_strconv__ftoa__bias32; // inited later
#define _const_strconv__ftoa__maxexp32 255
string strconv__ftoa__Dec32_get_string_32(strconv__ftoa__Dec32 d, bool neg, int i_n_digit);
multi_return_strconv__ftoa__Dec32_bool strconv__ftoa__f32_to_decimal_exact_int(u32 i_mant, u32 exp);
strconv__ftoa__Dec32 strconv__ftoa__f32_to_decimal(u32 mant, u32 exp);
string strconv__ftoa__f32_to_str(f32 f, int n_digit);
array_u64 _const_strconv__ftoa__ten_pow_table_64; // inited later
u32 _const_strconv__ftoa__mantbits64; // inited later
u32 _const_strconv__ftoa__expbits64; // inited later
u32 _const_strconv__ftoa__bias64; // inited later
#define _const_strconv__ftoa__maxexp64 2047
string strconv__ftoa__Dec64_get_string_64(strconv__ftoa__Dec64 d, bool neg, int i_n_digit);
multi_return_strconv__ftoa__Dec64_bool strconv__ftoa__f64_to_decimal_exact_int(u64 i_mant, u64 exp);
strconv__ftoa__Dec64 strconv__ftoa__f64_to_decimal(u64 mant, u64 exp);
string strconv__ftoa__f64_to_str(f64 f, int n_digit);
string strconv__ftoa__ftoa_64(f64 f);
string strconv__ftoa__ftoa_long_64(f64 f);
string strconv__ftoa__ftoa_32(f32 f);
string strconv__ftoa__ftoa_long_32(f32 f);
#define _const_strconv__ftoa__pow5_num_bits_32 61
#define _const_strconv__ftoa__pow5_inv_num_bits_32 59
#define _const_strconv__ftoa__pow5_num_bits_64 121
#define _const_strconv__ftoa__pow5_inv_num_bits_64 122
array_u64 _const_strconv__ftoa__powers_of_10; // inited later
array_u64 _const_strconv__ftoa__pow5_split_32; // inited later
array_u64 _const_strconv__ftoa__pow5_inv_split_32; // inited later
array_strconv__ftoa__Uint128 _const_strconv__ftoa__pow5_split_64; // inited later
array_strconv__ftoa__Uint128 _const_strconv__ftoa__pow5_inv_split_64; // inited later
void strconv__ftoa__assert1(bool t, string msg);
int strconv__ftoa__bool_to_int(bool b);
u32 strconv__ftoa__bool_to_u32(bool b);
u64 strconv__ftoa__bool_to_u64(bool b);
string strconv__ftoa__get_string_special(bool neg, bool expZero, bool mantZero);
int strconv__ftoa__decimal_len_32(u32 u);
u32 strconv__ftoa__mul_shift_32(u32 m, u64 mul, int ishift);
u32 strconv__ftoa__mul_pow5_invdiv_pow2(u32 m, u32 q, int j);
u32 strconv__ftoa__mul_pow5_div_pow2(u32 m, u32 i, int j);
u32 strconv__ftoa__pow5_factor_32(u32 i_v);
bool strconv__ftoa__multiple_of_power_of_five_32(u32 v, u32 p);
bool strconv__ftoa__multiple_of_power_of_two_32(u32 v, u32 p);
u32 strconv__ftoa__log10_pow2(int e);
u32 strconv__ftoa__log10_pow5(int e);
int strconv__ftoa__pow5_bits(int e);
int strconv__ftoa__decimal_len_64(u64 u);
u64 strconv__ftoa__shift_right_128(strconv__ftoa__Uint128 v, int shift);
u64 strconv__ftoa__mul_shift_64(u64 m, strconv__ftoa__Uint128 mul, int shift);
u32 strconv__ftoa__pow5_factor_64(u64 v_i);
bool strconv__ftoa__multiple_of_power_of_five_64(u64 v, u32 p);
bool strconv__ftoa__multiple_of_power_of_two_64(u64 v, u32 p);
string strconv__ftoa__f32_to_str_l(f64 f);
string strconv__ftoa__f64_to_str_l(f64 f);
u64 hash__wyhash__rand_u64(u64* seed);
u64 _const_hash__wyhash__wyp0; // inited later
u64 _const_hash__wyhash__wyp1; // inited later
u64 _const_hash__wyhash__wyp2; // inited later
u64 _const_hash__wyhash__wyp3; // inited later
u64 _const_hash__wyhash__wyp4; // inited later
u64 hash__wyhash__wyhash_c(byteptr key, u64 len, u64 seed);
u64 hash__wyhash__sum64_string(string key, u64 seed);
u64 hash__wyhash__sum64(array_byte key, u64 seed);
u64 hash__wyhash__wyhash64(byteptr key, u64 len, u64 seed_);
u64 hash__wyhash__wyrotr(u64 v, u32 k);
u64 hash__wyhash__wymum(u64 a, u64 b);
u64 hash__wyhash__wyr3(byteptr p, u64 k);
u64 hash__wyhash__wyr4(byteptr p);
u64 hash__wyhash__wyr8(byteptr p);
multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0);
multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0);
multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0);
#define _const_strconv__DIGITS 18
u64 _const_strconv__DOUBLE_PLUS_ZERO; // inited later
u64 _const_strconv__DOUBLE_MINUS_ZERO; // inited later
u64 _const_strconv__DOUBLE_PLUS_INFINITY; // inited later
u64 _const_strconv__DOUBLE_MINUS_INFINITY; // inited later
#define _const_strconv__fsm_a 0
#define _const_strconv__fsm_b 1
#define _const_strconv__fsm_c 2
#define _const_strconv__fsm_d 3
#define _const_strconv__fsm_e 4
#define _const_strconv__fsm_f 5
#define _const_strconv__fsm_g 6
#define _const_strconv__fsm_h 7
#define _const_strconv__fsm_i 8
#define _const_strconv__FSM_STOP 9
#define _const_strconv__parser_ok 0
#define _const_strconv__parser_pzero 1
#define _const_strconv__parser_mzero 2
#define _const_strconv__parser_pinf 3
#define _const_strconv__parser_minf 4
#define _const_strconv__DPOINT '.'
#define _const_strconv__PLUS '+'
#define _const_strconv__MINUS '-'
#define _const_strconv__ZERO '0'
#define _const_strconv__NINE '9'
u32 _const_strconv__TEN; // inited later
bool strconv__is_digit(byte x);
bool strconv__is_space(byte x);
bool strconv__is_exp(byte x);
multi_return_int_strconv__PrepNumber strconv__parser(string s);
u64 strconv__converter(strconv__PrepNumber* pn);
f64 strconv__atof64(string s);
#define _const_strconv__int_size 32
u64 _const_strconv__max_u64; // inited later
byte strconv__byte_to_lower(byte c);
u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
u64 strconv__parse_uint(string s, int _base, int _bit_size);
i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
i64 strconv__parse_int(string _s, int base, int _bit_size);
int strconv__atoi(string s);
bool strconv__underscore_ok(string s);
array_string _const_internal__flag__truthy; // inited later
array_string _const_internal__flag__falsey; // inited later
typedef Option Option_array_string;
Option_array_string internal__flag__Instance_parse_impl(internal__flag__Instance* p, array_string args, voidptr value, internal__flag__void_cb callback);
Option_string internal__flag__Instance_string(internal__flag__Instance* p);
Option_int internal__flag__Instance_int(internal__flag__Instance* p);
typedef Option Option_f32;
Option_f32 internal__flag__Instance_f32(internal__flag__Instance* p);
typedef Option Option_f64;
Option_f64 internal__flag__Instance_f64(internal__flag__Instance* p);
typedef Option Option_i64;
Option_i64 internal__flag__Instance_i64(internal__flag__Instance* p);
bool internal__flag__Instance_bool(internal__flag__Instance* p);
void internal__flag__Instance_is_equivalent_to(internal__flag__Instance* p, array_string flags);
Option_array_string internal__flag__parse_pref(array_string args, void (*callback)(string, internal__flag__Instance*, v__pref__Preferences*), v__pref__Preferences* obj);
Option_array_string internal__flag__parse_main_cmd(array_string args, void (*callback)(string, internal__flag__Instance*, internal__flag__MainCmdPreferences*), internal__flag__MainCmdPreferences* obj);
#define _const_os__S_IFMT 0xF000
#define _const_os__S_IFDIR 0x4000
#define _const_os__S_IFLNK 0xa000
#define _const_os__S_IXUSR 0100
#define _const_os__S_IXGRP 0010
#define _const_os__S_IXOTH 0001
int _const_os__STD_INPUT_HANDLE; // inited later
int _const_os__STD_OUTPUT_HANDLE; // inited later
int _const_os__STD_ERROR_HANDLE; // inited later
#define _const_os__O_RDONLY 0
#define _const_os__O_WRONLY 1
#define _const_os__O_RDWR 2
#define _const_os__O_CREATE 100
#define _const_os__O_EXCL 200
#define _const_os__O_NOCTTY 400
#define _const_os__O_TRUNC 1000
#define _const_os__O_APPEND 2000
#define _const_os__O_NONBLOCK 4000
#define _const_os__O_SYNC 10000
string os__getenv(string key);
int os__setenv(string name, string value, bool overwrite);
int os__unsetenv(string name);
map_string_string os__environ();
os__FileMode os__inode(string path);
#include <sys/stat.h> // #include <signal.h>
#include <errno.h>
array_string _const_os__args; // inited later
#define _const_os__MAX_PATH 4096
bool os__File_is_opened(os__File f);
array_byte os__File_read_bytes(os__File* f, int size);
array_byte os__File_read_bytes_at(os__File* f, int size, int pos);
typedef Option Option_array_byte;
Option_array_byte os__read_bytes(string path);
Option_string os__read_file(string path);
int os__file_size(string path);
void os__mv(string old, string new);
typedef Option Option_bool;
Option_bool os__cp(string old, string new);
Option_bool os__cp_r(string osource_path, string odest_path, bool overwrite);
Option_bool os__cp_all(string osource_path, string odest_path, bool overwrite);
Option_bool os__mv_by_cp(string source, string target);
FILE* os__vfopen(string path, string mode);
Option_array_string os__read_lines(string path);
typedef Option Option_array_ustring;
Option_array_ustring os__read_ulines(string path);
typedef Option Option_os__File;
Option_os__File os__open_append(string path);
Option_os__File os__open_file(string path, string mode, varg_int options);
void os__File_write_bytes_at(os__File* f, voidptr data, int size, int pos);
void os__File_flush(os__File* f);
voidptr os__vpopen(string path);
multi_return_int_bool os__posix_wait4_to_exit_status(int waitret);
string os__posix_get_error_msg(int code);
int os__vpclose(voidptr f);
int os__system(string cmd);
string os__sigint_to_signal_name(int si);
#define _const_os__F_OK 0
#define _const_os__X_OK 1
#define _const_os__W_OK 2
#define _const_os__R_OK 4
bool os__exists(string path);
bool os__is_executable(string path);
Option_bool os__is_writable_folder(string folder);
bool os__is_writable(string path);
bool os__is_readable(string path);
bool os__file_exists(string _path);
void os__rm(string path);
void os__rmdir(string path);
void os__rmdir_recursive(string path);
void os__rmdir_all(string path);
bool os__is_dir_empty(string path);
void os__print_c_errno();
string os__file_ext(string path);
string os__dir(string path);
string os__base_dir(string path);
string os__file_name(string path);
string os__get_line();
string os__get_raw_line();
array_string os__get_lines();
string os__get_lines_joined();
string os__user_os();
string os__home_dir();
void os__write_file(string path, string text);
void os__clear();
void os__on_segfault(voidptr f);
string os__executable();
string os__executable_fallback();
Option_string os__find_abs_path_of_executable(string exepath);
bool os__dir_exists(string path);
bool os__is_dir(string path);
bool os__is_link(string path);
void os__chdir(string path);
string os__getwd();
string os__real_path(string fpath);
bool os__is_abs_path(string path);
string os__join_path(string base, varg_string dirs);
array_string os__walk_ext(string path, string ext);
void os__walk(string path, void (*f)(string path));
void os__signal(int signum, voidptr handler);
int os__fork();
int os__wait();
int os__file_last_mod_unix(string path);
void os__log(string s);
void os__flush_stdout();
void os__flush();
void os__mkdir_all(string path);
string os__cache_dir();
string os__temp_dir();
void os__chmod(string path, int mode);
string _const_os__wd_at_startup; // inited later
string os__resource_abs_path(string path);
#define _const_os__PROT_READ 1
#define _const_os__PROT_WRITE 2
#define _const_os__MAP_PRIVATE 0x02
#define _const_os__MAP_ANONYMOUS 0x20
#define _const_os__sys_write 1
#define _const_os__sys_open 2
#define _const_os__sys_close 3
#define _const_os__sys_mkdir 83
#define _const_os__sys_creat 85
#include <dirent.h>
#include <unistd.h>
#include <fcntl.h>
string _const_os__path_separator; // a string literal, inited later
#define _const_os__stdin_value 0
#define _const_os__stdout_value 1
#define _const_os__stderr_value 2
array_string os__init_os_args(int argc, byteptr* argv);
Option_array_string os__ls(string path);
Option_os__File os__open(string path);
Option_os__File os__create(string path);
void os__File_write(os__File* f, string s);
void os__File_writeln(os__File* f, string s);
Option_bool os__mkdir(string path);
Option_os__Result os__exec(string cmd);
Option_bool os__symlink(string origin, string target);
string os__get_error_msg(int code);
void os__File_write_bytes(os__File* f, voidptr data, int size);
void os__File_close(os__File* f);
void internal__compile__todo();
bool internal__compile__V_no_cc_installed(internal__compile__V* v);
void internal__compile__V_cc(internal__compile__V* v);
void internal__compile__V_cc_windows_cross(internal__compile__V* c);
void internal__compile__V_build_thirdparty_obj_files(internal__compile__V* c);
void internal__compile__V_build_thirdparty_obj_file(internal__compile__V* v, string path, array_internal__compile__CFlag moduleflags);
string internal__compile__missing_compiler_info();
array_string internal__compile__error_context_lines(string text, string keyword, int before, int after);
string internal__compile__CFlag_str(internal__compile__CFlag* c);
array_internal__compile__CFlag internal__compile__V_get_os_cflags(internal__compile__V* v);
array_internal__compile__CFlag internal__compile__V_get_rest_of_module_cflags(internal__compile__V* v, internal__compile__CFlag* c);
string internal__compile__CFlag_format(internal__compile__CFlag* cf);
string array_internal__compile__CFlag_c_options_before_target_msvc(array_internal__compile__CFlag cflags);
string array_internal__compile__CFlag_c_options_after_target_msvc(array_internal__compile__CFlag cflags);
string array_internal__compile__CFlag_c_options_before_target(array_internal__compile__CFlag cflags);
string array_internal__compile__CFlag_c_options_after_target(array_internal__compile__CFlag cflags);
string array_internal__compile__CFlag_c_options_without_object_files(array_internal__compile__CFlag cflags);
string array_internal__compile__CFlag_c_options_only_object_files(array_internal__compile__CFlag cflags);
void internal__compile__check_for_common_mistake(array_string args, v__pref__Preferences* p);
internal__compile__V* internal__compile__new_v(v__pref__Preferences* pref);
v__builder__Builder internal__compile__V_new_v2(internal__compile__V* v);
string internal__compile__get_vtmp_folder();
string internal__compile__get_vtmp_filename(string base_file_name, string postfix);
void internal__compile__V_compile_x64(internal__compile__V* v);
void internal__compile__V_compile2(internal__compile__V* v);
void internal__compile__compile(string command, array_string args);
void internal__compile__run_compiled_executable_and_exit(internal__compile__V* v, array_string remaining_args);
void internal__compile__V_set_module_lookup_paths(internal__compile__V* v);
array_string internal__compile__V_get_builtin_files(internal__compile__V* v);
array_string internal__compile__V_get_user_files(internal__compile__V* v);
void internal__compile__V_log(internal__compile__V* v, string s);
array_string internal__compile__V_v_files_from_dir(internal__compile__V* v, string dir);
void internal__compile__verror(string s);
void internal__compile__parse_c_options(string flag, internal__flag__Instance* f, v__pref__Preferences* prefs);
void internal__compile__parse_js_options(string flag, internal__flag__Instance f, v__pref__Preferences prefs);
multi_return_v__pref__Preferences_array_string internal__compile__parse_arguments(array_string args);
typedef Option Option_v__pref__Backend;
void internal__compile__parse_options(string flag, internal__flag__Instance* f, v__pref__Preferences* prefs);
void internal__compile__parse_define(v__pref__Preferences* prefs, string define);
void internal__compile__parse_x64_options(string flag, internal__flag__Instance* f, v__pref__Preferences* prefs);
void internal__compile__parse_executable_options(string flag, internal__flag__Instance* f, v__pref__Preferences* prefs);
typedef Option Option_v__pref__OS;
array_string internal__compile__V_generate_hotcode_reloading_compiler_flags(internal__compile__V* v);
void internal__compile__V_generate_hotcode_reloading_declarations(internal__compile__V* v);
void internal__compile__V_generate_hotcode_reloading_main_caller(internal__compile__V* v);
void internal__compile__V_generate_hot_reload_code(internal__compile__V* v);
internal__compile__RegKey _const_internal__compile__HKEY_LOCAL_MACHINE; // inited later
int _const_internal__compile__KEY_QUERY_VALUE; // inited later
int _const_internal__compile__KEY_WOW64_32KEY; // inited later
int _const_internal__compile__KEY_ENUMERATE_SUB_KEYS; // inited later
Option_string internal__compile__find_windows_kit_internal(internal__compile__RegKey key, array_string versions);
typedef Option Option_internal__compile__WindowsKit;
Option_internal__compile__WindowsKit internal__compile__find_windows_kit_root(string host_arch);
typedef Option Option_internal__compile__VsInstallation;
Option_internal__compile__VsInstallation internal__compile__find_vs(string vswhere_dir, string host_arch);
typedef Option Option_internal__compile__MsvcResult;
Option_internal__compile__MsvcResult internal__compile__find_msvc();
void internal__compile__V_cc_msvc(internal__compile__V* v);
void internal__compile__build_thirdparty_obj_file_with_msvc(string path, array_internal__compile__CFlag moduleflags);
internal__compile__MsvcStringFlags array_internal__compile__CFlag_msvc_string_flags(array_internal__compile__CFlag cflags);
void internal__compile__parse_and_output_new_format(array_string args);
array_internal__compile__Deprecated internal__compile__add_if_found_deprecated(array_string args, string deprecated, string alt);
array_string internal__compile__add_if_found_string(array_string args, string deprecated);
string _const_internal__help__unknown_topic; // a string literal, inited later
void internal__help__print_and_exit(string topic);
array_string os__cmdline__options(array_string args, string param);
string os__cmdline__option(array_string args, string param, string def);
array_string os__cmdline__options_before(array_string args, array_string what);
array_string os__cmdline__options_after(array_string args, array_string what);
array_string os__cmdline__only_non_options(array_string args);
array_string os__cmdline__only_options(array_string args);
bool array_v__table__Type_contains(array_v__table__Type types, v__table__Type typ);
int v__table__type_idx(v__table__Type t);
int v__table__type_nr_muls(v__table__Type t);
bool v__table__type_is_ptr(v__table__Type t);
v__table__Type v__table__type_set_nr_muls(v__table__Type t, int nr_muls);
v__table__Type v__table__type_to_ptr(v__table__Type t);
v__table__Type v__table__type_deref(v__table__Type t);
v__table__TypeFlag v__table__type_flag(v__table__Type t);
v__table__Type v__table__type_set(v__table__Type t, v__table__TypeFlag flag);
bool v__table__type_is(v__table__Type t, v__table__TypeFlag flag);
v__table__Type v__table__new_type(int idx);
v__table__Type v__table__new_type_ptr(int idx, int nr_muls);
bool v__table__is_number(v__table__Type typ);
#define _const_v__table__void_type_idx 1
#define _const_v__table__voidptr_type_idx 2
#define _const_v__table__byteptr_type_idx 3
#define _const_v__table__charptr_type_idx 4
#define _const_v__table__i8_type_idx 5
#define _const_v__table__i16_type_idx 6
#define _const_v__table__int_type_idx 7
#define _const_v__table__i64_type_idx 8
#define _const_v__table__byte_type_idx 9
#define _const_v__table__u16_type_idx 10
#define _const_v__table__u32_type_idx 11
#define _const_v__table__u64_type_idx 12
#define _const_v__table__f32_type_idx 13
#define _const_v__table__f64_type_idx 14
#define _const_v__table__char_type_idx 15
#define _const_v__table__bool_type_idx 16
#define _const_v__table__none_type_idx 17
#define _const_v__table__string_type_idx 18
#define _const_v__table__array_type_idx 19
#define _const_v__table__map_type_idx 20
array_int _const_v__table__number_type_idxs; // inited later
array_int _const_v__table__pointer_type_idxs; // inited later
v__table__Type _const_v__table__void_type; // inited later
v__table__Type _const_v__table__voidptr_type; // inited later
v__table__Type _const_v__table__byteptr_type; // inited later
v__table__Type _const_v__table__charptr_type; // inited later
v__table__Type _const_v__table__i8_type; // inited later
v__table__Type _const_v__table__int_type; // inited later
v__table__Type _const_v__table__i16_type; // inited later
v__table__Type _const_v__table__i64_type; // inited later
v__table__Type _const_v__table__byte_type; // inited later
v__table__Type _const_v__table__u16_type; // inited later
v__table__Type _const_v__table__u32_type; // inited later
v__table__Type _const_v__table__u64_type; // inited later
v__table__Type _const_v__table__f32_type; // inited later
v__table__Type _const_v__table__f64_type; // inited later
v__table__Type _const_v__table__char_type; // inited later
v__table__Type _const_v__table__bool_type; // inited later
v__table__Type _const_v__table__none_type; // inited later
v__table__Type _const_v__table__string_type; // inited later
v__table__Type _const_v__table__array_type; // inited later
v__table__Type _const_v__table__map_type; // inited later
array_string _const_v__table__builtin_type_names; // inited later
string v__table__TypeSymbol_str(v__table__TypeSymbol* t);
v__table__Enum v__table__TypeSymbol_enum_info(v__table__TypeSymbol* t);
v__table__MultiReturn v__table__TypeSymbol_mr_info(v__table__TypeSymbol* t);
v__table__Array v__table__TypeSymbol_array_info(v__table__TypeSymbol* t);
v__table__ArrayFixed v__table__TypeSymbol_array_fixed_info(v__table__TypeSymbol* t);
v__table__Map v__table__TypeSymbol_map_info(v__table__TypeSymbol* t);
void v__table__Table_register_builtin_type_symbols(v__table__Table* t);
bool v__table__TypeSymbol_is_pointer(v__table__TypeSymbol* t);
bool v__table__TypeSymbol_is_int(v__table__TypeSymbol* t);
bool v__table__TypeSymbol_is_float(v__table__TypeSymbol* t);
bool v__table__TypeSymbol_is_number(v__table__TypeSymbol* t);
string v__table__Kind_str(v__table__Kind k);
string array_v__table__Kind_str(array_v__table__Kind kinds);
string v__table__Table_type_to_str(v__table__Table* table, v__table__Type t);
v__table__Table* v__table__new_table();
string v__table__Fn_signature(v__table__Fn* f);
typedef Option Option_v__table__Fn;
Option_v__table__Fn v__table__Table_find_fn(v__table__Table* t, string name);
void v__table__Table_register_fn(v__table__Table* t, v__table__Fn new_fn);
void v__table__TypeSymbol_register_method(v__table__TypeSymbol* t, v__table__Fn new_fn);
bool v__table__TypeSymbol_has_method(v__table__TypeSymbol* t, string name);
Option_v__table__Fn v__table__TypeSymbol_find_method(v__table__TypeSymbol* t, string name);
bool v__table__TypeSymbol_has_field(v__table__TypeSymbol* s, string name);
typedef Option Option_v__table__Field;
Option_v__table__Field v__table__TypeSymbol_find_field(v__table__TypeSymbol* s, string name);
bool v__table__Table_type_has_method(v__table__Table* t, v__table__TypeSymbol* s, string name);
Option_v__table__Fn v__table__Table_type_find_method(v__table__Table* t, v__table__TypeSymbol* s, string name);
bool v__table__Table_struct_has_field(v__table__Table* t, v__table__TypeSymbol* s, string name);
Option_v__table__Field v__table__Table_struct_find_field(v__table__Table* t, v__table__TypeSymbol* s, string name);
int v__table__Table_find_type_idx(v__table__Table* t, string name);
typedef Option Option_v__table__TypeSymbol;
Option_v__table__TypeSymbol v__table__Table_find_type(v__table__Table* t, string name);
v__table__TypeSymbol* v__table__Table_get_type_symbol(v__table__Table* t, v__table__Type typ);
int v__table__Table_register_builtin_type_symbol(v__table__Table* t, v__table__TypeSymbol typ);
int v__table__Table_register_type_symbol(v__table__Table* t, v__table__TypeSymbol typ);
bool v__table__Table_known_type(v__table__Table* t, string name);
string v__table__Table_array_name(v__table__Table* t, v__table__Type elem_type, int nr_dims);
string v__table__Table_array_fixed_name(v__table__Table* t, v__table__Type elem_type, int size, int nr_dims);
string v__table__Table_map_name(v__table__Table* t, v__table__Type key_type, v__table__Type value_type);
int v__table__Table_find_or_register_map(v__table__Table* t, v__table__Type key_type, v__table__Type value_type);
int v__table__Table_find_or_register_array(v__table__Table* t, v__table__Type elem_type, int nr_dims);
int v__table__Table_find_or_register_array_fixed(v__table__Table* t, v__table__Type elem_type, int size, int nr_dims);
int v__table__Table_find_or_register_multi_return(v__table__Table* t, array_v__table__Type mr_typs);
int v__table__Table_find_or_register_fn_type(v__table__Table* t, v__table__Fn f, bool has_decl);
int v__table__Table_add_placeholder_type(v__table__Table* t, string name);
v__table__Type v__table__Table_value_type(v__table__Table* t, v__table__Type typ);
bool v__table__Table_check(v__table__Table* t, v__table__Type got, v__table__Type expected);
string v__table__Table_qualify_module(v__table__Table* table, string mod, string file_path);
string v__doc__doc(string mod, v__table__Table* table);
string v__doc__Doc_get_fn_node(v__doc__Doc* d, v__ast__FnDecl f);
void v__doc__Doc_print_fns(v__doc__Doc* d);
void v__doc__Doc_print_methods(v__doc__Doc* d);
void v__doc__Doc_write_fn_signatures(v__doc__Doc* d, array_string fn_signatures);
array_string v__doc__Doc_get_fn_signatures(v__doc__Doc d, v__doc__FilterFn filter_fn);
bool v__doc__is_pub_method(v__ast__FnDecl node);
bool v__doc__is_pub_function(v__ast__FnDecl node);
void v__doc__Doc_print_enums(v__doc__Doc* d);
void v__doc__Doc_print_structs(v__doc__Doc* d);
string _const_v__pref__default_module_path; // inited later
string v__pref__mpath();
v__pref__Preferences v__pref__new_preferences();
void v__pref__Preferences_fill_with_defaults(v__pref__Preferences* p);
string v__pref__default_c_compiler();
string v__pref__vexe_path();
Option_v__pref__OS v__pref__os_from_string(string os_str);
string v__pref__OS_str(v__pref__OS o);
v__pref__OS v__pref__get_host_os();
Option_v__pref__Backend v__pref__backend_from_string(string s);
bool v__pref__VerboseLevel_is_higher_or_equal(v__pref__VerboseLevel v, v__pref__VerboseLevel other);
#define _const_v__util__error_context_before 2
#define _const_v__util__error_context_after 2
v__util__EManager* _const_v__util__emanager; // inited later
void v__util__EManager_set_support_color(v__util__EManager* e, bool b);
v__util__EManager* v__util__new_error_manager();
string v__util__formated_error(string kind, string emsg, string filepath, v__token__Position pos);
void v__util__verror(string kind, string s);
string _const_v__util__v_version; // a string literal, inited later
string v__util__vhash();
string v__util__full_hash();
string v__util__full_v_version();
string v__util__githash(bool should_get_from_filesystem);
void v__util__set_vroot_folder(string vroot_path);
void v__util__launch_tool(bool is_verbose, string tool_name);
string v__util__path_of_executable(string path);
u32 _const_math__bits__de_bruijn32; // inited later
array_byte _const_math__bits__de_bruijn32tab; // inited later
u64 _const_math__bits__de_bruijn64; // inited later
array_byte _const_math__bits__de_bruijn64tab; // inited later
u64 _const_math__bits__m0; // inited later
u64 _const_math__bits__m1; // inited later
u64 _const_math__bits__m2; // inited later
u64 _const_math__bits__m3; // inited later
u64 _const_math__bits__m4; // inited later
u32 _const_math__bits__max_u32; // inited later
u64 _const_math__bits__max_u64; // inited later
int math__bits__leading_zeros_8(byte x);
int math__bits__leading_zeros_16(u16 x);
int math__bits__leading_zeros_32(u32 x);
int math__bits__leading_zeros_64(u64 x);
int math__bits__trailing_zeros_8(byte x);
int math__bits__trailing_zeros_16(u16 x);
int math__bits__trailing_zeros_32(u32 x);
int math__bits__trailing_zeros_64(u64 x);
int math__bits__ones_count_8(byte x);
int math__bits__ones_count_16(u16 x);
int math__bits__ones_count_32(u32 x);
int math__bits__ones_count_64(u64 x);
byte math__bits__rotate_left_8(byte x, int k);
u16 math__bits__rotate_left_16(u16 x, int k);
u32 math__bits__rotate_left_32(u32 x, int k);
u64 math__bits__rotate_left_64(u64 x, int k);
byte math__bits__reverse_8(byte x);
u16 math__bits__reverse_16(u16 x);
u32 math__bits__reverse_32(u32 x);
u64 math__bits__reverse_64(u64 x);
u16 math__bits__reverse_bytes_16(u16 x);
u32 math__bits__reverse_bytes_32(u32 x);
u64 math__bits__reverse_bytes_64(u64 x);
int math__bits__len_8(byte x);
int math__bits__len_16(u16 x);
int math__bits__len_32(u32 x);
int math__bits__len_64(u64 x);
multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry);
multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry);
multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow);
multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow);
u64 _const_math__bits__two32; // inited later
u64 _const_math__bits__mask32; // inited later
string _const_math__bits__overflow_error; // a string literal, inited later
string _const_math__bits__divide_error; // a string literal, inited later
multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y);
multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y);
multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y);
multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1);
u32 math__bits__rem_32(u32 hi, u32 lo, u32 y);
u64 math__bits__rem_64(u64 hi, u64 lo, u64 y);
array_byte _const_math__bits__ntz_8_tab; // inited later
array_byte _const_math__bits__pop_8_tab; // inited later
array_byte _const_math__bits__rev_8_tab; // inited later
array_byte _const_math__bits__len_8_tab; // inited later
string time__Time_format(time__Time t);
string time__Time_format_ss(time__Time t);
string time__Time_hhmm(time__Time t);
string time__Time_hhmmss(time__Time t);
string time__Time_hhmm12(time__Time t);
string time__Time_ymmdd(time__Time t);
string time__Time_ddmmy(time__Time t);
string time__Time_md(time__Time t);
string time__Time_clean(time__Time t);
string time__Time_clean12(time__Time t);
string time__Time_get_fmt_time_str(time__Time t, time__FormatTime fmt_time);
string time__Time_get_fmt_date_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatDate fmt_date);
string time__Time_get_fmt_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatTime fmt_time, time__FormatDate fmt_date);
typedef Option Option_time__Time;
Option_time__Time time__parse(string s);
Option_time__Time time__parse_rfc2822(string s);
#include <time.h>
string _const_time__days_string; // a string literal, inited later
array_int _const_time__month_days; // inited later
string _const_time__months_string; // a string literal, inited later
i64 _const_time__absolute_zero_year; // inited later
#define _const_time__seconds_per_minute 60
int _const_time__seconds_per_hour; // inited later
int _const_time__seconds_per_day; // inited later
int _const_time__seconds_per_week; // inited later
int _const_time__days_per_400_years; // inited later
int _const_time__days_per_100_years; // inited later
int _const_time__days_per_4_years; // inited later
array_int _const_time__days_before; // inited later
time__Time time__now();
string time__Time_smonth(time__Time t);
time__Time time__new_time(time__Time t);
int time__Time_unix_time(time__Time t);
time__Time time__Time_add_seconds(time__Time t, int seconds);
time__Time time__Time_add_days(time__Time t, int days);
int time__since(time__Time t);
string time__Time_relative(time__Time t);
int time__day_of_week(int y, int m, int d);
int time__Time_day_of_week(time__Time t);
string time__Time_weekday_str(time__Time t);
i64 time__ticks();
void time__sleep(int seconds);
void time__sleep_ms(int milliseconds);
void time__usleep(int microseconds);
bool time__is_leap_year(int year);
Option_int time__days_in_month(int month, int year);
string time__Time_str(time__Time t);
time__Time time__convert_ctime(struct tm t);
int time__make_unix_time(struct tm t);
time__Time time__unix(int abs);
multi_return_int_int_int time__calculate_date_from_offset(int day_offset_);
multi_return_int_int_int time__calculate_time_from_offset(int second_offset_);
string term__format(string msg, string open, string close);
string term__format_rgb(int r, int g, int b, string msg, string open, string close);
string term__rgb(int r, int g, int b, string msg);
string term__bg_rgb(int r, int g, int b, string msg);
string term__hex(int hex, string msg);
string term__bg_hex(int hex, string msg);
string term__bg_black(string msg);
string term__bright_bg_black(string msg);
string term__bg_blue(string msg);
string term__bright_bg_blue(string msg);
string term__bg_cyan(string msg);
string term__bright_bg_cyan(string msg);
string term__bg_green(string msg);
string term__bright_bg_green(string msg);
string term__bg_magenta(string msg);
string term__bright_bg_magenta(string msg);
string term__bg_red(string msg);
string term__bright_bg_red(string msg);
string term__bg_white(string msg);
string term__bright_bg_white(string msg);
string term__bg_yellow(string msg);
string term__bright_bg_yellow(string msg);
string term__black(string msg);
string term__bright_black(string msg);
string term__blue(string msg);
string term__bright_blue(string msg);
string term__bold(string msg);
string term__cyan(string msg);
string term__bright_cyan(string msg);
string term__dim(string msg);
string term__green(string msg);
string term__bright_green(string msg);
string term__gray(string msg);
string term__hidden(string msg);
string term__italic(string msg);
string term__inverse(string msg);
string term__magenta(string msg);
string term__bright_magenta(string msg);
string term__reset(string msg);
string term__red(string msg);
string term__bright_red(string msg);
string term__strikethrough(string msg);
string term__underline(string msg);
string term__white(string msg);
string term__bright_white(string msg);
string term__yellow(string msg);
string term__bright_yellow(string msg);
void term__set_cursor_position(int x, int y);
void term__move(int n, string direction);
void term__cursor_up(int n);
void term__cursor_down(int n);
void term__cursor_forward(int n);
void term__cursor_back(int n);
void term__erase_display(string t);
void term__erase_toend();
void term__erase_tobeg();
void term__erase_clear();
void term__erase_del_clear();
void term__erase_line(string t);
void term__erase_line_toend();
void term__erase_line_tobeg();
void term__erase_line_clear();
void term__show_cursor();
void term__hide_cursor();
#define _const_term__default_columns_size 80
#define _const_term__default_rows_size 25
bool term__can_show_color_on_stdout();
bool term__can_show_color_on_stderr();
string term__ok_message(string s);
string term__fail_message(string s);
string term__h_divider(string divider);
string term__header(string text, string divider);
bool term__supports_escape_sequences(int fd);
#include <sys/ioctl.h>
#include <termios.h> // TIOCGWINSZ
multi_return_int_int term__get_terminal_size();
string _const_benchmark__BOK; // inited later
string _const_benchmark__BFAIL; // inited later
string _const_benchmark__BSKIP; // inited later
string _const_benchmark__BSPENT; // inited later
benchmark__Benchmark benchmark__new_benchmark();
benchmark__Benchmark* benchmark__new_benchmark_pointer();
void benchmark__Benchmark_set_total_expected_steps(benchmark__Benchmark* b, int n);
void benchmark__Benchmark_stop(benchmark__Benchmark* b);
void benchmark__Benchmark_step(benchmark__Benchmark* b);
void benchmark__Benchmark_fail(benchmark__Benchmark* b);
void benchmark__Benchmark_ok(benchmark__Benchmark* b);
void benchmark__Benchmark_skip(benchmark__Benchmark* b);
void benchmark__Benchmark_fail_many(benchmark__Benchmark* b, int n);
void benchmark__Benchmark_ok_many(benchmark__Benchmark* b, int n);
void benchmark__Benchmark_neither_fail_nor_ok(benchmark__Benchmark* b);
benchmark__Benchmark benchmark__start();
i64 benchmark__Benchmark_measure(benchmark__Benchmark* b, string label);
string benchmark__Benchmark_step_message_with_label(benchmark__Benchmark* b, string label, string msg);
string benchmark__Benchmark_step_message(benchmark__Benchmark* b, string msg);
string benchmark__Benchmark_step_message_ok(benchmark__Benchmark* b, string msg);
string benchmark__Benchmark_step_message_fail(benchmark__Benchmark* b, string msg);
string benchmark__Benchmark_step_message_skip(benchmark__Benchmark* b, string msg);
string benchmark__Benchmark_total_message(benchmark__Benchmark* b, string msg);
i64 benchmark__Benchmark_total_duration(benchmark__Benchmark* b);
string benchmark__Benchmark_tdiff_in_ms(benchmark__Benchmark* b, string s, i64 sticks, i64 eticks);
i64 benchmark__now();
v__builder__Builder v__builder__new_builder(v__pref__Preferences* pref);
string v__builder__Builder_gen_c(v__builder__Builder* b, array_string v_files);
void v__builder__Builder_build_c(v__builder__Builder* b, array_string v_files, string out_file);
void v__builder__Builder_build_x64(v__builder__Builder* b, array_string v_files, string out_file);
void v__builder__Builder_parse_imports(v__builder__Builder* b);
array_string v__builder__Builder_v_files_from_dir(v__builder__Builder* b, string dir);
void v__builder__Builder_log(v__builder__Builder* b, string s);
void v__builder__Builder_info(v__builder__Builder* b, string s);
string v__builder__module_path(string mod);
Option_string v__builder__Builder_find_module_path(v__builder__Builder* b, string mod);
void v__builder__verror(string s);
v__builder__ModFileCacher* v__builder__new_mod_file_cacher();
void v__builder__ModFileCacher_dump(v__builder__ModFileCacher* mcache);
v__builder__ModFileAndFolder v__builder__ModFileCacher_get(v__builder__ModFileCacher* mcache, string mfolder);
void v__builder__ModFileCacher_add(v__builder__ModFileCacher* cacher, string path, v__builder__ModFileAndFolder result);
multi_return_array_string_v__builder__ModFileAndFolder v__builder__ModFileCacher_traverse(v__builder__ModFileCacher* mcache, string mfolder);
void v__builder__ModFileCacher_mark_folders_with_vmod(v__builder__ModFileCacher* mcache, array_string folders_so_far, v__builder__ModFileAndFolder vmod);
void v__builder__ModFileCacher_mark_folders_as_vmod_free(v__builder__ModFileCacher* mcache, array_string folders_so_far);
array_string _const_v__builder__MOD_FILE_STOP_PATHS; // inited later
bool v__builder__ModFileCacher_check_for_stop(v__builder__ModFileCacher* mcache, string cfolder, array_string files);
array_string v__builder__ModFileCacher_get_files(v__builder__ModFileCacher* mcache, string cfolder);
array_string _const_v__parser__supported_platforms; // inited later
v__ast__CompIf v__parser__Parser_comp_if(v__parser__Parser* p);
v__pref__OS _const_v__parser__todo_delete_me; // inited later
v__pref__OS v__parser__os_from_string(string os);
v__ast__CallExpr v__parser__Parser_call_expr(v__parser__Parser* p, bool is_c, string mod);
array_v__ast__CallArg v__parser__Parser_call_args(v__parser__Parser* p);
v__ast__FnDecl v__parser__Parser_fn_decl(v__parser__Parser* p);
multi_return_array_v__table__Arg_bool v__parser__Parser_fn_args(v__parser__Parser* p);
bool v__parser__Parser_fileis(v__parser__Parser* p, string s);
bool v__parser__Parser_known_import(v__parser__Parser* p, string mod);
string v__parser__Parser_prepend_mod(v__parser__Parser* p, string name);
v__table__Type v__parser__Parser_parse_array_type(v__parser__Parser* p);
v__table__Type v__parser__Parser_parse_map_type(v__parser__Parser* p);
v__table__Type v__parser__Parser_parse_multi_return_type(v__parser__Parser* p);
v__table__Type v__parser__Parser_parse_fn_type(v__parser__Parser* p, string name);
v__table__Type v__parser__Parser_parse_type(v__parser__Parser* p);
v__table__Type v__parser__Parser_parse_any_type(v__parser__Parser* p, bool is_c, bool is_ptr);
v__ast__Stmt v__parser__parse_stmt(string text, v__table__Table* table, v__ast__Scope* scope);
v__ast__File v__parser__parse_file(string path, v__table__Table* table, v__scanner__CommentsMode comments_mode, v__pref__Preferences* pref, v__ast__Scope* global_scope);
array_v__ast__File v__parser__parse_files(array_string paths, v__table__Table* table, v__pref__Preferences* pref, v__ast__Scope* global_scope);
void v__parser__Parser_init_parse_fns(v__parser__Parser* p);
void v__parser__Parser_read_first_token(v__parser__Parser* p);
void v__parser__Parser_open_scope(v__parser__Parser* p);
void v__parser__Parser_close_scope(v__parser__Parser* p);
array_v__ast__Stmt v__parser__Parser_parse_block(v__parser__Parser* p);
array_v__ast__Stmt v__parser__Parser_parse_block_no_scope(v__parser__Parser* p);
void v__parser__Parser_next(v__parser__Parser* p);
void v__parser__Parser_check(v__parser__Parser* p, v__token__Kind expected);
string v__parser__Parser_check_name(v__parser__Parser* p);
v__ast__Stmt v__parser__Parser_top_stmt(v__parser__Parser* p);
v__ast__Comment v__parser__Parser_check_comment(v__parser__Parser* p);
v__ast__Comment v__parser__Parser_comment(v__parser__Parser* p);
v__ast__Stmt v__parser__Parser_stmt(v__parser__Parser* p);
v__ast__AssignExpr v__parser__Parser_assign_expr(v__parser__Parser* p, v__ast__Expr left);
v__ast__Attr v__parser__Parser_attribute(v__parser__Parser* p);
void v__parser__Parser_error(v__parser__Parser* p, string s);
void v__parser__Parser_warn(v__parser__Parser* p, string s);
v__ast__Ident v__parser__Parser_parse_ident(v__parser__Parser* p, bool is_c);
v__ast__StructInit v__parser__Parser_struct_init(v__parser__Parser* p, bool short_syntax);
v__ast__Expr v__parser__Parser_name_expr(v__parser__Parser* p);
v__ast__Expr v__parser__Parser_expr(v__parser__Parser* p, int precedence);
v__ast__PrefixExpr v__parser__Parser_prefix_expr(v__parser__Parser* p);
v__ast__IndexExpr v__parser__Parser_index_expr(v__parser__Parser* p, v__ast__Expr left);
void v__parser__Parser_filter(v__parser__Parser* p);
v__ast__Expr v__parser__Parser_dot_expr(v__parser__Parser* p, v__ast__Expr left);
v__ast__Expr v__parser__Parser_infix_expr(v__parser__Parser* p, v__ast__Expr left);
v__ast__EnumVal v__parser__Parser_enum_val(v__parser__Parser* p);
v__ast__Stmt v__parser__Parser_for_statement(v__parser__Parser* p);
v__ast__IfExpr v__parser__Parser_if_expr(v__parser__Parser* p);
v__ast__Expr v__parser__Parser_string_expr(v__parser__Parser* p);
v__ast__ArrayInit v__parser__Parser_array_init(v__parser__Parser* p);
v__ast__MapInit v__parser__Parser_map_init(v__parser__Parser* p);
v__ast__Expr v__parser__Parser_parse_number_literal(v__parser__Parser* p);
v__ast__Module v__parser__Parser_module_decl(v__parser__Parser* p);
v__ast__Import v__parser__Parser_parse_import(v__parser__Parser* p);
array_v__ast__Import v__parser__Parser_import_stmt(v__parser__Parser* p);
v__ast__ConstDecl v__parser__Parser_const_decl(v__parser__Parser* p);
v__ast__StructDecl v__parser__Parser_struct_decl(v__parser__Parser* p);
v__ast__InterfaceDecl v__parser__Parser_interface_decl(v__parser__Parser* p);
v__ast__Return v__parser__Parser_return_stmt(v__parser__Parser* p);
array_v__ast__Ident v__parser__Parser_parse_assign_lhs(v__parser__Parser* p);
array_v__ast__Expr v__parser__Parser_parse_assign_rhs(v__parser__Parser* p);
v__ast__Stmt v__parser__Parser_assign_stmt(v__parser__Parser* p);
v__ast__HashStmt v__parser__Parser_hash(v__parser__Parser* p);
v__ast__GlobalDecl v__parser__Parser_global_decl(v__parser__Parser* p);
v__ast__MatchExpr v__parser__Parser_match_expr(v__parser__Parser* p);
v__ast__EnumDecl v__parser__Parser_enum_decl(v__parser__Parser* p);
v__ast__TypeDecl v__parser__Parser_type_decl(v__parser__Parser* p);
v__ast__Assoc v__parser__Parser_assoc(v__parser__Parser* p);
typedef Option Option_v__ast__Var;
v__ast__Expr v__parser__Parser_new_true_expr(v__parser__Parser* p);
void v__parser__verror(string s);
v__ast__IdentVar v__ast__Ident_var_info(v__ast__Ident* i);
bool v__ast__expr_is_blank_ident(v__ast__Expr expr);
bool v__ast__expr_is_call(v__ast__Expr expr);
v__ast__Scope* v__ast__new_scope(v__ast__Scope* parent, int start_pos);
typedef Option Option_multi_return_v__ast__ScopeObject_v__ast__Scope;
Option_multi_return_v__ast__ScopeObject_v__ast__Scope v__ast__Scope_find_with_scope(v__ast__Scope* s, string name);
typedef Option Option_v__ast__ScopeObject;
Option_v__ast__ScopeObject v__ast__Scope_find(v__ast__Scope* s, string name);
bool v__ast__Scope_is_known(v__ast__Scope* s, string name);
Option_v__ast__Var v__ast__Scope_find_var(v__ast__Scope* s, string name);
bool v__ast__Scope_known_var(v__ast__Scope* s, string name);
void v__ast__Scope_update_var_type(v__ast__Scope* s, string name, v__table__Type typ);
void v__ast__Scope_register(v__ast__Scope* s, string name, v__ast__ScopeObject obj);
v__ast__Scope* v__ast__Scope_outermost(v__ast__Scope* s);
v__ast__Scope* v__ast__Scope_innermost(v__ast__Scope* s, int pos);
bool v__ast__Scope_contains(v__ast__Scope* s, int pos);
string v__ast__Scope_show(v__ast__Scope* sc, int depth, int max_depth);
string v__ast__Scope_str(v__ast__Scope* sc);
string v__ast__FnDecl_str(v__ast__FnDecl* node, v__table__Table* t);
string v__ast__Expr_str(v__ast__Expr x);
string v__ast__Stmt_str(v__ast__Stmt node);
v__token__Position v__token__Token_position(v__token__Token* tok);
array_v__token__Kind _const_v__token__assign_tokens; // inited later
int _const_v__token__nr_tokens; // inited later
map_string_int v__token__build_keys();
array_string v__token__build_token_str();
array_string _const_v__token__token_str; // inited later
map_string_int _const_v__token__keywords; // inited later
v__token__Kind v__token__key_to_token(string key);
bool v__token__is_key(string key);
bool v__token__is_decl(v__token__Kind t);
bool v__token__Kind_is_assign(v__token__Kind t);
bool array_v__token__Kind_contains(array_v__token__Kind t, v__token__Kind val);
string v__token__Kind_str(v__token__Kind t);
string v__token__Token_str(v__token__Token t);
array_v__token__Precedence v__token__build_precedences();
array_v__token__Precedence _const_v__token__precedences; // inited later
int v__token__Token_precedence(v__token__Token tok);
bool v__token__Token_is_scalar(v__token__Token tok);
bool v__token__Token_is_unary(v__token__Token tok);
bool v__token__Kind_is_relational(v__token__Kind tok);
bool v__token__Kind_is_start_of_type(v__token__Kind k);
bool v__token__Kind_is_infix(v__token__Kind kind);
#define _const_v__checker__max_nr_errors 300
v__checker__Checker v__checker__new_checker(v__table__Table* table, v__pref__Preferences* pref);
void v__checker__Checker_check(v__checker__Checker* c, v__ast__File ast_file);
array_string v__checker__Checker_check2(v__checker__Checker* c, v__ast__File ast_file);
void v__checker__Checker_check_files(v__checker__Checker* c, array_v__ast__File ast_files);
v__table__Type v__checker__Checker_struct_init(v__checker__Checker* c, v__ast__StructInit* struct_init);
v__table__Type v__checker__Checker_infix_expr(v__checker__Checker* c, v__ast__InfixExpr* infix_expr);
void v__checker__Checker_assign_expr(v__checker__Checker* c, v__ast__AssignExpr* assign_expr);
v__table__Type v__checker__Checker_call_expr(v__checker__Checker* c, v__ast__CallExpr* call_expr);
v__table__Type v__checker__Checker_selector_expr(v__checker__Checker* c, v__ast__SelectorExpr* selector_expr);
void v__checker__Checker_return_stmt(v__checker__Checker* c, v__ast__Return* return_stmt);
void v__checker__Checker_assign_stmt(v__checker__Checker* c, v__ast__AssignStmt* assign_stmt);
v__table__Type v__checker__Checker_array_init(v__checker__Checker* c, v__ast__ArrayInit* array_init);
void v__checker__Checker_stmt(v__checker__Checker* c, v__ast__Stmt node);
void v__checker__Checker_stmts(v__checker__Checker* c, array_v__ast__Stmt stmts);
v__table__Type v__checker__Checker_expr(v__checker__Checker* c, v__ast__Expr node);
v__table__Type v__checker__Checker_ident(v__checker__Checker* c, v__ast__Ident* ident);
v__table__Type v__checker__Checker_match_expr(v__checker__Checker* c, v__ast__MatchExpr* node);
v__table__Type v__checker__Checker_if_expr(v__checker__Checker* c, v__ast__IfExpr* node);
v__table__Type v__checker__Checker_postfix_expr(v__checker__Checker* c, v__ast__PostfixExpr node);
v__table__Type v__checker__Checker_index_expr(v__checker__Checker* c, v__ast__IndexExpr* node);
v__table__Type v__checker__Checker_enum_val(v__checker__Checker* c, v__ast__EnumVal* node);
v__table__Type v__checker__Checker_map_init(v__checker__Checker* c, v__ast__MapInit* node);
void v__checker__Checker_warn(v__checker__Checker* c, string s, v__token__Position pos);
void v__checker__Checker_error(v__checker__Checker* c, string s, v__token__Position pos);
void v__checker__Checker_warn_or_error(v__checker__Checker* c, string s, v__token__Position pos, bool warn);
array_string _const_v__gen__c_reserved; // inited later
array_string _const_v__gen__tabs; // inited later
string v__gen__cgen(array_v__ast__File files, v__table__Table* table, v__pref__Preferences* pref);
string v__gen__Gen_hashes(v__gen__Gen g);
void v__gen__Gen_init(v__gen__Gen* g);
void v__gen__Gen_finish(v__gen__Gen* g);
void v__gen__Gen_write_typeof_functions(v__gen__Gen* g);
string v__gen__Gen_typ(v__gen__Gen* g, v__table__Type t);
void v__gen__Gen_write_typedef_types(v__gen__Gen* g);
void v__gen__Gen_write_multi_return_types(v__gen__Gen* g);
void v__gen__Gen_write_variadic_types(v__gen__Gen* g);
void v__gen__Gen_save(v__gen__Gen g);
void v__gen__Gen_write(v__gen__Gen* g, string s);
void v__gen__Gen_writeln(v__gen__Gen* g, string s);
string v__gen__Gen_new_tmp_var(v__gen__Gen* g);
void v__gen__Gen_reset_tmp_count(v__gen__Gen* g);
void v__gen__Gen_stmts(v__gen__Gen* g, array_v__ast__Stmt stmts);
void v__gen__Gen_stmt(v__gen__Gen* g, v__ast__Stmt node);
void v__gen__Gen_write_defer_stmts(v__gen__Gen* g);
void v__gen__Gen_for_in(v__gen__Gen* g, v__ast__ForInStmt it);
void v__gen__Gen_expr_with_cast(v__gen__Gen* g, v__ast__Expr expr, v__table__Type got_type, v__table__Type exp_type);
void v__gen__Gen_gen_assert_stmt(v__gen__Gen* g, v__ast__AssertStmt a);
void v__gen__Gen_gen_assign_stmt(v__gen__Gen* g, v__ast__AssignStmt assign_stmt);
bool v__gen__Gen_gen_clone_assignment(v__gen__Gen* g, v__ast__Expr val, v__table__TypeSymbol right_sym, bool add_eq);
void v__gen__Gen_gen_fn_decl(v__gen__Gen* g, v__ast__FnDecl it);
void v__gen__Gen_free_scope_vars(v__gen__Gen* g, int pos);
void v__gen__Gen_fn_args(v__gen__Gen* g, array_v__table__Arg args, bool is_variadic);
void v__gen__Gen_expr(v__gen__Gen* g, v__ast__Expr node);
void v__gen__Gen_typeof_expr(v__gen__Gen* g, v__ast__TypeOf node);
void v__gen__Gen_enum_expr(v__gen__Gen* g, v__ast__Expr node);
void v__gen__Gen_assign_expr(v__gen__Gen* g, v__ast__AssignExpr node);
void v__gen__Gen_infix_expr(v__gen__Gen* g, v__ast__InfixExpr node);
void v__gen__Gen_match_expr(v__gen__Gen* g, v__ast__MatchExpr node);
void v__gen__Gen_ident(v__gen__Gen* g, v__ast__Ident node);
void v__gen__Gen_if_expr(v__gen__Gen* g, v__ast__IfExpr node);
void v__gen__Gen_index_expr(v__gen__Gen* g, v__ast__IndexExpr node);
void v__gen__Gen_return_statement(v__gen__Gen* g, v__ast__Return node);
void v__gen__Gen_const_decl(v__gen__Gen* g, v__ast__ConstDecl node);
void v__gen__Gen_const_decl_simple_define(v__gen__Gen* g, string name, string val);
void v__gen__Gen_struct_init(v__gen__Gen* g, v__ast__StructInit it);
void v__gen__Gen_assoc(v__gen__Gen* g, v__ast__Assoc node);
void v__gen__Gen_call_args(v__gen__Gen* g, array_v__ast__CallArg args, array_v__table__Type expected_types);
void v__gen__Gen_ref_or_deref_arg(v__gen__Gen* g, v__ast__CallArg arg, v__table__Type expected_type);
void v__gen__verror(string s);
void v__gen__Gen_write_init_function(v__gen__Gen* g);
void v__gen__Gen_write_str_definitions(v__gen__Gen* g);
array_string _const_v__gen__builtins; // inited later
void v__gen__Gen_write_builtin_types(v__gen__Gen* g);
void v__gen__Gen_write_sorted_types(v__gen__Gen* g);
void v__gen__Gen_write_types(v__gen__Gen* g, array_v__table__TypeSymbol types);
array_v__table__TypeSymbol v__gen__Gen_sort_structs(v__gen__Gen g, array_v__table__TypeSymbol typesa);
void v__gen__Gen_string_inter_literal(v__gen__Gen* g, v__ast__StringInterLiteral node);
void v__gen__Gen_gen_filter(v__gen__Gen* g, v__ast__CallExpr node);
void v__gen__Gen_insert_before(v__gen__Gen* g, string s);
void v__gen__Gen_call_expr(v__gen__Gen* g, v__ast__CallExpr node);
void v__gen__Gen_method_call(v__gen__Gen* g, v__ast__CallExpr node);
void v__gen__Gen_fn_call(v__gen__Gen* g, v__ast__CallExpr node);
void v__gen__Gen_or_block(v__gen__Gen* g, string var_name, array_v__ast__Stmt stmts, v__table__Type return_type);
multi_return_string_string v__gen__Gen_type_of_last_statement(v__gen__Gen* g, array_v__ast__Stmt stmts);
string v__gen__Gen_type_of_call_expr(v__gen__Gen* g, v__ast__Expr node);
void v__gen__Gen_in_optimization(v__gen__Gen* g, v__ast__Expr left, v__ast__ArrayInit right);
string v__gen__op_to_fn_name(string name);
string v__gen__comp_if_to_ifdef(string name);
string v__gen__c_name(string name_);
string v__gen__Gen_type_default(v__gen__Gen g, v__table__Type typ);
void v__gen__Gen_write_tests_main(v__gen__Gen* g);
array_string v__gen__Gen_get_all_test_function_names(v__gen__Gen g);
bool v__gen__Gen_is_importing_os(v__gen__Gen g);
void v__gen__Gen_comp_if(v__gen__Gen* g, v__ast__CompIf it);
void v__gen__Gen_go_stmt(v__gen__Gen* g, v__ast__GoStmt node);
void v__gen__Gen_gen_str_for_type(v__gen__Gen* g, v__table__TypeSymbol sym, string styp);
string v__gen__type_to_fmt(v__table__Type typ);
string _const_v__gen__c_commit_hash_default; // a string literal, inited later
string _const_v__gen__c_current_commit_hash_default; // a string literal, inited later
string _const_v__gen__c_common_macros; // a string literal, inited later
string _const_v__gen__c_headers; // inited later
string _const_v__gen__c_builtin_types; // a string literal, inited later
string _const_v__gen__bare_c_headers; // inited later
string v__gen__jsgen(v__ast__File program, v__table__Table* table);
void v__gen__JsGen_save(v__gen__JsGen* g);
void v__gen__JsGen_write(v__gen__JsGen* g, string s);
void v__gen__JsGen_writeln(v__gen__JsGen* g, string s);
void v__gen__JsGen_stmts(v__gen__JsGen* g, array_v__ast__Stmt stmts);
void v__gen__JsGen_stmt(v__gen__JsGen* g, v__ast__Stmt node);
void v__gen__JsGen_expr(v__gen__JsGen* g, v__ast__Expr node);
#define _const_v__gen__x64__mag0 0x7f
#define _const_v__gen__x64__mag1 'E'
#define _const_v__gen__x64__mag2 'L'
#define _const_v__gen__x64__mag3 'F'
#define _const_v__gen__x64__ei_class 4
#define _const_v__gen__x64__elfclass64 2
#define _const_v__gen__x64__elfdata2lsb 1
#define _const_v__gen__x64__ev_current 1
#define _const_v__gen__x64__elf_osabi 0
#define _const_v__gen__x64__et_rel 1
#define _const_v__gen__x64__et_exec 2
#define _const_v__gen__x64__et_dyn 3
#define _const_v__gen__x64__e_machine 0x3e
#define _const_v__gen__x64__shn_xindex 0xffff
#define _const_v__gen__x64__sht_null 0
#define _const_v__gen__x64__segment_start 0x400000
void v__gen__x64__Gen_generate_elf_header(v__gen__x64__Gen* g);
void v__gen__x64__Gen_generate_elf_footer(v__gen__x64__Gen* g);
void v__gen__x64__Gen_section_header(v__gen__x64__Gen* g, v__gen__x64__SectionConfig c);
void v__gen__x64__genobj();
void v__gen__x64__gen(array_v__ast__File files, string out_name);
i64 v__gen__x64__Gen_pos(v__gen__x64__Gen* g);
void v__gen__x64__Gen_write8(v__gen__x64__Gen* g, int n);
void v__gen__x64__Gen_write16(v__gen__x64__Gen* g, int n);
void v__gen__x64__Gen_write32(v__gen__x64__Gen* g, int n);
void v__gen__x64__Gen_write64(v__gen__x64__Gen* g, i64 n);
void v__gen__x64__Gen_write64_at(v__gen__x64__Gen* g, i64 n, i64 at);
void v__gen__x64__Gen_write_string(v__gen__x64__Gen* g, string s);
void v__gen__x64__Gen_inc(v__gen__x64__Gen* g, v__gen__x64__Register reg);
void v__gen__x64__Gen_cmp(v__gen__x64__Gen* g, v__gen__x64__Register reg, v__gen__x64__Size size, i64 val);
i64 v__gen__x64__abs(i64 a);
void v__gen__x64__Gen_jle(v__gen__x64__Gen* g, i64 addr);
void v__gen__x64__Gen_jl(v__gen__x64__Gen* g, i64 addr);
int v__gen__x64__Gen_abs_to_rel_addr(v__gen__x64__Gen* g, i64 addr);
void v__gen__x64__Gen_jmp(v__gen__x64__Gen* g, i64 addr);
void v__gen__x64__Gen_mov64(v__gen__x64__Gen* g, v__gen__x64__Register reg, i64 val);
void v__gen__x64__Gen_call(v__gen__x64__Gen* g, int addr);
void v__gen__x64__Gen_syscall(v__gen__x64__Gen* g);
void v__gen__x64__Gen_ret(v__gen__x64__Gen* g);
int v__gen__x64__Gen_gen_loop_start(v__gen__x64__Gen* g, int from);
void v__gen__x64__Gen_gen_loop_end(v__gen__x64__Gen* g, int to, int label);
void v__gen__x64__Gen_save_main_fn_addr(v__gen__x64__Gen* g);
void v__gen__x64__Gen_gen_print_from_expr(v__gen__x64__Gen* g, v__ast__Expr expr, bool newline);
void v__gen__x64__Gen_gen_print(v__gen__x64__Gen* g, string s);
void v__gen__x64__Gen_gen_exit(v__gen__x64__Gen* g);
void v__gen__x64__Gen_mov(v__gen__x64__Gen* g, v__gen__x64__Register reg, int val);
void v__gen__x64__Gen_register_function_address(v__gen__x64__Gen* g, string name);
void v__gen__x64__Gen_write(v__gen__x64__Gen* g, string s);
void v__gen__x64__Gen_writeln(v__gen__x64__Gen* g, string s);
void v__gen__x64__Gen_call_fn(v__gen__x64__Gen* g, string name);
void v__gen__x64__Gen_stmt(v__gen__x64__Gen* g, v__ast__Stmt node);
void v__gen__x64__Gen_expr(v__gen__x64__Gen* g, v__ast__Expr node);
void v__gen__x64__verror(string s);
#define _const_v__scanner__single_quote '\''
#define _const_v__scanner__double_quote '"'
bool _const_v__scanner__is_fmt; // inited later
#define _const_v__scanner__num_sep '_'
v__scanner__Scanner* v__scanner__new_scanner_file(string file_path, v__scanner__CommentsMode comments_mode);
v__scanner__Scanner* v__scanner__new_scanner(string text, v__scanner__CommentsMode comments_mode);
v__token__Token v__scanner__Scanner_new_token(v__scanner__Scanner* s, v__token__Kind tok_kind, string lit);
string v__scanner__Scanner_ident_name(v__scanner__Scanner* s);
string v__scanner__filter_num_sep(byteptr txt, int start, int end);
string v__scanner__Scanner_ident_bin_number(v__scanner__Scanner* s);
string v__scanner__Scanner_ident_hex_number(v__scanner__Scanner* s);
string v__scanner__Scanner_ident_oct_number(v__scanner__Scanner* s);
string v__scanner__Scanner_ident_dec_number(v__scanner__Scanner* s);
string v__scanner__Scanner_ident_number(v__scanner__Scanner* s);
void v__scanner__Scanner_skip_whitespace(v__scanner__Scanner* s);
v__token__Token v__scanner__Scanner_end_of_file(v__scanner__Scanner* s);
v__token__Token v__scanner__Scanner_scan(v__scanner__Scanner* s);
int v__scanner__Scanner_current_column(v__scanner__Scanner* s);
int v__scanner__Scanner_count_symbol_before(v__scanner__Scanner s, int p, byte sym);
string v__scanner__Scanner_ident_string(v__scanner__Scanner* s);
string v__scanner__Scanner_ident_char(v__scanner__Scanner* s);
bool v__scanner__Scanner_expect(v__scanner__Scanner* s, string want, int start_pos);
void v__scanner__Scanner_debug_tokens(v__scanner__Scanner* s);
void v__scanner__Scanner_ignore_line(v__scanner__Scanner* s);
void v__scanner__Scanner_eat_to_end_of_line(v__scanner__Scanner* s);
void v__scanner__Scanner_inc_line_number(v__scanner__Scanner* s);
string v__scanner__Scanner_line(v__scanner__Scanner s, int n);
bool v__scanner__is_name_char(byte c);
bool v__scanner__is_nl(byte c);
bool v__scanner__contains_capital(string s);
bool v__scanner__good_type_name(string s);
void v__scanner__Scanner_error(v__scanner__Scanner* s, string msg);
void v__scanner__verror(string s);
string v__scanner__cescaped_path(string s);
void v__depgraph__OrderedDepMap_set(v__depgraph__OrderedDepMap* o, string name, array_string deps);
void v__depgraph__OrderedDepMap_add(v__depgraph__OrderedDepMap* o, string name, array_string deps);
array_string v__depgraph__OrderedDepMap_get(v__depgraph__OrderedDepMap* o, string name);
void v__depgraph__OrderedDepMap_delete(v__depgraph__OrderedDepMap* o, string name);
void v__depgraph__OrderedDepMap_apply_diff(v__depgraph__OrderedDepMap* o, string name, array_string deps);
int v__depgraph__OrderedDepMap_size(v__depgraph__OrderedDepMap* o);
v__depgraph__DepGraph* v__depgraph__new_dep_graph();
void v__depgraph__DepGraph_add(v__depgraph__DepGraph* graph, string mod, array_string deps);
v__depgraph__DepGraph* v__depgraph__DepGraph_resolve(v__depgraph__DepGraph* graph);
v__depgraph__DepGraphNode v__depgraph__DepGraph_last_node(v__depgraph__DepGraph* graph);
string v__depgraph__DepGraph_display(v__depgraph__DepGraph* graph);
string v__depgraph__DepGraph_display_cycles(v__depgraph__DepGraph* graph);
// variadic structs
struct varg_byte {
	int len;
	byte args[0];
};

struct varg_string {
	int len;
	string args[5];
};

struct varg_int {
	int len;
	int args[1];
};


// >> string literal consts
void vinit_string_literals(){
	_const_digit_pairs = tos3("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	_const_os__path_separator = tos3("/");
	_const_internal__help__unknown_topic = tos3("V Error: Unknown help topic provided. Use `v help` for usage information.");
	_const_v__util__v_version = tos3("0.1.26");
	_const_math__bits__overflow_error = tos3("Overflow Error");
	_const_math__bits__divide_error = tos3("Divide Error");
	_const_time__days_string = tos3("MonTueWedThuFriSatSun");
	_const_time__months_string = tos3("JanFebMarAprMayJunJulAugSepOctNovDec");
	_const_v__gen__c_commit_hash_default = tos3("\n#ifndef V_COMMIT_HASH\n#define V_COMMIT_HASH \"@@@\"\n#endif\n\n");
	_const_v__gen__c_current_commit_hash_default = tos3("\n#ifndef V_CURRENT_COMMIT_HASH\n#define V_CURRENT_COMMIT_HASH \"@@@\"\n#endif\n\n");
	_const_v__gen__c_common_macros = tos3("\n#define EMPTY_STRUCT_DECLARATION\n#define EMPTY_STRUCT_INITIALIZATION 0\n// Due to a tcc bug, the length of an array needs to be specified, but GCC crashes if it is...\n#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[])\n#define TCCSKIP(x) x\n\n#ifdef __TINYC__\n#undef EMPTY_STRUCT_DECLARATION\n#undef EMPTY_STRUCT_INITIALIZATION\n#define EMPTY_STRUCT_DECLARATION char _dummy\n#define EMPTY_STRUCT_INITIALIZATION 0\n#undef EMPTY_ARRAY_OF_ELEMS\n#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[n])\n#undef TCCSKIP\n#define TCCSKIP(x)\n#endif\n\n// for __offset_of\n#ifndef __offsetof\n#define __offsetof(s,memb) \\\n    ((size_t)((char *)&((s *)0)->memb - (char *)0))\n#endif\n\n#define OPTION_CAST(x) (x)\n\n#ifndef V64_PRINTFORMAT\n#ifdef PRIx64\n#define V64_PRINTFORMAT \"0x%\"PRIx64\n#elif defined(__WIN32__)\n#define V64_PRINTFORMAT \"0x%I64x\"\n#elif defined(__LINUX__) && defined(__LP64__)\n#define V64_PRINTFORMAT \"0x%lx\"\n#else\n#define V64_PRINTFORMAT \"0x%llx\"\n#endif\n#endif\n\n");
	_const_v__gen__c_builtin_types = tos3("\n\n//================================== builtin types ================================*/\n\ntypedef int64_t i64;\ntypedef int16_t i16;\ntypedef int8_t i8;\ntypedef uint64_t u64;\ntypedef uint32_t u32;\ntypedef uint16_t u16;\ntypedef uint8_t byte;\ntypedef uint32_t rune;\ntypedef float f32;\ntypedef double f64;\ntypedef unsigned char* byteptr;\ntypedef int* intptr;\ntypedef void* voidptr;\ntypedef char* charptr;\ntypedef struct array array;\ntypedef struct map map;\ntypedef array array_string;\ntypedef array array_int;\ntypedef array array_byte;\ntypedef array array_f32;\ntypedef array array_f64;\ntypedef array array_u16;\ntypedef array array_u32;\ntypedef array array_u64;\ntypedef map map_int;\ntypedef map map_string;\ntypedef byte array_fixed_byte_300 [300];\ntypedef byte array_fixed_byte_400 [400];\n#ifndef bool\n	typedef int bool;\n	#define true 1\n	#define false 0\n#endif\n\n");
}
// << string literal consts


// >> typeof() support for sum types
char * v_typeof_sumtype_107(int sidx) { /* v.table.TypeInfo */ 
	switch(sidx) {
		case 107: return "v.table.TypeInfo";
		case 98: return "v.table.Array";
		case 99: return "v.table.ArrayFixed";
		case 100: return "v.table.Map";
		case 101: return "v.table.Struct";
		case 102: return "v.table.MultiReturn";
		case 103: return "v.table.Alias";
		case 104: return "v.table.Enum";
		case 105: return "v.table.SumType";
		case 106: return "v.table.FnType";
		default: return "unknown v.table.TypeInfo";
	}
}
char * v_typeof_sumtype_123(int sidx) { /* v.ast.Stmt */ 
	switch(sidx) {
		case 123: return "v.ast.Stmt";
		case 227: return "v.ast.GlobalDecl";
		case 126: return "v.ast.FnDecl";
		case 222: return "v.ast.Return";
		case 170: return "v.ast.Module";
		case 165: return "v.ast.Import";
		case 180: return "v.ast.ExprStmt";
		case 203: return "v.ast.ForStmt";
		case 218: return "v.ast.StructDecl";
		case 204: return "v.ast.ForCStmt";
		case 205: return "v.ast.ForInStmt";
		case 155: return "v.ast.CompIf";
		case 215: return "v.ast.ConstDecl";
		case 184: return "v.ast.Attr";
		case 174: return "v.ast.BranchStmt";
		case 226: return "v.ast.HashStmt";
		case 225: return "v.ast.AssignStmt";
		case 232: return "v.ast.EnumDecl";
		case 233: return "v.ast.TypeDecl";
		case 176: return "v.ast.DeferStmt";
		case 179: return "v.ast.GotoLabel";
		case 178: return "v.ast.GotoStmt";
		case 167: return "v.ast.Comment";
		case 173: return "v.ast.AssertStmt";
		case 175: return "v.ast.UnsafeStmt";
		case 177: return "v.ast.GoStmt";
		case 172: return "v.ast.Block";
		case 221: return "v.ast.InterfaceDecl";
		default: return "unknown v.ast.Stmt";
	}
}
char * v_typeof_sumtype_181(int sidx) { /* v.ast.Expr */ 
	switch(sidx) {
		case 181: return "v.ast.Expr";
		case 198: return "v.ast.InfixExpr";
		case 206: return "v.ast.IfExpr";
		case 210: return "v.ast.StringLiteral";
		case 214: return "v.ast.IntegerLiteral";
		case 191: return "v.ast.CharLiteral";
		case 213: return "v.ast.FloatLiteral";
		case 185: return "v.ast.Ident";
		case 156: return "v.ast.CallExpr";
		case 192: return "v.ast.BoolLiteral";
		case 186: return "v.ast.StructInit";
		case 212: return "v.ast.ArrayInit";
		case 202: return "v.ast.SelectorExpr";
		case 199: return "v.ast.PostfixExpr";
		case 182: return "v.ast.AssignExpr";
		case 200: return "v.ast.PrefixExpr";
		case 183: return "v.ast.IndexExpr";
		case 201: return "v.ast.RangeExpr";
		case 228: return "v.ast.MatchExpr";
		case 189: return "v.ast.CastExpr";
		case 190: return "v.ast.EnumVal";
		case 237: return "v.ast.Assoc";
		case 195: return "v.ast.SizeOf";
		case 194: return "v.ast.None";
		case 188: return "v.ast.MapInit";
		case 209: return "v.ast.IfGuardExpr";
		case 193: return "v.ast.ParExpr";
		case 158: return "v.ast.OrExpr";
		case 238: return "v.ast.ConcatExpr";
		case 231: return "v.ast.Type";
		case 197: return "v.ast.AsCast";
		case 196: return "v.ast.TypeOf";
		case 211: return "v.ast.StringInterLiteral";
		default: return "unknown v.ast.Expr";
	}
}
char * v_typeof_sumtype_233(int sidx) { /* v.ast.TypeDecl */ 
	switch(sidx) {
		case 233: return "v.ast.TypeDecl";
		case 236: return "v.ast.AliasTypeDecl";
		case 234: return "v.ast.SumTypeDecl";
		case 235: return "v.ast.FnTypeDecl";
		default: return "unknown v.ast.TypeDecl";
	}
}
char * v_typeof_sumtype_239(int sidx) { /* v.ast.ScopeObject */ 
	switch(sidx) {
		case 239: return "v.ast.ScopeObject";
		case 216: return "v.ast.ConstField";
		case 227: return "v.ast.GlobalDecl";
		case 157: return "v.ast.Var";
		default: return "unknown v.ast.ScopeObject";
	}
}
char * v_typeof_sumtype_241(int sidx) { /* v.ast.IdentInfo */ 
	switch(sidx) {
		case 241: return "v.ast.IdentInfo";
		case 240: return "v.ast.IdentFn";
		case 224: return "v.ast.IdentVar";
		default: return "unknown v.ast.IdentInfo";
	}
}
// << typeof() support for sum types


string _STR(const char *fmt, ...) {
	va_list argptr;
	va_start(argptr, fmt);
	size_t len = vsnprintf(0, 0, fmt, argptr) + 1;
	va_end(argptr);
	byte* buf = malloc(len);
	va_start(argptr, fmt);
	vsprintf((char *)buf, fmt, argptr);
	va_end(argptr);
#ifdef DEBUG_ALLOC
	puts("_STR:");
	puts(buf);
#endif
	return tos2(buf);
}

string _STR_TMP(const char *fmt, ...) {
	va_list argptr;
	va_start(argptr, fmt);
	//size_t len = vsnprintf(0, 0, fmt, argptr) + 1;
	va_end(argptr);
	va_start(argptr, fmt);
	vsprintf((char *)g_str_buf, fmt, argptr);
	va_end(argptr);
#ifdef DEBUG_ALLOC
	//puts("_STR_TMP:");
	//puts(g_str_buf);
#endif
	return tos2(g_str_buf);
} // endof _STR_TMP


array new_array(int mylen, int cap, int elm_size) { 
	int cap_ = (cap == 0 ? 1 : cap);
	array arr = (array){
		.len = mylen,
		.cap = cap_,
		.element_size = elm_size,
		.data = vcalloc(cap_ * elm_size),
	};
	return arr;
}

array make(int len, int cap, int elm_size) { 
	return new_array(len, cap, elm_size);
}

array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array) { 
	int cap_ = (cap == 0 ? 1 : cap);
	array arr = (array){
		.len = len,
		.cap = cap,
		.element_size = elm_size,
		.data = vcalloc(cap_ * elm_size),
	};
	memcpy(arr.data, c_array, len * elm_size);
	return arr;
}

array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, voidptr c_array) { 
	array arr = (array){
		.len = len,
		.cap = cap,
		.element_size = elm_size,
		.data = c_array,
	};
	return arr;
}

void array_ensure_cap(array* a, int required) { 
	if (required <= a->cap) {
		return;
	}
	int cap = (a->cap == 0 ? 2 : a->cap * 2);
	while (required > cap) {
		cap *= 2;
	}
	if (a->cap == 0) {
		a->data = vcalloc(cap * a->element_size);
	} else {
		a->data = realloc(a->data, cap * a->element_size);
	}
	a->cap = cap;
}

array array_repeat(array a, int count) { 
	if (count < 0) {
		v_panic(_STR("array.repeat: count is negative: %d", count));
	}
	int size = count * a.len * a.element_size;
	if (size == 0) {
		size = a.element_size;
	}
	array arr = (array){
		.len = count * a.len,
		.cap = count * a.len,
		.element_size = a.element_size,
		.data = vcalloc(size),
	};
	for (int tmp3 = 0; tmp3 < count; tmp3++) { 
		int i = tmp3;
		memcpy(((byteptr)(arr.data)) + i * a.len * a.element_size, ((byteptr)(a.data)), a.len * a.element_size);
	}
	return arr;
}

void array_sort_with_compare(array* a, voidptr compare) { 
	qsort(a->data, a->len, a->element_size, compare);
}

void array_insert(array* a, int i, voidptr val) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (i < 0 || i > a->len) {
			v_panic(_STR("array.insert: index out of range (i == %d, a.len == %d)", i, a->len));
		}
	#endif
	array_ensure_cap(a, a->len + 1);
	int size = a->element_size;
	memmove(((byteptr)(a->data)) + (i + 1) * size, ((byteptr)(a->data)) + i * size, (a->len - i) * size);
	memcpy(((byteptr)(a->data)) + i * size, val, size);
	a->len++;
}

void array_prepend(array* a, voidptr val) { 
	array_insert(a, 0, val);
}

void array_delete(array* a, int i) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (i < 0 || i >= a->len) {
			v_panic(_STR("array.delete: index out of range (i == %d, a.len == %d)", i, a->len));
		}
	#endif
	int size = a->element_size;
	memmove(((byteptr)(a->data)) + i * size, ((byteptr)(a->data)) + (i + 1) * size, (a->len - i) * size);
	a->len--;
}

void array_clear(array* a) { 
	a->len = 0;
}

void array_trim(array* a, int index) { 
	if (index < a->len) {
		a->len = index;
	}
}

voidptr array_get(array a, int i) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (i < 0 || i >= a.len) {
			v_panic(_STR("array.get: index out of range (i == %d, a.len == %d)", i, a.len));
		}
	#endif
	return ((byteptr)(a.data)) + i * a.element_size;
}

voidptr array_first(array a) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (a.len == 0) {
			v_panic(tos3("array.first: array is empty"));
		}
	#endif
	return a.data;
}

voidptr array_last(array a) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (a.len == 0) {
			v_panic(tos3("array.last: array is empty"));
		}
	#endif
	return ((byteptr)(a.data)) + (a.len - 1) * a.element_size;
}

array array_slice(array a, int start, int _end) { 
	int end = _end;
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (start > end) {
			v_panic(_STR("array.slice: invalid slice index (%d > %d)", start, end));
		}
		if (end > a.len) {
			v_panic(_STR("array.slice: slice bounds out of range (%d >= %d)", end, a.len));
		}
		if (start < 0) {
			v_panic(_STR("array.slice: slice bounds out of range (%d < 0)", start));
		}
	#endif
	int l = end - start;
	array res = (array){
		.element_size = a.element_size,
		.data = ((byteptr)(a.data)) + start * a.element_size,
		.len = l,
		.cap = l,
	};
	return res;
}

array array_slice2(array a, int start, int _end, bool end_max) { 
	int end = (end_max ? a.len : _end);
	return array_slice(a, start, end);
}

array array_clone(array* a) { 
	int size = a->cap * a->element_size;
	if (size == 0) {
		size++;
	}
	array arr = (array){
		.len = a->len,
		.cap = a->cap,
		.element_size = a->element_size,
		.data = vcalloc(size),
	};
	memcpy(((byteptr)(arr.data)), a->data, a->cap * a->element_size);
	return arr;
}

array array_slice_clone(array* a, int start, int _end) { 
	int end = _end;
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (start > end) {
			v_panic(_STR("array.slice: invalid slice index (%d > %d)", start, end));
		}
		if (end > a->len) {
			v_panic(_STR("array.slice: slice bounds out of range (%d >= %d)", end, a->len));
		}
		if (start < 0) {
			v_panic(_STR("array.slice: slice bounds out of range (%d < 0)", start));
		}
	#endif
	int l = end - start;
	array res = (array){
		.element_size = a->element_size,
		.data = ((byteptr)(a->data)) + start * a->element_size,
		.len = l,
		.cap = l,
	};
	return array_clone(&res);
}

void array_set(array* a, int i, voidptr val) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (i < 0 || i >= a->len) {
			v_panic(_STR("array.set: index out of range (i == %d, a.len == %d)", i, a->len));
		}
	#endif
	memcpy(((byteptr)(a->data)) + a->element_size * i, val, a->element_size);
}

void array_push(array* a, voidptr val) { 
	array_ensure_cap(a, a->len + 1);
	memcpy(((byteptr)(a->data)) + a->element_size * a->len, val, a->element_size);
	a->len++;
}

void array_push_many(array* a3, voidptr val, int size) { 
	if (a3->data == val) {
		array copy = array_clone(a3);
		array_ensure_cap(a3, a3->len + size);
		memcpy(((byteptr)(a3->data)) + a3->element_size * a3->len, copy.data, a3->element_size * size);
	} else {
		array_ensure_cap(a3, a3->len + size);
		memcpy(((byteptr)(a3->data)) + a3->element_size * a3->len, val, a3->element_size * size);
	}
	a3->len += size;
}

array array_reverse(array a) { 
	if (a.len < 2) {
		return a;
	}
	array arr = (array){
		.len = a.len,
		.cap = a.cap,
		.element_size = a.element_size,
		.data = vcalloc(a.cap * a.element_size),
	};
	for (int tmp2 = 0; tmp2 < a.len; tmp2++) { 
		int i = tmp2;
		memcpy(((byteptr)(arr.data)) + i * arr.element_size, ((byteptr)(a.data)) + (a.len - 1 - i) * arr.element_size, arr.element_size);
	}
	return arr;
}

//[unsafe_fn]
void array_free(array a) { 
	free(a.data);
}

string array_string_str(array_string a) { 
	strings__Builder sb = strings__new_builder(a.len * 3);
	strings__Builder_write(&sb, tos3("["));
	for (int tmp1 = 0; tmp1 < a.len; tmp1++) { 
		int i = tmp1;
		string val = (*(string*)array_get(a, i));
		strings__Builder_write(&sb, tos3("\""));
		strings__Builder_write(&sb, val);
		strings__Builder_write(&sb, tos3("\""));
		if (i < a.len - 1) {
			strings__Builder_write(&sb, tos3(", "));
		}
	}
	strings__Builder_write(&sb, tos3("]"));
	return strings__Builder_str(&sb);
}

string array_int_str(array_int a) { 
	strings__Builder sb = strings__new_builder(a.len * 13);
	strings__Builder_write(&sb, tos3("["));
	for (int tmp1 = 0; tmp1 < a.len; tmp1++) { 
		int i = tmp1;
		string val = int_str((*(int*)array_get(a, i)));
		strings__Builder_write(&sb, val);
		if ((*(int*)array_get(a, i)) != 0) {
			string_free(val);
		}
		if (i < a.len - 1) {
			strings__Builder_write(&sb, tos3(", "));
		}
	}
	strings__Builder_write(&sb, tos3("]"));
	return strings__Builder_str(&sb);
}

string array_bool_str(array_bool a) { 
	strings__Builder sb = strings__new_builder(a.len * 3);
	strings__Builder_write(&sb, tos3("["));
	for (int tmp1 = 0; tmp1 < a.len; tmp1++) { 
		int i = tmp1;
		bool val = (*(bool*)array_get(a, i));
		if (val) {
			strings__Builder_write(&sb, tos3("true"));
		} else {
			strings__Builder_write(&sb, tos3("false"));
		}
		if (i < a.len - 1) {
			strings__Builder_write(&sb, tos3(", "));
		}
	}
	strings__Builder_write(&sb, tos3("]"));
	return strings__Builder_str(&sb);
}

string array_byte_hex(array_byte b) { 
	byteptr hex = v_malloc(b.len * 2 + 1);
	int dst_i = 0;
	// FOR IN
	for (int tmp1 = 0; tmp1 < b.
	len; tmp1++) {	byte i = ((byte*)b.
	data)[tmp1];byte n0 = i >> 4;
		hex[dst_i++] = (n0 < 10 ? n0 + '0' : n0 + 87);
		byte n1 = (i & 0xF);
		hex[dst_i++] = (n1 < 10 ? n1 + '0' : n1 + 87);
	}
	hex[dst_i] = '\0';
	return tos(hex, dst_i);
}

int copy(array_byte dst, array_byte src) { 
	if (dst.len > 0 && src.len > 0) {
		int min = 0;
		min = (dst.len < src.len ? dst.len : src.len);
		memcpy(((byteptr)(dst.data)), array_slice(src, 0, min).data, dst.element_size * min);
		return min;
	}
	return 0;
}

int compare_ints(int* a, int* b) { 
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

void array_int_sort(array_int* a) { 
	array_sort_with_compare(a, &/*qq*/compare_ints);
}

int array_string_index(array_string a, string v) { 
	for (int tmp1 = 0; tmp1 < a.len; tmp1++) { 
		int i = tmp1;
		if (string_eq((*(string*)array_get(a, i)), v)) {
			return i;
		}
	}
	return -1;
}

int array_int_index(array_int a, int v) { 
	for (int tmp1 = 0; tmp1 < a.len; tmp1++) { 
		int i = tmp1;
		if ((*(int*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_byte_index(array_byte a, byte v) { 
	for (int tmp1 = 0; tmp1 < a.len; tmp1++) { 
		int i = tmp1;
		if ((*(byte*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_char_index(array_char a, char v) { 
	for (int tmp1 = 0; tmp1 < a.len; tmp1++) { 
		int i = tmp1;
		if ((*(char*)array_get(a, i)) == v) {
			return i;
		}
	}
	return -1;
}

int array_int_reduce(array_int a, int (*iter)(int accum, int curr), int accum_start) { 
	int accum_ = accum_start;
	// FOR IN
	for (int tmp1 = 0; tmp1 < a.
	len; tmp1++) {	int i = ((int*)a.
	data)[tmp1];accum_ = iter(accum_, i);
	}
	return accum_;
}

bool array_string_eq(array_string a1, array_string a2) { 
	if (a1.len != a2.len) {
		return false;
	}
	for (int tmp2 = 0; tmp2 < a1.len; tmp2++) { 
		int i = tmp2;
		if (string_ne((*(string*)array_get(a1, i)), (*(string*)array_get(a2, i)))) {
			return false;
		}
	}
	return true;
}

int compare_i64(i64* a, i64* b) { 
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

int compare_f64(f64* a, f64* b) { 
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

int compare_f32(f32* a, f32* b) { 
	if (*a < *b) {
		return -1;
	}
	if (*a > *b) {
		return 1;
	}
	return 0;
}

array_voidptr array_pointers(array a) { 
	array_voidptr res = new_array(0, 0, sizeof(voidptr));
	for (int tmp1 = 0; tmp1 < a.len; tmp1++) { 
		int i = tmp1;
		_PUSH(&res, (((byteptr)(a.data)) + i * a.element_size), tmp2, voidptr);
	}
	return res;
}

void v_exit(int code) { 
	exit(code);
}

bool isnil(voidptr v) { 
	return v == 0;
}

void print_backtrace_skipping_top_frames(int skipframes) { 
	
#ifdef _WIN32
	// #if windows
		
#ifdef _MSC_VER
		// #if msvc
			if (print_backtrace_skipping_top_frames_msvc(skipframes)) {
				return;
			}
		#endif
		
#ifdef __MINGW32__
		// #if mingw
			if (print_backtrace_skipping_top_frames_mingw(skipframes)) {
				return;
			}
		#endif
	#else
		if (print_backtrace_skipping_top_frames_nix(skipframes)) {
			return;
		}
	#endif
	println(tos3("print_backtrace_skipping_top_frames is not implemented on this platform for now...\n"));
}

void print_backtrace() { 
	print_backtrace_skipping_top_frames(2);
}

void panic_debug(int line_no, string file, string mod, string fn_name, string s) { 
	println(tos3("================ V panic ================"));
	println(_STR("   module: %.*s", mod.len, mod.str));
	println(_STR(" function: %.*s()", fn_name.len, fn_name.str));
	println(_STR("     file: %.*s", file.len, file.str));
	println(string_add(tos3("     line: "), int_str(line_no)));
	println(_STR("  message: %.*s", s.len, s.str));
	println(tos3("========================================="));
	print_backtrace_skipping_top_frames(1);
	exit(1);
}

void v_panic(string s) { 
	println(_STR("V panic: %.*s", s.len, s.str));
	print_backtrace();
	exit(1);
}

void eprintln(string s) { 
	if (isnil(s.str)) {
		v_panic(tos3("eprintln(NIL)"));
	}
	
#ifndef _WIN32
	// #if not windows
		fflush(stdout);
		fflush(stderr);
		fprintf(stderr, "%.*s\n", s.len, s.str);
		fflush(stderr);
		return;
	#endif
	println(s);
}

void eprint(string s) { 
	if (isnil(s.str)) {
		v_panic(tos3("eprint(NIL)"));
	}
	
#ifndef _WIN32
	// #if not windows
		fflush(stdout);
		fflush(stderr);
		fprintf(stderr, "%.*s", s.len, s.str);
		fflush(stderr);
		return;
	#endif
	print(s);
}

void print(string s) { 
	
#ifdef _WIN32
	// #if windows
		voidptr output_handle = GetStdHandle(STD_OUTPUT_HANDLE);
		int bytes_written = 0;
		if (is_atty(1) > 0) {
			u16* wide_str = string_to_wide(s);
			int wide_len = wcslen(wide_str);
			WriteConsole(output_handle, wide_str, wide_len, &bytes_written, 0);
		} else {
			WriteFile(output_handle, s.str, s.len, &bytes_written, 0);
		}
	#else
		printf("%.*s", s.len, s.str);
	#endif
}

void looo() { 
}

//[unsafe_fn]
byteptr v_malloc(int n) { 
	if (n <= 0) {
		v_panic(tos3("malloc(<=0)"));
	}
	
#ifdef VPREALLOC
	// #if prealloc
		byteptr res = g_m2_ptr;
		g_m2_ptr += n;
		nr_mallocs++;
		return res;
	#else
		byteptr ptr = malloc(n);
		if (ptr == 0) {
			v_panic(_STR("malloc(%d) failed", n));
		}
		return ptr;
	#endif
}

byteptr v_calloc(int n) { 
	return calloc(n, 1);
}

byteptr vcalloc(int n) { 
	if (n <= 0) {
		v_panic(tos3("calloc(<=0)"));
	}
	return calloc(n, 1);
}

//[unsafe_fn]
void v_free(voidptr ptr) { 
	free(ptr);
}

voidptr memdup(voidptr src, int sz) { 
	if (sz == 0) {
		return vcalloc(1);
	}
	byteptr mem = v_malloc(sz);
	return memcpy(mem, src, sz);
}

void v_ptr_free(voidptr ptr) { 
	free(ptr);
}

int is_atty(int fd) { 
	
#ifdef _WIN32
	// #if windows
		u32 mode = ((u32)(0));
		voidptr osfh = ((voidptr)(_get_osfhandle(fd)));
		GetConsoleMode(osfh, ((voidptr)(&mode)));
		return ((int)(mode));
	#else
		return isatty(fd);
	#endif
}

void builtin_init() { 
}

void println(string s) { 
	printf("%.*s\n", s.len, s.str);
}

bool print_backtrace_skipping_top_frames_msvc(int skipframes) { 
	println(tos3("not implemented, see builtin_windows.v"));
	return false;
}

bool print_backtrace_skipping_top_frames_mingw(int skipframes) { 
	println(tos3("not implemented, see builtin_windows.v"));
	return false;
}

bool print_backtrace_skipping_top_frames_nix(int xskipframes) { 
	int skipframes = xskipframes + 2;
	
#ifdef __APPLE__
	// #if macos
		return print_backtrace_skipping_top_frames_mac(skipframes);
	#endif
	
#ifdef __linux__
	// #if linux
		return print_backtrace_skipping_top_frames_linux(skipframes);
	#endif
	
#ifdef __FreeBSD__
	// #if freebsd
		return print_backtrace_skipping_top_frames_freebsd(skipframes);
	#endif
	
#ifdef __NetBSD__
	// #if netbsd
		return print_backtrace_skipping_top_frames_freebsd(skipframes);
	#endif
	
#ifdef __OpenBSD__
	// #if openbsd
		return print_backtrace_skipping_top_frames_freebsd(skipframes);
	#endif
	return false;
}

bool print_backtrace_skipping_top_frames_mac(int skipframes) { 
	
#ifdef __APPLE__
	// #if macos
		array_fixed_byteptr_100 buffer= {0};
		int nr_ptrs = backtrace(&/*qq*/buffer, 100);
		backtrace_symbols_fd(&buffer[skipframes], nr_ptrs - skipframes, 1);
	#endif
	return true;
}

bool print_backtrace_skipping_top_frames_freebsd(int skipframes) { 
	
#ifdef __FreeBSD__
	// #if freebsd
		array_fixed_byteptr_100 buffer= {0};
		int nr_ptrs = backtrace(&/*qq*/buffer, 100);
		backtrace_symbols_fd(&buffer[skipframes], nr_ptrs - skipframes, 1);
	#endif
	return true;
}

bool print_backtrace_skipping_top_frames_linux(int skipframes) { 
	
#ifdef tinyc
	// #if tinyc
		println(_STR("TODO: print_backtrace_skipping_top_frames_linux %d with tcc fails tests with \"stack smashing detected\" .", skipframes));
		return false;
	#endif
	
#ifndef __ANDROID__
	// #if not android
		
#ifdef __GLIBC__
		// #if glibc
			array_fixed_byteptr_100 buffer= {0};
			int nr_ptrs = backtrace(&/*qq*/buffer, 100);
			int nr_actual_frames = nr_ptrs - skipframes;
			array_string sframes = new_array(0, 0, sizeof(string));
			byteptr* csymbols = backtrace_symbols(&buffer[skipframes], nr_actual_frames);
			for (int tmp1 = 0; tmp1 < nr_actual_frames; tmp1++) { 
				int i = tmp1;
				_PUSH(&sframes, (tos2(((byteptr)(((voidptr)(csymbols[i])))))), tmp2, string);
			}
			// FOR IN
			for (int tmp3 = 0; tmp3 < sframes.
			len; tmp3++) {	string sframe = ((string*)sframes.
			data)[tmp3];string executable = string_all_before(sframe, tos3("("));
				string addr = string_all_before(string_all_after(sframe, tos3("[")), tos3("]"));
				string beforeaddr = string_all_before(sframe, tos3("["));
				string cmd = _STR("addr2line -e %.*s %.*s", executable.len, executable.str, addr.len, addr.str);
				voidptr f = popen(cmd.str, "r");
				if (isnil(f)) {
					println(sframe);
					continue;
				}
				array_fixed_byte_1000 buf= {0};
				string output = tos3("");
				while (fgets(((charptr)(buf)), 1000, f) != 0) {
					output = string_add(output, tos(&/*qq*/buf, vstrlen(&/*qq*/buf)));
				}
				output = string_add(string_trim_space(output), tos3(":"));
				if (pclose(f) != 0) {
					println(sframe);
					continue;
				}
				if ((string_eq(output, tos3("??:0:")) || string_eq(output, tos3("??:?:")))) {
					output = tos3("");
				}
				output = string_replace(output, tos3(" (discriminator"), tos3(": (d."));
				println(_STR("%-46s | %14s | %.*s", output.str, addr.str, beforeaddr.len, beforeaddr.str));
			}
			return true;
		#else
			println(tos3("backtrace_symbols_fd is missing, so printing backtraces is not available.\n"));
			println(tos3("Some libc implementations like musl simply do not provide it."));
		#endif
	#endif
	return false;
}










int backtrace(voidptr a, int b);

byteptr* backtrace_symbols(voidptr, int);

void backtrace_symbols_fd(voidptr, int, int);

int proc_pidpath(int, voidptr, int);



























































































































//[inline]
string f64_str(f64 d) { 
	return strconv__ftoa__ftoa_64(d);
}

//[inline]
string f64_strsci(f64 x, int digit_num) { 
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 17) {
		n_digit = 17;
	}
	return strconv__ftoa__f64_to_str(x, n_digit);
}

//[inline]
string f64_strlong(f64 x) { 
	return strconv__ftoa__f64_to_str_l(x);
}

//[inline]
string f32_str(f32 d) { 
	return strconv__ftoa__ftoa_32(d);
}

//[inline]
string f32_strsci(f32 x, int digit_num) { 
	int n_digit = digit_num;
	if (n_digit < 1) {
		n_digit = 1;
	} else if (n_digit > 8) {
		n_digit = 8;
	}
	return strconv__ftoa__f32_to_str(x, n_digit);
}

//[inline]
string f32_strlong(f32 x) { 
	return strconv__ftoa__f32_to_str_l(x);
}

//[inline]
f32 f32_abs(f32 a) { 
	return (a < 0 ? -a : a);
}

//[inline]
f64 f64_abs(f64 a) { 
	return (a < 0 ? -a : a);
}

//[inline]
bool f64_eq(f64 a, f64 b) { 
	return f64_abs(a - b) <= DBL_EPSILON;
}

//[inline]
bool f32_eq(f32 a, f32 b) { 
	return f32_abs(a - b) <= FLT_EPSILON;
}

bool f64_eqbit(f64 a, f64 b) { 
	return DEFAULT_EQUAL(a, b);
}

bool f32_eqbit(f32 a, f32 b) { 
	return DEFAULT_EQUAL(a, b);
}

bool f64_ne(f64 a, f64 b) { 
	return !f64_eq(a, b);
}

bool f32_ne(f32 a, f32 b) { 
	return !f32_eq(a, b);
}

bool f64_nebit(f64 a, f64 b) { 
	return DEFAULT_NOT_EQUAL(a, b);
}

bool f32_nebit(f32 a, f32 b) { 
	return DEFAULT_NOT_EQUAL(a, b);
}

bool f64_lt(f64 a, f64 b) { 
	return f64_ne(a, b) && f64_ltbit(a, b);
}

bool f32_lt(f32 a, f32 b) { 
	return f32_ne(a, b) && f32_ltbit(a, b);
}

bool f64_ltbit(f64 a, f64 b) { 
	return DEFAULT_LT(a, b);
}

bool f32_ltbit(f32 a, f32 b) { 
	return DEFAULT_LT(a, b);
}

bool f64_le(f64 a, f64 b) { 
	return !f64_gt(a, b);
}

bool f32_le(f32 a, f32 b) { 
	return !f32_gt(a, b);
}

bool f64_lebit(f64 a, f64 b) { 
	return DEFAULT_LE(a, b);
}

bool f32_lebit(f32 a, f32 b) { 
	return DEFAULT_LE(a, b);
}

bool f64_gt(f64 a, f64 b) { 
	return f64_ne(a, b) && f64_gtbit(a, b);
}

bool f32_gt(f32 a, f32 b) { 
	return f32_ne(a, b) && f32_gtbit(a, b);
}

bool f64_gtbit(f64 a, f64 b) { 
	return DEFAULT_GT(a, b);
}

bool f32_gtbit(f32 a, f32 b) { 
	return DEFAULT_GT(a, b);
}

bool f64_ge(f64 a, f64 b) { 
	return !f64_lt(a, b);
}

bool f32_ge(f32 a, f32 b) { 
	return !f32_lt(a, b);
}

bool f64_gebit(f64 a, f64 b) { 
	return DEFAULT_GE(a, b);
}

bool f32_gebit(f32 a, f32 b) { 
	return DEFAULT_GE(a, b);
}

string ptr_str(voidptr ptr) { 
	string buf1 = u64_hex(((u64)(ptr)));
	return buf1;
}

//[inline]
string int_str_l(int nn, int max) { 
	int n = nn;
	int d = 0;
	if (n == 0) {
		return tos3("0");
	}
	byteptr buf = v_malloc(max + 1);
	bool is_neg = false;
	if (n < 0) {
		n = -n;
		is_neg = true;
	}
	int index = max;
	buf[index--] = '\0';
	while (n > 0) {
		int n1 = n / 100;
		d = ((n - (n1 * 100)) << 1);
		n = n1;
		buf[index--] = _const_digit_pairs.str[d++];
		buf[index--] = _const_digit_pairs.str[d];
	}
	index++;
	if (d < 20) {
		index++;
	}
	if (is_neg) {
		index--;
		buf[index] = '-';
	}
	memmove(buf, buf + index, (max - index) + 1);
	return tos(buf, (max - index));
}

string i8_str(i8 n) { 
	return int_str_l(((int)(n)), 5);
}

string i16_str(i16 n) { 
	return int_str_l(((int)(n)), 7);
}

string u16_str(u16 n) { 
	return int_str_l(((int)(n)), 7);
}

string int_str(int n) { 
	return int_str_l(n, 12);
}

string u32_str(u32 nn) { 
	u32 n = nn;
	u32 d = ((u32)(0));
	if (n == 0) {
		return tos3("0");
	}
	int max = 12;
	byteptr buf = v_malloc(max + 1);
	int index = max;
	buf[index--] = '\0';
	while (n > 0) {
		u32 n1 = n / ((u32)(100));
		d = ((n - (n1 * ((u32)(100)))) << ((u32)(1)));
		n = n1;
		buf[index--] = string_at(_const_digit_pairs, d++);
		buf[index--] = string_at(_const_digit_pairs, d);
	}
	index++;
	if (d < ((u32)(20))) {
		index++;
	}
	memmove(buf, buf + index, (max - index) + 1);
	return tos(buf, (max - index));
}

string i64_str(i64 nn) { 
	i64 n = nn;
	i64 d = ((i64)(0));
	if (n == 0) {
		return tos3("0");
	}
	int max = 20;
	byteptr buf = vcalloc(max + 1);
	bool is_neg = false;
	if (n < 0) {
		n = -n;
		is_neg = true;
	}
	int index = max;
	buf[index--] = '\0';
	while (n > 0) {
		i64 n1 = n / ((i64)(100));
		d = ((n - (n1 * ((i64)(100)))) << ((i64)(1)));
		n = n1;
		buf[index--] = string_at(_const_digit_pairs, d++);
		buf[index--] = string_at(_const_digit_pairs, d);
	}
	index++;
	if (d < ((i64)(20))) {
		index++;
	}
	if (is_neg) {
		index--;
		buf[index] = '-';
	}
	memmove(buf, buf + index, (max - index) + 1);
	return tos(buf, (max - index));
}

string u64_str(u64 nn) { 
	u64 n = nn;
	int d = 0;
	if (n == 0) {
		return tos3("0");
	}
	int max = 20;
	byteptr buf = vcalloc(max + 1);
	int index = max;
	buf[index--] = '\0';
	while (n > 0) {
		u64 n1 = n / 100;
		d = ((n - (n1 * 100)) << 1);
		n = n1;
		buf[index--] = string_at(_const_digit_pairs, d++);
		buf[index--] = string_at(_const_digit_pairs, d);
	}
	index++;
	if (d < 20) {
		index++;
	}
	memmove(buf, buf + index, (max - index) + 1);
	return tos(buf, (max - index));
}

string bool_str(bool b) { 
	if (b) {
		return tos3("true");
	}
	return tos3("false");
}

string byte_hex(byte nn) { 
	if (nn == 0) {
		return tos3("0");
	}
	byte n = nn;
	int max = 2;
	byteptr buf = v_malloc(max + 1);
	int index = max;
	buf[index--] = '\0';
	while (n > 0) {
		byte d = (n & 0xF);
		n = n >> 4;
		buf[index--] = (d < 10 ? d + '0' : d + 87);
	}
	index++;
	return tos(buf + index, (max - index));
}

string i8_hex(i8 nn) { 
	return byte_hex(((byte)(nn)));
}

string u16_hex(u16 nn) { 
	if (nn == 0) {
		return tos3("0");
	}
	u16 n = nn;
	int max = 5;
	byteptr buf = v_malloc(max + 1);
	int index = max;
	buf[index--] = '\0';
	while (n > 0) {
		u16 d = (n & 0xF);
		n = n >> 4;
		buf[index--] = (d < 10 ? d + '0' : d + 87);
	}
	index++;
	return tos(buf + index, (max - index));
}

string i16_hex(i16 nn) { 
	return u16_hex(((u16)(nn)));
}

string u32_hex(u32 nn) { 
	if (nn == 0) {
		return tos3("0");
	}
	u32 n = nn;
	int max = 10;
	byteptr buf = v_malloc(max + 1);
	int index = max;
	buf[index--] = '\0';
	while (n > 0) {
		u32 d = (n & 0xF);
		n = n >> 4;
		buf[index--] = (d < 10 ? d + '0' : d + 87);
	}
	index++;
	return tos(buf + index, (max - index));
}

string int_hex(int nn) { 
	return u32_hex(((u32)(nn)));
}

string u64_hex(u64 nn) { 
	if (nn == 0) {
		return tos3("0");
	}
	u64 n = nn;
	int max = 18;
	byteptr buf = v_malloc(max + 1);
	int index = max;
	buf[index--] = '\0';
	while (n > 0) {
		u64 d = (n & 0xF);
		n = n >> 4;
		buf[index--] = (d < 10 ? d + '0' : d + 87);
	}
	index++;
	memmove(buf, buf + index, (max - index) + 1);
	return tos(buf, (max - index));
}

string i64_hex(i64 nn) { 
	return u64_hex(((u64)(nn)));
}

bool array_byte_contains(array_byte a, byte val) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < a.
	len; tmp1++) {	byte aa = ((byte*)a.
	data)[tmp1];if (aa == val) {
			return true;
		}
	}
	return false;
}

string rune_str(rune c) { 
	int fst_byte = (((int)(c)) >> 8 * 3 & 0xff);
	int len = utf8_char_len(fst_byte);
	string str = (string){
		.len = len,
		.str = v_malloc(len + 1),
	};
	for (int tmp1 = 0; tmp1 < len; tmp1++) { 
		int i = tmp1;
		str.str[i] = (((int)(c)) >> 8 * (3 - i) & 0xff);
	}
	str.str[len] = '\0';
	return str;
}

string byte_str(byte c) { 
	string str = (string){
		.len = 1,
		.str = v_malloc(2),
	};
	str.str[0] = c;
	str.str[1] = '\0';
	return str;
}

bool byte_is_capital(byte c) { 
	return c >= 'A' && c <= 'Z';
}

array_byte array_byte_clone(array_byte b) { 
	array_byte res = array_repeat(new_array_from_c_array(1, 1, sizeof(byte), (byte[1]){	
	((byte)(0)), 
}), b.len);
	for (int tmp1 = 0; tmp1 < b.len; tmp1++) { 
		int i = tmp1;
		array_set(&res, i, &(byte[]) { (*(byte*)array_get(b, i)) });
	}
	return res;
}

//[inline]
DenseArray new_dense_array() { 
		return (DenseArray){
			.cap = 8,
			.size = 0,
			.deletes = 0,
			.data = ((KeyValue*)(v_malloc(8 * sizeof(KeyValue)))),
		};
}

//[inline]
u32 DenseArray_push(DenseArray* d, KeyValue kv) { 
	if (d->cap == d->size) {
		d->cap += d->cap >> 3;
		d->data = ((KeyValue*)(realloc(d->data, sizeof(KeyValue) * d->cap)));
	}
	u32 push_index = d->size;
	d->data[push_index] = kv;
	d->size++;
	return push_index;
}

void DenseArray_zeros_to_end(DenseArray* d) { 
	u32 count = ((u32)(0));
	for (int tmp1 = 0; tmp1 < d->size; tmp1++) { 
		int i = tmp1;
		if (d->data[i].key.str != 0) {
			KeyValue tmp = d->data[count];
			d->data[count] = d->data[i];
			d->data[i] = tmp;
			count++;
		}
	}
	d->deletes = 0;
	d->size = count;
	d->cap = (count < 8 ? 8 : count);
	d->data = ((KeyValue*)(realloc(d->data, sizeof(KeyValue) * d->cap)));
}

map new_map(int n, int value_bytes) { 
	return (map){
		.value_bytes = value_bytes,
		.cap = _const_init_cap,
		.window = _const_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array(),
		.metas = ((u32*)(vcalloc(sizeof(u32) * (_const_init_capicity + _const_extra_metas_inc)))),
		.extra_metas = _const_extra_metas_inc,
		.size = 0,
	};
}

map new_map_init(int n, int value_bytes, string* keys, voidptr values) { 
	map out = new_map(n, value_bytes);
	for (int tmp1 = 0; tmp1 < n; tmp1++) { 
		int i = tmp1;
		map_set(&out, keys[i], ((byteptr)(values)) + i * value_bytes);
	}
	return out;
}

//[inline]
multi_return_u32_u32 map_key_to_index(map m, string key) { 
	u32 hash = ((u32)(hash__wyhash__wyhash_c(key.str, ((u64)(key.len)), 0)));
	u32 index = (hash & m.cap);
	u32 meta = ((((hash >> m.shift) & _const_hash_mask)) | _const_probe_inc);
	return (multi_return_u32_u32){.arg0=index,.arg1=meta};
}

//[inline]
multi_return_u32_u32 meta_less(u32* metas, u32 i, u32 m) { 
	u32 index = i;
	u32 meta = m;
	while (meta < metas[index]) {
		index += 2;
		meta += _const_probe_inc;
	}
	return (multi_return_u32_u32){.arg0=index,.arg1=meta};
}

//[inline]
u32* map_meta_greater(map* m, u32* ms, u32 i, u32 me, u32 kvi) { 
	u32* metas = ms;
	u32 meta = me;
	u32 index = i;
	u32 kv_index = kvi;
	while (metas[index] != 0) {
		if (meta > metas[index]) {
			u32 tmp_meta = metas[index];
			metas[index] = meta;
			meta = tmp_meta;
			u32 tmp_index = metas[index + 1];
			metas[index + 1] = kv_index;
			kv_index = tmp_index;
		}
		index += 2;
		meta += _const_probe_inc;
	}
	metas[index] = meta;
	metas[index + 1] = kv_index;
	u32 probe_count = (meta >> _const_hashbits) - 1;
	if ((probe_count << 1) == m->extra_metas) {
		m->extra_metas += _const_extra_metas_inc;
		u32 mem_size = (m->cap + 2 + m->extra_metas);
		metas = ((u32*)(realloc(metas, sizeof(u32) * mem_size)));
		memset(metas + mem_size - _const_extra_metas_inc, 0, sizeof(u32) * _const_extra_metas_inc);
		if (probe_count == 252) {
			v_panic(tos3("Probe overflow"));
		}
	}
	return metas;
}

void map_set(map* m, string key, voidptr value) { 
	f32 load_factor = ((f32)(m->size << 1)) / ((f32)(m->cap));
	if (load_factor > _const_max_load_factor) {
		map_expand(m);
	}
	multi_return_u32_u32 mr_7102 = map_key_to_index(/*rec*/*m, key);
	u32 index = mr_7102.arg0;
	u32 meta = mr_7102.arg1;
	multi_return_u32_u32 mr_7136 = meta_less(m->metas, index, meta);
	index = mr_7136.arg0;
	meta = mr_7136.arg1;
	while (meta == m->metas[index]) {
		u32 kv_index = m->metas[index + 1];
		if (string_eq(key, m->key_values.data[kv_index].key)) {
			memcpy(m->key_values.data[kv_index].value, value, m->value_bytes);
			return;
		}
		index += 2;
		meta += _const_probe_inc;
	}
	KeyValue kv = (KeyValue){
		.key = key,
		.value = v_malloc(m->value_bytes),
	};
	memcpy(kv.value, value, m->value_bytes);
	u32 kv_index = DenseArray_push(&m->key_values, kv);
	m->metas = map_meta_greater(m, m->metas, index, meta, kv_index);
	m->size++;
}

void map_expand(map* m) { 
	u32 old_cap = m->cap;
	m->cap = ((m->cap + 2) << 1) - 2;
	if (m->window == 0) {
		m->shift += _const_cached_hashbits;
		m->window = _const_cached_hashbits;
		map_rehash(m);
	} else {
		map_cached_rehash(m, old_cap);
	}
	m->window--;
}

void map_rehash(map* m) { 
	int meta_bytes = sizeof(u32) * (m->cap + 2 + m->extra_metas);
	m->metas = ((u32*)(realloc(m->metas, meta_bytes)));
	memset(m->metas, 0, meta_bytes);
	for (u32 i = ((u32)(0));
	i < m->key_values.size; i++) {
		if (m->key_values.data[i].key.str == 0) {
			continue;
		}
		KeyValue kv = m->key_values.data[i];
		multi_return_u32_u32 mr_8282 = map_key_to_index(/*rec*/*m, kv.key);
		u32 index = mr_8282.arg0;
		u32 meta = mr_8282.arg1;
		multi_return_u32_u32 mr_8320 = meta_less(m->metas, index, meta);
		index = mr_8320.arg0;
		meta = mr_8320.arg1;
		m->metas = map_meta_greater(m, m->metas, index, meta, i);
	}
}

void map_cached_rehash(map* m, u32 old_cap) { 
	u32* new_meta = ((u32*)(vcalloc(sizeof(u32) * (m->cap + 2 + m->extra_metas))));
	u32 old_extra_metas = m->extra_metas;
	for (u32 i = ((u32)(0));
	i <= old_cap + old_extra_metas; i += 2) {
		if (m->metas[i] == 0) {
			continue;
		}
		u32 old_meta = m->metas[i];
		u32 old_probe_count = ((old_meta >> _const_hashbits) - 1) << 1;
		u32 old_index = ((i - old_probe_count) & (m->cap >> 1));
		u32 index = (((old_index | (old_meta << m->shift))) & m->cap);
		u32 meta = (((old_meta & _const_hash_mask)) | _const_probe_inc);
		multi_return_u32_u32 mr_8907 = meta_less(new_meta, index, meta);
		index = mr_8907.arg0;
		meta = mr_8907.arg1;
		u32 kv_index = m->metas[i + 1];
		new_meta = map_meta_greater(m, new_meta, index, meta, kv_index);
	}
		v_free(m->metas);
	m->metas = new_meta;
}

voidptr map_get3(map m, string key, voidptr zero) { 
	multi_return_u32_u32 mr_9159 = map_key_to_index(m, key);
	u32 index = mr_9159.arg0;
	u32 meta = mr_9159.arg1;
	multi_return_u32_u32 mr_9193 = meta_less(m.metas, index, meta);
	index = mr_9193.arg0;
	meta = mr_9193.arg1;
	while (meta == m.metas[index]) {
		u32 kv_index = m.metas[index + 1];
		if (string_eq(key, m.key_values.data[kv_index].key)) {
			byteptr out = v_malloc(m.value_bytes);
			memcpy(out, m.key_values.data[kv_index].value, m.value_bytes);
			return out;
		}
		index += 2;
		meta += _const_probe_inc;
	}
	return zero;
}

bool map_exists(map m, string key) { 
	if (m.value_bytes == 0) {
		return false;
	}
	multi_return_u32_u32 mr_9627 = map_key_to_index(m, key);
	u32 index = mr_9627.arg0;
	u32 meta = mr_9627.arg1;
	multi_return_u32_u32 mr_9661 = meta_less(m.metas, index, meta);
	index = mr_9661.arg0;
	meta = mr_9661.arg1;
	while (meta == m.metas[index]) {
		u32 kv_index = m.metas[index + 1];
		if (string_eq(key, m.key_values.data[kv_index].key)) {
			return true;
		}
		index += 2;
		meta += _const_probe_inc;
	}
	return false;
}

void map_delete(map* m, string key) { 
	multi_return_u32_u32 mr_9937 = map_key_to_index(/*rec*/*m, key);
	u32 index = mr_9937.arg0;
	u32 meta = mr_9937.arg1;
	multi_return_u32_u32 mr_9971 = meta_less(m->metas, index, meta);
	index = mr_9971.arg0;
	meta = mr_9971.arg1;
	while (meta == m->metas[index]) {
		u32 kv_index = m->metas[index + 1];
		if (string_eq(key, m->key_values.data[kv_index].key)) {
			memset(&m->key_values.data[kv_index], 0, sizeof(KeyValue));
			while ((m->metas[index + 2] >> _const_hashbits) > 1) {
				m->metas[index] = m->metas[index + 2] - _const_probe_inc;
				m->metas[index + 1] = m->metas[index + 3];
				index += 2;
			}
			m->size--;
			m->metas[index] = 0;
			m->key_values.deletes++;
			if (m->key_values.size <= 32) {
				return;
			}
			if ((((f32)(m->key_values.size)) / ((f32)(m->key_values.deletes))) < 1) {
				DenseArray_zeros_to_end(&m->key_values);
				map_rehash(m);
			}
			return;
		}
		index += 2;
		meta += _const_probe_inc;
	}
}

array_string map_keys(map* m) { 
	array_string keys = array_repeat(new_array_from_c_array(1, 1, sizeof(string), (string[1]){	
	tos3(""), 
}), m->size);
	if (m->value_bytes == 0) {
		return keys;
	}
	int j = 0;
	for (u32 i = ((u32)(0));
	i < m->key_values.size; i++) {
		if (m->key_values.data[i].key.str == 0) {
			continue;
		}
		array_set(&keys, j, &(string[]) { m->key_values.data[i].key });
		j++;
	}
	return keys;
}

void map_free(map m) { 
		v_free(m.metas);
		v_free(m.key_values.data);
}

void map_print(map m) { 
	println(tos3("TODO"));
}

string map_string_str(map_string m) { 
	if (m.size == 0) {
		return tos3("{}");
	}
	strings__Builder sb = strings__new_builder(50);
	strings__Builder_writeln(&sb, tos3("{"));
	strings__Builder_writeln(&sb, tos3("}"));
	return strings__Builder_str(&sb);
}

Option opt_ok(voidptr data, int size) { 
	if (size >= 400) {
		v_panic(_STR("option size too big: %d (max is 400), this is a temporary limit", size));
	}
	Option res = (Option){
		.ok = true,
		.data = {0},
		.v_error = tos3(""),
		.ecode = 0,
		.is_none = 0,
	};
	memcpy(res.data, data, size);
	return res;
}

Option opt_none() { 
	return (Option){
		.is_none = true,
		.data = {0},
		.v_error = tos3(""),
		.ecode = 0,
		.ok = 0,
	};
}

Option v_error(string s) { 
	return (Option){
		.v_error = s,
		.data = {0},
		.ecode = 0,
		.ok = 0,
		.is_none = 0,
	};
}

Option error_with_code(string s, int code) { 
	return (Option){
		.v_error = s,
		.ecode = code,
		.data = {0},
		.ok = 0,
		.is_none = 0,
	};
}

SortedMap new_sorted_map(int n, int value_bytes) { 
	return (SortedMap){
		.value_bytes = value_bytes,
		.root = new_node(),
		.size = 0,
	};
}

SortedMap new_sorted_map_init(int n, int value_bytes, string* keys, voidptr values) { 
	SortedMap out = new_sorted_map(n, value_bytes);
	for (int tmp1 = 0; tmp1 < n; tmp1++) { 
		int i = tmp1;
		SortedMap_set(&out, keys[i], ((byteptr)(values)) + i * value_bytes);
	}
	return out;
}

mapnode* new_node() { 
	return (mapnode*)memdup(&(mapnode){	.children = 0,
		.size = 0,
		.keys = {0},
		.values = {0},
	}, sizeof(mapnode));
}

void SortedMap_set(SortedMap* m, string key, voidptr value) { 
	mapnode* node = m->root;
	int child_index = 0;
	mapnode* parent = ((mapnode*)(0));
	while (1) {
		if (node->size == _const_max_size) {
			if (isnil(parent)) {
				parent = new_node();
				m->root = parent;
			}
			mapnode_split_child(parent, child_index, node);
			if (string_eq(key, parent->keys[child_index])) {
				memcpy(parent->values[child_index], value, m->value_bytes);
				return;
			}
			node = (string_lt(key, parent->keys[child_index]) ? ((mapnode*)(parent->children[child_index])) : ((mapnode*)(parent->children[child_index + 1])));
		}
		int i = 0;
		while (i < node->size && string_gt(key, node->keys[i])) {
			i++;
		}
		if (i != node->size && string_eq(key, node->keys[i])) {
			memcpy(node->values[i], value, m->value_bytes);
			return;
		}
		if (isnil(node->children)) {
			int j = node->size - 1;
			while (j >= 0 && string_lt(key, node->keys[j])) {
				node->keys[j + 1] = node->keys[j];
				node->values[j + 1] = node->values[j];
				j--;
			}
			node->keys[j + 1] = key;
			node->values[j + 1] = v_malloc(m->value_bytes);
			memcpy(node->values[j + 1], value, m->value_bytes);
			node->size++;
			m->size++;
			return;
		}
		parent = node;
		child_index = i;
		node = ((mapnode*)(node->children[child_index]));
	}
}

void mapnode_split_child(mapnode* n, int child_index, mapnode* y) { 
	mapnode* z = new_node();
	z->size = _const_mid_index;
	y->size = _const_mid_index;
	for (int j = _const_mid_index - 1;
	j >= 0; j--) {
		z->keys[j] = y->keys[j + _const_degree];
		z->values[j] = y->values[j + _const_degree];
	}
	if (!isnil(y->children)) {
		z->children = ((voidptr*)(v_malloc(_const_children_bytes)));
		for (int jj = _const_degree - 1;
		jj >= 0; jj--) {
			z->children[jj] = y->children[jj + _const_degree];
		}
	}
	if (isnil(n->children)) {
		n->children = ((voidptr*)(v_malloc(_const_children_bytes)));
	}
	n->children[n->size + 1] = n->children[n->size];
	for (int j = n->size;
	j > child_index; j--) {
		n->keys[j] = n->keys[j - 1];
		n->values[j] = n->values[j - 1];
		n->children[j] = n->children[j - 1];
	}
	n->keys[child_index] = y->keys[_const_mid_index];
	n->values[child_index] = y->values[_const_mid_index];
	n->children[child_index] = ((voidptr)(y));
	n->children[child_index + 1] = ((voidptr)(z));
	n->size++;
}

bool SortedMap_get(SortedMap m, string key, voidptr out) { 
	mapnode* node = m.root;
	while (1) {
		int i = node->size - 1;
		while (i >= 0 && string_lt(key, node->keys[i])) {
			i--;
		}
		if (i != -1 && string_eq(key, node->keys[i])) {
			memcpy(out, node->values[i], m.value_bytes);
			return true;
		}
		if (isnil(node->children)) {
			break;
		}
		node = ((mapnode*)(node->children[i + 1]));
	}
	return false;
}

bool SortedMap_exists(SortedMap m, string key) { 
	if (isnil(m.root)) {
		return false;
	}
	mapnode* node = m.root;
	while (1) {
		int i = node->size - 1;
		while (i >= 0 && string_lt(key, node->keys[i])) {
			i--;
		}
		if (i != -1 && string_eq(key, node->keys[i])) {
			return true;
		}
		if (isnil(node->children)) {
			break;
		}
		node = ((mapnode*)(node->children[i + 1]));
	}
	return false;
}

int mapnode_find_key(mapnode* n, string k) { 
	int idx = 0;
	while (idx < n->size && string_lt(n->keys[idx], k)) {
		idx++;
	}
	return idx;
}

bool mapnode_remove_key(mapnode* n, string k) { 
	int idx = mapnode_find_key(n, k);
	if (idx < n->size && string_eq(n->keys[idx], k)) {
		if (isnil(n->children)) {
			mapnode_remove_from_leaf(n, idx);
		} else {
			mapnode_remove_from_non_leaf(n, idx);
		}
		return true;
	} else {
		if (isnil(n->children)) {
			return false;
		}
		bool flag = (idx == n->size ? true : false);
		if ((((mapnode*)(n->children[idx])))->size < _const_degree) {
			mapnode_fill(n, idx);
		}
		if (flag && idx > n->size) {
			return mapnode_remove_key((((mapnode*)(n->children[idx - 1]))), k);
		} else {
			return mapnode_remove_key((((mapnode*)(n->children[idx]))), k);
		}
	}
}

void mapnode_remove_from_leaf(mapnode* n, int idx) { 
	for (int i = idx + 1;
	i < n->size; i++) {
		n->keys[i - 1] = n->keys[i];
		n->values[i - 1] = n->values[i];
	}
	n->size--;
}

void mapnode_remove_from_non_leaf(mapnode* n, int idx) { 
	string k = n->keys[idx];
	if (((mapnode*)(n->children[idx]))->size >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[idx]));
		while (!isnil(current->children)) {
			current = ((mapnode*)(current->children[current->size]));
		}
		string predecessor = current->keys[current->size - 1];
		n->keys[idx] = predecessor;
		n->values[idx] = current->values[current->size - 1];
		mapnode_remove_key((((mapnode*)(n->children[idx]))), predecessor);
	} else if (((mapnode*)(n->children[idx + 1]))->size >= _const_degree) {
		mapnode* current = ((mapnode*)(n->children[idx + 1]));
		while (!isnil(current->children)) {
			current = ((mapnode*)(current->children[0]));
		}
		string successor = current->keys[0];
		n->keys[idx] = successor;
		n->values[idx] = current->values[0];
		mapnode_remove_key((((mapnode*)(n->children[idx + 1]))), successor);
	} else {
		mapnode_merge(n, idx);
		mapnode_remove_key((((mapnode*)(n->children[idx]))), k);
	}
}

void mapnode_fill(mapnode* n, int idx) { 
	if (idx != 0 && ((mapnode*)(n->children[idx - 1]))->size >= _const_degree) {
		mapnode_borrow_from_prev(n, idx);
	} else if (idx != n->size && ((mapnode*)(n->children[idx + 1]))->size >= _const_degree) {
		mapnode_borrow_from_next(n, idx);
	} else if (idx != n->size) {
		mapnode_merge(n, idx);
	} else {
		mapnode_merge(n, idx - 1);
	}
}

void mapnode_borrow_from_prev(mapnode* n, int idx) { 
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[idx - 1]));
	for (int i = child->size - 1;
	i >= 0; i--) {
		child->keys[i + 1] = child->keys[i];
		child->values[i + 1] = child->values[i];
	}
	if (!isnil(child->children)) {
		for (int i = child->size;
		i >= 0; i--) {
			child->children[i + 1] = child->children[i];
		}
	}
	child->keys[0] = n->keys[idx - 1];
	child->values[0] = n->values[idx - 1];
	if (!isnil(child->children)) {
		child->children[0] = sibling->children[sibling->size];
	}
	n->keys[idx - 1] = sibling->keys[sibling->size - 1];
	n->values[idx - 1] = sibling->values[sibling->size - 1];
	child->size++;
	sibling->size--;
}

void mapnode_borrow_from_next(mapnode* n, int idx) { 
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[idx + 1]));
	child->keys[child->size] = n->keys[idx];
	child->values[child->size] = n->values[idx];
	if (!isnil(child->children)) {
		child->children[child->size + 1] = sibling->children[0];
	}
	n->keys[idx] = sibling->keys[0];
	n->values[idx] = sibling->values[0];
	for (int i = 1;
	i < sibling->size; i++) {
		sibling->keys[i - 1] = sibling->keys[i];
		sibling->values[i - 1] = sibling->values[i];
	}
	if (!isnil(sibling->children)) {
		for (int i = 1;
		i <= sibling->size; i++) {
			sibling->children[i - 1] = sibling->children[i];
		}
	}
	child->size++;
	sibling->size--;
}

void mapnode_merge(mapnode* n, int idx) { 
	mapnode* child = ((mapnode*)(n->children[idx]));
	mapnode* sibling = ((mapnode*)(n->children[idx + 1]));
	child->keys[_const_mid_index] = n->keys[idx];
	child->values[_const_mid_index] = n->values[idx];
	for (int tmp1 = 0; tmp1 < sibling->size; tmp1++) { 
		int i = tmp1;
		child->keys[i + _const_degree] = sibling->keys[i];
		child->values[i + _const_degree] = sibling->values[i];
	}
	if (!isnil(child->children)) {
		for (int i = 0;
		i <= sibling->size; i++) {
			child->children[i + _const_degree] = sibling->children[i];
		}
	}
	for (int i = idx + 1;
	i < n->size; i++) {
		n->keys[i - 1] = n->keys[i];
		n->values[i - 1] = n->values[i];
	}
	for (int i = idx + 2;
	i <= n->size; i++) {
		n->children[i - 1] = n->children[i];
	}
	child->size += sibling->size + 1;
	n->size--;
}

void SortedMap_delete(SortedMap* m, string key) { 
	if (m->root->size == 0) {
		return;
	}
	bool removed = mapnode_remove_key(m->root, key);
	if (removed) {
		m->size--;
	}
	if (m->root->size == 0) {
		if (isnil(m->root->children)) {
			return;
		} else {
			m->root = ((mapnode*)(m->root->children[0]));
		}
	}
}

int mapnode_subkeys(mapnode* n, array_string* keys, int at) { 
	int position = at;
	if (!isnil(n->children)) {
		for (int tmp2 = 0; tmp2 < n->size; tmp2++) { 
			int i = tmp2;
			mapnode* child = ((mapnode*)(n->children[i]));
			position += mapnode_subkeys(child, keys, position);
			array_set(keys, position, &(string[]) { n->keys[i] });
			position++;
		}
		mapnode* child = ((mapnode*)(n->children[n->size]));
		position += mapnode_subkeys(child, keys, position);
	} else {
		for (int tmp3 = 0; tmp3 < n->size; tmp3++) { 
			int i = tmp3;
			array_set(keys, position + i, &(string[]) { n->keys[i] });
		}
		position += n->size;
	}
	return position - at;
}

array_string SortedMap_keys(SortedMap* m) { 
	array_string keys = array_repeat(new_array_from_c_array(1, 1, sizeof(string), (string[1]){	
	tos3(""), 
}), m->size);
	if (isnil(m->root) || m->root->size == 0) {
		return keys;
	}
	mapnode_subkeys(m->root, &/*111*/(array[]){keys}[0], 0);
	return keys;
}

void mapnode_free(mapnode* n) { 
	println(tos3("TODO"));
}

void SortedMap_free(SortedMap* m) { 
	if (isnil(m->root)) {
		return;
	}
	mapnode_free(m->root);
}

void SortedMap_print(SortedMap m) { 
	println(tos3("TODO"));
}

int vstrlen(byteptr s) { 
	return strlen(((charptr)(s)));
}

string tos(byteptr s, int len) { 
	if (s == 0) {
		v_panic(tos3("tos(): nil string"));
	}
	return (string){
		.str = s,
		.len = len,
	};
}

string tos_clone(byteptr s) { 
	if (s == 0) {
		v_panic(tos3("tos: nil string"));
	}
	return string_clone(tos2(s));
}

string tos2(byteptr s) { 
	if (s == 0) {
		v_panic(tos3("tos2: nil string"));
	}
	return (string){
		.str = s,
		.len = vstrlen(s),
	};
}

string tos3(charptr s) { 
	if (s == 0) {
		v_panic(tos3("tos3: nil string"));
	}
	return (string){
		.str = ((byteptr)(s)),
		.len = strlen(s),
	};
}

string string_clone(string a) { 
	string b = (string){
		.len = a.len,
		.str = v_malloc(a.len + 1),
	};
	for (int tmp1 = 0; tmp1 < a.len; tmp1++) { 
		int i = tmp1;
		b.str[i] = a.str[i];
	}
	b.str[a.len] = '\0';
	return b;
}

string cstring_to_vstring(byteptr cstr) { 
	int slen = strlen(cstr);
	byteptr s = ((byteptr)(memdup(cstr, slen + 1)));
	s[slen] = '\0';
	return tos(s, slen);
}

string string_replace_once(string s, string rep, string with) { 
	Option_int index = string_index(s, rep);
	if (!index.ok) {
		string err = index.v_error;
		int errcode = index.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return s;
	};
	return string_add(string_add(string_substr(s, 0, /*opt*/(*(int*)index.data)), with), string_substr(s, /*opt*/(*(int*)index.data) + rep.len, s.len));
}

string string_replace(string s, string rep, string with) { 
	if (s.len == 0 || rep.len == 0) {
		return s;
	}
	array_int idxs = new_array(0, 0, sizeof(int));
	int idx = 0;
	while (1) {
		idx = string_index_after(s, rep, idx);
		if (idx == -1) {
			break;
		}
		_PUSH(&idxs, (idx), tmp3, int);
		idx += rep.len;
	}
	if (idxs.len == 0) {
		return s;
	}
	int new_len = s.len + idxs.len * (with.len - rep.len);
	byteptr b = v_malloc(new_len + 1);
	int idx_pos = 0;
	int cur_idx = (*(int*)array_get(idxs, idx_pos));
	int b_i = 0;
	for (int i = 0;
	i < s.len; i++) {
		if (i == cur_idx) {
			for (int tmp6 = 0; tmp6 < with.len; tmp6++) { 
				int j = tmp6;
				b[b_i] = string_at(with, j);
				b_i++;
			}
			i += rep.len - 1;
			idx_pos++;
			if (idx_pos < idxs.len) {
				cur_idx = (*(int*)array_get(idxs, idx_pos));
			}
		} else {
			b[b_i] = string_at(s, i);
			b_i++;
		}
	}
	b[new_len] = '\0';
	return tos(b, new_len);
}

int compare_rep_index(RepIndex* a, RepIndex* b) { 
	if (a->idx < b->idx) {
		return -1;
	}
	if (a->idx > b->idx) {
		return 1;
	}
	return 0;
}

void array_RepIndex_sort(array_RepIndex* a) { 
	array_sort_with_compare(a, &/*qq*/compare_rep_index);
}

string string_replace_each(string s, array_string vals) { 
	if (s.len == 0 || vals.len == 0) {
		return s;
	}
	if (vals.len % 2 != 0) {
		println(tos3("string.replace_many(): odd number of strings"));
		return s;
	}
	int new_len = s.len;
	array_RepIndex idxs = new_array(0, 0, sizeof(RepIndex));
	int idx = 0;
	for (int rep_i = 0;
	rep_i < vals.len; rep_i += 2) {
		string rep = (*(string*)array_get(vals, rep_i));
		string with = (*(string*)array_get(vals, rep_i + 1));
		while (1) {
			idx = string_index_after(s, rep, idx);
			if (idx == -1) {
				break;
			}
			_PUSH(&idxs, ((RepIndex){
				.idx = idx,
				.val_idx = rep_i,
			}), tmp4, RepIndex);
			idx++;
			new_len += with.len - rep.len;
		}
	}
	if (idxs.len == 0) {
		return s;
	}
	array_RepIndex_sort(&idxs);
	byteptr b = v_malloc(new_len + 1);
	int idx_pos = 0;
	RepIndex cur_idx = (*(RepIndex*)array_get(idxs, idx_pos));
	int b_i = 0;
	for (int i = 0;
	i < s.len; i++) {
		if (i == cur_idx.idx) {
			string rep = (*(string*)array_get(vals, cur_idx.val_idx));
			string with = (*(string*)array_get(vals, cur_idx.val_idx + 1));
			for (int tmp7 = 0; tmp7 < with.len; tmp7++) { 
				int j = tmp7;
				b[b_i] = string_at(with, j);
				b_i++;
			}
			i += rep.len - 1;
			idx_pos++;
			if (idx_pos < idxs.len) {
				cur_idx = (*(RepIndex*)array_get(idxs, idx_pos));
			}
		} else {
			b[b_i] = s.str[i];
			b_i++;
		}
	}
	b[new_len] = '\0';
	return tos(b, new_len);
}

bool string_bool(string s) { 
	return string_eq(s, tos3("true")) || string_eq(s, tos3("t"));
}

int string_int(string s) { 
	return ((int)(strconv__common_parse_int(s, 0, 32, false, false)));
}

i64 string_i64(string s) { 
	return strconv__common_parse_int(s, 0, 64, false, false);
}

i8 string_i8(string s) { 
	return ((i8)(strconv__common_parse_int(s, 0, 8, false, false)));
}

i16 string_i16(string s) { 
	return ((i16)(strconv__common_parse_int(s, 0, 16, false, false)));
}

f32 string_f32(string s) { 
	return ((f32)(strconv__atof64(s)));
}

f64 string_f64(string s) { 
	return strconv__atof64(s);
}

u16 string_u16(string s) { 
	return ((u16)(strconv__common_parse_uint(s, 0, 16, false, false)));
}

u32 string_u32(string s) { 
	return ((u32)(strconv__common_parse_uint(s, 0, 32, false, false)));
}

u64 string_u64(string s) { 
	return strconv__common_parse_uint(s, 0, 64, false, false);
}

bool string_eq(string s, string a) { 
	if (isnil(s.str)) {
		v_panic(tos3("string.eq(): nil string"));
	}
	if (s.len != a.len) {
		return false;
	}
	for (int tmp3 = 0; tmp3 < s.len; tmp3++) { 
		int i = tmp3;
		if (string_at(s, i) != string_at(a, i)) {
			return false;
		}
	}
	return true;
}

bool string_ne(string s, string a) { 
	return !string_eq(s, a);
}

bool string_lt(string s, string a) { 
	for (int tmp1 = 0; tmp1 < s.len; tmp1++) { 
		int i = tmp1;
		if (i >= a.len || string_at(s, i) > string_at(a, i)) {
			return false;
		} else if (string_at(s, i) < string_at(a, i)) {
			return true;
		}
	}
	if (s.len < a.len) {
		return true;
	}
	return false;
}

bool string_le(string s, string a) { 
	return string_lt(s, a) || string_eq(s, a);
}

bool string_gt(string s, string a) { 
	return !string_le(s, a);
}

bool string_ge(string s, string a) { 
	return !string_lt(s, a);
}

string string_add(string s, string a) { 
	int new_len = a.len + s.len;
	string res = (string){
		.len = new_len,
		.str = v_malloc(new_len + 1),
	};
	for (int tmp1 = 0; tmp1 < s.len; tmp1++) { 
		int j = tmp1;
		res.str[j] = s.str[j];
	}
	for (int tmp2 = 0; tmp2 < a.len; tmp2++) { 
		int j = tmp2;
		res.str[s.len + j] = a.str[j];
	}
	res.str[new_len] = '\0';
	return res;
}

array_string string_split(string s, string delim) { 
	return string_split_nth(s, delim, 0);
}

array_string string_split_nth(string s, string delim, int nth) { 
	array_string res = new_array(0, 0, sizeof(string));
	int i = 0;
	if (delim.len == 0) {
		i = 1;
		for (int tmp2 = 0; tmp2 < s.len; tmp2++) {
		byte ch = s.str[tmp2];
			if (nth > 0 && i >= nth) {
				_PUSH(&res, (string_substr(s, i, s.len)), tmp4, string);
				break;
			}
			_PUSH(&res, (byte_str(ch)), tmp5, string);
			i++;
		}
		return res;
	}
	int start = 0;
	int nth_1 = nth - 1;
	while (i <= s.len) {
		bool is_delim = s.str[i] == delim.str[0];
		int j = 0;
		while (is_delim && j < delim.len) {
			is_delim = is_delim && s.str[i + j] == delim.str[j];
			j++;
		}
		bool last = i == s.len - 1;
		if (is_delim || last) {
			if (!is_delim && last) {
				i++;
			}
			string val = string_substr(s, start, i);
			if (string_starts_with(val, delim)) {
				val = string_right(val, delim.len);
			}
			bool was_last = nth > 0 && res.len == nth_1;
			if (was_last) {
				_PUSH(&res, (string_right(s, start)), tmp10, string);
				break;
			}
			_PUSH(&res, (val), tmp11, string);
			start = i + delim.len;
		}
		i++;
	}
	if (string_ends_with(s, delim) && (nth < 1 || res.len < nth)) {
		_PUSH(&res, (tos3("")), tmp13, string);
	}
	return res;
}

array_string string_split_into_lines(string s) { 
	array_string res = new_array(0, 0, sizeof(string));
	if (s.len == 0) {
		return res;
	}
	int start = 0;
	for (int i = 0;
	i < s.len; i++) {
		bool is_lf = s.str[i] == '\n';
		bool is_crlf = i != s.len - 1 && s.str[i] == '\r' && s.str[i + 1] == '\n';
		bool is_eol = is_lf || is_crlf;
		bool is_last = (is_crlf ? i == s.len - 2 : i == s.len - 1);
		if (is_eol || is_last) {
			if (is_last && !is_eol) {
				i++;
			}
			string line = string_substr(s, start, i);
			_PUSH(&res, (line), tmp5, string);
			if (is_crlf) {
				i++;
			}
			start = i + 1;
		}
	}
	return res;
}

string string_left(string s, int n) { 
	if (n >= s.len) {
		return s;
	}
	return string_substr(s, 0, n);
}

string string_right(string s, int n) { 
	if (n >= s.len) {
		return tos3("");
	}
	return string_substr(s, n, s.len);
}

string string_substr2(string s, int start, int _end, bool end_max) { 
	int end = (end_max ? s.len : _end);
	return string_substr(s, start, end);
}

string string_substr(string s, int start, int end) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
			v_panic(_STR("substr(%d, %d) out of bounds (len=%d)", start, end, s.len));
		}
	#endif
	int len = end - start;
	string res = (string){
		.len = len,
		.str = v_malloc(len + 1),
	};
	for (int tmp2 = 0; tmp2 < len; tmp2++) { 
		int i = tmp2;
		res.str[i] = s.str[start + i];
	}
	res.str[len] = '\0';
	return res;
}

int string_index_old(string s, string p) { 
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	int i = 0;
	while (i < s.len) {
		int j = 0;
		while (j < p.len && s.str[i + j] == p.str[j]) {
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

Option_int string_index(string s, string p) { 
	if (p.len > s.len || p.len == 0) {
		return opt_none();
	}
	int i = 0;
	while (i < s.len) {
		int j = 0;
		while (j < p.len && s.str[i + j] == p.str[j]) {
			j++;
		}
		if (j == p.len) {
			return opt_ok(& (int []) { i }, sizeof(int));
		}
		i++;
	}
	return opt_none();
}

int string_index_kmp(string s, string p) { 
	if (p.len > s.len) {
		return -1;
	}
	array_int prefix = array_repeat(new_array_from_c_array(1, 1, sizeof(int), (int[1]){	
	0, 
}), p.len);
	int j = 0;
	for (int i = 1;
	i < p.len; i++) {
		while (p.str[j] != p.str[i] && j > 0) {
			j = (*(int*)array_get(prefix, j - 1));
		}
		if (p.str[j] == p.str[i]) {
			j++;
		}
		array_set(&prefix, i, &(int[]) { j });
	}
	j = 0;
	for (int tmp3 = 0; tmp3 < s.len; tmp3++) { 
		int i = tmp3;
		while (p.str[j] != s.str[i] && j > 0) {
			j = (*(int*)array_get(prefix, j - 1));
		}
		if (p.str[j] == s.str[i]) {
			j++;
		}
		if (j == p.len) {
			return i - p.len + 1;
		}
	}
	return -1;
}

int string_index_any(string s, string chars) { 
	for (int tmp1 = 0; tmp1 < chars.len; tmp1++) {
	byte c = chars.str[tmp1];
		Option_int index = string_index(s, byte_str(c));
		if (!index.ok) {
			string err = index.v_error;
			int errcode = index.ecode;
			// last_type: v.ast.BranchStmt
			// last_expr_result_type: 
			continue;
		};
		return /*opt*/(*(int*)index.data);
	}
	return -1;
}

Option_int string_last_index(string s, string p) { 
	if (p.len > s.len || p.len == 0) {
		return opt_none();
	}
	int i = s.len - p.len;
	while (i >= 0) {
		int j = 0;
		while (j < p.len && s.str[i + j] == p.str[j]) {
			j++;
		}
		if (j == p.len) {
			return opt_ok(& (int []) { i }, sizeof(int));
		}
		i--;
	}
	return opt_none();
}

int string_index_after(string s, string p, int start) { 
	if (p.len > s.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start >= s.len) {
		return -1;
	}
	int i = strt;
	while (i < s.len) {
		int j = 0;
		int ii = i;
		while (j < p.len && s.str[ii] == p.str[j]) {
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

int string_index_byte(string s, byte c) { 
	for (int tmp1 = 0; tmp1 < s.len; tmp1++) { 
		int i = tmp1;
		if (s.str[i] == c) {
			return i;
		}
	}
	return -1;
}

int string_last_index_byte(string s, byte c) { 
	for (int i = s.len - 1;
	i >= 0; i--) {
		if (s.str[i] == c) {
			return i;
		}
	}
	return -1;
}

int string_count(string s, string substr) { 
	if (s.len == 0 || substr.len == 0) {
		return 0;
	}
	if (substr.len > s.len) {
		return 0;
	}
	int n = 0;
	int i = 0;
	while (1) {
		i = string_index_after(s, substr, i);
		if (i == -1) {
			return n;
		}
		i += substr.len;
		n++;
	}
	return 0;
}

bool string_contains(string s, string p) { 
	Option_int tmp1 = string_index(s, p);
	if (!tmp1.ok) {
		string err = tmp1.v_error;
		int errcode = tmp1.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return false;
	};
	return true;
}

bool string_starts_with(string s, string p) { 
	if (p.len > s.len) {
		return false;
	}
	for (int tmp2 = 0; tmp2 < p.len; tmp2++) { 
		int i = tmp2;
		if (s.str[i] != p.str[i]) {
			return false;
		}
	}
	return true;
}

bool string_ends_with(string s, string p) { 
	if (p.len > s.len) {
		return false;
	}
	for (int tmp2 = 0; tmp2 < p.len; tmp2++) { 
		int i = tmp2;
		if (string_at(p, i) != string_at(s, s.len - p.len + i)) {
			return false;
		}
	}
	return true;
}

string string_to_lower(string s) { 
	byteptr b = v_malloc(s.len + 1);
	for (int tmp1 = 0; tmp1 < s.len; tmp1++) { 
		int i = tmp1;
		b[i] = tolower(s.str[i]);
	}
	return tos(b, s.len);
}

string string_to_upper(string s) { 
	byteptr b = v_malloc(s.len + 1);
	for (int tmp1 = 0; tmp1 < s.len; tmp1++) { 
		int i = tmp1;
		b[i] = toupper(s.str[i]);
	}
	return tos(b, s.len);
}

string string_capitalize(string s) { 
	if (s.len == 0) {
		return tos3("");
	}
	string sl = string_to_lower(s);
	string cap = string_add(string_to_upper(byte_str(string_at(sl, 0))), string_right(sl, 1));
	return cap;
}

string string_title(string s) { 
	array_string words = string_split(s, tos3(" "));
	array_string tit = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < words.
	len; tmp1++) {	string word = ((string*)words.
	data)[tmp1];_PUSH(&tit, (string_capitalize(word)), tmp2, string);
	}
	string title = array_string_join(tit, tos3(" "));
	return title;
}

string string_find_between(string s, string start, string end) { 
	Option_int start_pos = string_index(s, start);
	if (!start_pos.ok) {
		string err = start_pos.v_error;
		int errcode = start_pos.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return tos3("");
	};
	string val = string_right(s, /*opt*/(*(int*)start_pos.data) + start.len);
	Option_int end_pos = string_index(val, end);
	if (!end_pos.ok) {
		string err = end_pos.v_error;
		int errcode = end_pos.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return val;
	};
	return string_left(val, /*opt*/(*(int*)end_pos.data));
}

bool array_string_contains(array_string ar, string val) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < ar.
	len; tmp1++) {	string s = ((string*)ar.
	data)[tmp1];if (string_eq(s, val)) {
			return true;
		}
	}
	return false;
}

bool array_int_contains(array_int ar, int val) { 
	// FOR IN
	for (int i = 0; i < ar.
	len; i++) {	int s = ((int*)ar.
	data)[i];if (s == val) {
			return true;
		}
	}
	return false;
}

bool byte_is_space(byte c) { 
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == 0x85 || c == 0xa0);
}

string string_trim_space(string s) { 
	return string_trim(s, tos3(" \n\t\v\f\r"));
}

string string_trim(string s, string cutset) { 
	if (s.len < 1 || cutset.len < 1) {
		return s;
	}
	array_byte cs_arr = string_bytes(cutset);
	int pos_left = 0;
	int pos_right = s.len - 1;
	bool cs_match = true;
	while (pos_left <= s.len && pos_right >= -1 && cs_match) {
		cs_match = false;
		if (_IN(byte, string_at(s, pos_left), cs_arr)) {
			pos_left++;
			cs_match = true;
		}
		if (_IN(byte, string_at(s, pos_right), cs_arr)) {
			pos_right--;
			cs_match = true;
		}
		if (pos_left > pos_right) {
			return tos3("");
		}
	}
	return string_substr(s, pos_left, pos_right + 1);
}

string string_trim_left(string s, string cutset) { 
	if (s.len < 1 || cutset.len < 1) {
		return s;
	}
	array_byte cs_arr = string_bytes(cutset);
	int pos = 0;
	while (pos <= s.len && _IN(byte, string_at(s, pos), cs_arr)) {
		pos++;
	}
	return string_right(s, pos);
}

string string_trim_right(string s, string cutset) { 
	if (s.len < 1 || cutset.len < 1) {
		return s;
	}
	array_byte cs_arr = string_bytes(cutset);
	int pos = s.len - 1;
	while (pos >= -1 && _IN(byte, string_at(s, pos), cs_arr)) {
		pos--;
	}
	return string_left(s, pos + 1);
}

int compare_strings(string* a, string* b) { 
	if (string_lt(/*rec*/*a, */*d*/b)) {
		return -1;
	}
	if (string_gt(/*rec*/*a, */*d*/b)) {
		return 1;
	}
	return 0;
}

int compare_strings_by_len(string* a, string* b) { 
	if (a->len < b->len) {
		return -1;
	}
	if (a->len > b->len) {
		return 1;
	}
	return 0;
}

int compare_lower_strings(string* a, string* b) { 
	string aa = string_to_lower(/*rec*/*a);
	string bb = string_to_lower(/*rec*/*b);
	return compare_strings(&/*qq*/aa, &/*qq*/bb);
}

void array_string_sort(array_string* s) { 
	array_sort_with_compare(s, &/*qq*/compare_strings);
}

void array_string_sort_ignore_case(array_string* s) { 
	array_sort_with_compare(s, &/*qq*/compare_lower_strings);
}

void array_string_sort_by_len(array_string* s) { 
	array_sort_with_compare(s, &/*qq*/compare_strings_by_len);
}

string ustring_str(ustring s) { 
	return s.s;
}

ustring string_ustring(string s) { 
	ustring res = (ustring){
		.s = s,
		.runes = new_array(0, s.len, sizeof(int)),
		.len = 0,
	};
	for (int i = 0;
	i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		_PUSH(&res.runes, (i), tmp1, int);
		i += char_len - 1;
		res.len++;
	}
	return res;
}

ustring string_ustring_tmp(string s) { 
	if (g_ustring_runes.len == 0) {
		g_ustring_runes = new_array(0, 128, sizeof(int));
	}
	ustring res = (ustring){
		.s = s,
		.runes = new_array(0, 1, sizeof(int)),
		.len = 0,
	};
	res.runes = g_ustring_runes;
	res.runes.len = s.len;
	int j = 0;
	for (int i = 0;
	i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		(*(int*)array_get(res.runes, j)) = i;
		j++;
		i += char_len - 1;
		res.len++;
	}
	return res;
}

bool ustring_eq(ustring u, ustring a) { 
	if (u.len != a.len || string_ne(u.s, a.s)) {
		return false;
	}
	return true;
}

bool ustring_ne(ustring u, ustring a) { 
	return !ustring_eq(u, a);
}

bool ustring_lt(ustring u, ustring a) { 
	return string_lt(u.s, a.s);
}

bool ustring_le(ustring u, ustring a) { 
	return ustring_lt(u, a) || ustring_eq(u, a);
}

bool ustring_gt(ustring u, ustring a) { 
	return !ustring_le(u, a);
}

bool ustring_ge(ustring u, ustring a) { 
	return !ustring_lt(u, a);
}

ustring ustring_add(ustring u, ustring a) { 
	ustring res = (ustring){
		.s = string_add(u.s, a.s),
		.runes = new_array(0, u.s.len + a.s.len, sizeof(int)),
		.len = 0,
	};
	int j = 0;
	for (int i = 0;
	i < u.s.len; i++) {
		int char_len = utf8_char_len(u.s.str[i]);
		_PUSH(&res.runes, (j), tmp1, int);
		i += char_len - 1;
		j += char_len;
		res.len++;
	}
	for (int i = 0;
	i < a.s.len; i++) {
		int char_len = utf8_char_len(a.s.str[i]);
		_PUSH(&res.runes, (j), tmp2, int);
		i += char_len - 1;
		j += char_len;
		res.len++;
	}
	return res;
}

int ustring_index_after(ustring u, ustring p, int start) { 
	if (p.len > u.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start > u.len) {
		return -1;
	}
	int i = strt;
	while (i < u.len) {
		int j = 0;
		int ii = i;
		while (j < p.len && string_eq(ustring_at(u, ii), ustring_at(p, j))) {
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}

int ustring_count(ustring u, ustring substr) { 
	if (u.len == 0 || substr.len == 0) {
		return 0;
	}
	if (substr.len > u.len) {
		return 0;
	}
	int n = 0;
	int i = 0;
	while (1) {
		i = ustring_index_after(u, substr, i);
		if (i == -1) {
			return n;
		}
		i += substr.len;
		n++;
	}
	return 0;
}

string ustring_substr(ustring u, int _start, int _end) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (_start > _end || _start > u.len || _end > u.len || _start < 0 || _end < 0) {
			v_panic(_STR("substr(%d, %d) out of bounds (len=%d)", _start, _end, u.len));
		}
	#endif
	int end = (_end >= u.len ? u.s.len : (*(int*)array_get(u.runes, _end)));
	return string_substr(u.s, (*(int*)array_get(u.runes, _start)), end);
}

string ustring_left(ustring u, int pos) { 
	if (pos >= u.len) {
		return u.s;
	}
	return ustring_substr(u, 0, pos);
}

string ustring_right(ustring u, int pos) { 
	if (pos >= u.len) {
		return tos3("");
	}
	return ustring_substr(u, pos, u.len);
}

byte string_at(string s, int idx) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (idx < 0 || idx >= s.len) {
			v_panic(_STR("string index out of range: %d / %d", idx, s.len));
		}
	#endif
	return s.str[idx];
}

string ustring_at(ustring u, int idx) { 
	
#ifndef NO_BOUNDS_CHECK
	// #if not no_bounds_checking
		if (idx < 0 || idx >= u.len) {
			v_panic(_STR("string index out of range: %d / %d", idx, u.runes.len));
		}
	#endif
	return ustring_substr(u, idx, idx + 1);
}

void ustring_free(ustring u) { 
	array_free(u.runes);
}

bool byte_is_digit(byte c) { 
	return c >= '0' && c <= '9';
}

bool byte_is_hex_digit(byte c) { 
	return byte_is_digit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

bool byte_is_oct_digit(byte c) { 
	return c >= '0' && c <= '7';
}

bool byte_is_bin_digit(byte c) { 
	return c == '0' || c == '1';
}

bool byte_is_letter(byte c) { 
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void string_free(string s) { 
	v_free(s.str);
}

string string_all_before(string s, string dot) { 
	Option_int pos = string_index(s, dot);
	if (!pos.ok) {
		string err = pos.v_error;
		int errcode = pos.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return s;
	};
	return string_left(s, /*opt*/(*(int*)pos.data));
}

string string_all_before_last(string s, string dot) { 
	Option_int pos = string_last_index(s, dot);
	if (!pos.ok) {
		string err = pos.v_error;
		int errcode = pos.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return s;
	};
	return string_left(s, /*opt*/(*(int*)pos.data));
}

string string_all_after(string s, string dot) { 
	Option_int pos = string_last_index(s, dot);
	if (!pos.ok) {
		string err = pos.v_error;
		int errcode = pos.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return s;
	};
	return string_right(s, /*opt*/(*(int*)pos.data) + dot.len);
}

string string_after(string s, string dot) { 
	return string_all_after(s, dot);
}

string array_string_join(array_string a, string del) { 
	if (a.len == 0) {
		return tos3("");
	}
	int len = 0;
	// FOR IN
	for (int i = 0; i < a.
	len; i++) {	string val = ((string*)a.
	data)[i];len += val.len + del.len;
	}
	len -= del.len;
	string res = tos3("");
	res.len = len;
	res.str = v_malloc(res.len + 1);
	int idx = 0;
	// FOR IN
	for (int i = 0; i < a.
	len; i++) {	string val = ((string*)a.
	data)[i];for (int tmp2 = 0; tmp2 < val.len; tmp2++) { 
			int j = tmp2;
			byte c = string_at(val, j);
			res.str[idx] = val.str[j];
			idx++;
		}
		if (i != a.len - 1) {
			for (int tmp4 = 0; tmp4 < del.len; tmp4++) { 
				int k = tmp4;
				res.str[idx] = del.str[k];
				idx++;
			}
		}
	}
	res.str[res.len] = '\0';
	return res;
}

string array_string_join_lines(array_string s) { 
	return array_string_join(s, tos3("\n"));
}

string string_reverse(string s) { 
	if (s.len == 0 || s.len == 1) {
		return s;
	}
	string res = (string){
		.len = s.len,
		.str = v_malloc(s.len),
	};
	for (int i = s.len - 1;
	i >= 0; i--) {
		res.str[s.len - i - 1] = string_at(s, i);
	}
	return res;
}

string string_limit(string s, int max) { 
	ustring u = string_ustring(s);
	if (u.len <= max) {
		return s;
	}
	return ustring_substr(u, 0, max);
}

//[deprecated]
bool byte_is_white(byte c) { 
	v_panic(tos3("Use `string.is_space` instead of `string.is_white"));
}

int string_hash(string s) { 
	int h = 0;
	if (h == 0 && s.len > 0) {
		for (int tmp2 = 0; tmp2 < s.len; tmp2++) {
		byte c = s.str[tmp2];
			h = h * 31 + ((int)(c));
		}
	}
	return h;
}

array_byte string_bytes(string s) { 
	if (s.len == 0) {
		return new_array(0, 0, sizeof(byte));
	}
	array_byte buf = array_repeat(new_array_from_c_array(1, 1, sizeof(byte), (byte[1]){	
	((byte)(0)), 
}), s.len);
	memcpy(buf.data, s.str, s.len);
	return buf;
}

string string_repeat(string s, int count) { 
	if (count < 0) {
		v_panic(_STR("string.repeat: count is negative: %d", count));
	} else if (count == 0) {
		return tos3("");
	} else if (count == 1) {
		return s;
	}
	byteptr ret = v_malloc(s.len * count + 1);
	for (int tmp2 = 0; tmp2 < count; tmp2++) { 
		int i = tmp2;
		for (int tmp3 = 0; tmp3 < s.len; tmp3++) { 
			int j = tmp3;
			ret[i * s.len + j] = string_at(s, j);
		}
	}
	ret[s.len * count] = 0;
	return tos2(ret);
}

string string_strip_margin(string s, varg_byte del) { 
	byte sep = '|';
	if (del.len >= 1) {
		// FOR IN
		for (int tmp2 = 0; tmp2 < del.len; tmp2++) {
		byte d = del.args[tmp2];
			if (byte_is_space(d)) {
				eprintln(tos3("Warning: `strip_margin` cannot use white-space as a delimiter"));
				eprintln(tos3("    Defaulting to `|`"));
			} else {
				sep = d;
			}
			break;
		}
		if (del.len != 1) {
			eprintln(tos3("Warning: `strip_margin` only uses the first argument given"));
		}
	}
	byteptr ret = v_malloc(s.len + 1);
	int count = 0;
	for (int i = 0;
	i < s.len; i++) {
		if ((string_at(s, i) == '\n' || string_at(s, i) == '\r')) {
			ret[count] = string_at(s, i);
			count++;
			if (string_at(s, i) == '\r' && i < s.len - 1 && string_at(s, i + 1) == '\n') {
				ret[count] = string_at(s, i + 1);
				count++;
				i++;
			}
			while (string_at(s, i) != sep) {
				i++;
				if (i >= s.len) {
					break;
				}
			}
		} else {
			ret[count] = string_at(s, i);
			count++;
		}
	}
	ret[count] = 0;
	return tos2(ret);
}

int utf8_char_len(byte b) { 
	return (((0xe5000000 >> (((b >> 3) & 0x1e))) & 3)) + 1;
}

string utf32_to_str(u32 code) { 
	int icode = ((int)(code));
	byteptr buffer = v_malloc(5);
	if (icode <= 127) {
		buffer[0] = icode;
		return tos(buffer, 1);
	}
	if (icode <= 2047) {
		buffer[0] = (192 | (icode >> 6));
		buffer[1] = (128 | ((icode & 63)));
		return tos(buffer, 2);
	}
	if (icode <= 65535) {
		buffer[0] = (224 | (icode >> 12));
		buffer[1] = (128 | (((icode >> 6) & 63)));
		buffer[2] = (128 | ((icode & 63)));
		return tos(buffer, 3);
	}
	if (icode <= 1114111) {
		buffer[0] = (240 | (icode >> 18));
		buffer[1] = (128 | (((icode >> 12) & 63)));
		buffer[2] = (128 | (((icode >> 6) & 63)));
		buffer[3] = (128 | ((icode & 63)));
		return tos(buffer, 4);
	}
	return tos3("");
}

string utf32_to_str_no_malloc(u32 code, voidptr buf) { 
	int icode = ((int)(code));
	byteptr buffer = ((byteptr)(buf));
	if (icode <= 127) {
		buffer[0] = icode;
		return tos(buffer, 1);
	}
	if (icode <= 2047) {
		buffer[0] = (192 | (icode >> 6));
		buffer[1] = (128 | ((icode & 63)));
		return tos(buffer, 2);
	}
	if (icode <= 65535) {
		buffer[0] = (224 | (icode >> 12));
		buffer[1] = (128 | (((icode >> 6) & 63)));
		buffer[2] = (128 | ((icode & 63)));
		return tos(buffer, 3);
	}
	if (icode <= 1114111) {
		buffer[0] = (240 | (icode >> 18));
		buffer[1] = (128 | (((icode >> 12) & 63)));
		buffer[2] = (128 | (((icode >> 6) & 63)));
		buffer[3] = (128 | ((icode & 63)));
		return tos(buffer, 4);
	}
	return tos3("");
}

int string_utf32_code(string _rune) { 
	if (_rune.len == 0) {
		return 0;
	}
	if (_rune.len == 1) {
		return ((int)(string_at(_rune, 0)));
	}
	byte b = ((byte)(((int)(string_at(_rune, 0)))));
	b = b << _rune.len;
	int res = ((int)(b));
	int shift = 6 - _rune.len;
	for (int i = 1;
	i < _rune.len; i++) {
		int c = ((int)(string_at(_rune, i)));
		res = res << shift;
		res |= (c & 63);
		shift = 6;
	}
	return res;
}

u16* string_to_wide(string _str) { 
	
#ifdef _WIN32
	// #if windows
		int num_chars = (MultiByteToWideChar(_const_CP_UTF8, 0, _str.str, _str.len, 0, 0));
		u16* wstr = ((u16*)(v_malloc((num_chars + 1) * 2)));
		if (!isnil(wstr)) {
			MultiByteToWideChar(_const_CP_UTF8, 0, _str.str, _str.len, wstr, num_chars);
			memset(((byte*)(wstr)) + num_chars * 2, 0, 2);
		}
		return wstr;
	#else
		return 0;
	#endif
}

string string_from_wide(u16* _wstr) { 
	
#ifdef _WIN32
	// #if windows
		int wstr_len = wcslen(_wstr);
		return string_from_wide2(_wstr, wstr_len);
	#else
		return tos3("");
	#endif
}

string string_from_wide2(u16* _wstr, int len) { 
	
#ifdef _WIN32
	// #if windows
		int num_chars = WideCharToMultiByte(_const_CP_UTF8, 0, _wstr, len, 0, 0, 0, 0);
		byteptr str_to = v_malloc(num_chars + 1);
		if (!isnil(str_to)) {
			WideCharToMultiByte(_const_CP_UTF8, 0, _wstr, len, str_to, num_chars, 0, 0);
			memset(str_to + num_chars, 0, 1);
		}
		return tos2(str_to);
	#else
		return tos3("");
	#endif
}

int utf8_len(byte c) { 
	int b = 0;
	byte x = c;
	if (((x & 240)) != 0) {
		x >>= 4;
	} else {
		b += 4;
	}
	if (((x & 12)) != 0) {
		x >>= 2;
	} else {
		b += 2;
	}
	if (((x & 2)) == 0) {
		b++;
	}
	return b;
}

int utf8_getchar() { 
	int c = getchar();
	int len = utf8_len(~c);
	if (c < 0) {
		return 0;
	} else if (len == 0) {
		return c;
	} else if (len == 1) {
		return -1;
	} else {
		int uc = (c & ((1 << (7 - len)) - 1));
		for (int i = 0;
		i + 1 < len; i++) {
			int c2 = getchar();
			if (c2 != -1 && (c2 >> 6) == 2) {
				uc <<= 6;
				uc |= ((c2 & 63));
			} else if (c2 == -1) {
				return 0;
			} else {
				return -1;
			}
		}
		return uc;
	}
}

array_string join_flags_and_argument() { 
	string vosargs = os__getenv(tos3("VOSARGS"));
	if (string_ne(vosargs, tos3(""))) {
		return string_split(vosargs, tos3(" "));
	}
	array_string args = new_array(0, 0, sizeof(string));
	string vflags = os__getenv(tos3("VFLAGS"));
	if (string_ne(vflags, tos3(""))) {
		_PUSH(&args, ((*(string*)array_get(_const_os__args, 0))), tmp3, string);
		_PUSH_MANY(&args, (string_split(vflags, tos3(" "))), tmp4, array_string);
		if (_const_os__args.len > 1) {
			_PUSH_MANY(&args, (array_slice(_const_os__args, 1, _const_os__args.len)), tmp6, array_string);
		}
		return args;
	}
	return _const_os__args;
}

void parse_flags(string flag, internal__flag__Instance* f, internal__flag__MainCmdPreferences* prefs) { 
	if (string_eq(flag, tos3("v"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("v"), tos3("vv"), tos3("vvv"), tos3("verbose"), 
}));
		prefs->verbosity = v__pref__VerboseLevel_level_one;
	}
	else if (string_eq(flag, tos3("vv"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("v"), tos3("vv"), tos3("vvv"), tos3("verbose"), 
}));
		prefs->verbosity = v__pref__VerboseLevel_level_two;
	}
	else if (string_eq(flag, tos3("vvv"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("v"), tos3("vv"), tos3("vvv"), tos3("verbose"), 
}));
		prefs->verbosity = v__pref__VerboseLevel_level_three;
	}
	else if (string_eq(flag, tos3("verbose"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("v"), tos3("vv"), tos3("vvv"), tos3("verbose"), 
}));
		Option_int level = internal__flag__Instance_int(f);
		if (!level.ok) {
			string err = level.v_error;
			int errcode = level.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(tos3("V error: Expected `0`, `1`, `2` or `3` as argument to `-verbose` to specify verbosity level."));
			v_exit(1);
		};
		if (/*opt*/(*(int*)level.data) == 0) {
		}
		else if (/*opt*/(*(int*)level.data) == 1) {
			prefs->verbosity = v__pref__VerboseLevel_level_one;
		}
		else if (/*opt*/(*(int*)level.data) == 2) {
			prefs->verbosity = v__pref__VerboseLevel_level_two;
		}
		else if (/*opt*/(*(int*)level.data) == 3) {
			prefs->verbosity = v__pref__VerboseLevel_level_three;
		}
		else {
			println(tos3("V error: Expected `0`, `1`, `2` or `3` as argument to `-verbose` to specify verbosity level."));
			v_exit(1);
		}
		;
	}
	else if (string_eq(flag, tos3("h")) || string_eq(flag, tos3("help"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("h"), tos3("help"), 
}));
		prefs->action = internal__flag__MainCmdAction_help;
	}
	else if (string_eq(flag, tos3("version"))) {
		prefs->action = internal__flag__MainCmdAction_version;
	}
	else if (string_eq(flag, tos3("-version")) || string_eq(flag, tos3("-help"))) {
		println(_STR("V error: `-%.*s` has been deprecated. Use `%.*s` instead.", flag.len, flag.str, flag.len, flag.str));
		v_exit(1);
	}
	else {
		prefs->unknown_flag = _STR("-%.*s", flag.len, flag.str);
		if (!(_IN(string, flag, _const_list_of_flags_with_param))) {
			return;
		}
		Option_string tmp4 = internal__flag__Instance_string(f);
		if (!tmp4.ok) {
			string err = tmp4.v_error;
			int errcode = tmp4.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(_STR("V error: Error parsing flag. Expected value for `-%.*s`.", flag.len, flag.str));
			v_exit(1);
		};
		return;
	}
	;
}

int main(int ___argc, char** ___argv) { 
	_vinit();
_const_os__args = os__init_os_args(___argc, (byteptr*)___argv);
	array_string args = array_slice(_const_os__args, 1, _const_os__args.len);
	if (args.len == 0 || (string_eq((*(string*)array_get(args, 0)), tos3("-")) || string_eq((*(string*)array_get(args, 0)), tos3("repl")))) {
		println(tos3("For usage information, quit V REPL using `exit` and use `v help`"));
		v__util__launch_tool(false, tos3("vrepl"));
		return 0;
	}
	if (args.len > 0 && ((string_eq((*(string*)array_get(args, 0)), tos3("version")) || string_eq((*(string*)array_get(args, 0)), tos3("-V")) || string_eq((*(string*)array_get(args, 0)), tos3("-version")) || string_eq((*(string*)array_get(args, 0)), tos3("--version"))) || (string_eq((*(string*)array_get(args, 0)), tos3("-v")) && args.len == 1))) {
		println(v__util__full_v_version());
		return 0;
	}
	multi_return_v__pref__Preferences_string mr_1010 = parse_args(args);
	v__pref__Preferences* prefs2 = mr_1010.arg0;
	string command = mr_1010.arg1;
	if (prefs2->is_verbose) {
		println(v__util__full_v_version());
	}
	if (prefs2->is_verbose) {
	}
	if (_IN(string, command, _const_simple_cmd)) {
		v__util__launch_tool(prefs2->is_verbose, string_add(tos3("v"), command));
		return 0;
	}
	if (string_eq(command, tos3("help"))) {
		invoke_help_and_exit(args);
	}
	else if (string_eq(command, tos3("create")) || string_eq(command, tos3("init"))) {
		v__util__launch_tool(prefs2->is_verbose, tos3("vcreate"));
		return 0;
	}
	else if (string_eq(command, tos3("translate"))) {
		println(tos3("Translating C to V will be available in V 0.3"));
		return 0;
	}
	else if (string_eq(command, tos3("search")) || string_eq(command, tos3("install")) || string_eq(command, tos3("update")) || string_eq(command, tos3("remove"))) {
		v__util__launch_tool(prefs2->is_verbose, tos3("vpm"));
		return 0;
	}
	else if (string_eq(command, tos3("get"))) {
		println(tos3("V Error: Use `v install` to install modules from vpm.vlang.io"));
		v_exit(1);
	}
	else if (string_eq(command, tos3("symlink"))) {
		create_symlink();
		return 0;
	}
	else if (string_eq(command, tos3("doc"))) {
		if (args.len == 1) {
			println(tos3("v doc [module]"));
			v_exit(1);
		}
		v__table__Table* table = v__table__new_table();
		println(v__doc__doc((*(string*)array_get(args, 1)), table));
		return 0;
	}
	else if (string_eq(command, tos3("help"))) {
		invoke_help_and_exit(args);
		return 0;
	}
	else {
	}
	;
	if ((string_eq(command, tos3("run")) || string_eq(command, tos3("build"))) || string_ends_with(command, tos3(".v")) || os__exists(command)) {
		array_string arg = join_flags_and_argument();
		internal__compile__compile(command, arg);
		return 0;
	}
	eprintln(_STR("v %.*s: unknown command\nRun \"v help\" for usage.", command.len, command.str));
	v_exit(1);
	return 0;
}

multi_return_v__pref__Preferences_string parse_args(array_string args) { 
	v__pref__Preferences* res = (v__pref__Preferences*)memdup(&(v__pref__Preferences){	.os = {0},
		.backend = {0},
		.build_mode = {0},
		.verbosity = {0},
		.is_verbose = 0,
		.is_test = 0,
		.is_script = 0,
		.is_live = 0,
		.is_solive = 0,
		.is_so = 0,
		.is_prof = 0,
		.translated = 0,
		.is_prod = 0,
		.obfuscate = 0,
		.is_repl = 0,
		.is_run = 0,
		.sanitize = 0,
		.is_debug = 0,
		.is_vlines = 0,
		.is_keep_c = 0,
		.is_pretty_c = 0,
		.is_cache = 0,
		.is_stats = 0,
		.no_auto_free = 0,
		.cflags = tos3(""),
		.ccompiler = tos3(""),
		.third_party_option = tos3(""),
		.building_v = 0,
		.autofree = 0,
		.compress = 0,
		.fast = 0,
		.enable_globals = 0,
		.is_bare = 0,
		.lookup_path = new_array(0, 1, sizeof(string)),
		.output_cross_c = 0,
		.prealloc = 0,
		.vroot = tos3(""),
		.out_name = tos3(""),
		.path = tos3(""),
		.compile_defines = new_array(0, 1, sizeof(string)),
		.compile_defines_all = new_array(0, 1, sizeof(string)),
		.mod = tos3(""),
	}, sizeof(v__pref__Preferences));
	string command = tos3("");
	for (int i = 0;
	i < args.len; i++) {
		string arg = (*(string*)array_get(args, i));
		if (string_eq(arg, tos3("-v"))) {
			res->is_verbose = true;
		}
		else if (string_eq(arg, tos3("-cg"))) {
			res->is_debug = true;
		}
		else if (string_eq(arg, tos3("-cc"))) {
			res->ccompiler = os__cmdline__option(args, tos3("-cc"), tos3("cc"));
			i++;
		}
		else if (string_eq(arg, tos3("-o"))) {
			res->out_name = os__cmdline__option(args, tos3("-o"), tos3(""));
			i++;
		}
		else {
			bool should_continue = false;
			// FOR IN
			for (int tmp2 = 0; tmp2 < _const_list_of_flags_with_param.
			len; tmp2++) {	string flag_with_param = ((string*)_const_list_of_flags_with_param.
			data)[tmp2];if (string_eq(_STR("-%.*s", flag_with_param.len, flag_with_param.str), arg)) {
					should_continue = true;
					i++;
					break;
				}
			}
			if (should_continue) {
				continue;
			}
			if (!string_starts_with(arg, tos3("-")) && string_eq(command, tos3(""))) {
				command = arg;
			}
		}
		;
	}
	return (multi_return_v__pref__Preferences_string){.arg0=res,.arg1=command};
}

void invoke_help_and_exit(array_string remaining) { 
	if (remaining.len == 0 || remaining.len == 1) {
		internal__help__print_and_exit(tos3("default"));
	}
	else if (remaining.len == 2) {
		internal__help__print_and_exit((*(string*)array_get(remaining, 1)));
	}
	else {
	}
	;
	println(tos3("V Error: Expected only one help topic to be provided."));
	println(tos3("For usage information, use `v help`."));
	v_exit(1);
}

void create_symlink() { 
	
#ifdef _WIN32
	// #if windows
		return;
	#endif
	string vexe = v__pref__vexe_path();
	string link_path = tos3("/usr/local/bin/v");
	Option_os__Result ret = os__exec(_STR("ln -sf %.*s %.*s", vexe.len, vexe.str, link_path.len, link_path.str));
	if (!ret.ok) {
		string err = ret.v_error;
		int errcode = ret.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		v_panic(err);
	};
	if (/*opt*/(*(os__Result*)ret.data).exit_code == 0) {
		println(_STR("Symlink \"%.*s\" has been created", link_path.len, link_path.str));
	} else if (os__system(tos3("uname -o | grep -q \'[A/a]ndroid\'")) == 0) {
		println(_STR("Failed to create symlink \"%.*s\". Trying again with Termux path for Android.", link_path.len, link_path.str));
		link_path = tos3("/data/data/com.termux/files/usr/bin/v");
		Option_os__Result tmp2 =ret = os__exec(_STR("ln -sf %.*s %.*s", vexe.len, vexe.str, link_path.len, link_path.str));
		if (!tmp2.ok) {
			string err = tmp2.v_error;
			int errcode = tmp2.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			v_panic(err);
		};
		if (/*opt*/(*(os__Result*)ret.data).exit_code == 0) {
			println(_STR("Symlink \"%.*s\" has been created", link_path.len, link_path.str));
		} else {
			println(_STR("Failed to create symlink \"%.*s\". Try again with sudo.", link_path.len, link_path.str));
		}
	} else {
		println(_STR("Failed to create symlink \"%.*s\". Try again with sudo.", link_path.len, link_path.str));
	}
}

strings__Builder strings__new_builder(int initial_size) { 
	return (strings__Builder){
		.buf = make(0, initial_size, 1),
		.initial_size = initial_size,
		.len = 0,
	};
}

void strings__Builder_write_bytes(strings__Builder* b, byteptr bytes, int howmany) { 
	array_push_many(&b->buf, bytes, howmany);
	b->len += howmany;
}

void strings__Builder_write_b(strings__Builder* b, byte data) { 
	_PUSH(&b->buf, (data), tmp1, byte);
	b->len++;
}

void strings__Builder_write(strings__Builder* b, string s) { 
	if (string_eq(s, tos3(""))) {
		return;
	}
	array_push_many(&b->buf, s.str, s.len);
	b->len += s.len;
}

void strings__Builder_go_back(strings__Builder* b, int n) { 
	array_trim(&b->buf, b->buf.len - n);
	b->len -= n;
}

void strings__Builder_writeln(strings__Builder* b, string s) { 
	array_push_many(&b->buf, s.str, s.len);
	_PUSH(&b->buf, ('\n'), tmp1, byte);
	b->len += s.len + 1;
}

string strings__Builder_last_n(strings__Builder* b, int n) { 
	if (n > b->len) {
		return tos3("");
	}
	array_byte buf = array_slice(b->buf, b->len - n, b->buf.len);
	return tos2(array_clone(&buf).data);
}

string strings__Builder_after(strings__Builder* b, int n) { 
	if (n >= b->len) {
		return tos3("");
	}
	array_byte buf = array_slice(b->buf, n, b->buf.len);
	array_byte copy = array_clone(&buf);
	_PUSH(&copy, ('\0'), tmp2, byte);
	return tos2(copy.data);
}

string strings__Builder_str(strings__Builder* b) { 
	_PUSH(&b->buf, ('\0'), tmp1, byte);
	return tos(b->buf.data, b->len);
}

void strings__Builder_free(strings__Builder* b) { 
		v_free(b->buf.data);
	b->buf = make(0, b->initial_size, 1);
	b->len = 0;
}

int strings__levenshtein_distance(string a, string b) { 
	array_int f = array_repeat(new_array_from_c_array(1, 1, sizeof(int), (int[1]){	
	0, 
}), b.len + 1);
	for (int tmp1 = 0; tmp1 < f.len; tmp1++) { 
		int j = tmp1;
		array_set(&f, j, &(int[]) { j });
	}
	for (int tmp2 = 0; tmp2 < a.len; tmp2++) {
	byte ca = a.str[tmp2];
		int j = 1;
		int fj1 = (*(int*)array_get(f, 0));
		(*(int*)array_get(f, 0))++;
		for (int tmp3 = 0; tmp3 < b.len; tmp3++) {
		byte cb = b.str[tmp3];
			int mn = ((*(int*)array_get(f, j)) + 1 <= (*(int*)array_get(f, j - 1)) + 1 ? (*(int*)array_get(f, j)) + 1 : (*(int*)array_get(f, j - 1)) + 1);
			if (cb != ca) {
				mn = (mn <= fj1 + 1 ? mn : fj1 + 1);
			} else {
				mn = (mn <= fj1 ? mn : fj1);
			}
			fj1 = (*(int*)array_get(f, j));
			array_set(&f, j, &(int[]) { mn });
			j++;
		}
	}
	return (*(int*)array_get(f, f.len - 1));
}

f32 strings__levenshtein_distance_percentage(string a, string b) { 
	int d = strings__levenshtein_distance(a, b);
	int l = (a.len >= b.len ? a.len : b.len);
	return (1.00 - ((f32)(d)) / ((f32)(l))) * 100.00;
}

f32 strings__dice_coefficient(string s1, string s2) { 
	if (s1.len == 0 || s2.len == 0) {
		return 0.0;
	}
	if (string_eq(s1, s2)) {
		return 1.0;
	}
	if (s1.len < 2 || s2.len < 2) {
		return 0.0;
	}
	string a = (s1.len > s2.len ? s1 : s2);
	string b = (string_eq(a, s1) ? s2 : s1);
	map_string_int first_bigrams = new_map(1, sizeof(int));
	for (int tmp6 = 0; tmp6 < a.len - 1; tmp6++) { 
		int i = tmp6;
		string bigram = string_substr(a, i, i + 2);
		int q = (_IN_MAP(bigram, first_bigrams) ? (*(int*)map_get3(first_bigrams, bigram, &(int[]){ 0 })) + 1 : 1);
		map_set(&first_bigrams, bigram, &(int[]) { q });
	}
	int intersection_size = 0;
	for (int tmp8 = 0; tmp8 < b.len - 1; tmp8++) { 
		int i = tmp8;
		string bigram = string_substr(b, i, i + 2);
		int count = (_IN_MAP(bigram, first_bigrams) ? (*(int*)map_get3(first_bigrams, bigram, &(int[]){ 0 })) : 0);
		if (count > 0) {
			map_set(&first_bigrams, bigram, &(int[]) { count - 1 });
			intersection_size++;
		}
	}
	return (2.0 * intersection_size) / (((f32)(a.len)) + ((f32)(b.len)) - 2);
}

string strings__repeat(byte c, int n) { 
	if (n <= 0) {
		return tos3("");
	}
	byte* bytes = ((byte*)(0));
		bytes = v_malloc(n + 1);
	memset(bytes, c, n);
	bytes[n] = '0';
	return tos(bytes, n);
}

string strings__repeat_string(string s, int n) { 
	if (n <= 0 || s.len == 0) {
		return tos3("");
	}
	int slen = s.len;
	int blen = slen * n;
	byte* bytes = ((byte*)(0));
		bytes = v_malloc(blen + 1);
	for (int tmp2 = 0; tmp2 < n; tmp2++) { 
		int bi = tmp2;
		int bislen = bi * slen;
		for (int tmp3 = 0; tmp3 < slen; tmp3++) { 
			int si = tmp3;
			bytes[bislen + si] = string_at(s, si);
		}
	}
	bytes[blen] = '0';
	return tos(bytes, blen);
}

string strconv__ftoa__Dec32_get_string_32(strconv__ftoa__Dec32 d, bool neg, int i_n_digit) { 
	int n_digit = i_n_digit + 1;
	u32 out = d.m;
	int out_len = strconv__ftoa__decimal_len_32(out);
	int out_len_original = out_len;
	array_byte buf = array_repeat(new_array_from_c_array(1, 1, sizeof(byte), (byte[1]){	
	((byte)(0)), 
}), out_len + 5 + 1 + 1);
	int i = 0;
	if (neg) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (*(u32*)array_get(_const_strconv__ftoa__ten_pow_table_32, out_len - n_digit)) + 1;
		out /= (*(u32*)array_get(_const_strconv__ftoa__ten_pow_table_32, out_len - n_digit));
		out_len = n_digit;
	}
	int y = i + out_len;
	int x = 0;
	while (x < (out_len - disp - 1)) {
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		out /= 10;
		i++;
		x++;
	}
	if (out_len >= 1) {
		array_set(&buf, y - x, &(byte[]) { '.' });
		x++;
		i++;
	}
	if (y - x >= 0) {
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		i++;
	}
	array_set(&buf, i, &(byte[]) { 'e' });
	i++;
	int exp = d.e + out_len_original - 1;
	if (exp < 0) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
		exp = -exp;
	} else {
		array_set(&buf, i, &(byte[]) { '+' });
		i++;
	}
	int d1 = exp % 10;
	int d0 = exp / 10;
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d0)) });
	i++;
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d1)) });
	i++;
	array_set(&buf, i, &(byte[]) { 0 });
	return tos(((byteptr)(&(*(byte*)array_get(buf, 0)))), i);
}

multi_return_strconv__ftoa__Dec32_bool strconv__ftoa__f32_to_decimal_exact_int(u32 i_mant, u32 exp) { 
	strconv__ftoa__Dec32 d = (strconv__ftoa__Dec32){
		.m = 0,
		.e = 0,
	};
	u32 e = exp - _const_strconv__ftoa__bias32;
	if (e > _const_strconv__ftoa__mantbits32) {
		return (multi_return_strconv__ftoa__Dec32_bool){.arg0=d,.arg1=false};
	}
	u32 shift = _const_strconv__ftoa__mantbits32 - e;
	u32 mant = (i_mant | 0x00800000);
	d.m = mant >> shift;
	if ((d.m << shift) != mant) {
		return (multi_return_strconv__ftoa__Dec32_bool){.arg0=d,.arg1=false};
	}
	while ((d.m % 10) == 0) {
		d.m /= 10;
		d.e++;
	}
	return (multi_return_strconv__ftoa__Dec32_bool){.arg0=d,.arg1=true};
}

strconv__ftoa__Dec32 strconv__ftoa__f32_to_decimal(u32 mant, u32 exp) { 
	int e2 = 0;
	u32 m2 = ((u32)(0));
	if (exp == 0) {
		e2 = 1 - _const_strconv__ftoa__bias32 - _const_strconv__ftoa__mantbits32 - 2;
		m2 = mant;
	} else {
		e2 = ((int)(exp)) - _const_strconv__ftoa__bias32 - _const_strconv__ftoa__mantbits32 - 2;
		m2 = ((((u32)(1)) << _const_strconv__ftoa__mantbits32) | mant);
	}
	bool even = ((m2 & 1)) == 0;
	bool accept_bounds = even;
	u32 mv = ((u32)(4 * m2));
	u32 mp = ((u32)(4 * m2 + 2));
	u32 mm_shift = strconv__ftoa__bool_to_u32(mant != 0 || exp <= 1);
	u32 mm = ((u32)(4 * m2 - 1 - mm_shift));
	u32 vr = ((u32)(0));
	u32 vp = ((u32)(0));
	u32 vm = ((u32)(0));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	byte last_removed_digit = ((byte)(0));
	if (e2 >= 0) {
		u32 q = strconv__ftoa__log10_pow2(e2);
		e10 = ((int)(q));
		int k = _const_strconv__ftoa__pow5_inv_num_bits_32 + strconv__ftoa__pow5_bits(((int)(q))) - 1;
		int i = -e2 + ((int)(q)) + k;
		vr = strconv__ftoa__mul_pow5_invdiv_pow2(mv, q, i);
		vp = strconv__ftoa__mul_pow5_invdiv_pow2(mp, q, i);
		vm = strconv__ftoa__mul_pow5_invdiv_pow2(mm, q, i);
		if (q != 0 && (vp - 1) / 10 <= vm / 10) {
			int l = _const_strconv__ftoa__pow5_inv_num_bits_32 + strconv__ftoa__pow5_bits(((int)(q - 1))) - 1;
			last_removed_digit = ((byte)(strconv__ftoa__mul_pow5_invdiv_pow2(mv, q - 1, -e2 + ((int)(q - 1)) + l) % 10));
		}
		if (q <= 9) {
			if (mv % 5 == 0) {
				vr_is_trailing_zeros = strconv__ftoa__multiple_of_power_of_five_32(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__ftoa__multiple_of_power_of_five_32(mm, q);
			} else if (strconv__ftoa__multiple_of_power_of_five_32(mp, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__ftoa__log10_pow5(-e2);
		e10 = ((int)(q)) + e2;
		int i = -e2 - ((int)(q));
		int k = strconv__ftoa__pow5_bits(i) - _const_strconv__ftoa__pow5_num_bits_32;
		int j = ((int)(q)) - k;
		vr = strconv__ftoa__mul_pow5_div_pow2(mv, ((u32)(i)), j);
		vp = strconv__ftoa__mul_pow5_div_pow2(mp, ((u32)(i)), j);
		vm = strconv__ftoa__mul_pow5_div_pow2(mm, ((u32)(i)), j);
		if (q != 0 && ((vp - 1) / 10) <= vm / 10) {
			j = ((int)(q)) - 1 - (strconv__ftoa__pow5_bits(i + 1) - _const_strconv__ftoa__pow5_num_bits_32);
			last_removed_digit = ((byte)(strconv__ftoa__mul_pow5_div_pow2(mv, ((u32)(i + 1)), j) % 10));
		}
		if (q <= 1) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = mm_shift == 1;
			} else {
				vp--;
			}
		} else if (q < 31) {
			vr_is_trailing_zeros = strconv__ftoa__multiple_of_power_of_two_32(mv, q - 1);
		}
	}
	int removed = 0;
	u32 out = ((u32)(0));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		while (vp / 10 > vm / 10) {
			vm_is_trailing_zeros = vm_is_trailing_zeros && (vm % 10) == 0;
			vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
			last_removed_digit = ((byte)(vr % 10));
			vr /= 10;
			vp /= 10;
			vm /= 10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			while (vm % 10 == 0) {
				vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
				last_removed_digit = ((byte)(vr % 10));
				vr /= 10;
				vp /= 10;
				vm /= 10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && (last_removed_digit == 5) && (vr % 2) == 0) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		while (vp / 10 > vm / 10) {
			last_removed_digit = ((byte)(vr % 10));
			vr /= 10;
			vp /= 10;
			vm /= 10;
			removed++;
		}
		out = vr + strconv__ftoa__bool_to_u32(vr == vm || last_removed_digit >= 5);
	}
	return (strconv__ftoa__Dec32){
		.m = out,
		.e = e10 + removed,
	};
}

string strconv__ftoa__f32_to_str(f32 f, int n_digit) { 
	strconv__ftoa__Uf32 u1 = (strconv__ftoa__Uf32){
		.f = 0,
		.u = 0,
	};
	u1.f = f;
	u32 u = u1.u;
	bool neg = (u >> (_const_strconv__ftoa__mantbits32 + _const_strconv__ftoa__expbits32)) != 0;
	u32 mant = (u & ((((u32)(1)) << _const_strconv__ftoa__mantbits32) - ((u32)(1))));
	u32 exp = ((u >> _const_strconv__ftoa__mantbits32) & ((((u32)(1)) << _const_strconv__ftoa__expbits32) - ((u32)(1))));
	if ((exp == _const_strconv__ftoa__maxexp32) || (exp == 0 && mant == 0)) {
		return strconv__ftoa__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__ftoa__Dec32_bool mr_8274 = strconv__ftoa__f32_to_decimal_exact_int(mant, exp);
	strconv__ftoa__Dec32 d = mr_8274.arg0;
	bool ok = mr_8274.arg1;
	if (!ok) {
		d = strconv__ftoa__f32_to_decimal(mant, exp);
	}
	return strconv__ftoa__Dec32_get_string_32(d, neg, n_digit);
}

string strconv__ftoa__Dec64_get_string_64(strconv__ftoa__Dec64 d, bool neg, int i_n_digit) { 
	int n_digit = i_n_digit + 1;
	u64 out = d.m;
	int out_len = strconv__ftoa__decimal_len_64(out);
	int out_len_original = out_len;
	array_byte buf = array_repeat(new_array_from_c_array(1, 1, sizeof(byte), (byte[1]){	
	((byte)(0)), 
}), out_len + 6 + 1 + 1);
	int i = 0;
	if (neg) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (*(u64*)array_get(_const_strconv__ftoa__ten_pow_table_64, out_len - n_digit)) + 1;
		out /= (*(u64*)array_get(_const_strconv__ftoa__ten_pow_table_64, out_len - n_digit));
		out_len = n_digit;
	}
	int y = i + out_len;
	int x = 0;
	while (x < (out_len - disp - 1)) {
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		out /= 10;
		i++;
		x++;
	}
	if (out_len >= 1) {
		array_set(&buf, y - x, &(byte[]) { '.' });
		x++;
		i++;
	}
	if (y - x >= 0) {
		array_set(&buf, y - x, &(byte[]) { '0' + ((byte)(out % 10)) });
		i++;
	}
	array_set(&buf, i, &(byte[]) { 'e' });
	i++;
	int exp = d.e + out_len_original - 1;
	if (exp < 0) {
		array_set(&buf, i, &(byte[]) { '-' });
		i++;
		exp = -exp;
	} else {
		array_set(&buf, i, &(byte[]) { '+' });
		i++;
	}
	int d2 = exp % 10;
	exp /= 10;
	int d1 = exp % 10;
	int d0 = exp / 10;
	if (d0 > 0) {
		array_set(&buf, i, &(byte[]) { '0' + ((byte)(d0)) });
		i++;
	}
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d1)) });
	i++;
	array_set(&buf, i, &(byte[]) { '0' + ((byte)(d2)) });
	i++;
	array_set(&buf, i, &(byte[]) { 0 });
	return tos(((byteptr)(&(*(byte*)array_get(buf, 0)))), i);
}

multi_return_strconv__ftoa__Dec64_bool strconv__ftoa__f64_to_decimal_exact_int(u64 i_mant, u64 exp) { 
	strconv__ftoa__Dec64 d = (strconv__ftoa__Dec64){
		.m = 0,
		.e = 0,
	};
	u64 e = exp - _const_strconv__ftoa__bias64;
	if (e > _const_strconv__ftoa__mantbits64) {
		return (multi_return_strconv__ftoa__Dec64_bool){.arg0=d,.arg1=false};
	}
	u32 shift = _const_strconv__ftoa__mantbits64 - e;
	u64 mant = (i_mant | ((u64)(0x0010000000000000)));
	d.m = mant >> shift;
	if ((d.m << shift) != mant) {
		return (multi_return_strconv__ftoa__Dec64_bool){.arg0=d,.arg1=false};
	}
	while ((d.m % 10) == 0) {
		d.m /= 10;
		d.e++;
	}
	return (multi_return_strconv__ftoa__Dec64_bool){.arg0=d,.arg1=true};
}

strconv__ftoa__Dec64 strconv__ftoa__f64_to_decimal(u64 mant, u64 exp) { 
	int e2 = 0;
	u64 m2 = ((u64)(0));
	if (exp == 0) {
		e2 = 1 - _const_strconv__ftoa__bias64 - _const_strconv__ftoa__mantbits64 - 2;
		m2 = mant;
	} else {
		e2 = ((int)(exp)) - _const_strconv__ftoa__bias64 - _const_strconv__ftoa__mantbits64 - 2;
		m2 = ((((u64)(1)) << _const_strconv__ftoa__mantbits64) | mant);
	}
	bool even = ((m2 & 1)) == 0;
	bool accept_bounds = even;
	u64 mv = ((u64)(4 * m2));
	u64 mm_shift = strconv__ftoa__bool_to_u64(mant != 0 || exp <= 1);
	u64 vr = ((u64)(0));
	u64 vp = ((u64)(0));
	u64 vm = ((u64)(0));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	if (e2 >= 0) {
		u32 q = strconv__ftoa__log10_pow2(e2) - strconv__ftoa__bool_to_u32(e2 > 3);
		e10 = ((int)(q));
		int k = _const_strconv__ftoa__pow5_inv_num_bits_64 + strconv__ftoa__pow5_bits(((int)(q))) - 1;
		int i = -e2 + ((int)(q)) + k;
		strconv__ftoa__Uint128 mul = (*(strconv__ftoa__Uint128*)array_get(_const_strconv__ftoa__pow5_inv_split_64, q));
		vr = strconv__ftoa__mul_shift_64(((u64)(4)) * m2, mul, i);
		vp = strconv__ftoa__mul_shift_64(((u64)(4)) * m2 + ((u64)(2)), mul, i);
		vm = strconv__ftoa__mul_shift_64(((u64)(4)) * m2 - ((u64)(1)) - mm_shift, mul, i);
		if (q <= 21) {
			if (mv % 5 == 0) {
				vr_is_trailing_zeros = strconv__ftoa__multiple_of_power_of_five_64(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__ftoa__multiple_of_power_of_five_64(mv - 1 - mm_shift, q);
			} else if (strconv__ftoa__multiple_of_power_of_five_64(mv + 2, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__ftoa__log10_pow5(-e2) - strconv__ftoa__bool_to_u32(-e2 > 1);
		e10 = ((int)(q)) + e2;
		int i = -e2 - ((int)(q));
		int k = strconv__ftoa__pow5_bits(i) - _const_strconv__ftoa__pow5_num_bits_64;
		int j = ((int)(q)) - k;
		strconv__ftoa__Uint128 mul = (*(strconv__ftoa__Uint128*)array_get(_const_strconv__ftoa__pow5_split_64, i));
		vr = strconv__ftoa__mul_shift_64(((u64)(4)) * m2, mul, j);
		vp = strconv__ftoa__mul_shift_64(((u64)(4)) * m2 + ((u64)(2)), mul, j);
		vm = strconv__ftoa__mul_shift_64(((u64)(4)) * m2 - ((u64)(1)) - mm_shift, mul, j);
		if (q <= 1) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = (mm_shift == 1);
			} else {
				vp--;
			}
		} else if (q < 63) {
			vr_is_trailing_zeros = strconv__ftoa__multiple_of_power_of_two_64(mv, q - 1);
		}
	}
	int removed = 0;
	byte last_removed_digit = ((byte)(0));
	u64 out = ((u64)(0));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		while (1) {
			u64 vp_div_10 = vp / 10;
			u64 vm_div_10 = vm / 10;
			if (vp_div_10 <= vm_div_10) {
				break;
			}
			u64 vm_mod_10 = vm % 10;
			u64 vr_div_10 = vr / 10;
			u64 vr_mod_10 = vr % 10;
			vm_is_trailing_zeros = vm_is_trailing_zeros && vm_mod_10 == 0;
			vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
			last_removed_digit = ((byte)(vr_mod_10));
			vr = vr_div_10;
			vp = vp_div_10;
			vm = vm_div_10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			while (1) {
				u64 vm_div_10 = vm / 10;
				u64 vm_mod_10 = vm % 10;
				if (vm_mod_10 != 0) {
					break;
				}
				u64 vp_div_10 = vp / 10;
				u64 vr_div_10 = vr / 10;
				u64 vr_mod_10 = vr % 10;
				vr_is_trailing_zeros = vr_is_trailing_zeros && (last_removed_digit == 0);
				last_removed_digit = ((byte)(vr_mod_10));
				vr = vr_div_10;
				vp = vp_div_10;
				vm = vm_div_10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && (last_removed_digit == 5) && (vr % 2) == 0) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		bool round_up = false;
		while (vp / 100 > vm / 100) {
			round_up = (vr % 100) >= 50;
			vr /= 100;
			vp /= 100;
			vm /= 100;
			removed += 2;
		}
		while (vp / 10 > vm / 10) {
			round_up = (vr % 10) >= 5;
			vr /= 10;
			vp /= 10;
			vm /= 10;
			removed++;
		}
		out = vr + strconv__ftoa__bool_to_u64(vr == vm || round_up);
	}
	return (strconv__ftoa__Dec64){
		.m = out,
		.e = e10 + removed,
	};
}

string strconv__ftoa__f64_to_str(f64 f, int n_digit) { 
	strconv__ftoa__Uf64 u1 = (strconv__ftoa__Uf64){
		.f = 0,
		.u = 0,
	};
	u1.f = f;
	u64 u = u1.u;
	bool neg = (u >> (_const_strconv__ftoa__mantbits64 + _const_strconv__ftoa__expbits64)) != 0;
	u64 mant = (u & ((((u64)(1)) << _const_strconv__ftoa__mantbits64) - ((u64)(1))));
	u64 exp = ((u >> _const_strconv__ftoa__mantbits64) & ((((u64)(1)) << _const_strconv__ftoa__expbits64) - ((u64)(1))));
	if ((exp == _const_strconv__ftoa__maxexp64) || (exp == 0 && mant == 0)) {
		return strconv__ftoa__get_string_special(neg, exp == 0, mant == 0);
	}
	multi_return_strconv__ftoa__Dec64_bool mr_9661 = strconv__ftoa__f64_to_decimal_exact_int(mant, exp);
	strconv__ftoa__Dec64 d = mr_9661.arg0;
	bool ok = mr_9661.arg1;
	if (!ok) {
		d = strconv__ftoa__f64_to_decimal(mant, exp);
	}
	return strconv__ftoa__Dec64_get_string_64(d, neg, n_digit);
}

//[inline]
string strconv__ftoa__ftoa_64(f64 f) { 
	return strconv__ftoa__f64_to_str(f, 17);
}

//[inline]
string strconv__ftoa__ftoa_long_64(f64 f) { 
	return strconv__ftoa__f64_to_str_l(f);
}

//[inline]
string strconv__ftoa__ftoa_32(f32 f) { 
	return strconv__ftoa__f32_to_str(f, 8);
}

//[inline]
string strconv__ftoa__ftoa_long_32(f32 f) { 
	return strconv__ftoa__f32_to_str_l(f);
}

void strconv__ftoa__assert1(bool t, string msg) { 
	if (!t) {
		v_panic(msg);
	}
}

//[inline]
int strconv__ftoa__bool_to_int(bool b) { 
	if (b) {
		return 1;
	}
	return 0;
}

//[inline]
u32 strconv__ftoa__bool_to_u32(bool b) { 
	if (b) {
		return ((u32)(1));
	}
	return ((u32)(0));
}

//[inline]
u64 strconv__ftoa__bool_to_u64(bool b) { 
	if (b) {
		return ((u64)(1));
	}
	return ((u64)(0));
}

string strconv__ftoa__get_string_special(bool neg, bool expZero, bool mantZero) { 
	if (!mantZero) {
		return tos3("nan");
	}
	if (!expZero) {
		if (neg) {
			return tos3("-inf");
		} else {
			return tos3("+inf");
		}
	}
	if (neg) {
		return tos3("-0e+00");
	}
	return tos3("0e+00");
}

int strconv__ftoa__decimal_len_32(u32 u) { 
	strconv__ftoa__assert1(u < 1000000000, tos3("too big"));
	if (u >= 100000000) {
		return 9;
	} else if (u >= 10000000) {
		return 8;
	} else if (u >= 1000000) {
		return 7;
	} else if (u >= 100000) {
		return 6;
	} else if (u >= 10000) {
		return 5;
	} else if (u >= 1000) {
		return 4;
	} else if (u >= 100) {
		return 3;
	} else if (u >= 10) {
		return 2;
	}
	return 1;
}

u32 strconv__ftoa__mul_shift_32(u32 m, u64 mul, int ishift) { 
	multi_return_u64_u64 mr_2331 = math__bits__mul_64(((u64)(m)), mul);
	u64 hi = mr_2331.arg0;
	u64 lo = mr_2331.arg1;
	u64 shifted_sum = (lo >> ((u64)(ishift))) + (hi << ((u64)(64 - ishift)));
	strconv__ftoa__assert1(shifted_sum <= 2147483647, tos3("shiftedSum <= math.max_u32"));
	return ((u32)(shifted_sum));
}

u32 strconv__ftoa__mul_pow5_invdiv_pow2(u32 m, u32 q, int j) { 
	return strconv__ftoa__mul_shift_32(m, (*(u64*)array_get(_const_strconv__ftoa__pow5_inv_split_32, q)), j);
}

u32 strconv__ftoa__mul_pow5_div_pow2(u32 m, u32 i, int j) { 
	return strconv__ftoa__mul_shift_32(m, (*(u64*)array_get(_const_strconv__ftoa__pow5_split_32, i)), j);
}

u32 strconv__ftoa__pow5_factor_32(u32 i_v) { 
	u32 v = i_v;
	for (u32 n = ((u32)(0));
	true; n++) {
		u32 q = v / 5;
		u32 r = v % 5;
		if (r != 0) {
			return n;
		}
		v = q;
	}
	return v;
}

bool strconv__ftoa__multiple_of_power_of_five_32(u32 v, u32 p) { 
	return strconv__ftoa__pow5_factor_32(v) >= p;
}

bool strconv__ftoa__multiple_of_power_of_two_32(u32 v, u32 p) { 
	return ((u32)(math__bits__trailing_zeros_32(v))) >= p;
}

u32 strconv__ftoa__log10_pow2(int e) { 
	strconv__ftoa__assert1(e >= 0, tos3("e >= 0"));
	strconv__ftoa__assert1(e <= 1650, tos3("e <= 1650"));
	return (((u32)(e)) * 78913) >> 18;
}

u32 strconv__ftoa__log10_pow5(int e) { 
	strconv__ftoa__assert1(e >= 0, tos3("e >= 0"));
	strconv__ftoa__assert1(e <= 2620, tos3("e <= 2620"));
	return (((u32)(e)) * 732923) >> 20;
}

int strconv__ftoa__pow5_bits(int e) { 
	strconv__ftoa__assert1(e >= 0, tos3("e >= 0"));
	strconv__ftoa__assert1(e <= 3528, tos3("e <= 3528"));
	return ((int)(((((u32)(e)) * 1217359) >> 19) + 1));
}

int strconv__ftoa__decimal_len_64(u64 u) { 
	int log2 = 64 - math__bits__leading_zeros_64(u) - 1;
	int t = (log2 + 1) * 1233 >> 12;
	return t - strconv__ftoa__bool_to_int(u < (*(u64*)array_get(_const_strconv__ftoa__powers_of_10, t))) + 1;
}

u64 strconv__ftoa__shift_right_128(strconv__ftoa__Uint128 v, int shift) { 
	strconv__ftoa__assert1(shift < 64, tos3("shift < 64"));
	return ((v.hi << ((u64)(64 - shift))) | (v.lo >> ((u32)(shift))));
}

u64 strconv__ftoa__mul_shift_64(u64 m, strconv__ftoa__Uint128 mul, int shift) { 
	multi_return_u64_u64 mr_5021 = math__bits__mul_64(m, mul.hi);
	u64 hihi = mr_5021.arg0;
	u64 hilo = mr_5021.arg1;
	multi_return_u64_u64 mr_5059 = math__bits__mul_64(m, mul.lo);
	u64 lohi = mr_5059.arg0;
	strconv__ftoa__Uint128 sum = (strconv__ftoa__Uint128){
		.hi = hihi,
		.lo = lohi + hilo,
	};
	if (sum.lo < lohi) {
		sum.hi++;
	}
	return strconv__ftoa__shift_right_128(sum, shift - 64);
}

u32 strconv__ftoa__pow5_factor_64(u64 v_i) { 
	u64 v = v_i;
	for (u32 n = ((u32)(0));
	true; n++) {
		u64 q = v / 5;
		u64 r = v % 5;
		if (r != 0) {
			return n;
		}
		v = q;
	}
	return ((u32)(0));
}

bool strconv__ftoa__multiple_of_power_of_five_64(u64 v, u32 p) { 
	return strconv__ftoa__pow5_factor_64(v) >= p;
}

bool strconv__ftoa__multiple_of_power_of_two_64(u64 v, u32 p) { 
	return ((u32)(math__bits__trailing_zeros_64(v))) >= p;
}

string strconv__ftoa__f32_to_str_l(f64 f) { 
	return strconv__ftoa__f64_to_str_l(((f32)(f)));
}

string strconv__ftoa__f64_to_str_l(f64 f) { 
	string s = strconv__ftoa__f64_to_str(f, 18);
	if (s.len > 2 && (string_at(s, 0) == 'n' || string_at(s, 1) == 'i')) {
		return s;
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	array_fixed_byte_26 b= {0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int tmp2 = 0; tmp2 < s.len; tmp2++) {
	byte c = s.str[tmp2];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1++] = c;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = i - 1;
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return tos3("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (string_at(s, i) == '-') {
		exp_sgn = -1;
		i++;
	} else if (string_at(s, i) == '+') {
		exp_sgn = 1;
		i++;
	}
	for (int tmp6 = 0; tmp6 < string_substr(s, i, s.len).len; tmp6++) {
	byte c = string_substr(s, i, s.len).str[tmp6];
		exp = exp * 10 + ((int)(c - '0'));
	}
	array_byte res = array_repeat(new_array_from_c_array(1, 1, sizeof(byte), (byte[1]){	
	'0', 
}), exp + 32);
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			array_set(&res, r_i++, &(byte[]) { '+' });
		}
	} else {
		array_set(&res, r_i++, &(byte[]) { '-' });
	}
	i = 0;
	if (exp_sgn >= 0) {
		while (b[i] != 0) {
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					array_set(&res, r_i++, &(byte[]) { '.' });
				}
				exp--;
			}
		}
		while (exp >= 0) {
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
		}
	} else {
		bool dot_p = true;
		while (exp > 0) {
			array_set(&res, r_i++, &(byte[]) { '0' });
			exp--;
			if (dot_p) {
				array_set(&res, r_i++, &(byte[]) { '.' });
				dot_p = false;
			}
		}
		while (b[i] != 0) {
			array_set(&res, r_i++, &(byte[]) { b[i] });
			i++;
		}
	}
	array_set(&res, r_i, &(byte[]) { 0 });
	return tos(&(*(byte*)array_get(res, 0)), r_i);
}

u64 hash__wyhash__rand_u64(u64* seed) { 
	return 0;
}


//[inline]
u64 hash__wyhash__wyhash_c(byteptr key, u64 len, u64 seed) { 
	return wyhash(key, len, seed);
}

//[inline]
u64 hash__wyhash__sum64_string(string key, u64 seed) { 
	return hash__wyhash__wyhash64(key.str, ((u64)(key.len)), seed);
}

//[inline]
u64 hash__wyhash__sum64(array_byte key, u64 seed) { 
	return hash__wyhash__wyhash64(key.data, ((u64)(key.len)), seed);
}

//[inline]
u64 hash__wyhash__wyhash64(byteptr key, u64 len, u64 seed_) { 
	if (len == 0) {
		return 0;
	}
	byte* p = &key[0];
	u64 seed = seed_;
	u64 i = (len & 63);
	if (i < 4) {
		seed = hash__wyhash__wymum(((hash__wyhash__wyr3(p, i) ^ seed) ^ _const_hash__wyhash__wyp0), (seed ^ _const_hash__wyhash__wyp1));
	} else if (i <= 8) {
		seed = hash__wyhash__wymum(((hash__wyhash__wyr4(p) ^ seed) ^ _const_hash__wyhash__wyp0), ((hash__wyhash__wyr4(p + i - 4) ^ seed) ^ _const_hash__wyhash__wyp1));
	} else if (i <= 16) {
		seed = hash__wyhash__wymum(((hash__wyhash__wyr8(p) ^ seed) ^ _const_hash__wyhash__wyp0), ((hash__wyhash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyhash__wyp1));
	} else if (i <= 24) {
		seed = (hash__wyhash__wymum(((hash__wyhash__wyr8(p) ^ seed) ^ _const_hash__wyhash__wyp0), ((hash__wyhash__wyr8(p + 8) ^ seed) ^ _const_hash__wyhash__wyp1)) ^ hash__wyhash__wymum(((hash__wyhash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyhash__wyp2), (seed ^ _const_hash__wyhash__wyp3)));
	} else if (i <= 32) {
		seed = (hash__wyhash__wymum(((hash__wyhash__wyr8(p) ^ seed) ^ _const_hash__wyhash__wyp0), ((hash__wyhash__wyr8(p + 8) ^ seed) ^ _const_hash__wyhash__wyp1)) ^ hash__wyhash__wymum(((hash__wyhash__wyr8(p + 16) ^ seed) ^ _const_hash__wyhash__wyp2), ((hash__wyhash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyhash__wyp3)));
	} else {
		seed = (((hash__wyhash__wymum(((hash__wyhash__wyr8(p) ^ seed) ^ _const_hash__wyhash__wyp0), ((hash__wyhash__wyr8(p + 8) ^ seed) ^ _const_hash__wyhash__wyp1)) ^ hash__wyhash__wymum(((hash__wyhash__wyr8(p + 16) ^ seed) ^ _const_hash__wyhash__wyp2), ((hash__wyhash__wyr8(p + 24) ^ seed) ^ _const_hash__wyhash__wyp3))) ^ hash__wyhash__wymum(((hash__wyhash__wyr8(p + i - 32) ^ seed) ^ _const_hash__wyhash__wyp1), ((hash__wyhash__wyr8(p + i - 24) ^ seed) ^ _const_hash__wyhash__wyp2))) ^ hash__wyhash__wymum(((hash__wyhash__wyr8(p + i - 16) ^ seed) ^ _const_hash__wyhash__wyp3), ((hash__wyhash__wyr8(p + i - 8) ^ seed) ^ _const_hash__wyhash__wyp0)));
	}
	if (i == len) {
		return hash__wyhash__wymum(seed, (len ^ _const_hash__wyhash__wyp4));
	}
	u64 see1 = seed;
	u64 see2 = seed;
	u64 see3 = seed;
	p = p + i;
	for (i = len - i;
	i >= 64; i -= 64) {
		seed = hash__wyhash__wymum(((hash__wyhash__wyr8(p) ^ seed) ^ _const_hash__wyhash__wyp0), ((hash__wyhash__wyr8(p + 8) ^ seed) ^ _const_hash__wyhash__wyp1));
		see1 = hash__wyhash__wymum(((hash__wyhash__wyr8(p + 16) ^ see1) ^ _const_hash__wyhash__wyp2), ((hash__wyhash__wyr8(p + 24) ^ see1) ^ _const_hash__wyhash__wyp3));
		see2 = hash__wyhash__wymum(((hash__wyhash__wyr8(p + 32) ^ see2) ^ _const_hash__wyhash__wyp1), ((hash__wyhash__wyr8(p + 40) ^ see2) ^ _const_hash__wyhash__wyp2));
		see3 = hash__wyhash__wymum(((hash__wyhash__wyr8(p + 48) ^ see3) ^ _const_hash__wyhash__wyp3), ((hash__wyhash__wyr8(p + 56) ^ see3) ^ _const_hash__wyhash__wyp0));
		p = p + 64;
	}
	return hash__wyhash__wymum(((seed ^ see1) ^ see2), ((see3 ^ len) ^ _const_hash__wyhash__wyp4));
}

//[inline]
u64 hash__wyhash__wyrotr(u64 v, u32 k) { 
	return ((v >> k) | (v << (64 - k)));
}

//[inline]
u64 hash__wyhash__wymum(u64 a, u64 b) { 
	u32 mask32 = ((u32)(4294967295));
	u64 x0 = (a & mask32);
	u64 x1 = a >> 32;
	u64 y0 = (b & mask32);
	u64 y1 = b >> 32;
	u64 w0 = x0 * y0;
	u64 t = x1 * y0 + (w0 >> 32);
	u64 w1 = (t & mask32);
	u64 w2 = t >> 32;
	w1 += x0 * y1;
	u64 hi = x1 * y1 + w2 + (w1 >> 32);
	u64 lo = a * b;
	return (hi ^ lo);
}

//[inline]
u64 hash__wyhash__wyr3(byteptr p, u64 k) { 
	return (((((u64)(p[0])) << 16) | (((u64)(p[k >> 1])) << 8)) | ((u64)(p[k - 1])));
}

//[inline]
u64 hash__wyhash__wyr4(byteptr p) { 
	return (((((u32)(p[0])) | (((u32)(p[1])) << ((u32)(8)))) | (((u32)(p[2])) << ((u32)(16)))) | (((u32)(p[3])) << ((u32)(24))));
}

//[inline]
u64 hash__wyhash__wyr8(byteptr p) { 
	return (((((((((u64)(p[0])) | (((u64)(p[1])) << 8)) | (((u64)(p[2])) << 16)) | (((u64)(p[3])) << 24)) | (((u64)(p[4])) << 32)) | (((u64)(p[5])) << 40)) | (((u64)(p[6])) << 48)) | (((u64)(p[7])) << 56));
}

multi_return_u32_u32_u32 strconv__lsr96(u32 s2, u32 s1, u32 s0) { 
	u32 r0 = ((u32)(0));
	u32 r1 = ((u32)(0));
	u32 r2 = ((u32)(0));
	r0 = ((s0 >> 1) | (((s1 & ((u32)(1)))) << 31));
	r1 = ((s1 >> 1) | (((s2 & ((u32)(1)))) << 31));
	r2 = s2 >> 1;
	return (multi_return_u32_u32_u32){.arg0=r2,.arg1=r1,.arg2=r0};
}

multi_return_u32_u32_u32 strconv__lsl96(u32 s2, u32 s1, u32 s0) { 
	u32 r0 = ((u32)(0));
	u32 r1 = ((u32)(0));
	u32 r2 = ((u32)(0));
	r2 = ((s2 << 1) | (((s1 & (((u32)(1)) << 31))) >> 31));
	r1 = ((s1 << 1) | (((s0 & (((u32)(1)) << 31))) >> 31));
	r0 = s0 << 1;
	return (multi_return_u32_u32_u32){.arg0=r2,.arg1=r1,.arg2=r0};
}

multi_return_u32_u32_u32 strconv__add96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) { 
	u64 w = ((u64)(0));
	u32 r0 = ((u32)(0));
	u32 r1 = ((u32)(0));
	u32 r2 = ((u32)(0));
	w = ((u64)(s0)) + ((u64)(d0));
	r0 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s1)) + ((u64)(d1));
	r1 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s2)) + ((u64)(d2));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2,.arg1=r1,.arg2=r0};
}

multi_return_u32_u32_u32 strconv__sub96(u32 s2, u32 s1, u32 s0, u32 d2, u32 d1, u32 d0) { 
	u64 w = ((u64)(0));
	u32 r0 = ((u32)(0));
	u32 r1 = ((u32)(0));
	u32 r2 = ((u32)(0));
	w = ((u64)(s0)) - ((u64)(d0));
	r0 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s1)) - ((u64)(d1));
	r1 = ((u32)(w));
	w >>= 32;
	w += ((u64)(s2)) - ((u64)(d2));
	r2 = ((u32)(w));
	return (multi_return_u32_u32_u32){.arg0=r2,.arg1=r1,.arg2=r0};
}

bool strconv__is_digit(byte x) { 
	return (x >= _const_strconv__ZERO && x <= _const_strconv__NINE) == true;
}

bool strconv__is_space(byte x) { 
	return ((x >= 0x89 && x <= 0x13) || x == 0x20) == true;
}

bool strconv__is_exp(byte x) { 
	return (x == 'E' || x == 'e') == true;
}

multi_return_int_strconv__PrepNumber strconv__parser(string s) { 
	int state = _const_strconv__fsm_a;
	int digx = 0;
	byte c = ' ';
	int result = _const_strconv__parser_ok;
	bool expneg = false;
	int expexp = 0;
	int i = 0;
	strconv__PrepNumber pn = (strconv__PrepNumber){
		.negative = 0,
		.exponent = 0,
		.mantissa = 0,
	};
	while (state != _const_strconv__FSM_STOP) {
		if (state == _const_strconv__fsm_a) {
			if (strconv__is_space(c) == true) {
				c = string_at(s, i++);
			} else {
				state = _const_strconv__fsm_b;
			}
		}
		else if (state == _const_strconv__fsm_b) {
			state = _const_strconv__fsm_c;
			if (c == _const_strconv__PLUS) {
				c = string_at(s, i++);
			} else if (c == _const_strconv__MINUS) {
				pn.negative = true;
				c = string_at(s, i++);
			} else if (strconv__is_digit(c)) {
			} else if (c == _const_strconv__DPOINT) {
			} else {
				state = _const_strconv__FSM_STOP;
			}
		}
		else if (state == _const_strconv__fsm_c) {
			if (c == _const_strconv__ZERO) {
				c = string_at(s, i++);
			} else if (c == _const_strconv__DPOINT) {
				c = string_at(s, i++);
				state = _const_strconv__fsm_d;
			} else {
				state = _const_strconv__fsm_e;
			}
		}
		else if (state == _const_strconv__fsm_d) {
			if (c == _const_strconv__ZERO) {
				c = string_at(s, i++);
				if (pn.exponent > -2147483647) {
					pn.exponent--;
				}
			} else {
				state = _const_strconv__fsm_f;
			}
		}
		else if (state == _const_strconv__fsm_e) {
			if (strconv__is_digit(c)) {
				if (digx < _const_strconv__DIGITS) {
					pn.mantissa *= 10;
					pn.mantissa += ((u64)(c - _const_strconv__ZERO));
					digx++;
				} else if (pn.exponent < 2147483647) {
					pn.exponent++;
				}
				c = string_at(s, i++);
			} else if (c == _const_strconv__DPOINT) {
				c = string_at(s, i++);
				state = _const_strconv__fsm_f;
			} else {
				state = _const_strconv__fsm_f;
			}
		}
		else if (state == _const_strconv__fsm_f) {
			if (strconv__is_digit(c)) {
				if (digx < _const_strconv__DIGITS) {
					pn.mantissa *= 10;
					pn.mantissa += ((u64)(c - _const_strconv__ZERO));
					pn.exponent--;
					digx++;
				}
				c = string_at(s, i++);
			} else if (strconv__is_exp(c)) {
				c = string_at(s, i++);
				state = _const_strconv__fsm_g;
			} else {
				state = _const_strconv__fsm_g;
			}
		}
		else if (state == _const_strconv__fsm_g) {
			if (c == _const_strconv__PLUS) {
				c = string_at(s, i++);
			} else if (c == _const_strconv__MINUS) {
				expneg = true;
				c = string_at(s, i++);
			}
			state = _const_strconv__fsm_h;
		}
		else if (state == _const_strconv__fsm_h) {
			if (c == _const_strconv__ZERO) {
				c = string_at(s, i++);
			} else {
				state = _const_strconv__fsm_i;
			}
		}
		else if (state == _const_strconv__fsm_i) {
			if (strconv__is_digit(c)) {
				if (expexp < 214748364) {
					expexp *= 10;
					expexp += ((int)(c - _const_strconv__ZERO));
				}
				c = string_at(s, i++);
			} else {
				state = _const_strconv__FSM_STOP;
			}
		}
		else {
		}
		;
		if (i >= s.len) {
			state = _const_strconv__FSM_STOP;
		}
	}
	if (expneg) {
		expexp = -expexp;
	}
	pn.exponent += expexp;
	if (pn.mantissa == 0) {
		if (pn.negative) {
			result = _const_strconv__parser_mzero;
		} else {
			result = _const_strconv__parser_pzero;
		}
	} else if (pn.exponent > 309) {
		if (pn.negative) {
			result = _const_strconv__parser_minf;
		} else {
			result = _const_strconv__parser_pinf;
		}
	} else if (pn.exponent < -328) {
		if (pn.negative) {
			result = _const_strconv__parser_mzero;
		} else {
			result = _const_strconv__parser_pzero;
		}
	}
	return (multi_return_int_strconv__PrepNumber){.arg0=result,.arg1=pn};
}

u64 strconv__converter(strconv__PrepNumber* pn) { 
	int binexp = 92;
	u32 s2 = ((u32)(0));
	u32 s1 = ((u32)(0));
	u32 s0 = ((u32)(0));
	u32 q2 = ((u32)(0));
	u32 q1 = ((u32)(0));
	u32 q0 = ((u32)(0));
	u32 r2 = ((u32)(0));
	u32 r1 = ((u32)(0));
	u32 r0 = ((u32)(0));
	u32 mask28 = ((u32)(0xF << 28));
	u64 result = ((u64)(0));
	s0 = ((u32)((pn->mantissa & ((u64)(0x00000000FFFFFFFF)))));
	s1 = ((u32)(pn->mantissa >> 32));
	s2 = ((u32)(0));
	while (pn->exponent > 0) {
		multi_return_u32_u32_u32 mr_7915 = strconv__lsl96(s2, s1, s0);
		q2 = mr_7915.arg0;
		q1 = mr_7915.arg1;
		q0 = mr_7915.arg2;
		multi_return_u32_u32_u32 mr_7959 = strconv__lsl96(q2, q1, q0);
		r2 = mr_7959.arg0;
		r1 = mr_7959.arg1;
		r0 = mr_7959.arg2;
		multi_return_u32_u32_u32 mr_8013 = strconv__lsl96(r2, r1, r0);
		s2 = mr_8013.arg0;
		s1 = mr_8013.arg1;
		s0 = mr_8013.arg2;
		multi_return_u32_u32_u32 mr_8067 = strconv__add96(s2, s1, s0, q2, q1, q0);
		s2 = mr_8067.arg0;
		s1 = mr_8067.arg1;
		s0 = mr_8067.arg2;
		pn->exponent--;
		while (((s2 & mask28)) != 0) {
			multi_return_u32_u32_u32 mr_8188 = strconv__lsr96(s2, s1, s0);
			q2 = mr_8188.arg0;
			q1 = mr_8188.arg1;
			q0 = mr_8188.arg2;
			binexp++;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	while (pn->exponent < 0) {
		while (!(((s2 & (((u32)(1)) << 31))) != 0)) {
			multi_return_u32_u32_u32 mr_8331 = strconv__lsl96(s2, s1, s0);
			q2 = mr_8331.arg0;
			q1 = mr_8331.arg1;
			q0 = mr_8331.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
		q2 = s2 / _const_strconv__TEN;
		r1 = s2 % _const_strconv__TEN;
		r2 = ((s1 >> 8) | (r1 << 24));
		q1 = r2 / _const_strconv__TEN;
		r1 = r2 % _const_strconv__TEN;
		r2 = (((((s1 & ((u32)(0xFF)))) << 16) | (s0 >> 16)) | (r1 << 24));
		r0 = r2 / _const_strconv__TEN;
		r1 = r2 % _const_strconv__TEN;
		q1 = ((q1 << 8) | (((r0 & ((u32)(0x00FF0000)))) >> 16));
		q0 = r0 << 16;
		r2 = (((s0 & ((u32)(0xFFFF)))) | (r1 << 16));
		q0 |= r2 / _const_strconv__TEN;
		s2 = q2;
		s1 = q1;
		s0 = q0;
		pn->exponent++;
	}
	if (s2 != 0 || s1 != 0 || s0 != 0) {
		while (((s2 & mask28)) == 0) {
			multi_return_u32_u32_u32 mr_8976 = strconv__lsl96(s2, s1, s0);
			q2 = mr_8976.arg0;
			q1 = mr_8976.arg1;
			q0 = mr_8976.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	int nbit = 7;
	u32 check_round_bit = ((u32)(1)) << ((u32)(nbit));
	u32 check_round_mask = ((u32)(0xFFFFFFFF)) << ((u32)(nbit));
	if (((s1 & check_round_bit)) != 0) {
		if (((s1 & ~check_round_mask)) != 0) {
			multi_return_u32_u32_u32 mr_10049 = strconv__add96(s2, s1, s0, 0, check_round_bit, 0);
			s2 = mr_10049.arg0;
			s1 = mr_10049.arg1;
			s0 = mr_10049.arg2;
		} else {
			if (((s1 & (check_round_bit << ((u32)(1))))) != 0) {
				multi_return_u32_u32_u32 mr_10239 = strconv__add96(s2, s1, s0, 0, check_round_bit, 0);
				s2 = mr_10239.arg0;
				s1 = mr_10239.arg1;
				s0 = mr_10239.arg2;
			}
		}
		s1 = (s1 & check_round_mask);
		s0 = ((u32)(0));
		if ((s2 & (mask28 << ((u32)(1)))) != 0) {
			multi_return_u32_u32_u32 mr_10439 = strconv__lsr96(s2, s1, s0);
			q2 = mr_10439.arg0;
			q1 = mr_10439.arg1;
			q0 = mr_10439.arg2;
			binexp--;
			s2 = q2;
			s1 = q1;
			s0 = q0;
		}
	}
	binexp += 1023;
	if (binexp > 2046) {
		if (pn->negative) {
			result = _const_strconv__DOUBLE_MINUS_INFINITY;
		} else {
			result = _const_strconv__DOUBLE_PLUS_INFINITY;
		}
	} else if (binexp < 1) {
		if (pn->negative) {
			result = _const_strconv__DOUBLE_MINUS_ZERO;
		} else {
			result = _const_strconv__DOUBLE_PLUS_ZERO;
		}
	} else if (s2 != 0) {
		u64 q = ((u64)(0));
		u64 binexs2 = ((u64)(binexp)) << 52;
		q = (((((u64)((s2 & ~mask28))) << 24) | ((((u64)(s1)) + ((u64)(128))) >> 8)) | binexs2);
		if (pn->negative) {
			q |= (((u64)(1)) << 63);
		}
		result = q;
	}
	return result;
}

f64 strconv__atof64(string s) { 
	strconv__PrepNumber pn = (strconv__PrepNumber){
		.negative = 0,
		.exponent = 0,
		.mantissa = 0,
	};
	int res_parsing = 0;
	strconv__Float64u res = (strconv__Float64u){
		.f = 0,
		.u = 0,
	};
	multi_return_int_strconv__PrepNumber mr_11586 = strconv__parser(string_add(s, tos3(" ")));
	res_parsing = mr_11586.arg0;
	pn = mr_11586.arg1;
	if (res_parsing == _const_strconv__parser_ok) {
		res.u = strconv__converter(&/*qq*/pn);
	}
	else if (res_parsing == _const_strconv__parser_pzero) {
		res.u = _const_strconv__DOUBLE_PLUS_ZERO;
	}
	else if (res_parsing == _const_strconv__parser_mzero) {
		res.u = _const_strconv__DOUBLE_MINUS_ZERO;
	}
	else if (res_parsing == _const_strconv__parser_pinf) {
		res.u = _const_strconv__DOUBLE_PLUS_INFINITY;
	}
	else if (res_parsing == _const_strconv__parser_minf) {
		res.u = _const_strconv__DOUBLE_MINUS_INFINITY;
	}
	else {
	}
	;
	return res.f;
}

byte strconv__byte_to_lower(byte c) { 
	return (c | ('x' - 'X'));
}

u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) { 
	int bit_size = _bit_size;
	int base = _base;
	if (s.len < 1 || !strconv__underscore_ok(s)) {
		return ((u64)(0));
	}
	bool base0 = base == 0;
	int start_index = 0;
	if (2 <= base && base <= 36) {
	} else if (base == 0) {
		base = 10;
		if (string_at(s, 0) == '0') {
			if (s.len >= 3 && strconv__byte_to_lower(string_at(s, 1)) == 'b') {
				base = 2;
				start_index += 2;
			} else if (s.len >= 3 && strconv__byte_to_lower(string_at(s, 1)) == 'o') {
				base = 8;
				start_index += 2;
			} else if (s.len >= 3 && strconv__byte_to_lower(string_at(s, 1)) == 'x') {
				base = 16;
				start_index += 2;
			} else if (s.len >= 2 && (string_at(s, 1) >= '0' && string_at(s, 1) <= '9')) {
				base = 10;
				start_index++;
			} else {
				base = 8;
				start_index++;
			}
		}
	} else {
		return ((u64)(0));
	}
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	} else if (bit_size < 0 || bit_size > 64) {
		return ((u64)(0));
	}
	u64 cutoff = _const_strconv__max_u64 / ((u64)(base)) + ((u64)(1));
	u64 max_val = (bit_size == 64 ? _const_strconv__max_u64 : (((u64)(1)) << ((u64)(bit_size))) - ((u64)(1)));
	bool underscores = false;
	u64 n = ((u64)(0));
	for (int tmp7 = start_index; tmp7 < s.len; tmp7++) { 
		int i = tmp7;
		byte c = string_at(s, i);
		byte cl = strconv__byte_to_lower(c);
		byte d = ((byte)(0));
		if (c == '_' && base0) {
			underscores = true;
			continue;
		} else if ('0' <= c && c <= '9') {
			d = c - '0';
		} else if ('a' <= cl && cl <= 'z') {
			d = cl - 'a' + 10;
		} else {
			if (error_on_non_digit) {
				return ((u64)(0));
			} else {
				break;
			}
		}
		if (d >= ((byte)(base))) {
			if (error_on_high_digit) {
				return ((u64)(0));
			} else {
				break;
			}
		}
		if (n >= cutoff) {
			return max_val;
		}
		n *= ((u64)(base));
		u64 n1 = n + ((u64)(d));
		if (n1 < n || n1 > max_val) {
			return max_val;
		}
		n = n1;
	}
	if (underscores && !strconv__underscore_ok(s)) {
		return ((u64)(0));
	}
	return n;
}

u64 strconv__parse_uint(string s, int _base, int _bit_size) { 
	return strconv__common_parse_uint(s, _base, _bit_size, true, true);
}

i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) { 
	string s = _s;
	int bit_size = _bit_size;
	if (s.len < 1) {
		return ((i64)(0));
	}
	bool neg = false;
	if (string_at(s, 0) == '+') {
		s = string_substr(s, 1, s.len);
	} else if (string_at(s, 0) == '-') {
		neg = true;
		s = string_substr(s, 1, s.len);
	}
	u64 un = strconv__common_parse_uint(s, base, bit_size, error_on_non_digit, error_on_high_digit);
	if (un == 0) {
		return ((i64)(0));
	}
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	}
	u64 cutoff = ((u64)(1)) << ((u64)(bit_size - 1));
	if (!neg && un >= cutoff) {
		return ((i64)(cutoff - ((u64)(1))));
	}
	if (neg && un > cutoff) {
		return -((i64)(cutoff));
	}
	return (neg ? -((i64)(un)) : ((i64)(un)));
}

i64 strconv__parse_int(string _s, int base, int _bit_size) { 
	return strconv__common_parse_int(_s, base, _bit_size, true, true);
}

int strconv__atoi(string s) { 
	if ((_const_strconv__int_size == 32 && (0 < s.len && s.len < 10)) || (_const_strconv__int_size == 64 && (0 < s.len && s.len < 19))) {
		int start_idx = 0;
		if (string_at(s, 0) == '-' || string_at(s, 0) == '+') {
			start_idx++;
			if (s.len - start_idx < 1) {
				return 0;
			}
		}
		int n = 0;
		for (int tmp4 = start_idx; tmp4 < s.len; tmp4++) { 
			int i = tmp4;
			byte ch = string_at(s, i) - '0';
			if (ch > 9) {
				return 0;
			}
			n = n * 10 + ((int)(ch));
		}
		return (string_at(s, 0) == '-' ? -n : n);
	}
	i64 int64 = strconv__parse_int(s, 10, 0);
	return ((int)(int64));
}

bool strconv__underscore_ok(string s) { 
	byte saw = '^';
	int i = 0;
	if (s.len >= 1 && (string_at(s, 0) == '-' || string_at(s, 0) == '+')) {
		i++;
	}
	bool hex = false;
	if (s.len - i >= 2 && string_at(s, i) == '0' && (strconv__byte_to_lower(string_at(s, i + 1)) == 'b' || strconv__byte_to_lower(string_at(s, i + 1)) == 'o' || strconv__byte_to_lower(string_at(s, i + 1)) == 'x')) {
		saw = '0';
		hex = strconv__byte_to_lower(string_at(s, i + 1)) == 'x';
		i += 2;
	}
	for (; i < s.len; i++) {
		if (('0' <= string_at(s, i) && string_at(s, i) <= '9') || (hex && 'a' <= strconv__byte_to_lower(string_at(s, i)) && strconv__byte_to_lower(string_at(s, i)) <= 'f')) {
			saw = '0';
			continue;
		}
		if (string_at(s, i) == '_') {
			if (saw != '0') {
				return false;
			}
			saw = '_';
			continue;
		}
		if (saw == '_') {
			return false;
		}
		saw = '!';
	}
	return saw != '_';
}

Option_array_string internal__flag__Instance_parse_impl(internal__flag__Instance* p, array_string args, voidptr value, internal__flag__void_cb callback) { 
	while (p->current_pos + 1 < p->args.len) {
		p->current_pos++;
		string next = (*(string*)array_get(p->args, p->current_pos));
		if (!string_starts_with(next, tos3("-")) || string_eq(next, tos3("-"))) {
			return opt_ok(& (array_string []) { array_slice(args, p->current_pos, args.len) }, sizeof(array_string));
		}
		if (string_eq(next, tos3("--"))) {
			return opt_ok(& (array_string []) { array_slice(args, p->current_pos + 1, args.len) }, sizeof(array_string));
		}
		string flag_name = tos3("");
		bool tmp3;
		{ /* if guard */ Option_int idx = string_index(next, tos3("="));
		if ((tmp3 = idx.ok)) {
			p->equal_val = string_substr(next, /*opt*/(*(int*)idx.data) + 1, next.len);
			flag_name = string_substr(next, 1, /*opt*/(*(int*)idx.data));
		} if (!tmp3) { /* else */
			p->equal_val = tos3("");
			flag_name = string_substr(next, 1, next.len);
		}}
		map_set(&p->encountered, flag_name, &(bool[]) { true });
		p->current_flag = flag_name;
		callback(flag_name, p, value);
	}
	return opt_ok(& (array_string []) { new_array(0, 0, sizeof(string)) }, sizeof(array_string));
}

Option_string internal__flag__Instance_string(internal__flag__Instance* p) { 
	if (string_ne(p->equal_val, tos3(""))) {
		return opt_ok(& (string []) { p->equal_val }, sizeof(string));
	}
	p->current_pos++;
	if (p->current_pos >= p->args.len) {
		return v_error(tos3("out of arguments"));
	}
	return opt_ok(& (string []) { (*(string*)array_get(p->args, p->current_pos)) }, sizeof(string));
}

Option_int internal__flag__Instance_int(internal__flag__Instance* p) { 
	Option_string val = internal__flag__Instance_string(p);
	if (!val.ok) {
		string err = val.v_error;
		int errcode = val.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	if (!byte_is_digit(string_at(/*opt*/(*(string*)val.data), 0))) {
		return v_error(_STR("an integer number was expected, but \"%.*s\" was found instead.", /*opt*/(*(string*)val.data).len, /*opt*/(*(string*)val.data).str));
	}
	return opt_ok(& (int []) { string_int(/*opt*/(*(string*)val.data)) }, sizeof(int));
}

Option_f32 internal__flag__Instance_f32(internal__flag__Instance* p) { 
	Option_string val = internal__flag__Instance_string(p);
	if (!val.ok) {
		string err = val.v_error;
		int errcode = val.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	return opt_ok(& (f32 []) { string_f32(/*opt*/(*(string*)val.data)) }, sizeof(f32));
}

Option_f64 internal__flag__Instance_f64(internal__flag__Instance* p) { 
	Option_string val = internal__flag__Instance_string(p);
	if (!val.ok) {
		string err = val.v_error;
		int errcode = val.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	return opt_ok(& (f64 []) { string_f64(/*opt*/(*(string*)val.data)) }, sizeof(f64));
}

Option_i64 internal__flag__Instance_i64(internal__flag__Instance* p) { 
	Option_string val = internal__flag__Instance_string(p);
	if (!val.ok) {
		string err = val.v_error;
		int errcode = val.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	return opt_ok(& (i64 []) { string_i64(/*opt*/(*(string*)val.data)) }, sizeof(i64));
}

bool internal__flag__Instance_bool(internal__flag__Instance* p) { 
	Option_string val = internal__flag__Instance_string(p);
	if (!val.ok) {
		string err = val.v_error;
		int errcode = val.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return true;
	};
	if (_IN(string, /*opt*/(*(string*)val.data), _const_internal__flag__truthy)) {
		return true;
	}
	if (_IN(string, /*opt*/(*(string*)val.data), _const_internal__flag__falsey)) {
		return false;
	}
	p->current_pos--;
	return true;
}

void internal__flag__Instance_is_equivalent_to(internal__flag__Instance* p, array_string flags) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < flags.
	len; tmp1++) {	string v = ((string*)flags.
	data)[tmp1];map_set(&p->encountered, v, &(bool[]) { true });
	}
}

// TypeDecl
Option_array_string internal__flag__parse_pref(array_string args, void (*callback)(string, internal__flag__Instance*, v__pref__Preferences*), v__pref__Preferences* obj) { 
	internal__flag__Instance p = (internal__flag__Instance){
		.args = args,
		.current_pos = 0,
		.current_flag = tos3(""),
		.equal_val = tos3(""),
		.encountered = new_map(1, sizeof(bool)),
	};
	Option_array_string tmp = internal__flag__Instance_parse_impl(&p, args, obj, ((internal__flag__void_cb)(callback)));
	if (!tmp.ok) {
		string err = tmp.v_error;
		int errcode = tmp.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	return opt_ok(& (array_string []) { /*opt*/(*(array_string*)tmp.data) }, sizeof(array_string));
}

Option_array_string internal__flag__parse_main_cmd(array_string args, void (*callback)(string, internal__flag__Instance*, internal__flag__MainCmdPreferences*), internal__flag__MainCmdPreferences* obj) { 
	internal__flag__Instance p = (internal__flag__Instance){
		.args = args,
		.current_pos = 0,
		.current_flag = tos3(""),
		.equal_val = tos3(""),
		.encountered = new_map(1, sizeof(bool)),
	};
	Option_array_string tmp = internal__flag__Instance_parse_impl(&p, args, obj, ((internal__flag__void_cb)(callback)));
	if (!tmp.ok) {
		string err = tmp.v_error;
		int errcode = tmp.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	return opt_ok(& (array_string []) { /*opt*/(*(array_string*)tmp.data) }, sizeof(array_string));
}




string os__getenv(string key) { 
	
#ifdef _WIN32
	// #if windows
		voidptr s = _wgetenv(string_to_wide(key));
		if (s == 0) {
			return tos3("");
		}
		return string_from_wide(s);
	#else
		char* s = getenv(key.str);
		if (s == 0) {
			return tos3("");
		}
		return cstring_to_vstring(((byteptr)(s)));
	#endif
}

int os__setenv(string name, string value, bool overwrite) { 
	
#ifdef _WIN32
	// #if windows
		string format = _STR("%.*s=%.*s", name.len, name.str, value.len, value.str);
		if (overwrite) {
			return _putenv(format.str);
		}
		return -1;
	#else
		return setenv(name.str, value.str, overwrite);
	#endif
}

int os__unsetenv(string name) { 
	
#ifdef _WIN32
	// #if windows
		string format = _STR("%.*s=", name.len, name.str);
		return _putenv(format.str);
	#else
		return unsetenv(name.str);
	#endif
}

map_string_string os__environ() { 
	map_string_string res = new_map(1, sizeof(string));
	
#ifdef _WIN32
	// #if windows
		u16* estrings = GetEnvironmentStringsW();
		string eline = tos3("");
		for (u16* c = estrings;
		*c != 0; c = c + eline.len + 1) {
			eline = string_from_wide(c);
			int eq_index = string_index_byte(eline, '=');
			if (eq_index > 0) {
				map_set(&res, string_substr(eline, 0, eq_index), &(string[]) { string_substr(eline, eq_index + 1, eline.len) });
			}
		}
		FreeEnvironmentStringsW(estrings);
	#else
		byteptr* e = ((byteptr*)(&environ));
		for (int i = 0;
		!isnil(&/*qq*/e[i]); i++) {
			string eline = cstring_to_vstring(&/*qq*/e[i]);
			int eq_index = string_index_byte(eline, '=');
			if (eq_index > 0) {
				map_set(&res, string_substr(eline, 0, eq_index), &(string[]) { string_substr(eline, eq_index + 1, eline.len) });
			}
		}
	#endif
	return res;
}

os__FileMode os__inode(string path) { 
	struct stat attr = (struct stat){
		.st_size = 0,
		.st_mode = 0,
		.st_mtime = 0,
	};
	stat(path.str, &attr);
	os__FileType typ = os__FileType_regular;
	if ((attr.st_mode & S_IFMT) == S_IFDIR) {
		typ = os__FileType_directory;
	}
	
#ifndef _WIN32
	// #if not windows
		if ((attr.st_mode & S_IFMT) == S_IFCHR) {
			typ = os__FileType_character_device;
		} else if ((attr.st_mode & S_IFMT) == S_IFBLK) {
			typ = os__FileType_block_device;
		} else if ((attr.st_mode & S_IFMT) == S_IFIFO) {
			typ = os__FileType_fifo;
		} else if ((attr.st_mode & S_IFMT) == S_IFLNK) {
			typ = os__FileType_symbolic_link;
		} else if ((attr.st_mode & S_IFMT) == S_IFSOCK) {
			typ = os__FileType_socket;
		}
	#endif
	
#ifdef _WIN32
	// #if windows
		return (os__FileMode){
			.typ = typ,
			.owner = (os__FilePermission){
			.read = ((bool)((attr.st_mode & S_IREAD))),
			.write = ((bool)((attr.st_mode & S_IWRITE))),
			.execute = ((bool)((attr.st_mode & S_IEXEC))),
		},
			.group = (os__FilePermission){
			.read = ((bool)((attr.st_mode & S_IREAD))),
			.write = ((bool)((attr.st_mode & S_IWRITE))),
			.execute = ((bool)((attr.st_mode & S_IEXEC))),
		},
			.others = (os__FilePermission){
			.read = ((bool)((attr.st_mode & S_IREAD))),
			.write = ((bool)((attr.st_mode & S_IWRITE))),
			.execute = ((bool)((attr.st_mode & S_IEXEC))),
		},
		};
	#else
		return (os__FileMode){
			.typ = typ,
			.owner = (os__FilePermission){
			.read = ((bool)((attr.st_mode & S_IRUSR))),
			.write = ((bool)((attr.st_mode & S_IWUSR))),
			.execute = ((bool)((attr.st_mode & S_IXUSR))),
		},
			.group = (os__FilePermission){
			.read = ((bool)((attr.st_mode & S_IRGRP))),
			.write = ((bool)((attr.st_mode & S_IWGRP))),
			.execute = ((bool)((attr.st_mode & S_IXGRP))),
		},
			.others = (os__FilePermission){
			.read = ((bool)((attr.st_mode & S_IROTH))),
			.write = ((bool)((attr.st_mode & S_IWOTH))),
			.execute = ((bool)((attr.st_mode & S_IXOTH))),
		},
		};
	#endif
}







bool os__File_is_opened(os__File f) { 
	return f.opened;
}

array_byte os__File_read_bytes(os__File* f, int size) { 
	return os__File_read_bytes_at(f, size, 0);
}

array_byte os__File_read_bytes_at(os__File* f, int size, int pos) { 
	array_byte arr = array_repeat(new_array_from_c_array(1, 1, sizeof(byte), (byte[1]){	
	'0', 
}), size);
	fseek(f->cfile, pos, SEEK_SET);
	int nreadbytes = fread(arr.data, 1, size, f->cfile);
	fseek(f->cfile, 0, SEEK_SET);
	return array_slice(arr, 0, nreadbytes);
}

Option_array_byte os__read_bytes(string path) { 
	FILE* fp = os__vfopen(path, tos3("rb"));
	if (isnil(fp)) {
		return v_error(_STR("failed to open file \"%.*s\"", path.len, path.str));
	}
	fseek(fp, 0, SEEK_END);
	int fsize = ftell(fp);
	rewind(fp);
	array_byte res = array_repeat(new_array_from_c_array(1, 1, sizeof(byte), (byte[1]){	
	'0', 
}), fsize);
	int nr_read_elements = fread(res.data, fsize, 1, fp);
	fclose(fp);
	return opt_ok(& (array_byte []) { array_slice(res, 0, nr_read_elements * fsize) }, sizeof(array_byte));
}

Option_string os__read_file(string path) { 
	string mode = tos3("rb");
	FILE* fp = os__vfopen(path, mode);
	if (isnil(fp)) {
		return v_error(_STR("failed to open file \"%.*s\"", path.len, path.str));
	}
	fseek(fp, 0, SEEK_END);
	int fsize = ftell(fp);
	rewind(fp);
	byte* str = ((byte*)(0));
		str = v_malloc(fsize + 1);
	fread(str, fsize, 1, fp);
	str[fsize] = 0;
	// defer
		fclose(fp);
	return opt_ok(& (string []) { tos(str, fsize) }, sizeof(string));
// defer
	fclose(fp);
}

int os__file_size(string path) { 
	struct stat s = (struct stat){
		.st_size = 0,
		.st_mode = 0,
		.st_mtime = 0,
	};
	
#ifdef _WIN32
	// #if windows
		_wstat(string_to_wide(path), ((voidptr)(&s)));
	#else
		stat(((charptr)(path.str)), &s);
	#endif
	return s.st_size;
}

void os__mv(string old, string new) { 
	
#ifdef _WIN32
	// #if windows
		_wrename(string_to_wide(old), string_to_wide(new));
	#else
		rename(((charptr)(old.str)), ((charptr)(new.str)));
	#endif
}


Option_bool os__cp(string old, string new) { 
	
#ifdef _WIN32
	// #if windows
		string _old = string_replace(old, tos3("/"), tos3("\\"));
		string _new = string_replace(new, tos3("/"), tos3("\\"));
		CopyFile(string_to_wide(_old), string_to_wide(_new), false);
		u32 result = GetLastError();
		if (result == 0) {
			return opt_ok(& (bool []) { true }, sizeof(bool));
		} else {
			return error_with_code(_STR("failed to copy %.*s to %.*s", old.len, old.str, new.len, new.str), ((int)(result)));
		}
	#else
		os__system(_STR("cp \"%.*s\" \"%.*s\"", old.len, old.str, new.len, new.str));
		return opt_ok(& (bool []) { true }, sizeof(bool));
	#endif
}

//[deprecated]
Option_bool os__cp_r(string osource_path, string odest_path, bool overwrite) { 
	v_panic(tos3("Use `os.cp_all` instead of `os.cp_r`"));
}

Option_bool os__cp_all(string osource_path, string odest_path, bool overwrite) { 
	string source_path = os__real_path(osource_path);
	string dest_path = os__real_path(odest_path);
	if (!os__exists(source_path)) {
		return v_error(tos3("Source path doesn\'t exist"));
	}
	if (!os__is_dir(source_path)) {
		string adjusted_path = (os__is_dir(dest_path) ? os__join_path(dest_path, (varg_string){.len=1,.args={os__file_name(source_path)}}) : dest_path);
		if (os__exists(adjusted_path)) {
			if (overwrite) {
				os__rm(adjusted_path);
			} else {
				return v_error(tos3("Destination file path already exist"));
			}
		}
		Option_bool tmp6 = os__cp(source_path, adjusted_path);
		if (!tmp6.ok) {
			string err = tmp6.v_error;
			int errcode = tmp6.ecode;
			// last_type: v.ast.Return
			// last_expr_result_type: 
			return v_error(err);
		};
		return opt_ok(& (bool []) { true }, sizeof(bool));
	}
	if (!os__is_dir(dest_path)) {
		return v_error(tos3("Destination path is not a valid directory"));
	}
	Option_array_string files = os__ls(source_path);
	if (!files.ok) {
		string err = files.v_error;
		int errcode = files.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	// FOR IN
	for (int tmp8 = 0; tmp8 < /*opt*/(*(array_string*)files.data).
	len; tmp8++) {	string file = ((string*)/*opt*/(*(array_string*)files.data).
	data)[tmp8];string sp = os__join_path(source_path, (varg_string){.len=1,.args={file}});
		string dp = os__join_path(dest_path, (varg_string){.len=1,.args={file}});
		if (os__is_dir(sp)) {
			Option_bool tmp10 = os__mkdir(dp);
			if (!tmp10.ok) {
				string err = tmp10.v_error;
				int errcode = tmp10.ecode;
				 // typeof it_expr_type: v.ast.CallExpr
				// last_type: v.ast.ExprStmt
				// last_expr_result_type: void
				v_panic(err);
			};
		}
		Option_bool tmp11 = os__cp_all(sp, dp, overwrite);
		if (!tmp11.ok) {
			string err = tmp11.v_error;
			int errcode = tmp11.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			os__rmdir(dp);
			v_panic(err);
		};
	}
	return opt_ok(& (bool []) { true }, sizeof(bool));
}

Option_bool os__mv_by_cp(string source, string target) { 
	Option_bool tmp1 = os__cp(source, target);
	if (!tmp1.ok) {
		string err = tmp1.v_error;
		int errcode = tmp1.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	os__rm(source);
	return opt_ok(& (bool []) { true }, sizeof(bool));
}

FILE* os__vfopen(string path, string mode) { 
	
#ifdef _WIN32
	// #if windows
		return _wfopen(string_to_wide(path), string_to_wide(mode));
	#else
		return fopen(((charptr)(path.str)), ((charptr)(mode.str)));
	#endif
}

Option_array_string os__read_lines(string path) { 
	Option_string buf = os__read_file(path);
	if (!buf.ok) {
		string err = buf.v_error;
		int errcode = buf.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	return opt_ok(& (array_string []) { string_split_into_lines(/*opt*/(*(string*)buf.data)) }, sizeof(array_string));
}

Option_array_ustring os__read_ulines(string path) { 
	Option_array_string lines = os__read_lines(path);
	if (!lines.ok) {
		string err = lines.v_error;
		int errcode = lines.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	array_ustring ulines = new_array(0, 0, sizeof(ustring));
	// FOR IN
	for (int tmp1 = 0; tmp1 < /*opt*/(*(array_string*)lines.data).
	len; tmp1++) {	string myline = ((string*)/*opt*/(*(array_string*)lines.data).
	data)[tmp1];_PUSH(&ulines, (string_ustring(myline)), tmp2, ustring);
	}
	return opt_ok(& (array_ustring []) { ulines }, sizeof(array_ustring));
}

Option_os__File os__open_append(string path) { 
	os__File file = (os__File){
		.cfile = 0,
		.fd = 0,
		.opened = 0,
	};
	
#ifdef _WIN32
	// #if windows
		u16* wpath = string_to_wide(string_replace(path, tos3("/"), tos3("\\")));
		string mode = tos3("ab");
		file = (os__File){
			.cfile = _wfopen(wpath, string_to_wide(mode)),
			.fd = 0,
			.opened = 0,
		};
	#else
		byteptr cpath = path.str;
		file = (os__File){
			.cfile = fopen(((charptr)(cpath)), "ab"),
			.fd = 0,
			.opened = 0,
		};
	#endif
	if (isnil(file.cfile)) {
		return v_error(_STR("failed to create(append) file \"%.*s\"", path.len, path.str));
	}
	file.opened = true;
	return opt_ok(& (os__File []) { file }, sizeof(os__File));
}

Option_os__File os__open_file(string path, string mode, varg_int options) { 
	int flags = 0;
	for (int tmp1 = 0; tmp1 < mode.len; tmp1++) {
	byte m = mode.str[tmp1];
		if (m == 'r') {
			flags |= _const_os__O_RDONLY;
		}
		else if (m == 'w') {
			flags |= (_const_os__O_CREATE | _const_os__O_TRUNC);
		}
		else if (m == 'a') {
			flags |= (_const_os__O_CREATE | _const_os__O_APPEND);
		}
		else if (m == 's') {
			flags |= _const_os__O_SYNC;
		}
		else if (m == 'n') {
			flags |= _const_os__O_NONBLOCK;
		}
		else if (m == 'c') {
			flags |= _const_os__O_NOCTTY;
		}
		else if (m == '+') {
			flags |= _const_os__O_RDWR;
		}
		else {
		}
		;
	}
	int permission = 0666;
	if (options.len > 0) {
		permission = options.args[0];
	}
	
#ifdef _WIN32
	// #if windows
		if (permission < 0600) {
			permission = 0x0100;
		} else {
			permission = (0x0100 | 0x0080);
		}
	#endif
	string p = path;
	
#ifdef _WIN32
	// #if windows
		p = string_replace(path, tos3("/"), tos3("\\"));
	#endif
	int fd = open(((charptr)(p.str)), flags, permission);
	if (fd == -1) {
		return v_error(os__posix_get_error_msg(errno));
	}
	voidptr cfile = fdopen(fd, ((charptr)(mode.str)));
	if (isnil(cfile)) {
		return v_error(_STR("Failed to open or create file \"%.*s\"", path.len, path.str));
	}
	return opt_ok(& (os__File []) { (os__File){
		.cfile = cfile,
		.fd = fd,
		.opened = true,
	} }, sizeof(os__File));
}

void os__File_write_bytes_at(os__File* f, voidptr data, int size, int pos) { 
	fseek(f->cfile, pos, SEEK_SET);
	fwrite(data, 1, size, f->cfile);
	fseek(f->cfile, 0, SEEK_END);
}

void os__File_flush(os__File* f) { 
	if (!f->opened) {
		return;
	}
	fflush(f->cfile);
}

voidptr os__vpopen(string path) { 
	
#ifdef _WIN32
	// #if windows
		string mode = tos3("rb");
		u16* wpath = string_to_wide(path);
		return _wpopen(wpath, string_to_wide(mode));
	#else
		byteptr cpath = path.str;
		return popen(cpath, "r");
	#endif
}

multi_return_int_bool os__posix_wait4_to_exit_status(int waitret) { 
	
#ifdef _WIN32
	// #if windows
		return (multi_return_int_bool){.arg0=waitret,.arg1=false};
	#else
		int ret = 0;
		bool is_signaled = true;
		if (WIFEXITED(waitret)) {
			ret = WEXITSTATUS(waitret);
			is_signaled = false;
		} else if (WIFSIGNALED(waitret)) {
			ret = WTERMSIG(waitret);
			is_signaled = true;
		}
		return (multi_return_int_bool){.arg0=ret,.arg1=is_signaled};
	#endif
}

string os__posix_get_error_msg(int code) { 
	charptr ptr_text = strerror(code);
	if (ptr_text == 0) {
		return tos3("");
	}
	return tos3(ptr_text);
}

int os__vpclose(voidptr f) { 
	
#ifdef _WIN32
	// #if windows
		return _pclose(f);
	#else
		multi_return_int_bool mr_8153 = os__posix_wait4_to_exit_status(pclose(f));
		int ret = mr_8153.arg0;
		return ret;
	#endif
}

int os__system(string cmd) { 
	int ret = 0;
	
#ifdef _WIN32
	// #if windows
		string wcmd = (cmd.len > 1 && string_at(cmd, 0) == '"' && string_at(cmd, 1) != '"' ? _STR("\"%.*s\"", cmd.len, cmd.str) : cmd);
		ret = _wsystem(string_to_wide(wcmd));
	#else
		ret = system(cmd.str);
	#endif
	if (ret == -1) {
		os__print_c_errno();
	}
	
#ifndef _WIN32
	// #if not windows
		multi_return_int_bool mr_8919 = os__posix_wait4_to_exit_status(ret);
		int pret = mr_8919.arg0;
		bool is_signaled = mr_8919.arg1;
		if (is_signaled) {
			println(string_add(string_add(_STR("Terminated by signal %2d (", ret), os__sigint_to_signal_name(pret)), tos3(")")));
		}
		ret = pret;
	#endif
	return ret;
}

string os__sigint_to_signal_name(int si) { 
	if (si == 1) {
		return tos3("SIGHUP");
	}
	else if (si == 2) {
		return tos3("SIGINT");
	}
	else if (si == 3) {
		return tos3("SIGQUIT");
	}
	else if (si == 4) {
		return tos3("SIGILL");
	}
	else if (si == 6) {
		return tos3("SIGABRT");
	}
	else if (si == 8) {
		return tos3("SIGFPE");
	}
	else if (si == 9) {
		return tos3("SIGKILL");
	}
	else if (si == 11) {
		return tos3("SIGSEGV");
	}
	else if (si == 13) {
		return tos3("SIGPIPE");
	}
	else if (si == 14) {
		return tos3("SIGALRM");
	}
	else if (si == 15) {
		return tos3("SIGTERM");
	}
	else {
	}
	;
	
#ifdef __linux__
	// #if linux
		if (si == 30 || si == 10 || si == 16) {
			return tos3("SIGUSR1");
		}
		else if (si == 31 || si == 12 || si == 17) {
			return tos3("SIGUSR2");
		}
		else if (si == 20 || si == 17 || si == 18) {
			return tos3("SIGCHLD");
		}
		else if (si == 19 || si == 18 || si == 25) {
			return tos3("SIGCONT");
		}
		else if (si == 17 || si == 19 || si == 23) {
			return tos3("SIGSTOP");
		}
		else if (si == 18 || si == 20 || si == 24) {
			return tos3("SIGTSTP");
		}
		else if (si == 21 || si == 21 || si == 26) {
			return tos3("SIGTTIN");
		}
		else if (si == 22 || si == 22 || si == 27) {
			return tos3("SIGTTOU");
		}
		else if (si == 5) {
			return tos3("SIGTRAP");
		}
		else if (si == 7) {
			return tos3("SIGBUS");
		}
		else {
		}
		;
	#endif
	return tos3("unknown");
}

bool os__exists(string path) { 
	
#ifdef _WIN32
	// #if windows
		string p = string_replace(path, tos3("/"), tos3("\\"));
		return _waccess(string_to_wide(p), _const_os__F_OK) != -1;
	#else
		return access(path.str, _const_os__F_OK) != -1;
	#endif
}

bool os__is_executable(string path) { 
	
#ifdef _WIN32
	// #if windows
		string p = os__real_path(path);
		return (os__exists(p) && string_ends_with(p, tos3(".exe")));
	#endif
	
#ifdef __sun
	// #if solaris
		struct stat statbuf = (struct stat){
			.st_size = 0,
			.st_mode = 0,
			.st_mtime = 0,
		};
		if (stat(path.str, &statbuf) != 0) {
			return false;
		}
		return ((((int)(statbuf.st_mode)) & (((_const_os__S_IXUSR | _const_os__S_IXGRP) | _const_os__S_IXOTH)))) != 0;
	#endif
	return access(path.str, _const_os__X_OK) != -1;
}

Option_bool os__is_writable_folder(string folder) { 
	if (!os__exists(folder)) {
		return v_error(_STR("`%.*s` does not exist", folder.len, folder.str));
	}
	if (!os__is_dir(folder)) {
		return v_error(tos3("`folder` is not a folder"));
	}
	string tmp_perm_check = os__join_path(folder, (varg_string){.len=1,.args={tos3("tmp_perm_check")}});
	Option_os__File f = os__open_file(tmp_perm_check, tos3("w+"), (varg_int){.len=1,.args={0700}});
	if (!f.ok) {
		string err = f.v_error;
		int errcode = f.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(_STR("cannot write to folder `%.*s`: %.*s", folder.len, folder.str, err.len, err.str));
	};
	os__File_close(&/*opt*/(*(os__File*)f.data));
	os__rm(tmp_perm_check);
	return opt_ok(& (bool []) { true }, sizeof(bool));
}

bool os__is_writable(string path) { 
	
#ifdef _WIN32
	// #if windows
		string p = string_replace(path, tos3("/"), tos3("\\"));
		return _waccess(string_to_wide(p), _const_os__W_OK) != -1;
	#else
		return access(path.str, _const_os__W_OK) != -1;
	#endif
}

bool os__is_readable(string path) { 
	
#ifdef _WIN32
	// #if windows
		string p = string_replace(path, tos3("/"), tos3("\\"));
		return _waccess(string_to_wide(p), _const_os__R_OK) != -1;
	#else
		return access(path.str, _const_os__R_OK) != -1;
	#endif
}

//[deprecated]
bool os__file_exists(string _path) { 
	v_panic(tos3("Use `os.exists` instead of `os.file_exists`"));
}

void os__rm(string path) { 
	
#ifdef _WIN32
	// #if windows
		_wremove(string_to_wide(path));
	#else
		remove(path.str);
	#endif
}

void os__rmdir(string path) { 
	
#ifndef _WIN32
	// #if not windows
		rmdir(path.str);
	#else
		RemoveDirectory(string_to_wide(path));
	#endif
}

//[deprecated]
void os__rmdir_recursive(string path) { 
	v_panic(tos3("Use `os.rmdir_all` instead of `os.rmdir_recursive`"));
}

void os__rmdir_all(string path) { 
	Option_array_string items = os__ls(path);
	if (!items.ok) {
		string err = items.v_error;
		int errcode = items.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return;
	};
	// FOR IN
	for (int tmp1 = 0; tmp1 < /*opt*/(*(array_string*)items.data).
	len; tmp1++) {	string item = ((string*)/*opt*/(*(array_string*)items.data).
	data)[tmp1];if (os__is_dir(os__join_path(path, (varg_string){.len=1,.args={item}}))) {
			os__rmdir_all(os__join_path(path, (varg_string){.len=1,.args={item}}));
		}
		os__rm(os__join_path(path, (varg_string){.len=1,.args={item}}));
	}
	os__rmdir(path);
}

bool os__is_dir_empty(string path) { 
	Option_array_string items = os__ls(path);
	if (!items.ok) {
		string err = items.v_error;
		int errcode = items.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return true;
	};
	return /*opt*/(*(array_string*)items.data).len == 0;
}

void os__print_c_errno() { 
	int e = errno;
	string se = tos_clone(((byteptr)(strerror(errno))));
	println(_STR("errno=%d err=%.*s", e, se.len, se.str));
}

string os__file_ext(string path) { 
	Option_int pos = string_last_index(path, tos3("."));
	if (!pos.ok) {
		string err = pos.v_error;
		int errcode = pos.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return tos3("");
	};
	return string_substr(path, /*opt*/(*(int*)pos.data), path.len);
}

string os__dir(string path) { 
	Option_int pos = string_last_index(path, _const_os__path_separator);
	if (!pos.ok) {
		string err = pos.v_error;
		int errcode = pos.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return tos3(".");
	};
	return string_substr(path, 0, /*opt*/(*(int*)pos.data));
}

string os__base_dir(string path) { 
	Option_int posx = string_last_index(path, _const_os__path_separator);
	if (!posx.ok) {
		string err = posx.v_error;
		int errcode = posx.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return path;
	};
	return string_substr(path, 0, /*opt*/(*(int*)posx.data));
}

string os__file_name(string path) { 
	return string_all_after(path, _const_os__path_separator);
}

string os__get_line() { 
	string str = os__get_raw_line();
	
#ifdef _WIN32
	// #if windows
		return string_trim_right(str, tos3("\r\n"));
	#else
		return string_trim_right(str, tos3("\n"));
	#endif
}

string os__get_raw_line() { 
	
#ifdef _WIN32
	// #if windows
			int max_line_chars = 256;
			byteptr buf = v_malloc(max_line_chars * 2);
			voidptr h_input = GetStdHandle(_const_os__STD_INPUT_HANDLE);
			int bytes_read = 0;
			if (is_atty(0) > 0) {
				ReadConsole(h_input, buf, max_line_chars * 2, &bytes_read, 0);
				return string_from_wide2(((u16*)(buf)), bytes_read);
			}
			int offset = 0;
			while (1) {
				byteptr pos = buf + offset;
				bool res = ReadFile(h_input, pos, 1, &bytes_read, 0);
				if (!res || bytes_read == 0) {
					break;
				}
				if (*pos == '\n' || *pos == '\r') {
					offset++;
					break;
				}
				offset++;
			}
			return tos(buf, offset);
	#else
		size_t max = ((size_t)(0));
		charptr buf = ((charptr)(0));
		int nr_chars = getline(&buf, &max, stdin);
		if (nr_chars == 0 || nr_chars == -1) {
			return tos3("");
		}
		return tos3(buf);
	#endif
}

array_string os__get_lines() { 
	string line = tos3("");
	array_string inputstr = new_array(0, 0, sizeof(string));
	while (1) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		_PUSH(&inputstr, (line), tmp2, string);
	}
	return inputstr;
}

string os__get_lines_joined() { 
	string line = tos3("");
	string inputstr = tos3("");
	while (1) {
		line = os__get_line();
		if (line.len <= 0) {
			break;
		}
		line = string_trim_space(line);
		inputstr = string_add(inputstr, line);
	}
	return inputstr;
}

string os__user_os() { 
	
#ifdef __linux__
	// #if linux
		return tos3("linux");
	#endif
	
#ifdef __APPLE__
	// #if macos
		return tos3("mac");
	#endif
	
#ifdef _WIN32
	// #if windows
		return tos3("windows");
	#endif
	
#ifdef __FreeBSD__
	// #if freebsd
		return tos3("freebsd");
	#endif
	
#ifdef __OpenBSD__
	// #if openbsd
		return tos3("openbsd");
	#endif
	
#ifdef __NetBSD__
	// #if netbsd
		return tos3("netbsd");
	#endif
	
#ifdef __DragonFly__
	// #if dragonfly
		return tos3("dragonfly");
	#endif
	
#ifdef __ANDROID__
	// #if android
		return tos3("android");
	#endif
	
#ifdef __sun
	// #if solaris
		return tos3("solaris");
	#endif
	
#ifdef __haiku__
	// #if haiku
		return tos3("haiku");
	#endif
	return tos3("unknown");
}

string os__home_dir() { 
	
#ifdef _WIN32
	// #if windows
		return string_add(os__getenv(tos3("USERPROFILE")), _const_os__path_separator);
	#else
		return string_add(os__getenv(tos3("HOME")), _const_os__path_separator);
	#endif
}

void os__write_file(string path, string text) { 
	Option_os__File f = os__create(path);
	if (!f.ok) {
		string err = f.v_error;
		int errcode = f.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return;
	};
	os__File_write(&/*opt*/(*(os__File*)f.data), text);
	os__File_close(&/*opt*/(*(os__File*)f.data));
}

void os__clear() { 
	
#ifndef _WIN32
	// #if not windows
		printf("\x1b[2J");
		printf("\x1b[H");
	#endif
}

void os__on_segfault(voidptr f) { 
	
#ifdef _WIN32
	// #if windows
		return;
	#endif
	
#ifdef __APPLE__
	// #if macos
		printf("TODO");
	#endif
}




string os__executable() { 
	
#ifdef __linux__
	// #if linux
		byteptr result = vcalloc(_const_os__MAX_PATH);
		int count = readlink("/proc/self/exe", result, _const_os__MAX_PATH);
		if (count < 0) {
			eprintln(tos3("os.executable() failed at reading /proc/self/exe to get exe path"));
			return os__executable_fallback();
		}
		return tos2(result);
	#endif
	
#ifdef _WIN32
	// #if windows
		int max = 512;
		u16* result = ((u16*)(vcalloc(max * 2)));
		int len = GetModuleFileName(0, result, max);
		return string_from_wide2(result, len);
	#endif
	
#ifdef __APPLE__
	// #if macos
		byteptr result = vcalloc(_const_os__MAX_PATH);
		int pid = getpid();
		int ret = proc_pidpath(pid, result, _const_os__MAX_PATH);
		if (ret <= 0) {
			eprintln(_STR("os.executable() failed at calling proc_pidpath with pid: %d . proc_pidpath returned %d ", pid, ret));
			return os__executable_fallback();
		}
		return tos2(result);
	#endif
	
#ifdef __FreeBSD__
	// #if freebsd
		byteptr result = vcalloc(_const_os__MAX_PATH);
		array_int mib = new_array_from_c_array(4, 4, sizeof(int), (int[4]){	
		1, 14, 12, -1, 
});
		int size = _const_os__MAX_PATH;
		sysctl(mib.data, 4, result, &size, 0, 0);
		return tos2(result);
	#endif
	
#ifdef __OpenBSD__
	// #if openbsd
	#endif
	
#ifdef __sun
	// #if solaris
	#endif
	
#ifdef __haiku__
	// #if haiku
	#endif
	
#ifdef __NetBSD__
	// #if netbsd
		byteptr result = vcalloc(_const_os__MAX_PATH);
		int count = readlink("/proc/curproc/exe", result, _const_os__MAX_PATH);
		if (count < 0) {
			eprintln(tos3("os.executable() failed at reading /proc/curproc/exe to get exe path"));
			return os__executable_fallback();
		}
		return tos(result, count);
	#endif
	
#ifdef __DragonFly__
	// #if dragonfly
		byteptr result = vcalloc(_const_os__MAX_PATH);
		int count = readlink("/proc/curproc/file", result, _const_os__MAX_PATH);
		if (count < 0) {
			eprintln(tos3("os.executable() failed at reading /proc/curproc/file to get exe path"));
			return os__executable_fallback();
		}
		return tos(result, count);
	#endif
	return os__executable_fallback();
}

string os__executable_fallback() { 
	string exepath = (*(string*)array_get(_const_os__args, 0));
	if (!os__is_abs_path(exepath)) {
		if (string_contains(exepath, _const_os__path_separator)) {
			exepath = os__join_path(_const_os__wd_at_startup, (varg_string){.len=1,.args={exepath}});
		} else {
			Option_string foundpath = os__find_abs_path_of_executable(exepath);
			if (!foundpath.ok) {
				string err = foundpath.v_error;
				int errcode = foundpath.ecode;
				// last_type: v.ast.ExprStmt
				// last_expr_result_type: v.ast.StringLiteral
				*(string*) foundpath.data = tos3("");
			};
			if (/*opt*/(*(string*)foundpath.data).len > 0) {
				exepath = /*opt*/(*(string*)foundpath.data);
			}
		}
	}
	exepath = os__real_path(exepath);
	return exepath;
}

Option_string os__find_abs_path_of_executable(string exepath) { 
	if (os__is_abs_path(exepath)) {
		return opt_ok(& (string []) { exepath }, sizeof(string));
	}
	string res = tos3("");
	string env_path_delimiter = (string_eq(os__user_os(), tos3("windows")) ? tos3(";") : tos3(":"));
	array_string paths = string_split(os__getenv(tos3("PATH")), env_path_delimiter);
	// FOR IN
	for (int tmp3 = 0; tmp3 < paths.
	len; tmp3++) {	string p = ((string*)paths.
	data)[tmp3];string found_abs_path = os__join_path(p, (varg_string){.len=1,.args={exepath}});
		if (os__exists(found_abs_path) && os__is_executable(found_abs_path)) {
			res = found_abs_path;
			break;
		}
	}
	if (res.len > 0) {
		return opt_ok(& (string []) { res }, sizeof(string));
	}
	return v_error(tos3("failed to find executable"));
}

//[deprecated]
bool os__dir_exists(string path) { 
	v_panic(tos3("Use `os.is_dir` instead of `os.dir_exists`"));
}

bool os__is_dir(string path) { 
	
#ifdef _WIN32
	// #if windows
		string _path = string_replace(path, tos3("/"), tos3("\\"));
		u32 attr = GetFileAttributesW(string_to_wide(_path));
		if (attr == ((u32)(INVALID_FILE_ATTRIBUTES))) {
			return false;
		}
		if ((((int)(attr)) & FILE_ATTRIBUTE_DIRECTORY) != 0) {
			return true;
		}
		return false;
	#else
		struct stat statbuf = (struct stat){
			.st_size = 0,
			.st_mode = 0,
			.st_mtime = 0,
		};
		if (stat(path.str, &statbuf) != 0) {
			return false;
		}
		int val = (((int)(statbuf.st_mode)) & _const_os__S_IFMT);
		return val == _const_os__S_IFDIR;
	#endif
}

bool os__is_link(string path) { 
	
#ifdef _WIN32
	// #if windows
		return false;
	#else
		struct stat statbuf = (struct stat){
			.st_size = 0,
			.st_mode = 0,
			.st_mtime = 0,
		};
		if (lstat(path.str, &statbuf) != 0) {
			return false;
		}
		return (((int)(statbuf.st_mode)) & _const_os__S_IFMT) == _const_os__S_IFLNK;
	#endif
}

void os__chdir(string path) { 
	
#ifdef _WIN32
	// #if windows
		_wchdir(string_to_wide(path));
	#else
		chdir(path.str);
	#endif
}

string os__getwd() { 
	
#ifdef _WIN32
	// #if windows
		int max = 512;
		u16* buf = ((u16*)(vcalloc(max * 2)));
		if (_wgetcwd(buf, max) == 0) {
			return tos3("");
		}
		return string_from_wide(buf);
	#else
		byteptr buf = vcalloc(512);
		if (getcwd(buf, 512) == 0) {
			return tos3("");
		}
		return tos2(buf);
	#endif
}

string os__real_path(string fpath) { 
	byteptr fullpath = vcalloc(_const_os__MAX_PATH);
	charptr ret = ((charptr)(0));
	
#ifdef _WIN32
	// #if windows
		ret = _fullpath(fullpath, fpath.str, _const_os__MAX_PATH);
		if (ret == 0) {
			return fpath;
		}
	#else
		ret = realpath(fpath.str, fullpath);
		if (ret == 0) {
			return fpath;
		}
	#endif
	return tos2(fullpath);
}

bool os__is_abs_path(string path) { 
	
#ifdef _WIN32
	// #if windows
		return string_at(path, 0) == '/' || (byte_is_letter(string_at(path, 0)) && string_at(path, 1) == ':');
	#endif
	return string_at(path, 0) == '/';
}

string os__join_path(string base, varg_string dirs) { 
	array_string result = new_array(0, 0, sizeof(string));
	_PUSH(&result, (string_trim_right(base, tos3("\\/"))), tmp1, string);
	// FOR IN
	for (int tmp2 = 0; tmp2 < dirs.len; tmp2++) {
	string d = dirs.args[tmp2];
		_PUSH(&result, (d), tmp3, string);
	}
	return array_string_join(result, _const_os__path_separator);
}

array_string os__walk_ext(string path, string ext) { 
	if (!os__is_dir(path)) {
		return new_array(0, 0, sizeof(string));
	}
	Option_array_string files = os__ls(path);
	if (!files.ok) {
		string err = files.v_error;
		int errcode = files.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return new_array(0, 0, sizeof(string));
	};
	array_string res = new_array(0, 0, sizeof(string));
	string separator = (string_ends_with(path, _const_os__path_separator) ? tos3("") : _const_os__path_separator);
	// FOR IN
	for (int i = 0; i < /*opt*/(*(array_string*)files.data).
	len; i++) {	string file = ((string*)/*opt*/(*(array_string*)files.data).
	data)[i];if (string_starts_with(file, tos3("."))) {
			continue;
		}
		string p = string_add(string_add(path, separator), file);
		if (os__is_dir(p) && !os__is_link(p)) {
			_PUSH_MANY(&res, (os__walk_ext(p, ext)), tmp5, array_string);
		} else if (string_ends_with(file, ext)) {
			_PUSH(&res, (p), tmp6, string);
		}
	}
	return res;
}

void os__walk(string path, void (*f)(string path)) { 
	if (!os__is_dir(path)) {
		return;
	}
	Option_array_string files = os__ls(path);
	if (!files.ok) {
		string err = files.v_error;
		int errcode = files.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return;
	};
	// FOR IN
	for (int tmp2 = 0; tmp2 < /*opt*/(*(array_string*)files.data).
	len; tmp2++) {	string file = ((string*)/*opt*/(*(array_string*)files.data).
	data)[tmp2];string p = string_add(string_add(path, _const_os__path_separator), file);
		if (os__is_dir(p) && !os__is_link(p)) {
			os__walk(p, f);
		} else if (os__exists(p)) {
			f(p);
		}
	}
	return;
}

void os__signal(int signum, voidptr handler) { 
	signal(signum, handler);
}



int os__fork() { 
	int pid = -1;
	
#ifndef _WIN32
	// #if not windows
		pid = fork();
	#endif
	
#ifdef _WIN32
	// #if windows
		v_panic(tos3("os.fork not supported in windows"));
	#endif
	return pid;
}

int os__wait() { 
	int pid = -1;
	
#ifndef _WIN32
	// #if not windows
		pid = wait(0);
	#endif
	
#ifdef _WIN32
	// #if windows
		v_panic(tos3("os.wait not supported in windows"));
	#endif
	return pid;
}

int os__file_last_mod_unix(string path) { 
	struct stat attr = (struct stat){
		.st_size = 0,
		.st_mode = 0,
		.st_mtime = 0,
	};
	stat(path.str, &attr);
	return attr.st_mtime;
}

void os__log(string s) { 
	println(string_add(tos3("os.log: "), s));
}

//[deprecated]
void os__flush_stdout() { 
	v_panic(tos3("Use `os.flush` instead of `os.flush_stdout`"));
}

void os__flush() { 
	fflush(stdout);
}

void os__mkdir_all(string path) { 
	string p = (string_starts_with(path, _const_os__path_separator) ? _const_os__path_separator : tos3(""));
	// FOR IN
	for (int tmp2 = 0; tmp2 < string_split(path, _const_os__path_separator).
	len; tmp2++) {	string subdir = ((string*)string_split(path, _const_os__path_separator).
	data)[tmp2];p = string_add(p, string_add(subdir, _const_os__path_separator));
		if (!os__is_dir(p)) {
			Option_bool tmp4 = os__mkdir(p);
			if (!tmp4.ok) {
				string err = tmp4.v_error;
				int errcode = tmp4.ecode;
				 // typeof it_expr_type: v.ast.CallExpr
				// last_type: v.ast.ExprStmt
				// last_expr_result_type: void
				v_panic(err);
			};
		}
	}
}

string os__cache_dir() { 
	
#ifndef _WIN32
	// #if not windows
		string xdg_cache_home = os__getenv(tos3("XDG_CACHE_HOME"));
		if (string_ne(xdg_cache_home, tos3(""))) {
			return xdg_cache_home;
		}
	#endif
	string cdir = string_add(os__home_dir(), tos3(".cache"));
	if (!os__is_dir(cdir) && !os__is_link(cdir)) {
		Option_bool tmp3 = os__mkdir(cdir);
		if (!tmp3.ok) {
			string err = tmp3.v_error;
			int errcode = tmp3.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			v_panic(err);
		};
	}
	return cdir;
}

string os__temp_dir() { 
	string path = os__getenv(tos3("TMPDIR"));
	
#ifdef _WIN32
	// #if windows
		if (string_eq(path, tos3(""))) {
			path = os__getenv(tos3("TEMP"));
			if (string_eq(path, tos3(""))) {
				path = os__getenv(tos3("TMP"));
			}
			if (string_eq(path, tos3(""))) {
				path = tos3("C:/tmp");
			}
		}
	#endif
	if (string_eq(path, tos3(""))) {
		path = os__cache_dir();
	}
	if (string_eq(path, tos3(""))) {
		path = tos3("/tmp");
	}
	return path;
}

void os__chmod(string path, int mode) { 
	chmod(path.str, mode);
}

string os__resource_abs_path(string path) { 
	string base_path = os__real_path(os__dir(os__executable()));
	string vresource = os__getenv(tos3("V_RESOURCE_PATH"));
	if (vresource.len != 0) {
		base_path = vresource;
	}
	return os__real_path(os__join_path(base_path, (varg_string){.len=1,.args={path}}));
}


array_string os__init_os_args(int argc, byteptr* argv) { 
	array_string args = new_array(0, 0, sizeof(string));
	for (int tmp1 = 0; tmp1 < argc; tmp1++) { 
		int i = tmp1;
		_PUSH(&args, (tos2(argv[i])), tmp2, string);
	}
	return args;
}

Option_array_string os__ls(string path) { 
	array_string res = new_array(0, 0, sizeof(string));
	voidptr dir = opendir(path.str);
	if (isnil(dir)) {
		return v_error(_STR("ls() couldnt open dir \"%.*s\"", path.len, path.str));
	}
	struct dirent* ent = ((struct dirent*)(0));
	while (1) {
		ent = readdir(dir);
		if (isnil(ent)) {
			break;
		}
		string name = tos_clone(((byteptr)(ent->d_name)));
		if (string_ne(name, tos3(".")) && string_ne(name, tos3("..")) && string_ne(name, tos3(""))) {
			_PUSH(&res, (name), tmp4, string);
		}
	}
	closedir(dir);
	return opt_ok(& (array_string []) { res }, sizeof(array_string));
}

Option_os__File os__open(string path) { 
	os__File file = (os__File){
		.cfile = fopen(((charptr)(path.str)), "rb"),
		.opened = true,
		.fd = 0,
	};
	if (isnil(file.cfile)) {
		return v_error(_STR("failed to open file \"%.*s\"", path.len, path.str));
	}
	return opt_ok(& (os__File []) { file }, sizeof(os__File));
}

Option_os__File os__create(string path) { 
	os__File file = (os__File){
		.cfile = fopen(((charptr)(path.str)), "wb"),
		.opened = true,
		.fd = 0,
	};
	if (isnil(file.cfile)) {
		return v_error(_STR("failed to create file \"%.*s\"", path.len, path.str));
	}
	return opt_ok(& (os__File []) { file }, sizeof(os__File));
}

void os__File_write(os__File* f, string s) { 
	if (!f->opened) {
		return;
	}
	fputs(s.str, f->cfile);
}

void os__File_writeln(os__File* f, string s) { 
	if (!f->opened) {
		return;
	}
	fputs(s.str, f->cfile);
	fputs("\n", f->cfile);
}

Option_bool os__mkdir(string path) { 
	if (string_eq(path, tos3("."))) {
		return opt_ok(& (bool []) { true }, sizeof(bool));
	}
	string apath = os__real_path(path);
	int r = mkdir(apath.str, 511);
	if (r == -1) {
		return v_error(os__posix_get_error_msg(errno));
	}
	return opt_ok(& (bool []) { true }, sizeof(bool));
}

Option_os__Result os__exec(string cmd) { 
	string pcmd = _STR("%.*s 2>&1", cmd.len, cmd.str);
	voidptr f = os__vpopen(pcmd);
	if (isnil(f)) {
		return v_error(_STR("exec(\"%.*s\") failed", cmd.len, cmd.str));
	}
	array_fixed_byte_4096 buf= {0};
	strings__Builder res = strings__new_builder(1024);
	while (fgets(((charptr)(buf)), 4096, f) != 0) {
		strings__Builder_write_bytes(&res, &/*qq*/buf, vstrlen(&/*qq*/buf));
	}
	string soutput = string_trim_space(strings__Builder_str(&res));
	int exit_code = os__vpclose(f);
	return opt_ok(& (os__Result []) { (os__Result){
		.output = soutput,
		.exit_code = exit_code,
	} }, sizeof(os__Result));
}

Option_bool os__symlink(string origin, string target) { 
	int res = symlink(origin.str, target.str);
	if (res == 0) {
		return opt_ok(& (bool []) { true }, sizeof(bool));
	}
	return v_error(os__posix_get_error_msg(errno));
}

string os__get_error_msg(int code) { 
	return os__posix_get_error_msg(code);
}

void os__File_write_bytes(os__File* f, voidptr data, int size) { 
	fwrite(data, 1, size, f->cfile);
}

void os__File_close(os__File* f) { 
	if (!f->opened) {
		return;
	}
	f->opened = false;
	fflush(f->cfile);
	fclose(f->cfile);
}

void internal__compile__todo() { 
}

bool internal__compile__V_no_cc_installed(internal__compile__V* v) { 
	
#ifdef _WIN32
	// #if windows
		Option_os__Result tmp1 = os__exec(_STR("%.*s -v", v->pref->ccompiler.len, v->pref->ccompiler.str));
		if (!tmp1.ok) {
			string err = tmp1.v_error;
			int errcode = tmp1.ecode;
			// last_type: v.ast.Return
			// last_expr_result_type: 
			if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_one)) {
				println(tos3("C compiler not found, trying to build with msvc..."));
			}
			return true;
		};
	#endif
	return false;
}

void internal__compile__V_cc(internal__compile__V* v) { 
	if (string_contains(os__executable(), tos3("vfmt"))) {
		return;
	}
	internal__compile__V_build_thirdparty_obj_files(v);
	string vexe = v__pref__vexe_path();
	string vdir = os__dir(vexe);
	bool ends_with_c = string_ends_with(v->pref->out_name, tos3(".c"));
	bool ends_with_js = string_ends_with(v->pref->out_name, tos3(".js"));
	if (v->pref->is_pretty_c && !ends_with_js) {
		Option_os__Result format_result = os__exec(_STR("clang-format -i -style=file \"%.*s\"", v->out_name_c.len, v->out_name_c.str));
		if (!format_result.ok) {
			string err = format_result.v_error;
			int errcode = format_result.ecode;
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: v.ast.StructInit
			eprintln(tos3("clang-format not found"));
			*(os__Result*) format_result.data = (os__Result){
			.exit_code = -1,
			.output = tos3(""),
		};
		};
		if (/*opt*/(*(os__Result*)format_result.data).exit_code > 0) {
			eprintln(_STR("clang-format failed to format %.*s", v->out_name_c.len, v->out_name_c.str));
			eprintln(/*opt*/(*(os__Result*)format_result.data).output);
		}
	}
	if (ends_with_c || ends_with_js) {
		
#ifndef _VJS
		// #if not js
			if (ends_with_js) {
				string vjs_path = string_add(vexe, tos3("js"));
				if (!os__exists(vjs_path)) {
					println(tos3("V.js compiler not found, building..."));
					int ret = os__system(_STR("%.*s -o %.*s -os js %.*s/cmd/v", vexe.len, vexe.str, vjs_path.len, vjs_path.str, vdir.len, vdir.str));
					if (ret == 0) {
						println(tos3("Done."));
					} else {
						println(tos3("Failed."));
						v_exit(1);
					}
				}
				int ret = os__system(_STR("%.*s -o %.*s %.*s", vjs_path.len, vjs_path.str, v->pref->out_name.len, v->pref->out_name.str, v->pref->path.len, v->pref->path.str));
				if (ret == 0) {
					println(_STR("Done. Run it with `node %.*s`", v->pref->out_name.len, v->pref->out_name.str));
					println(tos3("JS backend is at a very early stage."));
				}
			}
		#endif
		Option_bool tmp9 = os__mv_by_cp(v->out_name_c, v->pref->out_name);
		if (!tmp9.ok) {
			string err = tmp9.v_error;
			int errcode = tmp9.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			v_panic(err);
		};
		v_exit(0);
	}
	if (v->pref->os == v__pref__OS_windows) {
		
#ifndef _WIN32
		// #if not windows
			internal__compile__V_cc_windows_cross(v);
			return;
		#endif
	}
	
#ifdef _WIN32
	// #if windows
		if (string_eq(v->pref->ccompiler, tos3("msvc")) || internal__compile__V_no_cc_installed(v)) {
			internal__compile__V_cc_msvc(v);
			return;
		}
	#endif
	array_string a = new_array_from_c_array(10, 10, sizeof(string), (string[10]){	
	v->pref->cflags, tos3("-std=gnu11"), tos3("-Wall"), tos3("-Wextra"), tos3("-Wno-unused-variable"), tos3("-Wno-unused-parameter"), tos3("-Wno-unused-result"), tos3("-Wno-unused-function"), tos3("-Wno-missing-braces"), tos3("-Wno-unused-label"), 
});
	if (v->pref->fast) {
		
#ifdef __linux__
		// #if linux
			
#ifndef __ANDROID__
			// #if not android
				string tcc_3rd = _STR("%.*s/thirdparty/tcc/bin/tcc", vdir.len, vdir.str);
				string tcc_path = tos3("/var/tmp/tcc/bin/tcc");
				if (os__exists(tcc_3rd) && !os__exists(tcc_path)) {
					os__system(_STR("mv %.*s/thirdparty/tcc /var/tmp/", vdir.len, vdir.str));
				}
				if (string_eq(v->pref->ccompiler, tos3("cc")) && os__exists(tcc_path)) {
					v->pref->ccompiler = tcc_path;
					_PUSH(&a, (tos3("-m64")), tmp15, string);
				}
			#endif
		#else
			internal__compile__verror(tos3("-fast is only supported on Linux right now"));
		#endif
	}
	if (!v->pref->is_so && v->pref->build_mode != v__pref__BuildMode_build_module && string_eq(os__user_os(), tos3("windows")) && !string_ends_with(v->pref->out_name, tos3(".exe"))) {
		v->pref->out_name = string_add(v->pref->out_name, tos3(".exe"));
	}
	internal__compile__V_log(v, _STR("cc() isprod=%d outname=%.*s", v->pref->is_prod, v->pref->out_name.len, v->pref->out_name.str));
	if (v->pref->is_so) {
		_PUSH(&a, (tos3("-shared -fPIC ")), tmp18, string);
		v->pref->out_name = string_add(v->pref->out_name, tos3(".so"));
	}
	if (v->pref->is_bare) {
		_PUSH(&a, (tos3("-fno-stack-protector -static -ffreestanding -nostdlib")), tmp20, string);
	}
	if (v->pref->build_mode == v__pref__BuildMode_build_module) {
		string out_dir = (string_starts_with(v->pref->path, tos3("vlib")) ? _STR("%.*s%.*scache%.*s%.*s", _const_v__pref__default_module_path.len, _const_v__pref__default_module_path.str, _const_os__path_separator.len, _const_os__path_separator.str, _const_os__path_separator.len, _const_os__path_separator.str, v->pref->path.len, v->pref->path.str) : _STR("%.*s%.*s%.*s", _const_v__pref__default_module_path.len, _const_v__pref__default_module_path.str, _const_os__path_separator.len, _const_os__path_separator.str, v->pref->path.len, v->pref->path.str));
		string pdir = string_all_before_last(out_dir, _const_os__path_separator);
		if (!os__is_dir(pdir)) {
			os__mkdir_all(pdir);
		}
		v->pref->out_name = _STR("%.*s.o", out_dir.len, out_dir.str);
		println(_STR("Building %.*s...", v->pref->out_name.len, v->pref->out_name.str));
	}
	bool debug_mode = v->pref->is_debug;
	string debug_options = tos3("-g");
	string optimization_options = tos3("-O2");
	string guessed_compiler = v->pref->ccompiler;
	if (string_eq(guessed_compiler, tos3("cc")) && v->pref->is_prod) {
		bool tmp25;
		{ /* if guard */ Option_os__Result ccversion = os__exec(tos3("cc --version"));
		if ((tmp25 = ccversion.ok)) {
			if (/*opt*/(*(os__Result*)ccversion.data).exit_code == 0) {
				if (string_contains(/*opt*/(*(os__Result*)ccversion.data).output, tos3("This is free software;")) && string_contains(/*opt*/(*(os__Result*)ccversion.data).output, tos3("Free Software Foundation, Inc."))) {
					guessed_compiler = tos3("gcc");
				}
				if (string_contains(/*opt*/(*(os__Result*)ccversion.data).output, tos3("clang version "))) {
					guessed_compiler = tos3("clang");
				}
			}
		}}
	}
	if (string_contains(v->pref->ccompiler, tos3("clang")) || string_eq(guessed_compiler, tos3("clang"))) {
		if (debug_mode) {
			debug_options = tos3("-g -O0 -no-pie");
		}
		optimization_options = tos3("-O3");
		bool have_flto = true;
		
#ifdef __OpenBSD__
		// #if openbsd
			have_flto = false;
		#endif
		if (have_flto) {
			optimization_options = string_add(optimization_options, tos3(" -flto"));
		}
	}
	if (string_contains(v->pref->ccompiler, tos3("gcc")) || string_eq(guessed_compiler, tos3("gcc"))) {
		if (debug_mode) {
			debug_options = tos3("-g3 -no-pie");
		}
		optimization_options = tos3("-O3 -fno-strict-aliasing -flto");
	}
	if (debug_mode) {
		_PUSH(&a, (debug_options), tmp35, string);
		
#ifdef __APPLE__
		// #if macos
			_PUSH(&a, (tos3(" -ferror-limit=5000 ")), tmp36, string);
		#endif
	}
	if (v->pref->is_prod) {
		_PUSH(&a, (optimization_options), tmp38, string);
	}
	if (debug_mode && string_ne(os__user_os(), tos3("windows"))) {
		_PUSH(&a, (tos3(" -rdynamic ")), tmp40, string);
	}
	if (string_ne(v->pref->ccompiler, tos3("msvc")) && v->pref->os != v__pref__OS_freebsd) {
		_PUSH(&a, (tos3("-Werror=implicit-function-declaration")), tmp42, string);
	}
	// FOR IN
	for (int tmp43 = 0; tmp43 < internal__compile__V_generate_hotcode_reloading_compiler_flags(v).
	len; tmp43++) {	string f = ((string*)internal__compile__V_generate_hotcode_reloading_compiler_flags(v).
	data)[tmp43];_PUSH(&a, (f), tmp44, string);
	}
	string libs = tos3("");
	if (v->pref->build_mode == v__pref__BuildMode_build_module) {
		_PUSH(&a, (tos3("-c")), tmp46, string);
	} else if (v->pref->is_cache) {
	}
	if (v->pref->sanitize) {
		_PUSH(&a, (tos3("-fsanitize=leak")), tmp48, string);
	}
	_PUSH(&a, (_STR("-o \"%.*s\"", v->pref->out_name.len, v->pref->out_name.str)), tmp49, string);
	if (os__is_dir(v->pref->out_name)) {
		internal__compile__verror(_STR("\'%.*s\' is a directory", v->pref->out_name.len, v->pref->out_name.str));
	}
	if (v->pref->os == v__pref__OS_mac) {
		_PUSH(&a, (tos3("-x objective-c")), tmp52, string);
	}
	_PUSH(&a, (_STR("\"%.*s\"", v->out_name_c.len, v->out_name_c.str)), tmp53, string);
	if (v->pref->os == v__pref__OS_mac) {
		_PUSH(&a, (tos3("-x none")), tmp55, string);
	}
	if (v->pref->os == v__pref__OS_mac) {
		_PUSH(&a, (tos3("-mmacosx-version-min=10.7")), tmp57, string);
	}
	if (v->pref->os == v__pref__OS_windows) {
		_PUSH(&a, (tos3("-municode")), tmp59, string);
	}
	array_internal__compile__CFlag cflags = internal__compile__V_get_os_cflags(v);
	_PUSH(&a, (array_internal__compile__CFlag_c_options_only_object_files(cflags)), tmp60, string);
	_PUSH(&a, (array_internal__compile__CFlag_c_options_without_object_files(cflags)), tmp61, string);
	_PUSH(&a, (libs), tmp62, string);
	if (!v->pref->is_bare && v->pref->build_mode != v__pref__BuildMode_build_module && (v->pref->os == v__pref__OS_linux || v->pref->os == v__pref__OS_freebsd || v->pref->os == v__pref__OS_openbsd || v->pref->os == v__pref__OS_netbsd || v->pref->os == v__pref__OS_dragonfly || v->pref->os == v__pref__OS_solaris || v->pref->os == v__pref__OS_haiku)) {
		_PUSH(&a, (tos3("-lm -lpthread ")), tmp64, string);
		if (v->pref->os == v__pref__OS_linux) {
			_PUSH(&a, (tos3(" -ldl ")), tmp66, string);
		}
		if (v->pref->os == v__pref__OS_freebsd) {
			_PUSH(&a, (tos3(" -lexecinfo ")), tmp68, string);
		}
	}
	if (!v->pref->is_bare && v->pref->os == v__pref__OS_js && string_eq(os__user_os(), tos3("linux"))) {
		_PUSH(&a, (tos3("-lm")), tmp70, string);
	}
	string args = array_string_join(a, tos3(" "));
	start:
	internal__compile__todo();
	string cmd = _STR("%.*s %.*s", v->pref->ccompiler.len, v->pref->ccompiler.str, args.len, args.str);
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_one)) {
		println(tos3("\n=========="));
		println(cmd);
	}
	i64 ticks = time__ticks();
	Option_os__Result res = os__exec(cmd);
	if (!res.ok) {
		string err = res.v_error;
		int errcode = res.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		println(tos3("C compilation failed."));
		internal__compile__verror(err);
		return;
	};
	if (/*opt*/(*(os__Result*)res.data).exit_code != 0) {
		if (/*opt*/(*(os__Result*)res.data).exit_code == 127) {
			
#ifdef __linux__
			// #if linux
				if (string_contains(v->pref->ccompiler, tos3("tcc"))) {
					v->pref->ccompiler = tos3("cc");
					goto start;
				}
			#endif
			internal__compile__verror(string_add(string_add(string_add(string_add(string_add(string_add(tos3("C compiler error, while attempting to run: \n"), tos3("-----------------------------------------------------------\n")), _STR("%.*s\n", cmd.len, cmd.str)), tos3("-----------------------------------------------------------\n")), tos3("Probably your C compiler is missing. \n")), tos3("Please reinstall it, or make it available in your PATH.\n\n")), internal__compile__missing_compiler_info()));
		}
		if (v->pref->is_debug) {
			string eword = tos3("error:");
			string khighlight = (term__can_show_color_on_stdout() ? term__red(eword) : eword);
			println(string_replace(/*opt*/(*(os__Result*)res.data).output, eword, khighlight));
			internal__compile__verror(_STR("\n==================\nC error. This should never happen.\n\nV compiler version: %.*s\nHost OS: %.*s\nTarget OS: %.*s\n\nIf you were not working with C interop and are not sure about what's happening,\nplease put the whole output in a pastebin and contact us through the following ways with a link to the pastebin:\n- Raise an issue on GitHub: https://github.com/vlang/v/issues/new/choose\n- Ask a question in #help on Discord: https://discord.gg/vlang", v__util__full_v_version().len, v__util__full_v_version().str, v__pref__OS_str(v__pref__get_host_os()).len, v__pref__OS_str(v__pref__get_host_os()).str, v__pref__OS_str(v->pref->os).len, v__pref__OS_str(v->pref->os).str));
		} else {
			if (/*opt*/(*(os__Result*)res.data).output.len < 30) {
				println(/*opt*/(*(os__Result*)res.data).output);
			} else {
				array_string elines = internal__compile__error_context_lines(/*opt*/(*(os__Result*)res.data).output, tos3("error:"), 1, 12);
				println(tos3("=================="));
				// FOR IN
				for (int tmp78 = 0; tmp78 < elines.
				len; tmp78++) {	string eline = ((string*)elines.
				data)[tmp78];println(eline);
				}
				println(tos3("..."));
				println(tos3("=================="));
				println(tos3("(Use `v -cg` to print the entire error message)\n"));
			}
			internal__compile__verror(tos3("C error.\n\nPlease make sure that:\n- You have all V dependencies installed.\n- You did not declare a C function that was not included. (Try commenting your code that involves C interop)\n- You are running the latest version of V. (Try running `v up` and rerunning your command)\n\nIf you're confident that all of the above is true, please try running V with the `-cg` option which enables more debugging capabilities.\n"));
		}
	}
	i64 diff = time__ticks() - ticks;
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_one)) {
		println(_STR("%.*s took %d ms", v->pref->ccompiler.len, v->pref->ccompiler.str, diff));
		println(tos3("=========\n"));
	}
	if (!v->pref->is_keep_c && string_ne(v->out_name_c, tos3("v.c"))) {
		os__rm(v->out_name_c);
	}
	if (v->pref->compress) {
		
#ifdef _WIN32
		// #if windows
			println(tos3("-compress does not work on Windows for now"));
			return;
		#endif
		int ret = os__system(_STR("strip %.*s", v->pref->out_name.len, v->pref->out_name.str));
		if (ret != 0) {
			println(tos3("strip failed"));
			return;
		}
		int ret2 = os__system(_STR("upx --lzma -qqq %.*s", v->pref->out_name.len, v->pref->out_name.str));
		if (ret2 != 0) {
			ret2 = os__system(_STR("upx -qqq %.*s", v->pref->out_name.len, v->pref->out_name.str));
		}
		if (ret2 != 0) {
			println(tos3("upx failed"));
			
#ifdef __APPLE__
			// #if macos
				println(tos3("install upx with `brew install upx`"));
			#endif
			
#ifdef __linux__
			// #if linux
				println(string_add(tos3("install upx\n"), tos3("for example, on Debian/Ubuntu run `sudo apt install upx`")));
			#endif
			
#ifdef _WIN32
			// #if windows
			#endif
		}
	}
}

void internal__compile__V_cc_windows_cross(internal__compile__V* c) { 
}

void internal__compile__V_build_thirdparty_obj_files(internal__compile__V* c) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < internal__compile__V_get_os_cflags(c).
	len; tmp1++) {	internal__compile__CFlag flag = ((internal__compile__CFlag*)internal__compile__V_get_os_cflags(c).
	data)[tmp1];if (string_ends_with(flag.value, tos3(".o"))) {
			array_internal__compile__CFlag rest_of_module_flags = internal__compile__V_get_rest_of_module_cflags(c, &/*qq*/flag);
			if (string_eq(c->pref->ccompiler, tos3("msvc")) || internal__compile__V_no_cc_installed(c)) {
				internal__compile__build_thirdparty_obj_file_with_msvc(flag.value, rest_of_module_flags);
			} else {
				internal__compile__V_build_thirdparty_obj_file(c, flag.value, rest_of_module_flags);
			}
		}
	}
}

void internal__compile__V_build_thirdparty_obj_file(internal__compile__V* v, string path, array_internal__compile__CFlag moduleflags) { 
	string obj_path = os__real_path(path);
	if (os__exists(obj_path)) {
		return;
	}
	println(_STR("%.*s not found, building it...", obj_path.len, obj_path.str));
	string parent = os__dir(obj_path);
	Option_array_string files = os__ls(parent);
	if (!files.ok) {
		string err = files.v_error;
		int errcode = files.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		v_panic(err);
	};
	string cfiles = tos3("");
	// FOR IN
	for (int tmp2 = 0; tmp2 < /*opt*/(*(array_string*)files.data).
	len; tmp2++) {	string file = ((string*)/*opt*/(*(array_string*)files.data).
	data)[tmp2];if (string_ends_with(file, tos3(".c"))) {
			cfiles = string_add(cfiles, string_add(string_add(tos3("\""), os__real_path(string_add(string_add(parent, _const_os__path_separator), file))), tos3("\" ")));
		}
	}
	string btarget = array_internal__compile__CFlag_c_options_before_target(moduleflags);
	string atarget = array_internal__compile__CFlag_c_options_after_target(moduleflags);
	string cmd = _STR("%.*s %.*s %.*s -c -o \"%.*s\" %.*s %.*s ", v->pref->ccompiler.len, v->pref->ccompiler.str, v->pref->third_party_option.len, v->pref->third_party_option.str, btarget.len, btarget.str, obj_path.len, obj_path.str, cfiles.len, cfiles.str, atarget.len, atarget.str);
	Option_os__Result res = os__exec(cmd);
	if (!res.ok) {
		string err = res.v_error;
		int errcode = res.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		println(_STR("failed thirdparty object build cmd: %.*s", cmd.len, cmd.str));
		internal__compile__verror(err);
		return;
	};
	if (/*opt*/(*(os__Result*)res.data).exit_code != 0) {
		println(_STR("failed thirdparty object build cmd: %.*s", cmd.len, cmd.str));
		internal__compile__verror(/*opt*/(*(os__Result*)res.data).output);
		return;
	}
	println(/*opt*/(*(os__Result*)res.data).output);
}

string internal__compile__missing_compiler_info() { 
	
#ifdef _WIN32
	// #if windows
		return tos3("https://github.com/vlang/v/wiki/Installing-a-C-compiler-on-Windows");
	#endif
	
#ifdef __linux__
	// #if linux
		return tos3("On Debian/Ubuntu, run `sudo apt install build-essential`");
	#endif
	
#ifdef __APPLE__
	// #if macos
		return tos3("Install command line XCode tools with `xcode-select --install`");
	#endif
	return tos3("");
}

array_string internal__compile__error_context_lines(string text, string keyword, int before, int after) { 
	string khighlight = (term__can_show_color_on_stdout() ? term__red(keyword) : keyword);
	int eline_idx = 0;
	array_string lines = string_split_into_lines(text);
	// FOR IN
	for (int idx = 0; idx < lines.
	len; idx++) {	string eline = ((string*)lines.
	data)[idx];if (string_contains(eline, keyword)) {
			array_set(&lines, idx, &(string[]) { string_replace((*(string*)array_get(lines, idx)), keyword, khighlight) });
			if (eline_idx == 0) {
				eline_idx = idx;
			}
		}
	}
	int idx_s = (eline_idx - before >= 0 ? eline_idx - before : 0);
	int idx_e = (idx_s + after < lines.len ? idx_s + after : lines.len);
	return array_slice(lines, idx_s, idx_e);
}

string internal__compile__CFlag_str(internal__compile__CFlag* c) { 
	return _STR("CFlag{ name: \"%.*s\" value: \"%.*s\" mod: \"%.*s\" os: \"%.*s\" }", c->name.len, c->name.str, c->value.len, c->value.str, c->mod.len, c->mod.str, c->os.len, c->os.str);
}

array_internal__compile__CFlag internal__compile__V_get_os_cflags(internal__compile__V* v) { 
	array_internal__compile__CFlag flags = new_array(0, 0, sizeof(internal__compile__CFlag));
	array_string ctimedefines = new_array(0, 0, sizeof(string));
	if (v->pref->compile_defines.len > 0) {
		_PUSH_MANY(&ctimedefines, (v->pref->compile_defines), tmp2, array_string);
	}
	return flags;
}

array_internal__compile__CFlag internal__compile__V_get_rest_of_module_cflags(internal__compile__V* v, internal__compile__CFlag* c) { 
	array_internal__compile__CFlag flags = new_array(0, 0, sizeof(internal__compile__CFlag));
	array_internal__compile__CFlag cflags = internal__compile__V_get_os_cflags(v);
	// FOR IN
	for (int tmp1 = 0; tmp1 < cflags.
	len; tmp1++) {	internal__compile__CFlag flag = ((internal__compile__CFlag*)cflags.
	data)[tmp1];if (string_eq(c->mod, flag.mod)) {
			if (string_eq(c->name, flag.name) && string_eq(c->value, flag.value) && string_eq(c->os, flag.os)) {
				continue;
			}
			_PUSH(&flags, (flag), tmp4, internal__compile__CFlag);
		}
	}
	return flags;
}

string internal__compile__CFlag_format(internal__compile__CFlag* cf) { 
	string value = cf->value;
	if ((string_eq(cf->name, tos3("-l")) || string_eq(cf->name, tos3("-Wa")) || string_eq(cf->name, tos3("-Wl")) || string_eq(cf->name, tos3("-Wp"))) && value.len > 0) {
		return string_trim_space(_STR("%.*s%.*s", cf->name.len, cf->name.str, value.len, value.str));
	}
	if (string_eq(cf->name, tos3("-I")) || string_eq(cf->name, tos3("-L")) || string_ends_with(value, tos3(".o"))) {
		value = string_add(string_add(tos3("\""), os__real_path(value)), tos3("\""));
	}
	return string_trim_space(_STR("%.*s %.*s", cf->name.len, cf->name.str, value.len, value.str));
}

string array_internal__compile__CFlag_c_options_before_target_msvc(array_internal__compile__CFlag cflags) { 
	return tos3("");
}

string array_internal__compile__CFlag_c_options_after_target_msvc(array_internal__compile__CFlag cflags) { 
	return tos3("");
}

string array_internal__compile__CFlag_c_options_before_target(array_internal__compile__CFlag cflags) { 
	array_string args = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < cflags.
	len; tmp1++) {	internal__compile__CFlag flag = ((internal__compile__CFlag*)cflags.
	data)[tmp1];if (string_ne(flag.name, tos3("-l"))) {
			_PUSH(&args, (internal__compile__CFlag_format(&flag)), tmp3, string);
		}
	}
	return array_string_join(args, tos3(" "));
}

string array_internal__compile__CFlag_c_options_after_target(array_internal__compile__CFlag cflags) { 
	array_string args = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < cflags.
	len; tmp1++) {	internal__compile__CFlag flag = ((internal__compile__CFlag*)cflags.
	data)[tmp1];if (string_eq(flag.name, tos3("-l"))) {
			_PUSH(&args, (internal__compile__CFlag_format(&flag)), tmp3, string);
		}
	}
	return array_string_join(args, tos3(" "));
}

string array_internal__compile__CFlag_c_options_without_object_files(array_internal__compile__CFlag cflags) { 
	array_string args = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < cflags.
	len; tmp1++) {	internal__compile__CFlag flag = ((internal__compile__CFlag*)cflags.
	data)[tmp1];if (string_ends_with(flag.value, tos3(".o")) || string_ends_with(flag.value, tos3(".obj"))) {
			continue;
		}
		_PUSH(&args, (internal__compile__CFlag_format(&flag)), tmp3, string);
	}
	return array_string_join(args, tos3(" "));
}

string array_internal__compile__CFlag_c_options_only_object_files(array_internal__compile__CFlag cflags) { 
	array_string args = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < cflags.
	len; tmp1++) {	internal__compile__CFlag flag = ((internal__compile__CFlag*)cflags.
	data)[tmp1];if (string_ends_with(flag.value, tos3(".o")) || string_ends_with(flag.value, tos3(".obj"))) {
			_PUSH(&args, (internal__compile__CFlag_format(&flag)), tmp3, string);
		}
	}
	return array_string_join(args, tos3(" "));
}

void internal__compile__check_for_common_mistake(array_string args, v__pref__Preferences* p) { 
	if (string_ends_with(p->out_name, tos3(".c")) && p->backend == v__pref__Backend_c) {
	}
	if (string_ends_with(p->out_name, tos3(".js")) && p->backend != v__pref__Backend_js) {
		println(_STR("HINT: `-o %.*s` implies `-backend js` currently.", p->out_name.len, p->out_name.str));
	}
	if (string_eq(p->path, tos3("vlib/compiler")) || string_eq(p->path, tos3("v.v"))) {
		println(tos3("HINT: The V compiler is now located in `cmd/v`."));
		println(_STR("      `%.*s` is no longer the correct path to compile if you are intending to do so.", p->path.len, p->path.str));
	}
	if (!string_ends_with(p->path, tos3(".v")) && !os__is_dir(p->path) && os__is_dir(string_add(p->path, _const_os__path_separator))) {
		println(_STR("HINT: `%.*s` is not a directory nor a file suffixed with `.v`.", p->path.len, p->path.str));
		println(tos3("      Did you perhaps accidentally reference the compiled executable?"));
		println(tos3("      To make sure V detects the directory correctly, add the path separator to the end of the path like so:"));
		println(_STR("      `v %.*s%.*s`", p->path.len, p->path.str, _const_os__path_separator.len, _const_os__path_separator.str));
	}
}

internal__compile__V* internal__compile__new_v(v__pref__Preferences* pref) { 
	string rdir = os__real_path(pref->path);
	string out_name_c = internal__compile__get_vtmp_filename(pref->out_name, tos3(".tmp.c"));
	if (pref->is_so) {
		out_name_c = internal__compile__get_vtmp_filename(pref->out_name, tos3(".tmp.so.c"));
	}
	strings__Builder vgen_buf = strings__new_builder(1000);
	strings__Builder_writeln(&vgen_buf, tos3("module vgen\nimport strings"));
	string compiled_dir = (os__is_dir(rdir) ? rdir : os__dir(rdir));
	return (internal__compile__V*)memdup(&(internal__compile__V){	.mod_file_cacher = v__builder__new_mod_file_cacher(),
		.compiled_dir = compiled_dir,
		.out_name_c = out_name_c,
		.pref = pref,
		.vgen_buf = vgen_buf,
		.files = new_array(0, 1, sizeof(string)),
		.file_parser_idx = new_map(1, sizeof(int)),
		.gen_parser_idx = new_map(1, sizeof(int)),
		.cached_mods = new_array(0, 1, sizeof(string)),
		.module_lookup_paths = new_array(0, 1, sizeof(string)),
		.v_fmt_all = 0,
		.v_fmt_file = tos3(""),
		.v_fmt_file_result = tos3(""),
	}, sizeof(internal__compile__V));
}

v__builder__Builder internal__compile__V_new_v2(internal__compile__V* v) { 
	v__builder__Builder b = v__builder__new_builder(v->pref);
	b = // assoc
	(v__builder__Builder){
		.os = v->pref->os, 
		.module_path = _const_v__pref__default_module_path, 
		.compiled_dir = v->compiled_dir, 
		.module_search_paths = v->module_lookup_paths, 
		.mod_file_cacher = b.mod_file_cacher,
		.pref = b.pref,
		.table = b.table,
		.checker = b.checker,
		.parsed_files = b.parsed_files,
		.global_scope = b.global_scope,
	};
	return b;
}

string internal__compile__get_vtmp_folder() { 
	string vtmp = os__join_path(os__temp_dir(), (varg_string){.len=1,.args={tos3("v")}});
	if (!os__is_dir(vtmp)) {
		Option_bool tmp2 = os__mkdir(vtmp);
		if (!tmp2.ok) {
			string err = tmp2.v_error;
			int errcode = tmp2.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			v_panic(err);
		};
	}
	return vtmp;
}

string internal__compile__get_vtmp_filename(string base_file_name, string postfix) { 
	string vtmp = internal__compile__get_vtmp_folder();
	return os__real_path(os__join_path(vtmp, (varg_string){.len=1,.args={string_add(os__file_name(os__real_path(base_file_name)), postfix)}}));
}

void internal__compile__V_compile_x64(internal__compile__V* v) { 
	
#ifndef __linux__
	// #if not linux
		println(tos3("v -x64 can only generate Linux binaries for now"));
		println(string_add(tos3("You are not on a Linux system, so you will not "), tos3("be able to run the resulting executable")));
	#endif
	_PUSH(&v->files, (v->pref->path), tmp1, string);
	internal__compile__V_set_module_lookup_paths(v);
	v__builder__Builder b = internal__compile__V_new_v2(v);
	v__builder__Builder_build_x64(&b, v->files, v->pref->out_name);
}

void internal__compile__V_compile2(internal__compile__V* v) { 
	if (string_ne(os__user_os(), tos3("windows")) && string_eq(v->pref->ccompiler, tos3("msvc"))) {
		internal__compile__verror(_STR("Cannot build with msvc on %.*s", os__user_os().len, os__user_os().str));
	}
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_three)) {
		println(tos3("all .v files before:"));
		println(array_string_str(v->files));
	}
	_PUSH_MANY(&v->files, (internal__compile__V_get_builtin_files(v)), tmp3, array_string);
	_PUSH_MANY(&v->files, (internal__compile__V_get_user_files(v)), tmp4, array_string);
	internal__compile__V_set_module_lookup_paths(v);
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_three)) {
		println(tos3("all .v files:"));
		println(array_string_str(v->files));
	}
	v__builder__Builder b = internal__compile__V_new_v2(v);
	v__builder__Builder_build_c(&b, v->files, v->out_name_c);
	internal__compile__V_cc(v);
}

void internal__compile__compile(string command, array_string args) { 
	internal__compile__parse_and_output_new_format(args);
	multi_return_v__pref__Preferences_array_string mr_4452 = internal__compile__parse_arguments(args);
	v__pref__Preferences prefs = mr_4452.arg0;
	array_string remaining = mr_4452.arg1;
	internal__compile__check_for_common_mistake(args, &/*qq*/prefs);
	internal__compile__V* v = internal__compile__new_v(&/*qq*/prefs);
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
		println(array_string_str(args));
	}
	benchmark__Benchmark tmark = benchmark__new_benchmark();
	if (v->pref->backend == v__pref__Backend_x64) {
		internal__compile__V_compile_x64(v);
	} else if (v->pref->backend == v__pref__Backend_experimental) {
		internal__compile__V_compile2(v);
	} else {
		internal__compile__V_compile2(v);
	}
	if (v->pref->is_stats) {
		benchmark__Benchmark_stop(&tmark);
		println(string_add(string_add(tos3("compilation took: "), i64_str(benchmark__Benchmark_total_duration(&tmark))), tos3("ms")));
	}
	if (v->pref->is_test || v->pref->is_run) {
		internal__compile__run_compiled_executable_and_exit(v, remaining);
	}
}

void internal__compile__run_compiled_executable_and_exit(internal__compile__V* v, array_string remaining_args) { 
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
		println(_STR("============ running %.*s ============", v->pref->out_name.len, v->pref->out_name.str));
	}
	string cmd = _STR("\"%.*s\"", v->pref->out_name.len, v->pref->out_name.str);
	for (int tmp2 = 1; tmp2 < remaining_args.len; tmp2++) { 
		int i = tmp2;
		if (string_index_byte((*(string*)array_get(remaining_args, i)), ' ') > 0) {
			cmd = string_add(cmd, string_add(string_add(tos3(" \""), (*(string*)array_get(remaining_args, i))), tos3("\"")));
		} else {
			cmd = string_add(cmd, string_add(tos3(" "), (*(string*)array_get(remaining_args, i))));
		}
	}
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
		println(_STR("command to run executable: %.*s", cmd.len, cmd.str));
	}
	if (v->pref->is_test) {
		int ret = os__system(cmd);
		if (ret != 0) {
			v_exit(1);
		}
	}
	if (v->pref->is_run) {
		int ret = os__system(cmd);
		v_exit(ret);
	}
	v_exit(0);
}

void internal__compile__V_set_module_lookup_paths(internal__compile__V* v) { 
	v->module_lookup_paths = new_array(0, 0, sizeof(string));
	if (v->pref->is_test) {
		_PUSH(&v->module_lookup_paths, (os__base_dir(v->compiled_dir)), tmp2, string);
	}
	_PUSH(&v->module_lookup_paths, (v->compiled_dir), tmp3, string);
	string x = os__join_path(v->compiled_dir, (varg_string){.len=1,.args={tos3("modules")}});
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
		println(_STR("x: \"%.*s\"", x.len, x.str));
	}
	_PUSH(&v->module_lookup_paths, (os__join_path(v->compiled_dir, (varg_string){.len=1,.args={tos3("modules")}})), tmp5, string);
	_PUSH_MANY(&v->module_lookup_paths, (v->pref->lookup_path), tmp6, array_string);
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
		internal__compile__V_log(v, tos3("v.module_lookup_paths"));
		println(array_string_str(v->module_lookup_paths));
	}
}

array_string internal__compile__V_get_builtin_files(internal__compile__V* v) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < v->pref->lookup_path.
	len; tmp1++) {	string location = ((string*)v->pref->lookup_path.
	data)[tmp1];if (!os__exists(os__join_path(location, (varg_string){.len=1,.args={tos3("builtin")}}))) {
			continue;
		}
		if (v->pref->is_bare) {
			return internal__compile__V_v_files_from_dir(v, os__join_path(location, (varg_string){.len=2,.args={tos3("builtin"), tos3("bare")}}));
		}
		
#ifdef _VJS
		// #if js
			return internal__compile__V_v_files_from_dir(v, os__join_path(location, (varg_string){.len=2,.args={tos3("builtin"), tos3("js")}}));
		#endif
		return internal__compile__V_v_files_from_dir(v, os__join_path(location, (varg_string){.len=1,.args={tos3("builtin")}}));
	}
	internal__compile__verror(tos3("`builtin/` not included on module lookup path.\nDid you forget to add vlib to the path? (Use @vlib for default vlib)"));
	v_panic(tos3("Unreachable code reached."));
}

array_string internal__compile__V_get_user_files(internal__compile__V* v) { 
	string dir = v->pref->path;
	internal__compile__V_log(v, _STR("get_v_files(%.*s)", dir.len, dir.str));
	array_string user_files = new_array(0, 0, sizeof(string));
	string vroot = os__dir(v__pref__vexe_path());
	string preludes_path = os__join_path(vroot, (varg_string){.len=3,.args={tos3("cmd"), tos3("tools"), tos3("preludes")}});
	if (v->pref->is_live) {
		_PUSH(&user_files, (os__join_path(preludes_path, (varg_string){.len=1,.args={tos3("live_main.v")}})), tmp2, string);
	}
	if (v->pref->is_solive) {
		_PUSH(&user_files, (os__join_path(preludes_path, (varg_string){.len=1,.args={tos3("live_shared.v")}})), tmp4, string);
	}
	if (v->pref->is_test) {
		_PUSH(&user_files, (os__join_path(preludes_path, (varg_string){.len=1,.args={tos3("tests_assertions.v")}})), tmp6, string);
	}
	if (v->pref->is_test && v->pref->is_stats) {
		_PUSH(&user_files, (os__join_path(preludes_path, (varg_string){.len=1,.args={tos3("tests_with_stats.v")}})), tmp8, string);
	}
	bool is_test = string_ends_with(dir, tos3("_test.v"));
	bool is_internal_module_test = false;
	if (is_test) {
		Option_string tcontent = os__read_file(dir);
		if (!tcontent.ok) {
			string err = tcontent.v_error;
			int errcode = tcontent.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			v_panic(_STR("%.*s does not exist", dir.len, dir.str));
		};
		array_string slines = string_split_into_lines(string_trim_space(/*opt*/(*(string*)tcontent.data)));
		// FOR IN
		for (int tmp10 = 0; tmp10 < slines.
		len; tmp10++) {	string sline = ((string*)slines.
		data)[tmp10];string line = string_trim_space(sline);
			if (line.len > 2) {
				if (string_at(line, 0) == '/' && string_at(line, 1) == '/') {
					continue;
				}
				if (string_starts_with(line, tos3("module ")) && !string_starts_with(line, tos3("module main"))) {
					is_internal_module_test = true;
					break;
				}
			}
		}
	}
	if (is_internal_module_test) {
		string single_test_v_file = os__real_path(dir);
		if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
			internal__compile__V_log(v, _STR("> Compiling an internal module _test.v file %.*s .", single_test_v_file.len, single_test_v_file.str));
			internal__compile__V_log(v, tos3("> That brings in all other ordinary .v files in the same module too ."));
		}
		_PUSH(&user_files, (single_test_v_file), tmp16, string);
		dir = os__base_dir(single_test_v_file);
	}
	bool is_real_file = os__exists(dir) && !os__is_dir(dir);
	if (is_real_file && (string_ends_with(dir, tos3(".v")) || string_ends_with(dir, tos3(".vsh")))) {
		string single_v_file = dir;
		_PUSH(&user_files, (single_v_file), tmp18, string);
		if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
			internal__compile__V_log(v, _STR("> just compile one file: \"%.*s\"", single_v_file.len, single_v_file.str));
		}
	} else {
		if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
			internal__compile__V_log(v, _STR("> add all .v files from directory \"%.*s\" ...", dir.len, dir.str));
		}
		array_string files = internal__compile__V_v_files_from_dir(v, dir);
		// FOR IN
		for (int tmp21 = 0; tmp21 < files.
		len; tmp21++) {	string file = ((string*)files.
		data)[tmp21];_PUSH(&user_files, (file), tmp22, string);
		}
	}
	if (user_files.len == 0) {
		println(tos3("No input .v files"));
		v_exit(1);
	}
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
		internal__compile__V_log(v, _STR("user_files: %d", user_files));
	}
	return user_files;
}

void internal__compile__V_log(internal__compile__V* v, string s) { 
	if (!v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_two)) {
		return;
	}
	println(s);
}

array_string internal__compile__V_v_files_from_dir(internal__compile__V* v, string dir) { 
	array_string res = new_array(0, 0, sizeof(string));
	if (!os__exists(dir)) {
		if (string_eq(dir, tos3("compiler")) && os__is_dir(tos3("vlib"))) {
			println(tos3("looks like you are trying to build V with an old command"));
			println(tos3("use `v -o v cmd/v` instead of `v -o v compiler`"));
		}
		internal__compile__verror(_STR("%.*s doesn't exist", dir.len, dir.str));
	} else if (!os__is_dir(dir)) {
		internal__compile__verror(_STR("%.*s isn't a directory!", dir.len, dir.str));
	}
	Option_array_string files = os__ls(dir);
	if (!files.ok) {
		string err = files.v_error;
		int errcode = files.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		v_panic(err);
	};
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_three)) {
		println(_STR("v_files_from_dir (\"%.*s\")", dir.len, dir.str));
	}
	array_string_sort(&/*opt*/(*(array_string*)files.data));
	// FOR IN
	for (int tmp4 = 0; tmp4 < /*opt*/(*(array_string*)files.data).
	len; tmp4++) {	string file = ((string*)/*opt*/(*(array_string*)files.data).
	data)[tmp4];if (!string_ends_with(file, tos3(".v")) && !string_ends_with(file, tos3(".vh"))) {
			continue;
		}
		if (string_ends_with(file, tos3("_test.v"))) {
			continue;
		}
		if ((string_ends_with(file, tos3("_win.v")) || string_ends_with(file, tos3("_windows.v"))) && v->pref->os != v__pref__OS_windows) {
			continue;
		}
		if ((string_ends_with(file, tos3("_lin.v")) || string_ends_with(file, tos3("_linux.v"))) && v->pref->os != v__pref__OS_linux) {
			continue;
		}
		if ((string_ends_with(file, tos3("_mac.v")) || string_ends_with(file, tos3("_darwin.v"))) && v->pref->os != v__pref__OS_mac) {
			continue;
		}
		if (string_ends_with(file, tos3("_nix.v")) && v->pref->os == v__pref__OS_windows) {
			continue;
		}
		if (string_ends_with(file, tos3("_android.v")) && v->pref->os != v__pref__OS_android) {
			continue;
		}
		if (string_ends_with(file, tos3("_freebsd.v")) && v->pref->os != v__pref__OS_freebsd) {
			continue;
		}
		if (string_ends_with(file, tos3("_solaris.v")) && v->pref->os != v__pref__OS_solaris) {
			continue;
		}
		if (string_ends_with(file, tos3("_js.v")) && v->pref->os != v__pref__OS_js) {
			continue;
		}
		if (string_ends_with(file, tos3("_c.v")) && v->pref->os == v__pref__OS_js) {
			continue;
		}
		if (v->pref->compile_defines_all.len > 0 && string_contains(file, tos3("_d_"))) {
			bool allowed = false;
			// FOR IN
			for (int tmp17 = 0; tmp17 < v->pref->compile_defines.
			len; tmp17++) {	string cdefine = ((string*)v->pref->compile_defines.
			data)[tmp17];string file_postfix = _STR("_d_%.*s.v", cdefine.len, cdefine.str);
				if (string_ends_with(file, file_postfix)) {
					allowed = true;
					break;
				}
			}
			if (!allowed) {
				continue;
			}
		}
		_PUSH(&res, (os__join_path(dir, (varg_string){.len=1,.args={file}})), tmp20, string);
	}
	return res;
}

void internal__compile__verror(string s) { 
	v__util__verror(tos3("compiler error"), s);
}

void internal__compile__parse_c_options(string flag, internal__flag__Instance* f, v__pref__Preferences* prefs) { 
	if (string_eq(flag, tos3("cc")) || string_eq(flag, tos3("compiler"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("cc"), tos3("compiler"), 
}));
		Option_string tmp = internal__flag__Instance_string(f);
		if (!tmp.ok) {
			string err = tmp.v_error;
			int errcode = tmp.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(_STR("V error: Expected argument after `-%.*s`.", flag.len, flag.str));
			v_exit(1);
		};
		prefs->ccompiler = /*opt*/(*(string*)tmp.data);
	}
	else if (string_eq(flag, tos3("cg")) || string_eq(flag, tos3("cdebug"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("cg"), tos3("cdebug"), tos3("g"), tos3("debug"), 
}));
		if (internal__flag__Instance_bool(f)) {
			prefs->is_debug = true;
			prefs->is_vlines = false;
		}
	}
	else if (string_eq(flag, tos3("live"))) {
		prefs->is_live = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("csource"))) {
		Option_string operation = internal__flag__Instance_string(f);
		if (!operation.ok) {
			string err = operation.v_error;
			int errcode = operation.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(tos3("V error: Expected argument after `-csource`."));
			v_exit(1);
		};
		if (string_eq(/*opt*/(*(string*)operation.data), tos3("keep"))) {
			prefs->is_keep_c = true;
		}
		else if (string_eq(/*opt*/(*(string*)operation.data), tos3("prettify"))) {
			prefs->is_keep_c = true;
			prefs->is_pretty_c = true;
		}
		else if (string_eq(/*opt*/(*(string*)operation.data), tos3("drop"))) {
		}
		else {
			println(_STR("V error: Unknown argument for `-csource` (`%.*s`).", /*opt*/(*(string*)operation.data).len, /*opt*/(*(string*)operation.data).str));
			println(tos3("Allowed options: `keep`, `prettify` and `drop`."));
			v_exit(1);
		}
		;
	}
	else if (string_eq(flag, tos3("sanitize"))) {
		prefs->sanitize = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("cf")) || string_eq(flag, tos3("cflags"))) {
		Option_string cflag = internal__flag__Instance_string(f);
		if (!cflag.ok) {
			string err = cflag.v_error;
			int errcode = cflag.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(_STR("V error: Expected argument after `-%.*s`.", flag.len, flag.str));
			v_exit(1);
		};
		prefs->cflags = string_add(prefs->cflags, _STR(" %.*s", /*opt*/(*(string*)cflag.data).len, /*opt*/(*(string*)cflag.data).str));
	}
	else if (string_eq(flag, tos3("repl"))) {
		prefs->is_repl = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("solive"))) {
		prefs->is_solive = internal__flag__Instance_bool(f);
		prefs->is_so = prefs->is_solive;
	}
	else {
		internal__compile__parse_executable_options(flag, f, prefs);
	}
	;
}

//[inline]
void internal__compile__parse_js_options(string flag, internal__flag__Instance f, v__pref__Preferences prefs) { 
	println(_STR("V error: Unknown flag `-%.*s` provided.", flag.len, flag.str));
	println(tos3("Use `--` to terminate flag list if necessary."));
	v_exit(1);
}

multi_return_v__pref__Preferences_array_string internal__compile__parse_arguments(array_string args) { 
	v__pref__Preferences p = (v__pref__Preferences){
		.enable_globals = true,
		.os = {0},
		.backend = {0},
		.build_mode = {0},
		.verbosity = {0},
		.is_verbose = 0,
		.is_test = 0,
		.is_script = 0,
		.is_live = 0,
		.is_solive = 0,
		.is_so = 0,
		.is_prof = 0,
		.translated = 0,
		.is_prod = 0,
		.obfuscate = 0,
		.is_repl = 0,
		.is_run = 0,
		.sanitize = 0,
		.is_debug = 0,
		.is_vlines = 0,
		.is_keep_c = 0,
		.is_pretty_c = 0,
		.is_cache = 0,
		.is_stats = 0,
		.no_auto_free = 0,
		.cflags = tos3(""),
		.ccompiler = tos3(""),
		.third_party_option = tos3(""),
		.building_v = 0,
		.autofree = 0,
		.compress = 0,
		.fast = 0,
		.is_bare = 0,
		.lookup_path = new_array(0, 1, sizeof(string)),
		.output_cross_c = 0,
		.prealloc = 0,
		.vroot = tos3(""),
		.out_name = tos3(""),
		.path = tos3(""),
		.compile_defines = new_array(0, 1, sizeof(string)),
		.compile_defines_all = new_array(0, 1, sizeof(string)),
		.mod = tos3(""),
	};
	array_string backend = os__cmdline__options(args, tos3("-b"));
	_PUSH_MANY(&backend, (os__cmdline__options(args, tos3("-backend"))), tmp1, array_string);
	if (backend.len > 1) {
		println(tos3("V error: Only one backend may be enabled at once. (Multiple `-b`/`-backend` flags provided)"));
		v_exit(1);
	}
	if (backend.len == 1) {
		Option_v__pref__Backend x = v__pref__backend_from_string((*(string*)array_get(backend, 0)));
		if (!x.ok) {
			string err = x.v_error;
			int errcode = x.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(_STR("V error: Unknown backend %.*s provided.", (*(string*)array_get(backend, 0)).len, (*(string*)array_get(backend, 0)).str));
			v_exit(1);
		};
		p.backend = /*opt*/(*(v__pref__Backend*)x.data);
	} else {
		p.backend = v__pref__Backend_c;
	}
	Option_array_string remaining2 = internal__flag__parse_pref(args, internal__compile__parse_options, &/*qq*/p);
	if (!remaining2.ok) {
		string err = remaining2.v_error;
		int errcode = remaining2.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		println(tos3("V error: Error while parsing flags."));
		println(err);
		println(tos3("Args:"));
		println(array_string_str(args));
		v_exit(1);
	};
	array_string remaining = /*opt*/(*(array_string*)remaining2.data);
	if (string_eq((*(string*)array_get(remaining, 0)), tos3("run"))) {
		p.is_run = true;
		remaining = array_slice(remaining, 1, remaining.len);
	}
	else if (string_eq((*(string*)array_get(remaining, 0)), tos3("build"))) {
		remaining = array_slice(remaining, 1, remaining.len);
		if (remaining.len > 0 && string_eq((*(string*)array_get(remaining, 0)), tos3("module"))) {
			remaining = array_slice(remaining, 1, remaining.len);
			println(tos3("V error: Module compilation is not ready yet."));
			v_exit(1);
		}
	}
	else {
	}
	;
	if (remaining.len == 0) {
		println(tos3("V error: Expected file/directory to compile."));
		v_exit(1);
	}
	if (!p.is_run && remaining.len > 1) {
		println(tos3("V error: Expected only one file/directory to compile."));
		println(tos3("Did you perhaps put flags after the file/directory?"));
		v_exit(1);
	}
	p.path = (*(string*)array_get(remaining, 0));
	v__pref__Preferences_fill_with_defaults(&p);
	return (multi_return_v__pref__Preferences_array_string){.arg0=p,.arg1=remaining};
}

void internal__compile__parse_options(string flag, internal__flag__Instance* f, v__pref__Preferences* prefs) { 
	if (string_eq(flag, tos3("color"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("color"), tos3("nocolor"), 
}));
		v__util__EManager_set_support_color(_const_v__util__emanager, true);
	}
	else if (string_eq(flag, tos3("nocolor"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("color"), tos3("nocolor"), 
}));
		v__util__EManager_set_support_color(_const_v__util__emanager, false);
	}
	else if (string_eq(flag, tos3("path"))) {
		Option_string path_str = internal__flag__Instance_string(f);
		if (!path_str.ok) {
			string err = path_str.v_error;
			int errcode = path_str.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(tos3("V error: Expected argument for `-path`."));
			v_exit(1);
		};
		prefs->lookup_path = string_split(/*opt*/(*(string*)path_str.data), tos3("|"));
	}
	else if (string_eq(flag, tos3("o")) || string_eq(flag, tos3("output"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("o"), tos3("output"), 
}));
		Option_string tmp = internal__flag__Instance_string(f);
		if (!tmp.ok) {
			string err = tmp.v_error;
			int errcode = tmp.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(_STR("V error: Expected argument for `-%.*s`.", flag.len, flag.str));
			v_exit(1);
		};
		prefs->out_name = /*opt*/(*(string*)tmp.data);
	}
	else if (string_eq(flag, tos3("d")) || string_eq(flag, tos3("define"))) {
		Option_string define = internal__flag__Instance_string(f);
		if (!define.ok) {
			string err = define.v_error;
			int errcode = define.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(_STR("V error: Expected argument for `-%.*s`.", flag.len, flag.str));
			v_exit(1);
		};
		internal__compile__parse_define(prefs, /*opt*/(*(string*)define.data));
	}
	else if (string_eq(flag, tos3("g")) || string_eq(flag, tos3("debug"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("g"), tos3("debug"), tos3("cg"), tos3("cdebug"), 
}));
		if (internal__flag__Instance_bool(f)) {
			prefs->is_debug = true;
			prefs->is_vlines = true;
		}
	}
	else if (string_eq(flag, tos3("e")) || string_eq(flag, tos3("experiments"))) {
		Option_string to_enable = internal__flag__Instance_string(f);
		if (!to_enable.ok) {
			string err = to_enable.v_error;
			int errcode = to_enable.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(_STR("V error: Expected argument for `-%.*s`.", flag.len, flag.str));
			v_exit(1);
		};
		if (string_eq(/*opt*/(*(string*)to_enable.data), tos3("prealloc"))) {
			prefs->prealloc = true;
		}
		else {
			println(_STR("V error: Unknown experiment `%.*s`.", /*opt*/(*(string*)to_enable.data).len, /*opt*/(*(string*)to_enable.data).str));
			v_exit(1);
		}
		;
	}
	else if (string_eq(flag, tos3("prod"))) {
		prefs->is_prod = true;
	}
	else if (string_eq(flag, tos3("v"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("v"), tos3("vv"), tos3("vvv"), tos3("verbose"), 
}));
		prefs->verbosity = v__pref__VerboseLevel_level_one;
	}
	else if (string_eq(flag, tos3("vv"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("v"), tos3("vv"), tos3("vvv"), tos3("verbose"), 
}));
		prefs->verbosity = v__pref__VerboseLevel_level_two;
	}
	else if (string_eq(flag, tos3("vvv"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("v"), tos3("vv"), tos3("vvv"), tos3("verbose"), 
}));
		prefs->verbosity = v__pref__VerboseLevel_level_three;
	}
	else if (string_eq(flag, tos3("verbose"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
		tos3("v"), tos3("vv"), tos3("vvv"), tos3("verbose"), 
}));
		Option_int level = internal__flag__Instance_int(f);
		if (!level.ok) {
			string err = level.v_error;
			int errcode = level.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(tos3("V error: Expected `0`, `1`, `2` or `3` as argument to `-verbose` to specify verbosity level."));
			v_exit(1);
		};
		if (/*opt*/(*(int*)level.data) == 0) {
		}
		else if (/*opt*/(*(int*)level.data) == 1) {
			prefs->verbosity = v__pref__VerboseLevel_level_one;
		}
		else if (/*opt*/(*(int*)level.data) == 2) {
			prefs->verbosity = v__pref__VerboseLevel_level_two;
		}
		else if (/*opt*/(*(int*)level.data) == 3) {
			prefs->verbosity = v__pref__VerboseLevel_level_three;
		}
		else {
			println(tos3("V error: Expected `0`, `1`, `2` or `3` as argument to `-verbose` to specify verbosity level."));
			v_exit(1);
		}
		;
	}
	else if (string_eq(flag, tos3("full-rebuild"))) {
		prefs->is_cache = !internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("stats"))) {
		prefs->is_stats = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("obf")) || string_eq(flag, tos3("obfuscate"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("-obf"), tos3("-obfuscate"), 
}));
		prefs->obfuscate = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("prof")) || string_eq(flag, tos3("profile"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("-prof"), tos3("-profile"), 
}));
		prefs->is_prof = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("translated"))) {
		prefs->translated = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("b")) || string_eq(flag, tos3("backend"))) {
		Option_string tmp5 = internal__flag__Instance_string(f);
		if (!tmp5.ok) {
			string err = tmp5.v_error;
			int errcode = tmp5.ecode;
			// last_type: v.ast.Return
			// last_expr_result_type: 
			return;
		};
	}
	else {
		if (prefs->backend == v__pref__Backend_c || prefs->backend == v__pref__Backend_experimental) {
			internal__compile__parse_c_options(flag, f, prefs);
		}
		else if (prefs->backend == v__pref__Backend_x64) {
			internal__compile__parse_x64_options(flag, f, prefs);
		}
		else if (prefs->backend == v__pref__Backend_js) {
			internal__compile__parse_js_options(flag, */*d*/f, */*d*/prefs);
		}
		else {
			v_panic(_STR("unexpected backend type: %d", prefs->backend));
		}
		;
	}
	;
}

//[inline]
void internal__compile__parse_define(v__pref__Preferences* prefs, string define) { 
	array_string define_parts = string_split(define, tos3("="));
	if (define_parts.len == 1) {
		_PUSH(&prefs->compile_defines, (define), tmp2, string);
		_PUSH(&prefs->compile_defines_all, (define), tmp3, string);
		return;
	}
	if (define_parts.len == 2) {
		_PUSH(&prefs->compile_defines_all, ((*(string*)array_get(define_parts, 0))), tmp5, string);
		if (string_eq((*(string*)array_get(define_parts, 1)), tos3("0"))) {
		}
		else if (string_eq((*(string*)array_get(define_parts, 1)), tos3("1"))) {
			_PUSH(&prefs->compile_defines, ((*(string*)array_get(define_parts, 0))), tmp7, string);
		}
		else {
			println(string_add(_STR("V error: Unknown define argument value `%.*s` for %.*s.", (*(string*)array_get(define_parts, 1)).len, (*(string*)array_get(define_parts, 1)).str, (*(string*)array_get(define_parts, 0)).len, (*(string*)array_get(define_parts, 0)).str), tos3("Expected `0` or `1`.")));
			v_exit(1);
		}
		;
		return;
	}
	println(_STR("V error: Unknown define argument: %.*s. Expected at most one `=`.", define.len, define.str));
	v_exit(1);
}

//[inline]
void internal__compile__parse_x64_options(string flag, internal__flag__Instance* f, v__pref__Preferences* prefs) { 
	if (string_eq(flag, tos3("arch"))) {
		println(tos3("V error: The `-arch` flag is not supported on the x64 backend."));
		v_exit(1);
	}
	internal__compile__parse_executable_options(flag, f, prefs);
}

//[inline]
void internal__compile__parse_executable_options(string flag, internal__flag__Instance* f, v__pref__Preferences* prefs) { 
	if (string_eq(flag, tos3("os")) || string_eq(flag, tos3("target-os"))) {
		internal__flag__Instance_is_equivalent_to(f, new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("os"), tos3("target-os"), 
}));
		Option_string target_os = internal__flag__Instance_string(f);
		if (!target_os.ok) {
			string err = target_os.v_error;
			int errcode = target_os.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(_STR("V error: Expected argument after `-%.*s`.", flag.len, flag.str));
			v_exit(1);
		};
		if (string_eq(/*opt*/(*(string*)target_os.data), tos3("cross"))) {
			prefs->output_cross_c = true;
			return;
		}
		Option_v__pref__OS tmp = v__pref__os_from_string(/*opt*/(*(string*)target_os.data));
		if (!tmp.ok) {
			string err = tmp.v_error;
			int errcode = tmp.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(_STR("V error: Unknown operating system target `%.*s`.", /*opt*/(*(string*)target_os.data).len, /*opt*/(*(string*)target_os.data).str));
			v_exit(1);
		};
		prefs->os = /*opt*/(*(v__pref__OS*)tmp.data);
	}
	else if (string_eq(flag, tos3("arch"))) {
		Option_string target_arch = internal__flag__Instance_string(f);
		if (!target_arch.ok) {
			string err = target_arch.v_error;
			int errcode = target_arch.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			println(tos3("V error: Expected argument after `-arch`."));
			v_exit(1);
		};
		if (string_eq(/*opt*/(*(string*)target_arch.data), tos3("x86"))) {
			prefs->cflags = string_add(prefs->cflags, tos3(" -m32"));
		}
		else if (string_eq(/*opt*/(*(string*)target_arch.data), tos3("x64"))) {
		}
		else {
			println(tos3("V error: Unknown architecture type. Only x86 and x64 are supported currently."));
			v_exit(1);
		}
		;
	}
	else if (string_eq(flag, tos3("freestanding"))) {
		prefs->is_bare = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("shared"))) {
		prefs->is_so = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("live"))) {
		prefs->is_solive = internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("manual-free"))) {
		prefs->autofree = !internal__flag__Instance_bool(f);
	}
	else if (string_eq(flag, tos3("compress"))) {
		prefs->compress = internal__flag__Instance_bool(f);
	}
	else {
		println(_STR("V error: Unknown flag `-%.*s` provided.", flag.len, flag.str));
		println(tos3("Use `--` to terminate flag list if necessary."));
		v_exit(1);
	}
	;
}

array_string internal__compile__V_generate_hotcode_reloading_compiler_flags(internal__compile__V* v) { 
	array_string a = new_array(0, 0, sizeof(string));
	if (v->pref->is_live || v->pref->is_so) {
		if (v->pref->os == v__pref__OS_linux || string_eq(os__user_os(), tos3("linux"))) {
			_PUSH(&a, (tos3("-rdynamic")), tmp3, string);
		}
		if (v->pref->os == v__pref__OS_mac || string_eq(os__user_os(), tos3("mac"))) {
			_PUSH(&a, (tos3("-flat_namespace")), tmp5, string);
		}
	}
	return a;
}

void internal__compile__V_generate_hotcode_reloading_declarations(internal__compile__V* v) { 
}

void internal__compile__V_generate_hotcode_reloading_main_caller(internal__compile__V* v) { 
}

void internal__compile__V_generate_hot_reload_code(internal__compile__V* v) { 
}

// TypeDecl
Option_string internal__compile__find_windows_kit_internal(internal__compile__RegKey key, array_string versions) { 
	
#ifdef _WIN32
	// #if windows
			// FOR IN
			for (int tmp1 = 0; tmp1 < versions.
			len; tmp1++) {	string version = ((string*)versions.
			data)[tmp1];int required_bytes = 0;
				voidptr result = RegQueryValueEx(key, string_to_wide(version), 0, 0, 0, &required_bytes);
				int length = required_bytes / 2;
				if (result != 0) {
					continue;
				}
				int alloc_length = (required_bytes + 2);
				u16* value = ((u16*)(v_malloc(alloc_length)));
				if (isnil(value)) {
					continue;
				}
				voidptr result2 = RegQueryValueEx(key, string_to_wide(version), 0, 0, value, &alloc_length);
				if (result2 != 0) {
					continue;
				}
				if (value[length - 1] != ((u16)(0))) {
					value[length] = ((u16)(0));
				}
				string res = string_from_wide(value);
				return opt_ok(& (string []) { res }, sizeof(string));
			}
	#endif
	return v_error(tos3("windows kit not found"));
}

Option_internal__compile__WindowsKit internal__compile__find_windows_kit_root(string host_arch) { 
	
#ifdef _WIN32
	// #if windows
		internal__compile__RegKey root_key = ((internal__compile__RegKey)(0));
		string path = tos3("SOFTWARE\\Microsoft\\Windows Kits\\Installed Roots");
		voidptr rc = RegOpenKeyEx(_const_internal__compile__HKEY_LOCAL_MACHINE, string_to_wide(path), 0, ((_const_internal__compile__KEY_QUERY_VALUE | _const_internal__compile__KEY_WOW64_32KEY) | _const_internal__compile__KEY_ENUMERATE_SUB_KEYS), &root_key);
		if (rc != 0) {
			// defer
			#ifdef _WIN32
				RegCloseKey(root_key);
			#endif
			return v_error(tos3("Unable to open root key"));
		}
		Option_string kit_root = internal__compile__find_windows_kit_internal(root_key, new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("KitsRoot10"), tos3("KitsRoot81"), 
}));
		if (!kit_root.ok) {
			string err = kit_root.v_error;
			int errcode = kit_root.ecode;
			// last_type: v.ast.Return
			// last_expr_result_type: 
			// defer
			#ifdef _WIN32
				RegCloseKey(root_key);
			#endif
			return v_error(tos3("Unable to find a windows kit"));
		};
		string kit_lib = string_add(/*opt*/(*(string*)kit_root.data), tos3("Lib"));
		Option_array_string files = os__ls(kit_lib);
		if (!files.ok) {
			string err = files.v_error;
			int errcode = files.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			v_panic(err);
		};
		string highest_path = tos3("");
		int highest_int = 0;
		// FOR IN
		for (int tmp2 = 0; tmp2 < /*opt*/(*(array_string*)files.data).
		len; tmp2++) {	string f = ((string*)/*opt*/(*(array_string*)files.data).
		data)[tmp2];string no_dot = string_replace(f, tos3("."), tos3(""));
			int v_int = string_int(no_dot);
			if (v_int > highest_int) {
				highest_int = v_int;
				highest_path = f;
			}
		}
		string kit_lib_highest = string_add(kit_lib, _STR("\\%.*s", highest_path.len, highest_path.str));
		string kit_include_highest = string_replace(kit_lib_highest, tos3("Lib"), tos3("Include"));
		// defer
		#ifdef _WIN32
			RegCloseKey(root_key);
		#endif
		return opt_ok(& (internal__compile__WindowsKit []) { (internal__compile__WindowsKit){
			.um_lib_path = string_add(kit_lib_highest, _STR("\\um\\%.*s", host_arch.len, host_arch.str)),
			.ucrt_lib_path = string_add(kit_lib_highest, _STR("\\ucrt\\%.*s", host_arch.len, host_arch.str)),
			.um_include_path = string_add(kit_include_highest, tos3("\\um")),
			.ucrt_include_path = string_add(kit_include_highest, tos3("\\ucrt")),
			.shared_include_path = string_add(kit_include_highest, tos3("\\shared")),
		} }, sizeof(internal__compile__WindowsKit));
	#endif
	// defer
	#ifdef _WIN32
		RegCloseKey(root_key);
	#endif
	return v_error(tos3("Host OS does not support funding a windows kit"));
// defer
#ifdef _WIN32
	RegCloseKey(root_key);
#endif
}

Option_internal__compile__VsInstallation internal__compile__find_vs(string vswhere_dir, string host_arch) { 
	
#ifndef _WIN32
	// #if not windows
		return v_error(tos3("Host OS does not support finding a Vs installation"));
	#endif
	Option_os__Result res = os__exec(_STR("\"%.*s\\Microsoft Visual Studio\\Installer\\vswhere.exe\" -latest -prerelease -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath", vswhere_dir.len, vswhere_dir.str));
	if (!res.ok) {
		string err = res.v_error;
		int errcode = res.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(err);
	};
	Option_string version = os__read_file(_STR("%.*s\\VC\\Auxiliary\\Build\\Microsoft.VCToolsVersion.default.txt", /*opt*/(*(os__Result*)res.data).output.len, /*opt*/(*(os__Result*)res.data).output.str));
	if (!version.ok) {
		string err = version.v_error;
		int errcode = version.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		println(tos3("Unable to find msvc version"));
		return v_error(tos3("Unable to find vs installation"));
	};
	string version2 = /*opt*/(*(string*)version.data);
	string v = (string_ends_with(/*opt*/(*(string*)version.data), tos3("\n")) ? string_substr(version2, 0, /*opt*/(*(string*)version.data).len - 2) : version2);
	string lib_path = _STR("%.*s\\VC\\Tools\\MSVC\\%.*s\\lib\\%.*s", /*opt*/(*(os__Result*)res.data).output.len, /*opt*/(*(os__Result*)res.data).output.str, v.len, v.str, host_arch.len, host_arch.str);
	string include_path = _STR("%.*s\\VC\\Tools\\MSVC\\%.*s\\include", /*opt*/(*(os__Result*)res.data).output.len, /*opt*/(*(os__Result*)res.data).output.str, v.len, v.str);
	if (os__exists(_STR("%.*s\\vcruntime.lib", lib_path.len, lib_path.str))) {
		string p = _STR("%.*s\\VC\\Tools\\MSVC\\%.*s\\bin\\Host%.*s\\%.*s", /*opt*/(*(os__Result*)res.data).output.len, /*opt*/(*(os__Result*)res.data).output.str, v.len, v.str, host_arch.len, host_arch.str, host_arch.len, host_arch.str);
		return opt_ok(& (internal__compile__VsInstallation []) { (internal__compile__VsInstallation){
			.exe_path = p,
			.lib_path = lib_path,
			.include_path = include_path,
		} }, sizeof(internal__compile__VsInstallation));
	}
	println(_STR("Unable to find vs installation (attempted to use lib path \"%.*s\")", lib_path.len, lib_path.str));
	return v_error(tos3("Unable to find vs exe folder"));
}

Option_internal__compile__MsvcResult internal__compile__find_msvc() { 
	
#ifdef _WIN32
	// #if windows
		string processor_architecture = os__getenv(tos3("PROCESSOR_ARCHITECTURE"));
		string vswhere_dir = (string_eq(processor_architecture, tos3("x86")) ? tos3("%ProgramFiles%") : tos3("%ProgramFiles(x86)%"));
		string host_arch = (string_eq(processor_architecture, tos3("x86")) ? tos3("X86") : tos3("X64"));
		Option_internal__compile__WindowsKit wk = internal__compile__find_windows_kit_root(host_arch);
		if (!wk.ok) {
			string err = wk.v_error;
			int errcode = wk.ecode;
			// last_type: v.ast.Return
			// last_expr_result_type: 
			return v_error(tos3("Unable to find windows sdk"));
		};
		Option_internal__compile__VsInstallation vs = internal__compile__find_vs(vswhere_dir, host_arch);
		if (!vs.ok) {
			string err = vs.v_error;
			int errcode = vs.ecode;
			// last_type: v.ast.Return
			// last_expr_result_type: 
			return v_error(tos3("Unable to find visual studio"));
		};
		return opt_ok(& (internal__compile__MsvcResult []) { (internal__compile__MsvcResult){
			.full_cl_exe_path = os__real_path(string_add(string_add(/*opt*/(*(internal__compile__VsInstallation*)vs.data).exe_path, _const_os__path_separator), tos3("cl.exe"))),
			.exe_path = /*opt*/(*(internal__compile__VsInstallation*)vs.data).exe_path,
			.um_lib_path = /*opt*/(*(internal__compile__WindowsKit*)wk.data).um_lib_path,
			.ucrt_lib_path = /*opt*/(*(internal__compile__WindowsKit*)wk.data).ucrt_lib_path,
			.vs_lib_path = /*opt*/(*(internal__compile__VsInstallation*)vs.data).lib_path,
			.um_include_path = /*opt*/(*(internal__compile__WindowsKit*)wk.data).um_include_path,
			.ucrt_include_path = /*opt*/(*(internal__compile__WindowsKit*)wk.data).ucrt_include_path,
			.vs_include_path = /*opt*/(*(internal__compile__VsInstallation*)vs.data).include_path,
			.shared_include_path = /*opt*/(*(internal__compile__WindowsKit*)wk.data).shared_include_path,
		} }, sizeof(internal__compile__MsvcResult));
	#else
		internal__compile__verror(tos3("Cannot find msvc on this OS"));
		return v_error(tos3("msvc not found"));
	#endif
}

void internal__compile__V_cc_msvc(internal__compile__V* v) { 
	Option_internal__compile__MsvcResult r = internal__compile__find_msvc();
	if (!r.ok) {
		string err = r.v_error;
		int errcode = r.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		if (!v->pref->is_keep_c && string_ne(v->out_name_c, tos3("v.c")) && string_ne(v->out_name_c, tos3("v_macos.c"))) {
			os__rm(v->out_name_c);
		}
		internal__compile__verror(tos3("Cannot find MSVC on this OS"));
		return;
	};
	string out_name_obj = os__real_path(string_add(v->out_name_c, tos3(".obj")));
	array_string a = new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
	tos3("-w"), tos3("/we4013"), tos3("/volatile:ms"), _STR("/Fo\"%.*s\"", out_name_obj.len, out_name_obj.str), 
});
	if (v->pref->is_prod) {
		_PUSH(&a, (tos3("/O2")), tmp3, string);
		_PUSH(&a, (tos3("/MD")), tmp4, string);
		_PUSH(&a, (tos3("/Zi")), tmp5, string);
		_PUSH(&a, (tos3("/DNDEBUG")), tmp6, string);
	} else {
		_PUSH(&a, (tos3("/Zi")), tmp7, string);
		_PUSH(&a, (tos3("/MDd")), tmp8, string);
	}
	if (v->pref->is_so) {
		if (!string_ends_with(v->pref->out_name, tos3(".dll"))) {
			v->pref->out_name = string_add(v->pref->out_name, tos3(".dll"));
		}
		_PUSH(&a, (tos3("/LD")), tmp11, string);
	} else if (!string_ends_with(v->pref->out_name, tos3(".exe"))) {
		v->pref->out_name = string_add(v->pref->out_name, tos3(".exe"));
	}
	v->pref->out_name = os__real_path(v->pref->out_name);
	if (v->pref->build_mode == v__pref__BuildMode_build_module) {
		_PUSH(&a, (tos3("/c")), tmp13, string);
	} else if (v->pref->build_mode == v__pref__BuildMode_default_mode) {
	}
	if (v->pref->sanitize) {
		println(tos3("Sanitize not supported on msvc."));
	}
	_PUSH(&a, (string_add(string_add(tos3("\""), os__real_path(v->out_name_c)), tos3("\""))), tmp15, string);
	array_string real_libs = new_array_from_c_array(3, 3, sizeof(string), (string[3]){	
	tos3("kernel32.lib"), tos3("user32.lib"), tos3("advapi32.lib"), 
});
	internal__compile__MsvcStringFlags sflags = array_internal__compile__CFlag_msvc_string_flags(internal__compile__V_get_os_cflags(v));
	_PUSH_MANY(&real_libs, (sflags.real_libs), tmp16, array_string);
	array_string inc_paths = sflags.inc_paths;
	array_string lib_paths = sflags.lib_paths;
	array_string other_flags = sflags.other_flags;
	_PUSH(&a, (_STR("-I \"%.*s\"", /*opt*/(*(internal__compile__MsvcResult*)r.data).ucrt_include_path.len, /*opt*/(*(internal__compile__MsvcResult*)r.data).ucrt_include_path.str)), tmp17, string);
	_PUSH(&a, (_STR("-I \"%.*s\"", /*opt*/(*(internal__compile__MsvcResult*)r.data).vs_include_path.len, /*opt*/(*(internal__compile__MsvcResult*)r.data).vs_include_path.str)), tmp18, string);
	_PUSH(&a, (_STR("-I \"%.*s\"", /*opt*/(*(internal__compile__MsvcResult*)r.data).um_include_path.len, /*opt*/(*(internal__compile__MsvcResult*)r.data).um_include_path.str)), tmp19, string);
	_PUSH(&a, (_STR("-I \"%.*s\"", /*opt*/(*(internal__compile__MsvcResult*)r.data).shared_include_path.len, /*opt*/(*(internal__compile__MsvcResult*)r.data).shared_include_path.str)), tmp20, string);
	_PUSH_MANY(&a, (inc_paths), tmp21, array_string);
	_PUSH_MANY(&a, (other_flags), tmp22, array_string);
	_PUSH(&a, (array_string_join(real_libs, tos3(" "))), tmp23, string);
	_PUSH(&a, (tos3("/link")), tmp24, string);
	_PUSH(&a, (tos3("/NOLOGO")), tmp25, string);
	_PUSH(&a, (_STR("/OUT:\"%.*s\"", v->pref->out_name.len, v->pref->out_name.str)), tmp26, string);
	_PUSH(&a, (_STR("/LIBPATH:\"%.*s\"", /*opt*/(*(internal__compile__MsvcResult*)r.data).ucrt_lib_path.len, /*opt*/(*(internal__compile__MsvcResult*)r.data).ucrt_lib_path.str)), tmp27, string);
	_PUSH(&a, (_STR("/LIBPATH:\"%.*s\"", /*opt*/(*(internal__compile__MsvcResult*)r.data).um_lib_path.len, /*opt*/(*(internal__compile__MsvcResult*)r.data).um_lib_path.str)), tmp28, string);
	_PUSH(&a, (_STR("/LIBPATH:\"%.*s\"", /*opt*/(*(internal__compile__MsvcResult*)r.data).vs_lib_path.len, /*opt*/(*(internal__compile__MsvcResult*)r.data).vs_lib_path.str)), tmp29, string);
	_PUSH(&a, (tos3("/DEBUG:FULL")), tmp30, string);
	if (v->pref->is_prod) {
		_PUSH(&a, (tos3("/INCREMENTAL:NO")), tmp32, string);
		_PUSH(&a, (tos3("/OPT:REF")), tmp33, string);
		_PUSH(&a, (tos3("/OPT:ICF")), tmp34, string);
	}
	_PUSH_MANY(&a, (lib_paths), tmp35, array_string);
	string args = array_string_join(a, tos3(" "));
	string cmd = _STR("\"%.*s\" %.*s", /*opt*/(*(internal__compile__MsvcResult*)r.data).full_cl_exe_path.len, /*opt*/(*(internal__compile__MsvcResult*)r.data).full_cl_exe_path.str, args.len, args.str);
	if (v__pref__VerboseLevel_is_higher_or_equal(v->pref->verbosity, v__pref__VerboseLevel_level_one)) {
		println(tos3("\n========== cl cmd line:"));
		println(cmd);
		println(tos3("==========\n"));
	}
	Option_os__Result res = os__exec(cmd);
	if (!res.ok) {
		string err = res.v_error;
		int errcode = res.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		println(err);
		internal__compile__verror(tos3("msvc error"));
		return;
	};
	if (/*opt*/(*(os__Result*)res.data).exit_code != 0) {
		internal__compile__verror(/*opt*/(*(os__Result*)res.data).output);
	}
	if (!v->pref->is_keep_c && string_ne(v->out_name_c, tos3("v.c")) && string_ne(v->out_name_c, tos3("v_macos.c"))) {
		os__rm(v->out_name_c);
	}
	os__rm(out_name_obj);
}

void internal__compile__build_thirdparty_obj_file_with_msvc(string path, array_internal__compile__CFlag moduleflags) { 
	Option_internal__compile__MsvcResult msvc = internal__compile__find_msvc();
	if (!msvc.ok) {
		string err = msvc.v_error;
		int errcode = msvc.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		println(tos3("Could not find visual studio"));
		return;
	};
	string obj_path = _STR("%.*sbj", path.len, path.str);
	obj_path = os__real_path(obj_path);
	if (os__exists(obj_path)) {
		println(_STR("%.*s already built.", obj_path.len, obj_path.str));
		return;
	}
	println(_STR("%.*s not found, building it (with msvc)...", obj_path.len, obj_path.str));
	string parent = os__dir(obj_path);
	Option_array_string files = os__ls(parent);
	if (!files.ok) {
		string err = files.v_error;
		int errcode = files.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		v_panic(err);
	};
	string cfiles = tos3("");
	// FOR IN
	for (int tmp2 = 0; tmp2 < /*opt*/(*(array_string*)files.data).
	len; tmp2++) {	string file = ((string*)/*opt*/(*(array_string*)files.data).
	data)[tmp2];if (string_ends_with(file, tos3(".c"))) {
			cfiles = string_add(cfiles, string_add(string_add(tos3("\""), os__real_path(string_add(string_add(parent, _const_os__path_separator), file))), tos3("\" ")));
		}
	}
	string include_string = _STR("-I \"%.*s\" -I \"%.*s\" -I \"%.*s\" -I \"%.*s\"", /*opt*/(*(internal__compile__MsvcResult*)msvc.data).ucrt_include_path.len, /*opt*/(*(internal__compile__MsvcResult*)msvc.data).ucrt_include_path.str, /*opt*/(*(internal__compile__MsvcResult*)msvc.data).vs_include_path.len, /*opt*/(*(internal__compile__MsvcResult*)msvc.data).vs_include_path.str, /*opt*/(*(internal__compile__MsvcResult*)msvc.data).um_include_path.len, /*opt*/(*(internal__compile__MsvcResult*)msvc.data).um_include_path.str, /*opt*/(*(internal__compile__MsvcResult*)msvc.data).shared_include_path.len, /*opt*/(*(internal__compile__MsvcResult*)msvc.data).shared_include_path.str);
	string btarget = array_internal__compile__CFlag_c_options_before_target_msvc(moduleflags);
	string atarget = array_internal__compile__CFlag_c_options_after_target_msvc(moduleflags);
	string cmd = _STR("\"%.*s\" /volatile:ms /Zi /DNDEBUG %.*s /c %.*s %.*s %.*s /Fo\"%.*s\"", /*opt*/(*(internal__compile__MsvcResult*)msvc.data).full_cl_exe_path.len, /*opt*/(*(internal__compile__MsvcResult*)msvc.data).full_cl_exe_path.str, include_string.len, include_string.str, btarget.len, btarget.str, cfiles.len, cfiles.str, atarget.len, atarget.str, obj_path.len, obj_path.str);
	println(_STR("thirdparty cmd line: %.*s", cmd.len, cmd.str));
	Option_os__Result res = os__exec(cmd);
	if (!res.ok) {
		string err = res.v_error;
		int errcode = res.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		println(_STR("msvc: failed thirdparty object build cmd: %.*s", cmd.len, cmd.str));
		internal__compile__verror(err);
		return;
	};
	if (/*opt*/(*(os__Result*)res.data).exit_code != 0) {
		println(_STR("msvc: failed thirdparty object build cmd: %.*s", cmd.len, cmd.str));
		internal__compile__verror(/*opt*/(*(os__Result*)res.data).output);
		return;
	}
	println(/*opt*/(*(os__Result*)res.data).output);
}

internal__compile__MsvcStringFlags array_internal__compile__CFlag_msvc_string_flags(array_internal__compile__CFlag cflags) { 
	array_string real_libs = new_array(0, 0, sizeof(string));
	array_string inc_paths = new_array(0, 0, sizeof(string));
	array_string lib_paths = new_array(0, 0, sizeof(string));
	array_string other_flags = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < cflags.
	len; tmp1++) {	internal__compile__CFlag flag = ((internal__compile__CFlag*)cflags.
	data)[tmp1];if (string_eq(flag.name, tos3("-l"))) {
			if (string_ends_with(flag.value, tos3(".dll"))) {
				internal__compile__verror(_STR("MSVC cannot link against a dll (`#flag -l %.*s`)", flag.value.len, flag.value.str));
			}
			string lib_lib = string_add(flag.value, tos3(".lib"));
			_PUSH(&real_libs, (lib_lib), tmp4, string);
		} else if (string_eq(flag.name, tos3("-I"))) {
			_PUSH(&inc_paths, (internal__compile__CFlag_format(&flag)), tmp5, string);
		} else if (string_eq(flag.name, tos3("-L"))) {
			_PUSH(&lib_paths, (flag.value), tmp6, string);
			_PUSH(&lib_paths, (string_add(string_add(flag.value, _const_os__path_separator), tos3("msvc"))), tmp7, string);
		} else if (string_ends_with(flag.value, tos3(".o"))) {
			_PUSH(&other_flags, (_STR("\"%.*sbj\"", flag.value.len, flag.value.str)), tmp8, string);
		} else {
			_PUSH(&other_flags, (flag.value), tmp9, string);
		}
	}
	array_string lpaths = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp10 = 0; tmp10 < lib_paths.
	len; tmp10++) {	string l = ((string*)lib_paths.
	data)[tmp10];_PUSH(&lpaths, (string_add(string_add(tos3("/LIBPATH:\""), os__real_path(l)), tos3("\""))), tmp11, string);
	}
	return (internal__compile__MsvcStringFlags){
		.real_libs = real_libs,
		.inc_paths = inc_paths,
		.lib_paths = lpaths,
		.other_flags = other_flags,
	};
}

void internal__compile__parse_and_output_new_format(array_string args) { 
	array_internal__compile__Deprecated list = new_array(0, 0, sizeof(internal__compile__Deprecated));
	array_string obsolete = new_array(0, 0, sizeof(string));
	string os = os__cmdline__option(args, tos3("-os"), tos3(""));
	if (string_eq(os, tos3("msvc"))) {
		_PUSH(&list, ((internal__compile__Deprecated){
			.old = tos3("-os msvc"),
			.new = tos3("-cc msvc"),
			.not_exactly = 0,
		}), tmp2, internal__compile__Deprecated);
	}
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-cache"), tos3("-full-rebuild=false"))), tmp3, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("translated"), tos3("-translated"))), tmp4, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-x64"), tos3("-backend x64"))), tmp5, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-v2"), tos3("-backend experimental"))), tmp6, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-keep_c"), tos3("-csource keep"))), tmp7, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-pretty_c"), tos3("-csource prettify"))), tmp8, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-show_c_cmd"), tos3("-v"))), tmp9, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-autofree"), tos3("-manual-free=false"))), tmp10, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-fast"), tos3("-cc tcc"))), tmp11, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-output-cross-platform-c"), tos3("-os cross"))), tmp12, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-m32"), tos3("-arch x86"))), tmp13, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-bare"), tos3("-freestanding"))), tmp14, array_internal__compile__Deprecated);
	_PUSH_MANY(&obsolete, (internal__compile__add_if_found_string(args, tos3("--enable-globals"))), tmp15, array_string);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-prealloc"), tos3("-e prealloc"))), tmp16, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-user_mod_path"), tos3("-path*"))), tmp17, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-vlib-path"), tos3("-path*"))), tmp18, array_internal__compile__Deprecated);
	_PUSH_MANY(&list, (internal__compile__add_if_found_deprecated(args, tos3("-vpath"), tos3("-path*"))), tmp19, array_internal__compile__Deprecated);
	if (list.len == 0 && obsolete.len == 0) {
		return;
	}
	println(tos3("V has encountered deprecated/obsolete options. Please edit your command.\n"));
	if (list.len > 0) {
		println(tos3("Deprecated options that have been replaced:"));
		// FOR IN
		for (int tmp22 = 0; tmp22 < list.
		len; tmp22++) {	internal__compile__Deprecated deprecation = ((internal__compile__Deprecated*)list.
		data)[tmp22];if (deprecation.not_exactly) {
				println(_STR("   `%.*s` has been superseded by `%.*s` (see help for more details)", deprecation.old.len, deprecation.old.str, deprecation.new.len, deprecation.new.str));
			} else {
				println(_STR("   use `%.*s` instead of `%.*s`", deprecation.new.len, deprecation.new.str, deprecation.old.len, deprecation.old.str));
			}
		}
		println(tos3(""));
	}
	if (obsolete.len > 0) {
		println(tos3("Obsolete options that are no longer supported:"));
		// FOR IN
		for (int tmp25 = 0; tmp25 < obsolete.
		len; tmp25++) {	string obsoleted = ((string*)obsolete.
		data)[tmp25];println(_STR("   `%.*s` has been removed", obsoleted.len, obsoleted.str));
		}
		println(tos3(""));
	}
	println(tos3("For more details, please use the command `v help build` for a list of options."));
	v_exit(1);
}

//[inline]
array_internal__compile__Deprecated internal__compile__add_if_found_deprecated(array_string args, string deprecated, string alt) { 
	if (_IN(string, deprecated, args)) {
		internal__compile__Deprecated new = (string_ends_with(alt, tos3("*")) ? (internal__compile__Deprecated){
				.old = deprecated,
				.new = string_substr(alt, 0, alt.len - 1),
				.not_exactly = true,
			} : (internal__compile__Deprecated){
				.old = deprecated,
				.new = alt,
				.not_exactly = false,
			});
		return new_array_from_c_array(1, 1, sizeof(internal__compile__Deprecated), (internal__compile__Deprecated[1]){	
		new, 
});
	}
	return new_array(0, 0, sizeof(internal__compile__Deprecated));
}

//[inline]
array_string internal__compile__add_if_found_string(array_string args, string deprecated) { 
	if (_IN(string, deprecated, args)) {
		return new_array_from_c_array(1, 1, sizeof(string), (string[1]){	
		deprecated, 
});
	}
	return new_array(0, 0, sizeof(string));
}

void internal__help__print_and_exit(string topic) { 
	string vexe = v__pref__vexe_path();
	string vroot = os__dir(vexe);
	for (int tmp1 = 0; tmp1 < topic.len; tmp1++) {
	byte b = topic.str[tmp1];
		if ((b >= 'a' && b <= 'z') || b == '-' || (b >= '0' && b <= '9')) {
			continue;
		}
		println(_const_internal__help__unknown_topic);
		v_exit(1);
	}
	string target_topic = os__join_path(vroot, (varg_string){.len=5,.args={tos3("cmd"), tos3("v"), tos3("internal"), tos3("help"), _STR("%.*s.txt", topic.len, topic.str)}});
	Option_string content = os__read_file(target_topic);
	if (!content.ok) {
		string err = content.v_error;
		int errcode = content.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		println(_const_internal__help__unknown_topic);
		v_exit(1);
	};
	println(/*opt*/(*(string*)content.data));
	v_exit(0);
}

array_string os__cmdline__options(array_string args, string param) { 
	array_string flags = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int i = 0; i < args.
	len; i++) {	string v = ((string*)args.
	data)[i];if (string_eq(v, param)) {
			if (i + 1 < args.len) {
				_PUSH(&flags, ((*(string*)array_get(args, i + 1))), tmp3, string);
			}
		}
	}
	return flags;
}

string os__cmdline__option(array_string args, string param, string def) { 
	bool found = false;
	// FOR IN
	for (int tmp1 = 0; tmp1 < args.
	len; tmp1++) {	string arg = ((string*)args.
	data)[tmp1];if (found) {
			return arg;
		} else if (string_eq(param, arg)) {
			found = true;
		}
	}
	return def;
}

array_string os__cmdline__options_before(array_string args, array_string what) { 
	bool found = false;
	array_string args_before = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < args.
	len; tmp1++) {	string a = ((string*)args.
	data)[tmp1];if (_IN(string, a, what)) {
			found = true;
			break;
		}
		_PUSH(&args_before, (a), tmp3, string);
	}
	return args_before;
}

array_string os__cmdline__options_after(array_string args, array_string what) { 
	bool found = false;
	array_string args_after = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < args.
	len; tmp1++) {	string a = ((string*)args.
	data)[tmp1];if (_IN(string, a, what)) {
			found = true;
			continue;
		}
		if (found) {
			_PUSH(&args_after, (a), tmp4, string);
		}
	}
	return args_after;
}

array_string os__cmdline__only_non_options(array_string args) { 

int tmp1_len = args.len;
	array_string tmp1 = new_array(0, tmp1_len, sizeof(string));
	for (int i = 0; i < tmp1_len; i++) {
	  string it = ((string*) args.data)[i];
	if (!string_starts_with(it, tos3("-"))) array_push(&tmp1, &it); 
 }
		return  tmp1;
}

array_string os__cmdline__only_options(array_string args) { 

int tmp1_len = args.len;
	array_string tmp1 = new_array(0, tmp1_len, sizeof(string));
	for (int i = 0; i < tmp1_len; i++) {
	  string it = ((string*) args.data)[i];
	if (string_starts_with(it, tos3("-"))) array_push(&tmp1, &it); 
 }
		return  tmp1;
}

// TypeDecl
// TypeDecl
bool array_v__table__Type_contains(array_v__table__Type types, v__table__Type typ) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < types.
	len; tmp1++) {	v__table__Type t = ((v__table__Type*)types.
	data)[tmp1];if (((int)(typ)) == ((int)(t))) {
			return true;
		}
	}
	return false;
}

//[inline]
int v__table__type_idx(v__table__Type t) { 
	return (((u16)(t)) & 0xffff);
}

//[inline]
int v__table__type_nr_muls(v__table__Type t) { 
	return ((((int)(t)) >> 16) & 0xff);
}

//[inline]
bool v__table__type_is_ptr(v__table__Type t) { 
	return ((((int)(t)) >> 16) & 0xff) > 0;
}

//[inline]
v__table__Type v__table__type_set_nr_muls(v__table__Type t, int nr_muls) { 
	if (nr_muls < 0 || nr_muls > 255) {
		v_panic(tos3("typ_set_nr_muls: nr_muls must be between 0 & 255"));
	}
	return ((((((((int)(t)) >> 24) & 0xff)) << 24) | (nr_muls << 16)) | ((((u16)(t)) & 0xffff)));
}

//[inline]
v__table__Type v__table__type_to_ptr(v__table__Type t) { 
	int nr_muls = ((((int)(t)) >> 16) & 0xff);
	if (nr_muls == 255) {
		v_panic(tos3("type_to_pre: nr_muls is already at max of 255"));
	}
	return ((((((((int)(t)) >> 24) & 0xff)) << 24) | ((nr_muls + 1) << 16)) | ((((u16)(t)) & 0xffff)));
}

//[inline]
v__table__Type v__table__type_deref(v__table__Type t) { 
	int nr_muls = ((((int)(t)) >> 16) & 0xff);
	if (nr_muls == 0) {
		v_panic(_STR("deref: type `%d` is not a pointer", t));
	}
	return ((((((((int)(t)) >> 24) & 0xff)) << 24) | ((nr_muls - 1) << 16)) | ((((u16)(t)) & 0xffff)));
}

//[inline]
v__table__TypeFlag v__table__type_flag(v__table__Type t) { 
	return ((((int)(t)) >> 24) & 0xff);
}

//[inline]
v__table__Type v__table__type_set(v__table__Type t, v__table__TypeFlag flag) { 
	return (((((int)(flag)) << 24) | ((((((int)(t)) >> 16) & 0xff)) << 16)) | ((((u16)(t)) & 0xffff)));
}

//[inline]
bool v__table__type_is(v__table__Type t, v__table__TypeFlag flag) { 
	return ((((int)(t)) >> 24) & 0xff) == flag;
}

//[inline]
v__table__Type v__table__new_type(int idx) { 
	if (idx < 1 || idx > 65536) {
		v_panic(tos3("new_type_id: idx must be between 1 & 65536"));
	}
	return idx;
}

//[inline]
v__table__Type v__table__new_type_ptr(int idx, int nr_muls) { 
	if (idx < 1 || idx > 65536) {
		v_panic(tos3("new_type_ptr: idx must be between 1 & 65536"));
	}
	if (nr_muls < 0 || nr_muls > 255) {
		v_panic(tos3("new_type_ptr: nr_muls must be between 0 & 255"));
	}
	return ((nr_muls << 16) | ((u16)(idx)));
}

bool v__table__is_number(v__table__Type typ) { 
	return _IN(int, v__table__type_idx(typ), _const_v__table__number_type_idxs);
}

string v__table__TypeSymbol_str(v__table__TypeSymbol* t) { 
	return string_replace(t->name, tos3("array_"), tos3("[]"));
}

//[inline]
v__table__Enum v__table__TypeSymbol_enum_info(v__table__TypeSymbol* t) { 
	if (t->info.typ == 104 /* v.table.Enum */) {
		v__table__Enum* it = (v__table__Enum*)t->info.obj; // ST it
		return *it;
	}
	else {
		v_panic(_STR("TypeSymbol.enum_info(): no enum info for type: %.*s", t->name.len, t->name.str));
	}
	;
}

//[inline]
v__table__MultiReturn v__table__TypeSymbol_mr_info(v__table__TypeSymbol* t) { 
	if (t->info.typ == 102 /* v.table.MultiReturn */) {
		v__table__MultiReturn* it = (v__table__MultiReturn*)t->info.obj; // ST it
		return *it;
	}
	else {
		v_panic(_STR("TypeSymbol.mr_info(): no multi return info for type: %.*s", t->name.len, t->name.str));
	}
	;
}

//[inline]
v__table__Array v__table__TypeSymbol_array_info(v__table__TypeSymbol* t) { 
	if (t->info.typ == 98 /* v.table.Array */) {
		v__table__Array* it = (v__table__Array*)t->info.obj; // ST it
		return *it;
	}
	else {
		v_panic(_STR("TypeSymbol.array_info(): no array info for type: %.*s", t->name.len, t->name.str));
	}
	;
}

//[inline]
v__table__ArrayFixed v__table__TypeSymbol_array_fixed_info(v__table__TypeSymbol* t) { 
	if (t->info.typ == 99 /* v.table.ArrayFixed */) {
		v__table__ArrayFixed* it = (v__table__ArrayFixed*)t->info.obj; // ST it
		return *it;
	}
	else {
		v_panic(_STR("TypeSymbol.array_fixed(): no array fixed info for type: %.*s", t->name.len, t->name.str));
	}
	;
}

//[inline]
v__table__Map v__table__TypeSymbol_map_info(v__table__TypeSymbol* t) { 
	if (t->info.typ == 100 /* v.table.Map */) {
		v__table__Map* it = (v__table__Map*)t->info.obj; // ST it
		return *it;
	}
	else {
		v_panic(_STR("TypeSymbol.map_info(): no map info for type: %.*s", t->name.len, t->name.str));
	}
	;
}

void v__table__Table_register_builtin_type_symbols(v__table__Table* t) { 
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_placeholder,
		.name = tos3("reserved_0"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_void,
		.name = tos3("void"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_voidptr,
		.name = tos3("voidptr"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_byteptr,
		.name = tos3("byteptr"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_charptr,
		.name = tos3("charptr"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_i8,
		.name = tos3("i8"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_i16,
		.name = tos3("i16"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_int,
		.name = tos3("int"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_i64,
		.name = tos3("i64"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_byte,
		.name = tos3("byte"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_u16,
		.name = tos3("u16"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_u32,
		.name = tos3("u32"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_u64,
		.name = tos3("u64"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_f32,
		.name = tos3("f32"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_f64,
		.name = tos3("f64"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_char,
		.name = tos3("char"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_bool,
		.name = tos3("bool"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_none_,
		.name = tos3("none"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_string,
		.name = tos3("string"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_array,
		.name = tos3("array"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_map,
		.name = tos3("map"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_placeholder,
		.name = tos3("size_t"),
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	int map_string_string_idx = v__table__Table_find_or_register_map(t, _const_v__table__string_type, _const_v__table__string_type);
	int map_string_int_idx = v__table__Table_find_or_register_map(t, _const_v__table__string_type, _const_v__table__int_type);
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_alias,
		.name = tos3("map_string"),
		.parent_idx = map_string_string_idx,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_alias,
		.name = tos3("map_int"),
		.parent_idx = map_string_int_idx,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
}

//[inline]
bool v__table__TypeSymbol_is_pointer(v__table__TypeSymbol* t) { 
	return (t->kind == v__table__Kind_byteptr || t->kind == v__table__Kind_charptr || t->kind == v__table__Kind_voidptr);
}

//[inline]
bool v__table__TypeSymbol_is_int(v__table__TypeSymbol* t) { 
	return (t->kind == v__table__Kind_i8 || t->kind == v__table__Kind_i16 || t->kind == v__table__Kind_int || t->kind == v__table__Kind_i64 || t->kind == v__table__Kind_byte || t->kind == v__table__Kind_u16 || t->kind == v__table__Kind_u32 || t->kind == v__table__Kind_u64);
}

//[inline]
bool v__table__TypeSymbol_is_float(v__table__TypeSymbol* t) { 
	return (t->kind == v__table__Kind_f32 || t->kind == v__table__Kind_f64);
}

//[inline]
bool v__table__TypeSymbol_is_number(v__table__TypeSymbol* t) { 
	return v__table__TypeSymbol_is_int(t) || v__table__TypeSymbol_is_float(t);
}

string v__table__Kind_str(v__table__Kind k) { 
	string k_str = (k == v__table__Kind_placeholder) ? tos3("placeholder") : (k == v__table__Kind_void) ? tos3("void") : (k == v__table__Kind_voidptr) ? tos3("voidptr") : (k == v__table__Kind_charptr) ? tos3("charptr") : (k == v__table__Kind_byteptr) ? tos3("byteptr") : (k == v__table__Kind_struct_) ? tos3("struct") : (k == v__table__Kind_int) ? tos3("int") : (k == v__table__Kind_i8) ? tos3("i8") : (k == v__table__Kind_i16) ? tos3("i16") : (k == v__table__Kind_i64) ? tos3("i64") : (k == v__table__Kind_byte) ? tos3("byte") : (k == v__table__Kind_u16) ? tos3("u16") : (k == v__table__Kind_u32) ? tos3("u32") : (k == v__table__Kind_u64) ? tos3("u64") : (k == v__table__Kind_f32) ? tos3("f32") : (k == v__table__Kind_f64) ? tos3("f64") : (k == v__table__Kind_string) ? tos3("string") : (k == v__table__Kind_char) ? tos3("char") : (k == v__table__Kind_bool) ? tos3("bool") : (k == v__table__Kind_none_) ? tos3("none") : (k == v__table__Kind_array) ? tos3("array") : (k == v__table__Kind_array_fixed) ? tos3("array_fixed") : (k == v__table__Kind_map) ? tos3("map") : (k == v__table__Kind_multi_return) ? tos3("multi_return") : (k == v__table__Kind_sum_type) ? tos3("sum_type") : (k == v__table__Kind_alias) ? tos3("alias") : (k == v__table__Kind_enum_) ? tos3("enum") : tos3("unknown");
	return k_str;
}

string array_v__table__Kind_str(array_v__table__Kind kinds) { 
	string kinds_str = tos3("");
	// FOR IN
	for (int i = 0; i < kinds.
	len; i++) {	v__table__Kind k = ((v__table__Kind*)kinds.
	data)[i];kinds_str = string_add(kinds_str, v__table__Kind_str(k));
		if (i < kinds.len - 1) {
			kinds_str = string_add(kinds_str, tos3("_"));
		}
	}
	return kinds_str;
}

string v__table__Table_type_to_str(v__table__Table* table, v__table__Type t) { 
	v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(table, t);
	if (sym->kind == v__table__Kind_multi_return) {
		string res = tos3("(");
		v__table__MultiReturn mr_info = /* as */ *(v__table__MultiReturn*)sym->info.obj;
		// FOR IN
		for (int i = 0; i < mr_info.types.
		len; i++) {	v__table__Type typ = ((v__table__Type*)mr_info.types.
		data)[i];res = string_add(res, v__table__Table_type_to_str(table, typ));
			if (i < mr_info.types.len - 1) {
				res = string_add(res, tos3(", "));
			}
		}
		res = string_add(res, tos3(")"));
		return res;
	}
	string res = sym->name;
	if (sym->kind == v__table__Kind_array) {
		res = string_replace(res, tos3("array_"), tos3("[]"));
	} else if (sym->kind == v__table__Kind_map) {
		res = string_replace(res, tos3("map_string_"), tos3("map[string]"));
	}
	if (string_contains(res, tos3("."))) {
		array_string vals = string_split(res, tos3("."));
		if (vals.len > 2) {
			res = string_add(string_add((*(string*)array_get(vals, vals.len - 2)), tos3(".")), (*(string*)array_get(vals, vals.len - 1)));
		}
		if (sym->kind == v__table__Kind_array) {
			res = string_add(tos3("[]"), res);
		}
	}
	if (v__table__type_is(t, v__table__TypeFlag_optional)) {
		res = string_add(tos3("?"), res);
	}
	int nr_muls = v__table__type_nr_muls(t);
	if (nr_muls > 0) {
		res = string_add(strings__repeat('&', nr_muls), res);
	}
	return res;
}

v__table__Table* v__table__new_table() { 
	v__table__Table* t = (v__table__Table*)memdup(&(v__table__Table){	.types = new_array(0, 1, sizeof(v__table__TypeSymbol)),
		.type_idxs = new_map(1, sizeof(int)),
		.fns = new_map(1, sizeof(v__table__Fn)),
		.imports = new_array(0, 1, sizeof(string)),
		.modules = new_array(0, 1, sizeof(string)),
	}, sizeof(v__table__Table));
	v__table__Table_register_builtin_type_symbols(t);
	return t;
}

string v__table__Fn_signature(v__table__Fn* f) { 
	string sig = tos3("");
	// FOR IN
	for (int i = 0; i < f->args.
	len; i++) {	v__table__Arg arg = ((v__table__Arg*)f->args.
	data)[i];v__table__Type typ = v__table__type_set_nr_muls(arg.typ, 0);
		sig = string_add(sig, _STR("%d", typ));
		if (i < f->args.len - 1) {
			sig = string_add(sig, tos3("_"));
		}
	}
	sig = string_add(sig, _STR("_%d", f->return_type));
	return sig;
}

Option_v__table__Fn v__table__Table_find_fn(v__table__Table* t, string name) { 
	v__table__Fn f = (*(v__table__Fn*)map_get3(t->fns, name, &(v__table__Fn[]){ {0} }));
	if (f.name.str != 0) {
		return opt_ok(& (v__table__Fn []) { f }, sizeof(v__table__Fn));
	}
	return opt_none();
}

void v__table__Table_register_fn(v__table__Table* t, v__table__Fn new_fn) { 
	map_set(&t->fns, new_fn.name, &(v__table__Fn[]) { new_fn });
}

void v__table__TypeSymbol_register_method(v__table__TypeSymbol* t, v__table__Fn new_fn) { 
	_PUSH(&t->methods, (new_fn), tmp1, v__table__Fn);
}

bool v__table__TypeSymbol_has_method(v__table__TypeSymbol* t, string name) { 
	Option_v__table__Fn tmp1 = v__table__TypeSymbol_find_method(t, name);
	if (!tmp1.ok) {
		string err = tmp1.v_error;
		int errcode = tmp1.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return false;
	};
	return true;
}

Option_v__table__Fn v__table__TypeSymbol_find_method(v__table__TypeSymbol* t, string name) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < t->methods.
	len; tmp1++) {	v__table__Fn method = ((v__table__Fn*)t->methods.
	data)[tmp1];if (string_eq(method.name, name)) {
			return opt_ok(& (v__table__Fn []) { method }, sizeof(v__table__Fn));
		}
	}
	return opt_none();
}

bool v__table__TypeSymbol_has_field(v__table__TypeSymbol* s, string name) { 
	Option_v__table__Field tmp1 = v__table__TypeSymbol_find_field(s, name);
	if (!tmp1.ok) {
		string err = tmp1.v_error;
		int errcode = tmp1.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return false;
	};
	return true;
}

Option_v__table__Field v__table__TypeSymbol_find_field(v__table__TypeSymbol* s, string name) { 
	if (s->info.typ == 101 /* v.table.Struct */) {
		v__table__Struct* it = (v__table__Struct*)s->info.obj; // ST it
		// FOR IN
		for (int tmp2 = 0; tmp2 < it->fields.
		len; tmp2++) {	v__table__Field field = ((v__table__Field*)it->fields.
		data)[tmp2];if (string_eq(field.name, name)) {
				return opt_ok(& (v__table__Field []) { field }, sizeof(v__table__Field));
			}
		}
	}
	else {
	}
	;
	return opt_none();
}

bool v__table__Table_type_has_method(v__table__Table* t, v__table__TypeSymbol* s, string name) { 
	bool tmp1;
	{ /* if guard */ Option_v__table__Fn _ = v__table__Table_type_find_method(t, s, name);
	if ((tmp1 = _.ok)) {
		return true;
	}}
	return false;
}

Option_v__table__Fn v__table__Table_type_find_method(v__table__Table* t, v__table__TypeSymbol* s, string name) { 
	v__table__TypeSymbol* ts = s;
	while (1) {
		bool tmp1;
		{ /* if guard */ Option_v__table__Fn method = v__table__TypeSymbol_find_method(ts, name);
		if ((tmp1 = method.ok)) {
			return opt_ok(& (v__table__Fn []) { /*opt*/(*(v__table__Fn*)method.data) }, sizeof(v__table__Fn));
		}}
		if (ts->parent_idx == 0) {
			break;
		}
		ts = &(*(v__table__TypeSymbol*)array_get(t->types, ts->parent_idx));
	}
	return opt_none();
}

bool v__table__Table_struct_has_field(v__table__Table* t, v__table__TypeSymbol* s, string name) { 
	bool tmp1;
	{ /* if guard */ Option_v__table__Field _ = v__table__Table_struct_find_field(t, s, name);
	if ((tmp1 = _.ok)) {
		return true;
	}}
	return false;
}

Option_v__table__Field v__table__Table_struct_find_field(v__table__Table* t, v__table__TypeSymbol* s, string name) { 
	v__table__TypeSymbol* ts = s;
	while (1) {
		bool tmp1;
		{ /* if guard */ Option_v__table__Field field = v__table__TypeSymbol_find_field(ts, name);
		if ((tmp1 = field.ok)) {
			return opt_ok(& (v__table__Field []) { /*opt*/(*(v__table__Field*)field.data) }, sizeof(v__table__Field));
		}}
		if (ts->parent_idx == 0) {
			break;
		}
		ts = &(*(v__table__TypeSymbol*)array_get(t->types, ts->parent_idx));
	}
	return opt_none();
}

//[inline]
int v__table__Table_find_type_idx(v__table__Table* t, string name) { 
	return (*(int*)map_get3(t->type_idxs, name, &(int[]){ 0 }));
}

//[inline]
Option_v__table__TypeSymbol v__table__Table_find_type(v__table__Table* t, string name) { 
	int idx = (*(int*)map_get3(t->type_idxs, name, &(int[]){ 0 }));
	if (idx > 0) {
		return opt_ok(& (v__table__TypeSymbol []) { (*(v__table__TypeSymbol*)array_get(t->types, idx)) }, sizeof(v__table__TypeSymbol));
	}
	return opt_none();
}

//[inline]
v__table__TypeSymbol* v__table__Table_get_type_symbol(v__table__Table* t, v__table__Type typ) { 
	int idx = v__table__type_idx(typ);
	if (idx > 0) {
		return &(*(v__table__TypeSymbol*)array_get(t->types, idx));
	}
	v_panic(_STR("get_type_symbol: invalid type (typ=%d idx=%d). This should never happen", typ, idx));
}

//[inline]
int v__table__Table_register_builtin_type_symbol(v__table__Table* t, v__table__TypeSymbol typ) { 
	int existing_idx = (*(int*)map_get3(t->type_idxs, typ.name, &(int[]){ 0 }));
	if (existing_idx > 0) {
		if (existing_idx >= _const_v__table__string_type_idx) {
			if (existing_idx == _const_v__table__string_type_idx) {
				v__table__TypeSymbol existing_type = (*(v__table__TypeSymbol*)array_get(t->types, existing_idx));
				(*(v__table__TypeSymbol*)array_get(t->types, existing_idx)) = // assoc
				(v__table__TypeSymbol){
					.kind = existing_type.kind, 
					.parent_idx = typ.parent_idx,
					.info = typ.info,
					.name = typ.name,
					.methods = typ.methods,
				};
			} else {
				(*(v__table__TypeSymbol*)array_get(t->types, existing_idx)) = typ;
			}
		}
		return existing_idx;
	}
	return v__table__Table_register_type_symbol(t, typ);
}

//[inline]
int v__table__Table_register_type_symbol(v__table__Table* t, v__table__TypeSymbol typ) { 
	int existing_idx = (*(int*)map_get3(t->type_idxs, typ.name, &(int[]){ 0 }));
	if (existing_idx > 0) {
		v__table__TypeSymbol ex_type = (*(v__table__TypeSymbol*)array_get(t->types, existing_idx));
		if (ex_type.kind == v__table__Kind_placeholder) {
			(*(v__table__TypeSymbol*)array_get(t->types, existing_idx)) = // assoc
			(v__table__TypeSymbol){
				.methods = ex_type.methods, 
				.parent_idx = typ.parent_idx,
				.info = typ.info,
				.kind = typ.kind,
				.name = typ.name,
			};
			return existing_idx;
		}
		else {
			if (ex_type.kind == typ.kind) {
				return existing_idx;
			}
			return -1;
		}
		;
	}
	int typ_idx = t->types.len;
	_PUSH(&t->types, (typ), tmp4, v__table__TypeSymbol);
	map_set(&t->type_idxs, typ.name, &(int[]) { typ_idx });
	return typ_idx;
}

bool v__table__Table_known_type(v__table__Table* t, string name) { 
	Option_v__table__TypeSymbol tmp1 =v__table__Table_find_type(t, name);
	if (!tmp1.ok) {
		string err = tmp1.v_error;
		int errcode = tmp1.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return false;
	};
	return true;
}

//[inline]
string v__table__Table_array_name(v__table__Table* t, v__table__Type elem_type, int nr_dims) { 
	v__table__TypeSymbol* elem_type_sym = v__table__Table_get_type_symbol(t, elem_type);
	return string_add(string_add(_STR("array_%.*s", elem_type_sym->name.len, elem_type_sym->name.str), (v__table__type_is_ptr(elem_type) ? tos3("_ptr") : tos3(""))), (nr_dims > 1 ? _STR("_%dd", nr_dims) : tos3("")));
}

//[inline]
string v__table__Table_array_fixed_name(v__table__Table* t, v__table__Type elem_type, int size, int nr_dims) { 
	v__table__TypeSymbol* elem_type_sym = v__table__Table_get_type_symbol(t, elem_type);
	return string_add(string_add(_STR("array_fixed_%.*s_%d", elem_type_sym->name.len, elem_type_sym->name.str, size), (v__table__type_is_ptr(elem_type) ? tos3("_ptr") : tos3(""))), (nr_dims > 1 ? _STR("_%dd", nr_dims) : tos3("")));
}

//[inline]
string v__table__Table_map_name(v__table__Table* t, v__table__Type key_type, v__table__Type value_type) { 
	v__table__TypeSymbol* key_type_sym = v__table__Table_get_type_symbol(t, key_type);
	v__table__TypeSymbol* value_type_sym = v__table__Table_get_type_symbol(t, value_type);
	string suffix = (v__table__type_is_ptr(value_type) ? tos3("_ptr") : tos3(""));
	return string_add(_STR("map_%.*s_%.*s", key_type_sym->name.len, key_type_sym->name.str, value_type_sym->name.len, value_type_sym->name.str), suffix);
}

int v__table__Table_find_or_register_map(v__table__Table* t, v__table__Type key_type, v__table__Type value_type) { 
	string name = v__table__Table_map_name(t, key_type, value_type);
	int existing_idx = (*(int*)map_get3(t->type_idxs, name, &(int[]){ 0 }));
	if (existing_idx > 0) {
		return existing_idx;
	}
	v__table__TypeSymbol map_typ = (v__table__TypeSymbol){
		.parent_idx = _const_v__table__map_type_idx,
		.kind = v__table__Kind_map,
		.name = name,
		.info = /* sum type cast */ (v__table__TypeInfo) {.obj = memdup(&(v__table__Map[]) {(v__table__Map){
		.key_type = key_type,
		.value_type = value_type,
	}}, sizeof(v__table__Map)), .typ = 100 /* v.table.Map */},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	};
	return v__table__Table_register_type_symbol(t, map_typ);
}

int v__table__Table_find_or_register_array(v__table__Table* t, v__table__Type elem_type, int nr_dims) { 
	string name = v__table__Table_array_name(t, elem_type, nr_dims);
	int existing_idx = (*(int*)map_get3(t->type_idxs, name, &(int[]){ 0 }));
	if (existing_idx > 0) {
		return existing_idx;
	}
	v__table__TypeSymbol array_type = (v__table__TypeSymbol){
		.parent_idx = _const_v__table__array_type_idx,
		.kind = v__table__Kind_array,
		.name = name,
		.info = /* sum type cast */ (v__table__TypeInfo) {.obj = memdup(&(v__table__Array[]) {(v__table__Array){
		.elem_type = elem_type,
		.nr_dims = nr_dims,
	}}, sizeof(v__table__Array)), .typ = 98 /* v.table.Array */},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	};
	return v__table__Table_register_type_symbol(t, array_type);
}

int v__table__Table_find_or_register_array_fixed(v__table__Table* t, v__table__Type elem_type, int size, int nr_dims) { 
	string name = v__table__Table_array_fixed_name(t, elem_type, size, nr_dims);
	int existing_idx = (*(int*)map_get3(t->type_idxs, name, &(int[]){ 0 }));
	if (existing_idx > 0) {
		return existing_idx;
	}
	v__table__TypeSymbol array_fixed_type = (v__table__TypeSymbol){
		.kind = v__table__Kind_array_fixed,
		.name = name,
		.info = /* sum type cast */ (v__table__TypeInfo) {.obj = memdup(&(v__table__ArrayFixed[]) {(v__table__ArrayFixed){
		.elem_type = elem_type,
		.size = size,
		.nr_dims = nr_dims,
	}}, sizeof(v__table__ArrayFixed)), .typ = 99 /* v.table.ArrayFixed */},
		.parent_idx = 0,
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	};
	return v__table__Table_register_type_symbol(t, array_fixed_type);
}

int v__table__Table_find_or_register_multi_return(v__table__Table* t, array_v__table__Type mr_typs) { 
	string name = tos3("multi_return");
	// FOR IN
	for (int tmp1 = 0; tmp1 < mr_typs.
	len; tmp1++) {	v__table__Type mr_typ = ((v__table__Type*)mr_typs.
	data)[tmp1];v__table__TypeSymbol* mr_type_sym = v__table__Table_get_type_symbol(t, mr_typ);
		name = string_add(name, _STR("_%.*s", mr_type_sym->name.len, mr_type_sym->name.str));
	}
	int existing_idx = (*(int*)map_get3(t->type_idxs, name, &(int[]){ 0 }));
	if (existing_idx > 0) {
		return existing_idx;
	}
	v__table__TypeSymbol mr_type = (v__table__TypeSymbol){
		.kind = v__table__Kind_multi_return,
		.name = name,
		.info = /* sum type cast */ (v__table__TypeInfo) {.obj = memdup(&(v__table__MultiReturn[]) {(v__table__MultiReturn){
		.types = mr_typs,
		.name = tos3(""),
	}}, sizeof(v__table__MultiReturn)), .typ = 102 /* v.table.MultiReturn */},
		.parent_idx = 0,
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	};
	return v__table__Table_register_type_symbol(t, mr_type);
}

int v__table__Table_find_or_register_fn_type(v__table__Table* t, v__table__Fn f, bool has_decl) { 
	bool is_anon = f.name.len == 0;
	string name = (is_anon ? _STR("anon_fn_%.*s", v__table__Fn_signature(&f).len, v__table__Fn_signature(&f).str) : f.name);
	return v__table__Table_register_type_symbol(t, (v__table__TypeSymbol){
		.kind = v__table__Kind_function,
		.name = name,
		.info = /* sum type cast */ (v__table__TypeInfo) {.obj = memdup(&(v__table__FnType[]) {(v__table__FnType){
		.is_anon = is_anon,
		.has_decl = has_decl,
		.func = f,
	}}, sizeof(v__table__FnType)), .typ = 106 /* v.table.FnType */},
		.parent_idx = 0,
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
}

int v__table__Table_add_placeholder_type(v__table__Table* t, string name) { 
	v__table__TypeSymbol ph_type = (v__table__TypeSymbol){
		.kind = v__table__Kind_placeholder,
		.name = name,
		.parent_idx = 0,
		.info = {0},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	};
	return v__table__Table_register_type_symbol(t, ph_type);
}

//[inline]
v__table__Type v__table__Table_value_type(v__table__Table* t, v__table__Type typ) { 
	v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(t, typ);
	if (v__table__type_is(typ, v__table__TypeFlag_variadic)) {
		return v__table__type_set(typ, v__table__TypeFlag_unset);
	} else if (typ_sym->kind == v__table__Kind_array) {
		v__table__Array info = /* as */ *(v__table__Array*)typ_sym->info.obj;
		return info.elem_type;
	} else if (typ_sym->kind == v__table__Kind_array_fixed) {
		v__table__ArrayFixed info = /* as */ *(v__table__ArrayFixed*)typ_sym->info.obj;
		return info.elem_type;
	} else if (typ_sym->kind == v__table__Kind_map) {
		v__table__Map info = /* as */ *(v__table__Map*)typ_sym->info.obj;
		return info.value_type;
	} else if ((typ_sym->kind == v__table__Kind_byteptr || typ_sym->kind == v__table__Kind_string)) {
		return _const_v__table__byte_type;
	} else if (v__table__type_is_ptr(typ)) {
		return v__table__type_deref(typ);
	} else {
		if (string_eq(typ_sym->name, tos3("map_string"))) {
			return _const_v__table__string_type;
		}
		return _const_v__table__void_type;
	}
}

bool v__table__Table_check(v__table__Table* t, v__table__Type got, v__table__Type expected) { 
	int got_idx = v__table__type_idx(got);
	int exp_idx = v__table__type_idx(expected);
	bool exp_is_ptr = v__table__type_is_ptr(expected);
	if (got_idx == _const_v__table__none_type_idx) {
		return true;
	}
	if (exp_is_ptr && got_idx == _const_v__table__int_type_idx) {
		return true;
	}
	if (exp_idx == _const_v__table__voidptr_type_idx || got_idx == _const_v__table__voidptr_type_idx) {
		return true;
	}
	if ((_IN(int, exp_idx, _const_v__table__pointer_type_idxs) || _IN(int, exp_idx, _const_v__table__number_type_idxs)) && (_IN(int, got_idx, _const_v__table__pointer_type_idxs) || _IN(int, got_idx, _const_v__table__number_type_idxs))) {
		return true;
	}
	if ((got_idx == _const_v__table__byte_type_idx && exp_idx == _const_v__table__byteptr_type_idx) || (exp_idx == _const_v__table__byte_type_idx && got_idx == _const_v__table__byteptr_type_idx)) {
		return true;
	}
	if ((got_idx == _const_v__table__char_type_idx && exp_idx == _const_v__table__charptr_type_idx) || (exp_idx == _const_v__table__char_type_idx && got_idx == _const_v__table__charptr_type_idx)) {
		return true;
	}
	v__table__TypeSymbol* got_type_sym = v__table__Table_get_type_symbol(t, got);
	v__table__TypeSymbol* exp_type_sym = v__table__Table_get_type_symbol(t, expected);
	if ((v__table__TypeSymbol_is_int(got_type_sym) && exp_type_sym->kind == v__table__Kind_enum_) || (v__table__TypeSymbol_is_int(exp_type_sym) && got_type_sym->kind == v__table__Kind_enum_)) {
		return true;
	}
	if (got_type_sym->kind == v__table__Kind_array_fixed && exp_type_sym->kind == v__table__Kind_byteptr) {
		v__table__ArrayFixed info = /* as */ *(v__table__ArrayFixed*)got_type_sym->info.obj;
		if (v__table__type_idx(info.elem_type) == _const_v__table__byte_type_idx) {
			return true;
		}
	}
	if (string_eq(exp_type_sym->name, tos3("array")) || string_eq(got_type_sym->name, tos3("array"))) {
		return true;
	}
	if (got_type_sym->kind == v__table__Kind_array && string_eq(got_type_sym->name, tos3("array_void")) && exp_type_sym->kind == v__table__Kind_array) {
		return true;
	}
	if ((got_type_sym->kind == v__table__Kind_alias && got_type_sym->parent_idx == exp_idx) || (exp_type_sym->kind == v__table__Kind_alias && exp_type_sym->parent_idx == got_idx)) {
		return true;
	}
	if (got_type_sym->kind == v__table__Kind_sum_type) {
		v__table__SumType sum_info = /* as */ *(v__table__SumType*)got_type_sym->info.obj;
		if (_IN(v__table__Type, expected, sum_info.variants)) {
			return true;
		}
	}
	if (exp_type_sym->kind == v__table__Kind_sum_type) {
		v__table__SumType sum_info = /* as */ *(v__table__SumType*)exp_type_sym->info.obj;
		if (_IN(v__table__Type, got, sum_info.variants)) {
			return true;
		}
	}
	if (got_type_sym->kind == v__table__Kind_function && exp_type_sym->kind == v__table__Kind_function) {
		v__table__FnType got_info = /* as */ *(v__table__FnType*)got_type_sym->info.obj;
		v__table__FnType exp_info = /* as */ *(v__table__FnType*)exp_type_sym->info.obj;
		if (string_eq(v__table__Fn_signature(&got_info.func), v__table__Fn_signature(&exp_info.func))) {
			return true;
		}
	}
	if (got_idx != exp_idx) {
		return false;
	}
	return true;
}

string v__table__Table_qualify_module(v__table__Table* table, string mod, string file_path) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < table->imports.
	len; tmp1++) {	string m = ((string*)table->imports.
	data)[tmp1];if (string_contains(m, tos3(".")) && string_contains(m, mod)) {
			array_string m_parts = string_split(m, tos3("."));
			string m_path = array_string_join(m_parts, _const_os__path_separator);
			if (string_eq(mod, (*(string*)array_get(m_parts, m_parts.len - 1))) && string_contains(file_path, m_path)) {
				return m;
			}
		}
	}
	return mod;
}

// TypeDecl
string v__doc__doc(string mod, v__table__Table* table) { 
	v__doc__Doc d = (v__doc__Doc){
		.out = strings__new_builder(1000),
		.table = table,
		.mod = mod,
		.stmts = new_array(0, 1, sizeof(v__ast__Stmt)),
	};
	string vlib_path = string_add(os__dir(v__pref__vexe_path()), tos3("/vlib"));
	string mod_path = string_replace(mod, tos3("."), _const_os__path_separator);
	string path = os__join_path(vlib_path, (varg_string){.len=1,.args={mod_path}});
	if (!os__exists(path)) {
		println(_STR("module \"%.*s\" not found", mod.len, mod.str));
		println(path);
		return tos3("");
	}
	Option_array_string files = os__ls(path);
	if (!files.ok) {
		string err = files.v_error;
		int errcode = files.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		v_panic(err);
	};
	// FOR IN
	for (int tmp2 = 0; tmp2 < /*opt*/(*(array_string*)files.data).
	len; tmp2++) {	string file = ((string*)/*opt*/(*(array_string*)files.data).
	data)[tmp2];if (!string_ends_with(file, tos3(".v"))) {
			continue;
		}
		if (string_ends_with(file, tos3("_test.v")) || string_ends_with(file, tos3("_windows.v")) || string_ends_with(file, tos3("_macos.v"))) {
			continue;
		}
		v__ast__File file_ast = v__parser__parse_file(os__join_path(path, (varg_string){.len=1,.args={file}}), table, v__scanner__CommentsMode_skip_comments, (v__pref__Preferences*)memdup(&(v__pref__Preferences){	.os = {0},
			.backend = {0},
			.build_mode = {0},
			.verbosity = {0},
			.is_verbose = 0,
			.is_test = 0,
			.is_script = 0,
			.is_live = 0,
			.is_solive = 0,
			.is_so = 0,
			.is_prof = 0,
			.translated = 0,
			.is_prod = 0,
			.obfuscate = 0,
			.is_repl = 0,
			.is_run = 0,
			.sanitize = 0,
			.is_debug = 0,
			.is_vlines = 0,
			.is_keep_c = 0,
			.is_pretty_c = 0,
			.is_cache = 0,
			.is_stats = 0,
			.no_auto_free = 0,
			.cflags = tos3(""),
			.ccompiler = tos3(""),
			.third_party_option = tos3(""),
			.building_v = 0,
			.autofree = 0,
			.compress = 0,
			.fast = 0,
			.enable_globals = 0,
			.is_bare = 0,
			.lookup_path = new_array(0, 1, sizeof(string)),
			.output_cross_c = 0,
			.prealloc = 0,
			.vroot = tos3(""),
			.out_name = tos3(""),
			.path = tos3(""),
			.compile_defines = new_array(0, 1, sizeof(string)),
			.compile_defines_all = new_array(0, 1, sizeof(string)),
			.mod = tos3(""),
		}, sizeof(v__pref__Preferences)), (v__ast__Scope*)memdup(&(v__ast__Scope){	.parent = 0,
			.children = new_array(0, 1, sizeof(v__ast__Scope)),
			.start_pos = 0,
			.end_pos = 0,
			.objects = new_map(1, sizeof(v__ast__ScopeObject)),
		}, sizeof(v__ast__Scope)));
		_PUSH_MANY(&d.stmts, (file_ast.stmts), tmp5, array_v__ast__Stmt);
	}
	if (d.stmts.len == 0) {
		println(tos3("nothing here"));
		v_exit(1);
	}
	v__doc__Doc_print_structs(&d);
	v__doc__Doc_print_enums(&d);
	v__doc__Doc_print_fns(&d);
	strings__Builder_writeln(&d.out, tos3(""));
	v__doc__Doc_print_methods(&d);
	return string_trim_space(strings__Builder_str(&d.out));
}

string v__doc__Doc_get_fn_node(v__doc__Doc* d, v__ast__FnDecl f) { 
	return string_replace_each(v__ast__FnDecl_str(&f, d->table), new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
	string_add(d->mod, tos3(".")), tos3(""), tos3("pub "), tos3(""), 
}));
}

void v__doc__Doc_print_fns(v__doc__Doc* d) { 
	array_string fn_signatures = v__doc__Doc_get_fn_signatures(/*rec*/*d, v__doc__is_pub_function);
	v__doc__Doc_write_fn_signatures(d, fn_signatures);
}

void v__doc__Doc_print_methods(v__doc__Doc* d) { 
	array_string fn_signatures = v__doc__Doc_get_fn_signatures(/*rec*/*d, v__doc__is_pub_method);
	v__doc__Doc_write_fn_signatures(d, fn_signatures);
}

//[inline]
void v__doc__Doc_write_fn_signatures(v__doc__Doc* d, array_string fn_signatures) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < fn_signatures.
	len; tmp1++) {	string s = ((string*)fn_signatures.
	data)[tmp1];strings__Builder_writeln(&d->out, s);
	}
}

array_string v__doc__Doc_get_fn_signatures(v__doc__Doc d, v__doc__FilterFn filter_fn) { 
	array_string fn_signatures = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < d.stmts.
	len; tmp1++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)d.stmts.
	data)[tmp1];if (stmt.typ == 126 /* v.ast.FnDecl */) {
			v__ast__FnDecl* it = (v__ast__FnDecl*)stmt.obj; // ST it
			if (filter_fn(*/*d*/it)) {
				_PUSH(&fn_signatures, (v__doc__Doc_get_fn_node(&d, */*d*/it)), tmp4, string);
			}
		}
		else {
		}
		;
	}
	array_string_sort(&fn_signatures);
	return fn_signatures;
}

bool v__doc__is_pub_method(v__ast__FnDecl node) { 
	return node.is_pub && node.is_method && !node.is_deprecated;
}

bool v__doc__is_pub_function(v__ast__FnDecl node) { 
	return node.is_pub && !node.is_method && !node.is_deprecated;
}

void v__doc__Doc_print_enums(v__doc__Doc* d) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < d->table->types.
	len; tmp1++) {	v__table__TypeSymbol typ = ((v__table__TypeSymbol*)d->table->types.
	data)[tmp1];if (typ.kind != v__table__Kind_enum_) {
			continue;
		}
		strings__Builder_writeln(&d->out, _STR("enum %.*s {", typ.name.len, typ.name.str));
		v__table__Enum info = /* as */ *(v__table__Enum*)typ.info.obj;
		// FOR IN
		for (int tmp3 = 0; tmp3 < info.vals.
		len; tmp3++) {	string val = ((string*)info.vals.
		data)[tmp3];strings__Builder_writeln(&d->out, _STR("\t%.*s", val.len, val.str));
		}
		strings__Builder_writeln(&d->out, tos3("}"));
	}
}

void v__doc__Doc_print_structs(v__doc__Doc* d) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < d->table->types.
	len; tmp1++) {	v__table__TypeSymbol typ = ((v__table__TypeSymbol*)d->table->types.
	data)[tmp1];if (typ.kind != v__table__Kind_struct_ || !string_starts_with(typ.name, string_add(d->mod, tos3(".")))) {
			continue;
		}
		string name = string_after(typ.name, tos3("."));
		strings__Builder_writeln(&d->out, _STR("struct %.*s {", name.len, name.str));
		v__table__Struct info = /* as */ *(v__table__Struct*)typ.info.obj;
		// FOR IN
		for (int tmp3 = 0; tmp3 < info.fields.
		len; tmp3++) {	v__table__Field field = ((v__table__Field*)info.fields.
		data)[tmp3];v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(d->table, field.typ);
			strings__Builder_writeln(&d->out, _STR("\t%.*s %.*s", field.name.len, field.name.str, sym->name.len, sym->name.str));
		}
		strings__Builder_writeln(&d->out, tos3("}\n"));
	}
}

string v__pref__mpath() { 
	return string_add(os__home_dir(), tos3(".vmodules"));
}

v__pref__Preferences v__pref__new_preferences() { 
	v__pref__Preferences p = (v__pref__Preferences){
		.os = {0},
		.backend = {0},
		.build_mode = {0},
		.verbosity = {0},
		.is_verbose = 0,
		.is_test = 0,
		.is_script = 0,
		.is_live = 0,
		.is_solive = 0,
		.is_so = 0,
		.is_prof = 0,
		.translated = 0,
		.is_prod = 0,
		.obfuscate = 0,
		.is_repl = 0,
		.is_run = 0,
		.sanitize = 0,
		.is_debug = 0,
		.is_vlines = 0,
		.is_keep_c = 0,
		.is_pretty_c = 0,
		.is_cache = 0,
		.is_stats = 0,
		.no_auto_free = 0,
		.cflags = tos3(""),
		.ccompiler = tos3(""),
		.third_party_option = tos3(""),
		.building_v = 0,
		.autofree = 0,
		.compress = 0,
		.fast = 0,
		.enable_globals = 0,
		.is_bare = 0,
		.lookup_path = new_array(0, 1, sizeof(string)),
		.output_cross_c = 0,
		.prealloc = 0,
		.vroot = tos3(""),
		.out_name = tos3(""),
		.path = tos3(""),
		.compile_defines = new_array(0, 1, sizeof(string)),
		.compile_defines_all = new_array(0, 1, sizeof(string)),
		.mod = tos3(""),
	};
	v__pref__Preferences_fill_with_defaults(&p);
	return p;
}

void v__pref__Preferences_fill_with_defaults(v__pref__Preferences* p) { 
	if (string_eq(p->vroot, tos3(""))) {
		p->vroot = os__dir(v__pref__vexe_path());
	}
	string vlib_path = os__join_path(p->vroot, (varg_string){.len=1,.args={tos3("vlib")}});
	if (p->lookup_path.len == 0) {
		p->lookup_path = new_array_from_c_array(2, 2, sizeof(string), (string[2]){	
		tos3("@vlib"), tos3("@vmodules"), 
});
	}
	// FOR IN
	for (int i = 0; i < p->lookup_path.
	len; i++) {	string path = ((string*)p->lookup_path.
	data)[i];(*(string*)array_get(p->lookup_path, i)) = string_replace(string_replace(path, tos3("@vlib"), vlib_path), tos3("@vmodules"), _const_v__pref__default_module_path);
	}
	string rpath = os__real_path(p->path);
	if (string_eq(p->out_name, tos3(""))) {
		string filename = string_trim_space(os__file_name(rpath));
		string base = string_all_before_last(filename, tos3("."));
		if (string_eq(base, tos3(""))) {
			base = filename;
		}
		string target_dir = (os__is_dir(rpath) ? rpath : os__dir(rpath));
		p->out_name = os__join_path(target_dir, (varg_string){.len=1,.args={base}});
		if (string_eq(rpath, _STR("%.*s/cmd/v", p->vroot.len, p->vroot.str)) && os__is_dir(tos3("vlib/compiler"))) {
			println(tos3("Saving the resulting V executable in `./v2`"));
			println(string_add(tos3("Use `v -o v cmd/v` if you want to replace current "), tos3("V executable.")));
			p->out_name = tos3("v2");
		}
	}
	string rpath_name = os__file_name(rpath);
	p->building_v = !p->is_repl && (string_eq(rpath_name, tos3("v")) || string_eq(rpath_name, tos3("vfmt.v")));
	if (p->os == v__pref__OS__auto) {
		p->os = v__pref__get_host_os();
	}
	if (string_eq(p->ccompiler, tos3(""))) {
		p->ccompiler = v__pref__default_c_compiler();
	}
	p->is_test = string_ends_with(p->path, tos3("_test.v"));
	p->is_script = string_ends_with(p->path, tos3(".v")) || string_ends_with(p->path, tos3(".vsh"));
	if (string_eq(p->third_party_option, tos3(""))) {
		p->third_party_option = p->cflags;
		
#ifndef _WIN32
		// #if not windows
			if (!string_contains(p->third_party_option, tos3("-fPIC"))) {
				p->third_party_option = string_add(p->third_party_option, tos3(" -fPIC"));
			}
		#endif
	}
	p->enable_globals = true;
}

string v__pref__default_c_compiler() { 
	
#ifdef _WIN32
	// #if windows
		return tos3("gcc");
	#endif
	return tos3("cc");
}

string v__pref__vexe_path() { 
	string vexe = os__getenv(tos3("VEXE"));
	if (string_ne(vexe, tos3(""))) {
		return vexe;
	}
	string real_vexe_path = os__real_path(os__executable());
	os__setenv(tos3("VEXE"), real_vexe_path, true);
	return real_vexe_path;
}

Option_v__pref__OS v__pref__os_from_string(string os_str) { 
	if (string_eq(os_str, tos3("linux"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_linux }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("windows"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_windows }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("mac"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_mac }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("macos"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_mac }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("freebsd"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_freebsd }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("openbsd"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_openbsd }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("netbsd"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_netbsd }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("dragonfly"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_dragonfly }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("js"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_js }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("solaris"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_solaris }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("android"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_android }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("haiku"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_haiku }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3("linux_or_macos"))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS_linux }, sizeof(v__pref__OS));
	}
	else if (string_eq(os_str, tos3(""))) {
		return opt_ok(& (v__pref__OS []) { v__pref__OS__auto }, sizeof(v__pref__OS));
	}
	else {
		return v_error(_STR("bad OS %.*s", os_str.len, os_str.str));
	}
	;
}

string v__pref__OS_str(v__pref__OS o) { 
	if (o == v__pref__OS__auto) {
		return tos3("RESERVED: AUTO");
	}
	else if (o == v__pref__OS_mac) {
		return tos3("MacOS");
	}
	else if (o == v__pref__OS_linux) {
		return tos3("Linux");
	}
	else if (o == v__pref__OS_windows) {
		return tos3("Windows");
	}
	else if (o == v__pref__OS_freebsd) {
		return tos3("FreeBSD");
	}
	else if (o == v__pref__OS_openbsd) {
		return tos3("OpenBSD");
	}
	else if (o == v__pref__OS_netbsd) {
		return tos3("NetBSD");
	}
	else if (o == v__pref__OS_dragonfly) {
		return tos3("Dragonfly");
	}
	else if (o == v__pref__OS_js) {
		return tos3("JavaScript");
	}
	else if (o == v__pref__OS_android) {
		return tos3("Android");
	}
	else if (o == v__pref__OS_solaris) {
		return tos3("Solaris");
	}
	else if (o == v__pref__OS_haiku) {
		return tos3("Haiku");
	}
	else {
		v_panic(_STR("unknown OS enum type: %d", o));
	}
	;
}

v__pref__OS v__pref__get_host_os() { 
	
#ifdef __linux__
	// #if linux
		return v__pref__OS_linux;
	#endif
	
#ifdef __APPLE__
	// #if macos
		return v__pref__OS_mac;
	#endif
	
#ifdef _WIN32
	// #if windows
		return v__pref__OS_windows;
	#endif
	
#ifdef __FreeBSD__
	// #if freebsd
		return v__pref__OS_freebsd;
	#endif
	
#ifdef __OpenBSD__
	// #if openbsd
		return v__pref__OS_openbsd;
	#endif
	
#ifdef __NetBSD__
	// #if netbsd
		return v__pref__OS_netbsd;
	#endif
	
#ifdef __DragonFly__
	// #if dragonfly
		return v__pref__OS_dragonfly;
	#endif
	
#ifdef __sun
	// #if solaris
		return v__pref__OS_solaris;
	#endif
	
#ifdef __haiku__
	// #if haiku
		return v__pref__OS_haiku;
	#endif
	v_panic(tos3("unknown host OS"));
}

Option_v__pref__Backend v__pref__backend_from_string(string s) { 
	if (string_eq(s, tos3("c"))) {
		return opt_ok(& (v__pref__Backend []) { v__pref__Backend_c }, sizeof(v__pref__Backend));
	}
	else if (string_eq(s, tos3("js"))) {
		return opt_ok(& (v__pref__Backend []) { v__pref__Backend_js }, sizeof(v__pref__Backend));
	}
	else if (string_eq(s, tos3("experimental")) || string_eq(s, tos3("v2"))) {
		return opt_ok(& (v__pref__Backend []) { v__pref__Backend_experimental }, sizeof(v__pref__Backend));
	}
	else if (string_eq(s, tos3("x64"))) {
		return opt_ok(& (v__pref__Backend []) { v__pref__Backend_x64 }, sizeof(v__pref__Backend));
	}
	else {
		return v_error(_STR("Unknown backend type %.*s", s.len, s.str));
	}
	;
}

//[inline]
bool v__pref__VerboseLevel_is_higher_or_equal(v__pref__VerboseLevel v, v__pref__VerboseLevel other) { 
	return ((int)(v)) >= ((int)(other));
}

void v__util__EManager_set_support_color(v__util__EManager* e, bool b) { 
	e->support_color = b;
}

v__util__EManager* v__util__new_error_manager() { 
	return (v__util__EManager*)memdup(&(v__util__EManager){	.support_color = term__can_show_color_on_stderr(),
	}, sizeof(v__util__EManager));
}

string v__util__formated_error(string kind, string emsg, string filepath, v__token__Position pos) { 
	string path = filepath;
	string verror_paths_override = os__getenv(tos3("VERROR_PATHS"));
	if (string_eq(verror_paths_override, tos3("absolute"))) {
		path = os__real_path(path);
	} else {
		string workdir = string_add(os__getwd(), _const_os__path_separator);
		if (string_starts_with(path, workdir)) {
			path = string_replace(path, workdir, tos3(""));
		}
	}
	int column = 0;
	string position = _STR("%.*s:%d:%d:", path.len, path.str, pos.line_nr + 1, column);
	string source_context = tos3("");
	string final_position = (_const_v__util__emanager->support_color ? term__bold(position) : position);
	string final_kind = kind;
	if (_const_v__util__emanager->support_color) {
		final_kind = (string_contains(kind, tos3("error")) ? term__bold(term__red(kind)) : term__bold(term__bright_blue(kind)));
	}
	string final_msg = emsg;
	string final_context = (source_context.len > 0 ? _STR("\n%.*s", source_context.len, source_context.str) : tos3(""));
	return string_trim_space(_STR("%.*s %.*s %.*s %.*s", final_position.len, final_position.str, final_kind.len, final_kind.str, final_msg.len, final_msg.str, final_context.len, final_context.str));
}

void v__util__verror(string kind, string s) { 
	if (_const_v__util__emanager->support_color) {
		eprintln(string_add(term__bold(term__red(kind)), _STR(": %.*s", s.len, s.str)));
	} else {
		eprintln(_STR("%.*s: %.*s", kind.len, kind.str, s.len, s.str));
	}
	v_exit(1);
}

string v__util__vhash() { 
	array_fixed_byte_50 buf= {0};
	buf[0] = 0;
	snprintf(((charptr)(buf)), 50, "%s", V_COMMIT_HASH);
	return tos_clone(&/*qq*/buf);
}

string v__util__full_hash() { 
	string build_hash = v__util__vhash();
	string current_hash = v__util__githash(false);
	if (string_eq(build_hash, current_hash)) {
		return build_hash;
	}
	return _STR("%.*s.%.*s", build_hash.len, build_hash.str, current_hash.len, current_hash.str);
}

string v__util__full_v_version() { 
	return _STR("V %.*s %.*s", _const_v__util__v_version.len, _const_v__util__v_version.str, v__util__full_hash().len, v__util__full_hash().str);
}

string v__util__githash(bool should_get_from_filesystem) { 
	while (1) {
		if (should_get_from_filesystem) {
			string vexe = os__getenv(tos3("VEXE"));
			string vroot = os__dir(vexe);
			string git_head_file = os__join_path(vroot, (varg_string){.len=2,.args={tos3(".git"), tos3("HEAD")}});
			if (!os__exists(git_head_file)) {
				break;
			}
			Option_string head_content = os__read_file(git_head_file);
			if (!head_content.ok) {
				string err = head_content.v_error;
				int errcode = head_content.ecode;
				// last_type: v.ast.BranchStmt
				// last_expr_result_type: 
				break;
			};
			string gcbranch_rel_path = string_trim_space(string_replace(/*opt*/(*(string*)head_content.data), tos3("ref: "), tos3("")));
			string gcbranch_file = os__join_path(vroot, (varg_string){.len=2,.args={tos3(".git"), gcbranch_rel_path}});
			if (!os__exists(gcbranch_file)) {
				break;
			}
			Option_string current_branch_hash = os__read_file(gcbranch_file);
			if (!current_branch_hash.ok) {
				string err = current_branch_hash.v_error;
				int errcode = current_branch_hash.ecode;
				// last_type: v.ast.BranchStmt
				// last_expr_result_type: 
				break;
			};
			int desired_hash_length = 7;
			if (/*opt*/(*(string*)current_branch_hash.data).len > desired_hash_length) {
				return string_substr(/*opt*/(*(string*)current_branch_hash.data), 0, desired_hash_length);
			}
		}
		break;
	}
	array_fixed_byte_50 buf= {0};
	buf[0] = 0;
	snprintf(((charptr)(buf)), 50, "%s", V_CURRENT_COMMIT_HASH);
	return tos_clone(&/*qq*/buf);
}

void v__util__set_vroot_folder(string vroot_path) { 
	string vname = (string_eq(os__user_os(), tos3("windows")) ? tos3("v.exe") : tos3("v"));
	os__setenv(tos3("VEXE"), os__real_path(os__join_path(vroot_path, (varg_string){.len=1,.args={vname}})), true);
}

void v__util__launch_tool(bool is_verbose, string tool_name) { 
	string vexe = v__pref__vexe_path();
	string vroot = os__dir(vexe);
	v__util__set_vroot_folder(vroot);
	string tool_args = array_string_join(array_slice(_const_os__args, 1, _const_os__args.len), tos3(" "));
	string tool_exe = v__util__path_of_executable(os__real_path(_STR("%.*s/cmd/tools/%.*s", vroot.len, vroot.str, tool_name.len, tool_name.str)));
	string tool_source = os__real_path(_STR("%.*s/cmd/tools/%.*s.v", vroot.len, vroot.str, tool_name.len, tool_name.str));
	string tool_command = _STR("\"%.*s\" %.*s", tool_exe.len, tool_exe.str, tool_args.len, tool_args.str);
	if (is_verbose) {
		println(_STR("launch_tool vexe        : %.*s", vroot.len, vroot.str));
		println(_STR("launch_tool vroot       : %.*s", vroot.len, vroot.str));
		println(_STR("launch_tool tool_args   : %.*s", tool_args.len, tool_args.str));
		println(_STR("launch_tool tool_command: %.*s", tool_command.len, tool_command.str));
	}
	bool should_compile = false;
	if (!os__exists(tool_exe)) {
		should_compile = true;
	} else {
		if (os__file_last_mod_unix(tool_exe) <= os__file_last_mod_unix(vexe)) {
			should_compile = true;
			if (string_eq(tool_name, tos3("vself")) || string_eq(tool_name, tos3("vup"))) {
				should_compile = false;
			}
		}
		if (os__file_last_mod_unix(tool_exe) <= os__file_last_mod_unix(tool_source)) {
			should_compile = true;
		}
	}
	if (is_verbose) {
		println(_STR("launch_tool should_compile: %d", should_compile));
	}
	if (should_compile) {
		string compilation_command = _STR("\"%.*s\" ", vexe.len, vexe.str);
		compilation_command = string_add(compilation_command, _STR("\"%.*s\"", tool_source.len, tool_source.str));
		if (is_verbose) {
			println(_STR("Compiling %.*s with: \"%.*s\"", tool_name.len, tool_name.str, compilation_command.len, compilation_command.str));
		}
		Option_os__Result tool_compilation = os__exec(compilation_command);
		if (!tool_compilation.ok) {
			string err = tool_compilation.v_error;
			int errcode = tool_compilation.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			v_panic(err);
		};
		if (/*opt*/(*(os__Result*)tool_compilation.data).exit_code != 0) {
			v_panic(string_add(_STR("V tool \"%.*s\" could not be compiled\n", tool_source.len, tool_source.str), /*opt*/(*(os__Result*)tool_compilation.data).output));
		}
	}
	if (is_verbose) {
		println(_STR("launch_tool running tool command: %.*s ...", tool_command.len, tool_command.str));
	}
	v_exit(os__system(tool_command));
}

string v__util__path_of_executable(string path) { 
	
#ifdef _WIN32
	// #if windows
		return string_add(path, tos3(".exe"));
	#endif
	return path;
}

int math__bits__leading_zeros_8(byte x) { 
	return 8 - math__bits__len_8(x);
}

int math__bits__leading_zeros_16(u16 x) { 
	return 16 - math__bits__len_16(x);
}

int math__bits__leading_zeros_32(u32 x) { 
	return 32 - math__bits__len_32(x);
}

int math__bits__leading_zeros_64(u64 x) { 
	return 64 - math__bits__len_64(x);
}

int math__bits__trailing_zeros_8(byte x) { 
	return ((int)((*(byte*)array_get(_const_math__bits__ntz_8_tab, x))));
}

int math__bits__trailing_zeros_16(u16 x) { 
	if (x == 0) {
		return 16;
	}
	return ((int)((*(byte*)array_get(_const_math__bits__de_bruijn32tab, ((u32)((x & -x))) * _const_math__bits__de_bruijn32 >> (32 - 5)))));
}

int math__bits__trailing_zeros_32(u32 x) { 
	if (x == 0) {
		return 32;
	}
	return ((int)((*(byte*)array_get(_const_math__bits__de_bruijn32tab, ((x & -x)) * _const_math__bits__de_bruijn32 >> (32 - 5)))));
}

int math__bits__trailing_zeros_64(u64 x) { 
	if (x == 0) {
		return 64;
	}
	return ((int)((*(byte*)array_get(_const_math__bits__de_bruijn64tab, ((x & -x)) * _const_math__bits__de_bruijn64 >> (64 - 6)))));
}

int math__bits__ones_count_8(byte x) { 
	return ((int)((*(byte*)array_get(_const_math__bits__pop_8_tab, x))));
}

int math__bits__ones_count_16(u16 x) { 
	return ((int)((*(byte*)array_get(_const_math__bits__pop_8_tab, x >> 8)) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x & ((u16)(0xff)))))));
}

int math__bits__ones_count_32(u32 x) { 
	return ((int)((*(byte*)array_get(_const_math__bits__pop_8_tab, x >> 24)) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x >> 16 & 0xff))) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x >> 8 & 0xff))) + (*(byte*)array_get(_const_math__bits__pop_8_tab, (x & ((u32)(0xff)))))));
}

int math__bits__ones_count_64(u64 x) { 
	u64 y = ((x >> ((u64)(1)) & ((_const_math__bits__m0 & _const_math__bits__max_u64)))) + ((x & ((_const_math__bits__m0 & _const_math__bits__max_u64))));
	y = ((y >> ((u64)(2)) & ((_const_math__bits__m1 & _const_math__bits__max_u64)))) + ((y & ((_const_math__bits__m1 & _const_math__bits__max_u64))));
	y = (((y >> 4) + y) & ((_const_math__bits__m2 & _const_math__bits__max_u64)));
	y += y >> 8;
	y += y >> 16;
	y += y >> 32;
	return (((int)(y)) & ((1 << 7) - 1));
}

//[inline]
byte math__bits__rotate_left_8(byte x, int k) { 
	byte n = ((byte)(8));
	byte s = (((byte)(k)) & (n - ((byte)(1))));
	return (((x << s) | (x >> (n - s))));
}

//[inline]
u16 math__bits__rotate_left_16(u16 x, int k) { 
	u16 n = ((u16)(16));
	u16 s = (((u16)(k)) & (n - ((u16)(1))));
	return (((x << s) | (x >> (n - s))));
}

//[inline]
u32 math__bits__rotate_left_32(u32 x, int k) { 
	u32 n = ((u32)(32));
	u32 s = (((u32)(k)) & (n - ((u32)(1))));
	return (((x << s) | (x >> (n - s))));
}

//[inline]
u64 math__bits__rotate_left_64(u64 x, int k) { 
	u64 n = ((u64)(64));
	u64 s = (((u64)(k)) & (n - ((u64)(1))));
	return (((x << s) | (x >> (n - s))));
}

//[inline]
byte math__bits__reverse_8(byte x) { 
	return (*(byte*)array_get(_const_math__bits__rev_8_tab, x));
}

//[inline]
u16 math__bits__reverse_16(u16 x) { 
	return (((u16)((*(byte*)array_get(_const_math__bits__rev_8_tab, x >> 8)))) | (((u16)((*(byte*)array_get(_const_math__bits__rev_8_tab, (x & ((u16)(0xff))))))) << 8));
}

//[inline]
u32 math__bits__reverse_32(u32 x) { 
	u32 y = ((((x >> ((u32)(1)) & ((_const_math__bits__m0 & _const_math__bits__max_u32)))) | (((x & ((_const_math__bits__m0 & _const_math__bits__max_u32)))) << 1)));
	y = ((((y >> ((u32)(2)) & ((_const_math__bits__m1 & _const_math__bits__max_u32)))) | (((y & ((_const_math__bits__m1 & _const_math__bits__max_u32)))) << ((u32)(2)))));
	y = ((((y >> ((u32)(4)) & ((_const_math__bits__m2 & _const_math__bits__max_u32)))) | (((y & ((_const_math__bits__m2 & _const_math__bits__max_u32)))) << ((u32)(4)))));
	return math__bits__reverse_bytes_32(y);
}

//[inline]
u64 math__bits__reverse_64(u64 x) { 
	u64 y = ((((x >> ((u64)(1)) & ((_const_math__bits__m0 & _const_math__bits__max_u64)))) | (((x & ((_const_math__bits__m0 & _const_math__bits__max_u64)))) << 1)));
	y = ((((y >> ((u64)(2)) & ((_const_math__bits__m1 & _const_math__bits__max_u64)))) | (((y & ((_const_math__bits__m1 & _const_math__bits__max_u64)))) << 2)));
	y = ((((y >> ((u64)(4)) & ((_const_math__bits__m2 & _const_math__bits__max_u64)))) | (((y & ((_const_math__bits__m2 & _const_math__bits__max_u64)))) << 4)));
	return math__bits__reverse_bytes_64(y);
}

//[inline]
u16 math__bits__reverse_bytes_16(u16 x) { 
	return ((x >> 8) | (x << 8));
}

//[inline]
u32 math__bits__reverse_bytes_32(u32 x) { 
	u32 y = ((((x >> ((u32)(8)) & ((_const_math__bits__m3 & _const_math__bits__max_u32)))) | (((x & ((_const_math__bits__m3 & _const_math__bits__max_u32)))) << ((u32)(8)))));
	return ((y >> 16) | (y << 16));
}

//[inline]
u64 math__bits__reverse_bytes_64(u64 x) { 
	u64 y = ((((x >> ((u64)(8)) & ((_const_math__bits__m3 & _const_math__bits__max_u64)))) | (((x & ((_const_math__bits__m3 & _const_math__bits__max_u64)))) << ((u64)(8)))));
	y = ((((y >> ((u64)(16)) & ((_const_math__bits__m4 & _const_math__bits__max_u64)))) | (((y & ((_const_math__bits__m4 & _const_math__bits__max_u64)))) << ((u64)(16)))));
	return ((y >> 32) | (y << 32));
}

int math__bits__len_8(byte x) { 
	return ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, x))));
}

int math__bits__len_16(u16 x) { 
	u16 y = x;
	int n = 0;
	if (y >= 1 << 8) {
		y >>= 8;
		n = 8;
	}
	return n + ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, y))));
}

int math__bits__len_32(u32 x) { 
	u32 y = x;
	int n = 0;
	if (y >= 1 << 16) {
		y >>= 16;
		n = 16;
	}
	if (y >= 1 << 8) {
		y >>= 8;
		n += 8;
	}
	return n + ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, y))));
}

int math__bits__len_64(u64 x) { 
	u64 y = x;
	int n = 0;
	if (y >= ((u64)(1)) << ((u64)(32))) {
		y >>= 32;
		n = 32;
	}
	if (y >= ((u64)(1)) << ((u64)(16))) {
		y >>= 16;
		n += 16;
	}
	if (y >= ((u64)(1)) << ((u64)(8))) {
		y >>= 8;
		n += 8;
	}
	return n + ((int)((*(byte*)array_get(_const_math__bits__len_8_tab, y))));
}

multi_return_u32_u32 math__bits__add_32(u32 x, u32 y, u32 carry) { 
	u64 sum64 = ((u64)(x)) + ((u64)(y)) + ((u64)(carry));
	u32 sum = ((u32)(sum64));
	u32 carry_out = ((u32)(sum64 >> 32));
	return (multi_return_u32_u32){.arg0=sum,.arg1=carry_out};
}

multi_return_u64_u64 math__bits__add_64(u64 x, u64 y, u64 carry) { 
	u64 sum = x + y + carry;
	u64 carry_out = ((((x & y)) | ((((x | y)) & ~sum)))) >> 63;
	return (multi_return_u64_u64){.arg0=sum,.arg1=carry_out};
}

multi_return_u32_u32 math__bits__sub_32(u32 x, u32 y, u32 borrow) { 
	u32 diff = x - y - borrow;
	u32 borrow_out = (((~(x & y)) | (~(((x ^ y)) & diff)))) >> 31;
	return (multi_return_u32_u32){.arg0=diff,.arg1=borrow_out};
}

multi_return_u64_u64 math__bits__sub_64(u64 x, u64 y, u64 borrow) { 
	u64 diff = x - y - borrow;
	u64 borrow_out = (((~(x & y)) | (~(((x ^ y)) & diff)))) >> 63;
	return (multi_return_u64_u64){.arg0=diff,.arg1=borrow_out};
}

multi_return_u32_u32 math__bits__mul_32(u32 x, u32 y) { 
	u64 tmp = ((u64)(x)) * ((u64)(y));
	u32 hi = ((u32)(tmp >> 32));
	u32 lo = ((u32)(tmp));
	return (multi_return_u32_u32){.arg0=hi,.arg1=lo};
}

multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y) { 
	u64 x0 = (x & _const_math__bits__mask32);
	u64 x1 = x >> 32;
	u64 y0 = (y & _const_math__bits__mask32);
	u64 y1 = y >> 32;
	u64 w0 = x0 * y0;
	u64 t = x1 * y0 + (w0 >> 32);
	u64 w1 = (t & _const_math__bits__mask32);
	u64 w2 = t >> 32;
	w1 += x0 * y1;
	u64 hi = x1 * y1 + w2 + (w1 >> 32);
	u64 lo = x * y;
	return (multi_return_u64_u64){.arg0=hi,.arg1=lo};
}

multi_return_u32_u32 math__bits__div_32(u32 hi, u32 lo, u32 y) { 
	if (y != 0 && y <= hi) {
		v_panic(_const_math__bits__overflow_error);
	}
	u64 z = ((((u64)(hi)) << 32) | ((u64)(lo)));
	u32 quo = ((u32)(z / ((u64)(y))));
	u32 rem = ((u32)(z % ((u64)(y))));
	return (multi_return_u32_u32){.arg0=quo,.arg1=rem};
}

multi_return_u64_u64 math__bits__div_64(u64 hi, u64 lo, u64 y1) { 
	u64 y = y1;
	if (y == 0) {
		v_panic(_const_math__bits__overflow_error);
	}
	if (y <= hi) {
		v_panic(_const_math__bits__overflow_error);
	}
	u32 s = ((u32)(math__bits__leading_zeros_64(y)));
	y <<= s;
	u64 yn1 = y >> 32;
	u64 yn0 = (y & _const_math__bits__mask32);
	u64 un32 = ((hi << s) | (lo >> (64 - s)));
	u64 un10 = lo << s;
	u64 un1 = un10 >> 32;
	u64 un0 = (un10 & _const_math__bits__mask32);
	u64 q1 = un32 / yn1;
	u64 rhat = un32 - q1 * yn1;
	while (q1 >= _const_math__bits__two32 || q1 * yn0 > _const_math__bits__two32 * rhat + un1) {
		q1--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	u64 un21 = un32 * _const_math__bits__two32 + un1 - q1 * y;
	u64 q0 = un21 / yn1;
	rhat = un21 - q0 * yn1;
	while (q0 >= _const_math__bits__two32 || q0 * yn0 > _const_math__bits__two32 * rhat + un0) {
		q0--;
		rhat += yn1;
		if (rhat >= _const_math__bits__two32) {
			break;
		}
	}
	return (multi_return_u64_u64){.arg0=q1 * _const_math__bits__two32 + q0,.arg1=(un21 * _const_math__bits__two32 + un0 - q0 * y) >> s};
}

u32 math__bits__rem_32(u32 hi, u32 lo, u32 y) { 
	return ((u32)((((u64)(hi)) << (32 | ((u64)(lo)))) % ((u64)(y))));
}

u64 math__bits__rem_64(u64 hi, u64 lo, u64 y) { 
	multi_return_u64_u64 mr_15071 = math__bits__div_64(hi % y, lo, y);
	u64 rem = mr_15071.arg1;
	return rem;
}

string time__Time_format(time__Time t) { 
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmm24, time__FormatDate_yyyymmdd);
}

string time__Time_format_ss(time__Time t) { 
	return time__Time_get_fmt_str(t, time__FormatDelimiter_hyphen, time__FormatTime_hhmmss24, time__FormatDate_yyyymmdd);
}

string time__Time_hhmm(time__Time t) { 
	return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm24);
}

string time__Time_hhmmss(time__Time t) { 
	return time__Time_get_fmt_time_str(t, time__FormatTime_hhmmss24);
}

string time__Time_hhmm12(time__Time t) { 
	return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm12);
}

string time__Time_ymmdd(time__Time t) { 
	return time__Time_get_fmt_date_str(t, time__FormatDelimiter_hyphen, time__FormatDate_yyyymmdd);
}

string time__Time_ddmmy(time__Time t) { 
	return time__Time_get_fmt_date_str(t, time__FormatDelimiter_dot, time__FormatDate_ddmmyyyy);
}

string time__Time_md(time__Time t) { 
	return time__Time_get_fmt_date_str(t, time__FormatDelimiter_space, time__FormatDate_mmmd);
}

string time__Time_clean(time__Time t) { 
	time__Time now = time__now();
	if (t.month == now.month && t.year == now.year && t.day == now.day) {
		return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm24);
	}
	if (t.year == now.year) {
		return time__Time_get_fmt_str(t, time__FormatDelimiter_space, time__FormatTime_hhmm24, time__FormatDate_mmmd);
	}
	return time__Time_format(t);
}

string time__Time_clean12(time__Time t) { 
	time__Time now = time__now();
	if (t.month == now.month && t.year == now.year && t.day == now.day) {
		return time__Time_get_fmt_time_str(t, time__FormatTime_hhmm12);
	}
	if (t.year == now.year) {
		return time__Time_get_fmt_str(t, time__FormatDelimiter_space, time__FormatTime_hhmm12, time__FormatDate_mmmd);
	}
	return time__Time_format(t);
}

string time__Time_get_fmt_time_str(time__Time t, time__FormatTime fmt_time) { 
	if (fmt_time == time__FormatTime_no_time) {
		return tos3("");
	}
	string tp = (t.hour > 11 ? tos3("p.m.") : tos3("a.m."));
	int hour = (t.hour > 12 ? t.hour - 12 : t.hour == 0 ? 12 : t.hour);
	return (fmt_time == time__FormatTime_hhmm12) ? _STR("%d:%02d %.*s", hour, t.minute, tp.len, tp.str) : (fmt_time == time__FormatTime_hhmm24) ? _STR("%02d:%02d", t.hour, t.minute) : (fmt_time == time__FormatTime_hhmmss12) ? _STR("%d:%02d:%02d %.*s", hour, t.minute, t.second, tp.len, tp.str) : (fmt_time == time__FormatTime_hhmmss24) ? _STR("%02d:%02d:%02d", t.hour, t.minute, t.second) : _STR("unknown enumeration %d", fmt_time);
}

string time__Time_get_fmt_date_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatDate fmt_date) { 
	if (fmt_date == time__FormatDate_no_date) {
		return tos3("");
	}
	string month = _STR("%.*s", time__Time_smonth(t).len, time__Time_smonth(t).str);
	string year = string_substr(int_str(t.year), 2, int_str(t.year).len);
	string res = (fmt_date == time__FormatDate_ddmmyy) ? _STR("%02d|%02d|%.*s", t.day, t.month, year.len, year.str) : (fmt_date == time__FormatDate_ddmmyyyy) ? _STR("%02d|%02d|%d", t.day, t.month, t.year) : (fmt_date == time__FormatDate_mmddyy) ? _STR("%02d|%02d|%.*s", t.month, t.day, year.len, year.str) : (fmt_date == time__FormatDate_mmddyyyy) ? _STR("%02d|%02d|%d", t.month, t.day, t.year) : (fmt_date == time__FormatDate_mmmd) ? _STR("%.*s|%d", month.len, month.str, t.day) : (fmt_date == time__FormatDate_mmmdd) ? _STR("%.*s|%02d", month.len, month.str, t.day) : (fmt_date == time__FormatDate_mmmddyyyy) ? _STR("%.*s|%02d|%d", month.len, month.str, t.day, t.year) : (fmt_date == time__FormatDate_yyyymmdd) ? _STR("%d|%02d|%02d", t.year, t.month, t.day) : _STR("unknown enumeration %d", fmt_date);
	res = string_replace(res, tos3("|"), (fmt_dlmtr == time__FormatDelimiter_dot) ? tos3(".") : (fmt_dlmtr == time__FormatDelimiter_hyphen) ? tos3("-") : (fmt_dlmtr == time__FormatDelimiter_slash) ? tos3("/") : (fmt_dlmtr == time__FormatDelimiter_space) ? tos3(" ") : _STR("unknown enumeration %d", fmt_dlmtr));
	return res;
}

string time__Time_get_fmt_str(time__Time t, time__FormatDelimiter fmt_dlmtr, time__FormatTime fmt_time, time__FormatDate fmt_date) { 
	if (fmt_date == time__FormatDate_no_date) {
		if (fmt_time == time__FormatTime_no_time) {
			return tos3("");
		} else {
			return time__Time_get_fmt_time_str(t, fmt_time);
		}
	} else {
		if (fmt_time != time__FormatTime_no_time) {
			return string_add(string_add(time__Time_get_fmt_date_str(t, fmt_dlmtr, fmt_date), tos3(" ")), time__Time_get_fmt_time_str(t, fmt_time));
		} else {
			return time__Time_get_fmt_date_str(t, fmt_dlmtr, fmt_date);
		}
	}
}

Option_time__Time time__parse(string s) { 
	Option_int pos = string_index(s, tos3(" "));
	if (!pos.ok) {
		string err = pos.v_error;
		int errcode = pos.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(_STR("Invalid time format: %.*s", s.len, s.str));
	};
	string symd = string_substr(s, 0, /*opt*/(*(int*)pos.data));
	array_string ymd = string_split(symd, tos3("-"));
	if (ymd.len != 3) {
		return v_error(_STR("Invalid time format: %.*s", s.len, s.str));
	}
	string shms = string_substr(s, /*opt*/(*(int*)pos.data), s.len);
	array_string hms = string_split(shms, tos3(":"));
	string hour = string_substr((*(string*)array_get(hms, 0)), 1, (*(string*)array_get(hms, 0)).len);
	string minute = (*(string*)array_get(hms, 1));
	string second = (*(string*)array_get(hms, 2));
	time__Time res = time__new_time((time__Time){
		.year = string_int((*(string*)array_get(ymd, 0))),
		.month = string_int((*(string*)array_get(ymd, 1))),
		.day = string_int((*(string*)array_get(ymd, 2))),
		.hour = string_int(hour),
		.minute = string_int(minute),
		.second = string_int(second),
		.v_unix = 0,
	});
	return opt_ok(& (time__Time []) { res }, sizeof(time__Time));
}

Option_time__Time time__parse_rfc2822(string s) { 
	array_string fields = string_split(s, tos3(" "));
	if (fields.len < 5) {
		return v_error(_STR("Invalid time format: %.*s", s.len, s.str));
	}
	Option_int pos = string_index(_const_time__months_string, (*(string*)array_get(fields, 2)));
	if (!pos.ok) {
		string err = pos.v_error;
		int errcode = pos.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(_STR("Invalid time format: %.*s", s.len, s.str));
	};
	int mm = /*opt*/(*(int*)pos.data) / 3 + 1;
	byteptr tmstr = ((byteptr)(0));
		tmstr = v_malloc(s.len * 2);
	int count = snprintf(((charptr)(tmstr)), (s.len * 2), "%s-%02d-%s %s", (*(string*)array_get(fields, 3)).str, mm, (*(string*)array_get(fields, 1)).str, (*(string*)array_get(fields, 4)).str);
	Option_time__Time t = time__parse(tos(tmstr, count));
	if (!t.ok) {
		string err = t.v_error;
		int errcode = t.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return v_error(_STR("Invalid time format: %.*s", s.len, s.str));
	};
	return opt_ok(& (time__Time []) { /*opt*/(*(time__Time*)t.data) }, sizeof(time__Time));
}

// TypeDecl


time__Time time__now() { 
	time__time_t t = time(0);
	struct tm* now = ((struct tm*)(0));
	now = localtime(&t);
	return time__convert_ctime(*/*d*/now);
}

string time__Time_smonth(time__Time t) { 
	int i = t.month - 1;
	return string_substr(_const_time__months_string, i * 3, (i + 1) * 3);
}

time__Time time__new_time(time__Time t) { 
	return (time__Time){
		.year = t.year,
		.month = t.month,
		.day = t.day,
		.hour = t.hour,
		.minute = t.minute,
		.second = t.second,
		.v_unix = time__Time_unix_time(t),
	};
}

int time__Time_unix_time(time__Time t) { 
	if (t.v_unix != 0) {
		return t.v_unix;
	}
	struct tm tt = (struct tm){
		.tm_sec = t.second,
		.tm_min = t.minute,
		.tm_hour = t.hour,
		.tm_mday = t.day,
		.tm_mon = t.month - 1,
		.tm_year = t.year - 1900,
	};
	return time__make_unix_time(tt);
}

time__Time time__Time_add_seconds(time__Time t, int seconds) { 
	return time__unix(t.v_unix + seconds);
}

time__Time time__Time_add_days(time__Time t, int days) { 
	return time__unix(t.v_unix + days * 3600 * 24);
}

int time__since(time__Time t) { 
	return 0;
}

string time__Time_relative(time__Time t) { 
	time__Time now = time__now();
	int secs = now.v_unix - t.v_unix;
	if (secs <= 30) {
		return tos3("now");
	}
	if (secs < 60) {
		return tos3("1m");
	}
	if (secs < 3600) {
		return _STR("%dm", secs / 60);
	}
	if (secs < 3600 * 24) {
		return _STR("%dh", secs / 3600);
	}
	if (secs < 3600 * 24 * 5) {
		return _STR("%dd", secs / 3600 / 24);
	}
	if (secs > 3600 * 24 * 10000) {
		return tos3("");
	}
	return time__Time_md(t);
}

int time__day_of_week(int y, int m, int d) { 
	array_int t = new_array_from_c_array(12, 12, sizeof(int), (int[12]){	
	0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4, 
});
	int sy = y;
	if (m < 3) {
		sy = sy - 1;
	}
	return (sy + sy / 4 - sy / 100 + sy / 400 + (*(int*)array_get(t, m - 1)) + d - 1) % 7 + 1;
}

int time__Time_day_of_week(time__Time t) { 
	return time__day_of_week(t.year, t.month, t.day);
}

string time__Time_weekday_str(time__Time t) { 
	int i = time__Time_day_of_week(t) - 1;
	return string_substr(_const_time__days_string, i * 3, (i + 1) * 3);
}

i64 time__ticks() { 
	
#ifdef _WIN32
	// #if windows
		return GetTickCount();
	#else
		struct timeval ts = (struct timeval){
			.tv_sec = 0,
			.tv_usec = 0,
		};
		gettimeofday(&ts, 0);
		return ((i64)(ts.tv_sec * ((u64)(1000)) + (ts.tv_usec / ((u64)(1000)))));
	#endif
}

void time__sleep(int seconds) { 
	
#ifdef _WIN32
	// #if windows
		Sleep(seconds * 1000);
	#else
		sleep(seconds);
	#endif
}

void time__sleep_ms(int milliseconds) { 
	
#ifdef _WIN32
	// #if windows
		Sleep(milliseconds);
	#else
		usleep(milliseconds * 1000);
	#endif
}

void time__usleep(int microseconds) { 
	
#ifdef _WIN32
	// #if windows
		int milliseconds = microseconds / 1000;
		Sleep(milliseconds);
	#else
		usleep(microseconds);
	#endif
}

bool time__is_leap_year(int year) { 
	return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

Option_int time__days_in_month(int month, int year) { 
	if (month > 12 || month < 1) {
		return v_error(_STR("Invalid month: %d", month));
	}
	int extra = (month == 2 && time__is_leap_year(year) ? 1 : 0);
	int res = (*(int*)array_get(_const_time__month_days, month - 1)) + extra;
	return opt_ok(& (int []) { res }, sizeof(int));
}

string time__Time_str(time__Time t) { 
	return time__Time_format_ss(t);
}

time__Time time__convert_ctime(struct tm t) { 
	return (time__Time){
		.year = t.tm_year + 1900,
		.month = t.tm_mon + 1,
		.day = t.tm_mday,
		.hour = t.tm_hour,
		.minute = t.tm_min,
		.second = t.tm_sec,
		.v_unix = time__make_unix_time(t),
	};
}


int time__make_unix_time(struct tm t) { 
	return ((int)(timegm(&t)));
}

time__Time time__unix(int abs) { 
	int day_offset = abs / _const_time__seconds_per_day;
	if (abs % _const_time__seconds_per_day < 0) {
		day_offset--;
	}
	multi_return_int_int_int mr_471 = time__calculate_date_from_offset(day_offset);
	int year = mr_471.arg0;
	int month = mr_471.arg1;
	int day = mr_471.arg2;
	multi_return_int_int_int mr_525 = time__calculate_time_from_offset(abs % _const_time__seconds_per_day);
	int hr = mr_525.arg0;
	int min = mr_525.arg1;
	int sec = mr_525.arg2;
	return (time__Time){
		.year = year,
		.month = month,
		.day = day,
		.hour = hr,
		.minute = min,
		.second = sec,
		.v_unix = abs,
	};
}

//[inline]
multi_return_int_int_int time__calculate_date_from_offset(int day_offset_) { 
	int day_offset = day_offset_;
	int year = 2001;
	day_offset -= 31 * 365 + 8;
	year += (day_offset / _const_time__days_per_400_years) * 400;
	day_offset %= _const_time__days_per_400_years;
	if (day_offset == _const_time__days_per_100_years * 4) {
		year += 300;
		day_offset -= _const_time__days_per_100_years * 3;
	} else {
		year += (day_offset / _const_time__days_per_100_years) * 100;
		day_offset %= _const_time__days_per_100_years;
	}
	if (day_offset == _const_time__days_per_4_years * 25) {
		year += 96;
		day_offset -= _const_time__days_per_4_years * 24;
	} else {
		year += (day_offset / _const_time__days_per_4_years) * 4;
		day_offset %= _const_time__days_per_4_years;
	}
	if (day_offset == 365 * 4) {
		year += 3;
		day_offset -= 365 * 3;
	} else {
		year += (day_offset / 365);
		day_offset %= 365;
	}
	if (day_offset < 0) {
		year--;
		if (time__is_leap_year(year)) {
			day_offset += 366;
		} else {
			day_offset += 365;
		}
	}
	if (time__is_leap_year(year)) {
		if (day_offset > 31 + 29 - 1) {
			day_offset--;
		} else if (day_offset == 31 + 29 - 1) {
			return (multi_return_int_int_int){.arg0=year,.arg1=2,.arg2=29};
		}
	}
	int estimated_month = day_offset / 31;
	while (day_offset >= (*(int*)array_get(_const_time__days_before, estimated_month + 1))) {
		estimated_month++;
	}
	while (day_offset < (*(int*)array_get(_const_time__days_before, estimated_month))) {
		if (estimated_month == 0) {
			break;
		}
		estimated_month--;
	}
	day_offset -= (*(int*)array_get(_const_time__days_before, estimated_month));
	return (multi_return_int_int_int){.arg0=year,.arg1=estimated_month + 1,.arg2=day_offset + 1};
}

//[inline]
multi_return_int_int_int time__calculate_time_from_offset(int second_offset_) { 
	int second_offset = second_offset_;
	if (second_offset < 0) {
		second_offset += _const_time__seconds_per_day;
	}
	int hour = second_offset / _const_time__seconds_per_hour;
	second_offset %= _const_time__seconds_per_hour;
	int min = second_offset / _const_time__seconds_per_minute;
	second_offset %= _const_time__seconds_per_minute;
	return (multi_return_int_int_int){.arg0=hour,.arg1=min,.arg2=second_offset};
}

string term__format(string msg, string open, string close) { 
	return string_add(string_add(string_add(string_add(string_add(string_add(tos3("\x1b["), open), tos3("m")), msg), tos3("\x1b[")), close), tos3("m"));
}

string term__format_rgb(int r, int g, int b, string msg, string open, string close) { 
	return string_add(string_add(string_add(string_add(string_add(string_add(string_add(string_add(string_add(string_add(string_add(string_add(tos3("\x1b["), open), tos3(";2;")), int_str(r)), tos3(";")), int_str(g)), tos3(";")), int_str(b)), tos3("m")), msg), tos3("\x1b[")), close), tos3("m"));
}

string term__rgb(int r, int g, int b, string msg) { 
	return term__format_rgb(r, g, b, msg, tos3("38"), tos3("39"));
}

string term__bg_rgb(int r, int g, int b, string msg) { 
	return term__format_rgb(r, g, b, msg, tos3("48"), tos3("49"));
}

string term__hex(int hex, string msg) { 
	return term__format_rgb(hex >> 16, (hex >> 8 & 0xFF), (hex & 0xFF), msg, tos3("38"), tos3("39"));
}

string term__bg_hex(int hex, string msg) { 
	return term__format_rgb(hex >> 16, (hex >> 8 & 0xFF), (hex & 0xFF), msg, tos3("48"), tos3("49"));
}

string term__bg_black(string msg) { 
	return term__format(msg, tos3("40"), tos3("49"));
}

string term__bright_bg_black(string msg) { 
	return term__format(msg, tos3("100"), tos3("49"));
}

string term__bg_blue(string msg) { 
	return term__format(msg, tos3("44"), tos3("49"));
}

string term__bright_bg_blue(string msg) { 
	return term__format(msg, tos3("104"), tos3("49"));
}

string term__bg_cyan(string msg) { 
	return term__format(msg, tos3("46"), tos3("49"));
}

string term__bright_bg_cyan(string msg) { 
	return term__format(msg, tos3("106"), tos3("49"));
}

string term__bg_green(string msg) { 
	return term__format(msg, tos3("42"), tos3("49"));
}

string term__bright_bg_green(string msg) { 
	return term__format(msg, tos3("102"), tos3("49"));
}

string term__bg_magenta(string msg) { 
	return term__format(msg, tos3("45"), tos3("49"));
}

string term__bright_bg_magenta(string msg) { 
	return term__format(msg, tos3("105"), tos3("49"));
}

string term__bg_red(string msg) { 
	return term__format(msg, tos3("41"), tos3("49"));
}

string term__bright_bg_red(string msg) { 
	return term__format(msg, tos3("101"), tos3("49"));
}

string term__bg_white(string msg) { 
	return term__format(msg, tos3("47"), tos3("49"));
}

string term__bright_bg_white(string msg) { 
	return term__format(msg, tos3("107"), tos3("49"));
}

string term__bg_yellow(string msg) { 
	return term__format(msg, tos3("43"), tos3("49"));
}

string term__bright_bg_yellow(string msg) { 
	return term__format(msg, tos3("103"), tos3("49"));
}

string term__black(string msg) { 
	return term__format(msg, tos3("30"), tos3("39"));
}

string term__bright_black(string msg) { 
	return term__format(msg, tos3("90"), tos3("39"));
}

string term__blue(string msg) { 
	return term__format(msg, tos3("34"), tos3("39"));
}

string term__bright_blue(string msg) { 
	return term__format(msg, tos3("94"), tos3("39"));
}

string term__bold(string msg) { 
	return term__format(msg, tos3("1"), tos3("22"));
}

string term__cyan(string msg) { 
	return term__format(msg, tos3("36"), tos3("39"));
}

string term__bright_cyan(string msg) { 
	return term__format(msg, tos3("96"), tos3("39"));
}

string term__dim(string msg) { 
	return term__format(msg, tos3("2"), tos3("22"));
}

string term__green(string msg) { 
	return term__format(msg, tos3("32"), tos3("39"));
}

string term__bright_green(string msg) { 
	return term__format(msg, tos3("92"), tos3("39"));
}

string term__gray(string msg) { 
	return term__bright_black(msg);
}

string term__hidden(string msg) { 
	return term__format(msg, tos3("8"), tos3("28"));
}

string term__italic(string msg) { 
	return term__format(msg, tos3("3"), tos3("23"));
}

string term__inverse(string msg) { 
	return term__format(msg, tos3("7"), tos3("27"));
}

string term__magenta(string msg) { 
	return term__format(msg, tos3("35"), tos3("39"));
}

string term__bright_magenta(string msg) { 
	return term__format(msg, tos3("95"), tos3("39"));
}

string term__reset(string msg) { 
	return term__format(msg, tos3("0"), tos3("0"));
}

string term__red(string msg) { 
	return term__format(msg, tos3("31"), tos3("39"));
}

string term__bright_red(string msg) { 
	return term__format(msg, tos3("91"), tos3("39"));
}

string term__strikethrough(string msg) { 
	return term__format(msg, tos3("9"), tos3("29"));
}

string term__underline(string msg) { 
	return term__format(msg, tos3("4"), tos3("24"));
}

string term__white(string msg) { 
	return term__format(msg, tos3("37"), tos3("39"));
}

string term__bright_white(string msg) { 
	return term__format(msg, tos3("97"), tos3("39"));
}

string term__yellow(string msg) { 
	return term__format(msg, tos3("33"), tos3("39"));
}

string term__bright_yellow(string msg) { 
	return term__format(msg, tos3("93"), tos3("39"));
}

void term__set_cursor_position(int x, int y) { 
	print(string_add(_STR("\x1b[%d;%d", y, x), tos3("H")));
}

void term__move(int n, string direction) { 
	print(_STR("\x1b[%d%.*s", n, direction.len, direction.str));
}

void term__cursor_up(int n) { 
	term__move(n, tos3("A"));
}

void term__cursor_down(int n) { 
	term__move(n, tos3("B"));
}

void term__cursor_forward(int n) { 
	term__move(n, tos3("C"));
}

void term__cursor_back(int n) { 
	term__move(n, tos3("D"));
}

void term__erase_display(string t) { 
	print(string_add(string_add(tos3("\x1b["), t), tos3("J")));
}

void term__erase_toend() { 
	term__erase_display(tos3("0"));
}

void term__erase_tobeg() { 
	term__erase_display(tos3("1"));
}

void term__erase_clear() { 
	term__erase_display(tos3("2"));
}

void term__erase_del_clear() { 
	term__erase_display(tos3("3"));
}

void term__erase_line(string t) { 
	print(string_add(string_add(tos3("\x1b["), t), tos3("K")));
}

void term__erase_line_toend() { 
	term__erase_line(tos3("0"));
}

void term__erase_line_tobeg() { 
	term__erase_line(tos3("1"));
}

void term__erase_line_clear() { 
	term__erase_line(tos3("2"));
}

void term__show_cursor() { 
	print(tos3("\x1b[?25h"));
}

void term__hide_cursor() { 
	print(tos3("\x1b[?25l"));
}

bool term__can_show_color_on_stdout() { 
	return term__supports_escape_sequences(1);
}

bool term__can_show_color_on_stderr() { 
	return term__supports_escape_sequences(2);
}

string term__ok_message(string s) { 
	return (term__can_show_color_on_stdout() ? term__green(s) : s);
}

string term__fail_message(string s) { 
	return (term__can_show_color_on_stdout() ? term__red(s) : s);
}

string term__h_divider(string divider) { 
	multi_return_int_int mr_1122 = term__get_terminal_size();
	int cols = mr_1122.arg0;
	string result = (divider.len > 0 ? string_repeat(divider, 1 + (cols / divider.len)) : string_repeat(tos3(" "), 1 + cols));
	return string_substr(result, 0, cols);
}

string term__header(string text, string divider) { 
	if (text.len == 0) {
		return term__h_divider(divider);
	}
	multi_return_int_int mr_1534 = term__get_terminal_size();
	int cols = mr_1534.arg0;
	int tlimit = (cols > text.len + 2 + 2 * divider.len ? text.len : cols - 3 - 2 * divider.len);
	int tlimit_alligned = ((tlimit % 2) != (cols % 2) ? tlimit + 1 : tlimit);
	int tstart = (cols - tlimit_alligned) / 2;
	string ln = (divider.len > 0 ? string_substr(string_repeat(divider, 1 + cols / divider.len), 0, cols) : string_repeat(tos3(" "), 1 + cols));
	return string_add(string_add(string_add(string_add(string_substr(ln, 0, tstart), tos3(" ")), string_substr(text, 0, tlimit)), tos3(" ")), string_substr(ln, tstart + tlimit + 2, cols));
}

bool term__supports_escape_sequences(int fd) { 
	
#ifdef _WIN32
	// #if windows
		return ((is_atty(fd) & 0x0004)) > 0 && string_ne(os__getenv(tos3("TERM")), tos3("dumb"));
	#else
		return is_atty(fd) > 0 && string_ne(os__getenv(tos3("TERM")), tos3("dumb"));
	#endif
}


multi_return_int_int term__get_terminal_size() { 
	if (is_atty(1) <= 0 || string_eq(os__getenv(tos3("TERM")), tos3("dumb"))) {
		return (multi_return_int_int){.arg0=_const_term__default_columns_size,.arg1=_const_term__default_rows_size};
	}
	struct winsize w = (struct winsize){
		.ws_row = 0,
		.ws_col = 0,
		.ws_xpixel = 0,
		.ws_ypixel = 0,
	};
	ioctl(1, TIOCGWINSZ, &w);
	return (multi_return_int_int){.arg0=((int)(w.ws_col)),.arg1=((int)(w.ws_row))};
}

benchmark__Benchmark benchmark__new_benchmark() { 
	return (benchmark__Benchmark){
		.bench_start_time = benchmark__now(),
		.verbose = true,
		.bench_end_time = 0,
		.step_start_time = 0,
		.step_end_time = 0,
		.ntotal = 0,
		.nok = 0,
		.nfail = 0,
		.nskip = 0,
		.nexpected_steps = 0,
		.cstep = 0,
		.bok = tos3(""),
		.bfail = tos3(""),
	};
}

benchmark__Benchmark* benchmark__new_benchmark_pointer() { 
	return (benchmark__Benchmark*)memdup(&(benchmark__Benchmark){	.bench_start_time = benchmark__now(),
		.verbose = true,
		.bench_end_time = 0,
		.step_start_time = 0,
		.step_end_time = 0,
		.ntotal = 0,
		.nok = 0,
		.nfail = 0,
		.nskip = 0,
		.nexpected_steps = 0,
		.cstep = 0,
		.bok = tos3(""),
		.bfail = tos3(""),
	}, sizeof(benchmark__Benchmark));
}

void benchmark__Benchmark_set_total_expected_steps(benchmark__Benchmark* b, int n) { 
	b->nexpected_steps = n;
}

void benchmark__Benchmark_stop(benchmark__Benchmark* b) { 
	b->bench_end_time = benchmark__now();
}

void benchmark__Benchmark_step(benchmark__Benchmark* b) { 
	b->step_start_time = benchmark__now();
	b->cstep++;
}

void benchmark__Benchmark_fail(benchmark__Benchmark* b) { 
	b->step_end_time = benchmark__now();
	b->ntotal++;
	b->nfail++;
}

void benchmark__Benchmark_ok(benchmark__Benchmark* b) { 
	b->step_end_time = benchmark__now();
	b->ntotal++;
	b->nok++;
}

void benchmark__Benchmark_skip(benchmark__Benchmark* b) { 
	b->step_end_time = benchmark__now();
	b->ntotal++;
	b->nskip++;
}

void benchmark__Benchmark_fail_many(benchmark__Benchmark* b, int n) { 
	b->step_end_time = benchmark__now();
	b->ntotal += n;
	b->nfail += n;
}

void benchmark__Benchmark_ok_many(benchmark__Benchmark* b, int n) { 
	b->step_end_time = benchmark__now();
	b->ntotal += n;
	b->nok += n;
}

void benchmark__Benchmark_neither_fail_nor_ok(benchmark__Benchmark* b) { 
	b->step_end_time = benchmark__now();
}

benchmark__Benchmark benchmark__start() { 
	benchmark__Benchmark b = benchmark__new_benchmark();
	benchmark__Benchmark_step(&b);
	return b;
}

i64 benchmark__Benchmark_measure(benchmark__Benchmark* b, string label) { 
	benchmark__Benchmark_ok(b);
	i64 res = b->step_end_time - b->step_start_time;
	println(benchmark__Benchmark_step_message_with_label(b, _const_benchmark__BSPENT, _STR("in %.*s", label.len, label.str)));
	benchmark__Benchmark_step(b);
	return res;
}

string benchmark__Benchmark_step_message_with_label(benchmark__Benchmark* b, string label, string msg) { 
	string timed_line = tos3("");
	if (b->nexpected_steps > 0) {
		string sprogress = tos3("");
		if (b->nexpected_steps < 10) {
			sprogress = _STR("%1d/%1d", b->cstep, b->nexpected_steps);
		}
		if (b->nexpected_steps >= 10 && b->nexpected_steps < 100) {
			sprogress = _STR("%2d/%2d", b->cstep, b->nexpected_steps);
		}
		if (b->nexpected_steps >= 100 && b->nexpected_steps < 1000) {
			sprogress = _STR("%3d/%3d", b->cstep, b->nexpected_steps);
		}
		timed_line = benchmark__Benchmark_tdiff_in_ms(b, _STR("[%.*s] %.*s", sprogress.len, sprogress.str, msg.len, msg.str), b->step_start_time, b->step_end_time);
	} else {
		timed_line = benchmark__Benchmark_tdiff_in_ms(b, msg, b->step_start_time, b->step_end_time);
	}
	return _STR("%-5s%.*s", label.str, timed_line.len, timed_line.str);
}

string benchmark__Benchmark_step_message(benchmark__Benchmark* b, string msg) { 
	return benchmark__Benchmark_step_message_with_label(b, tos3(""), msg);
}

string benchmark__Benchmark_step_message_ok(benchmark__Benchmark* b, string msg) { 
	return benchmark__Benchmark_step_message_with_label(b, _const_benchmark__BOK, msg);
}

string benchmark__Benchmark_step_message_fail(benchmark__Benchmark* b, string msg) { 
	return benchmark__Benchmark_step_message_with_label(b, _const_benchmark__BFAIL, msg);
}

string benchmark__Benchmark_step_message_skip(benchmark__Benchmark* b, string msg) { 
	return benchmark__Benchmark_step_message_with_label(b, _const_benchmark__BSKIP, msg);
}

string benchmark__Benchmark_total_message(benchmark__Benchmark* b, string msg) { 
	string tmsg = string_add(string_add(string_add(string_add(string_add(string_add(string_add(_STR("%.*s\n                 ok, fail, skip, total = ", msg.len, msg.str), term__ok_message(_STR("%5d", b->nok))), tos3(", ")), (b->nfail > 0 ? term__fail_message(_STR("%5d", b->nfail)) : _STR("%5d", b->nfail))), tos3(", ")), _STR("%5d", b->nskip)), tos3(", ")), _STR("%5d", b->ntotal));
	if (b->verbose) {
		tmsg = _STR("<=== total time spent %.*s", tmsg.len, tmsg.str);
	}
	return string_add(tos3("  "), benchmark__Benchmark_tdiff_in_ms(b, tmsg, b->bench_start_time, b->bench_end_time));
}

i64 benchmark__Benchmark_total_duration(benchmark__Benchmark* b) { 
	return (b->bench_end_time - b->bench_start_time);
}

string benchmark__Benchmark_tdiff_in_ms(benchmark__Benchmark* b, string s, i64 sticks, i64 eticks) { 
	if (b->verbose) {
		i64 tdiff = (eticks - sticks);
		return _STR("%6d ms %.*s", tdiff, s.len, s.str);
	}
	return s;
}

i64 benchmark__now() { 
	return time__ticks();
}

v__builder__Builder v__builder__new_builder(v__pref__Preferences* pref) { 
	v__table__Table* table = v__table__new_table();
	return (v__builder__Builder){
		.mod_file_cacher = v__builder__new_mod_file_cacher(),
		.pref = pref,
		.table = table,
		.checker = v__checker__new_checker(table, pref),
		.global_scope = (v__ast__Scope*)memdup(&(v__ast__Scope){	.parent = 0,
		.children = new_array(0, 1, sizeof(v__ast__Scope)),
		.start_pos = 0,
		.end_pos = 0,
		.objects = new_map(1, sizeof(v__ast__ScopeObject)),
	}, sizeof(v__ast__Scope)),
		.os = {0},
		.compiled_dir = tos3(""),
		.module_path = tos3(""),
		.module_search_paths = new_array(0, 1, sizeof(string)),
		.parsed_files = new_array(0, 1, sizeof(v__ast__File)),
	};
}

string v__builder__Builder_gen_c(v__builder__Builder* b, array_string v_files) { 
	i64 t0 = time__ticks();
	b->parsed_files = v__parser__parse_files(v_files, b->table, b->pref, b->global_scope);
	v__builder__Builder_parse_imports(b);
	i64 t1 = time__ticks();
	i64 parse_time = t1 - t0;
	v__builder__Builder_info(b, _STR("PARSE: %dms", parse_time));
	v__checker__Checker_check_files(&b->checker, b->parsed_files);
	i64 t2 = time__ticks();
	i64 check_time = t2 - t1;
	v__builder__Builder_info(b, _STR("CHECK: %dms", check_time));
	if (b->checker.nr_errors > 0) {
		v_exit(1);
	}
	string res = v__gen__cgen(b->parsed_files, b->table, b->pref);
	i64 t3 = time__ticks();
	i64 gen_time = t3 - t2;
	v__builder__Builder_info(b, _STR("C GEN: %dms", gen_time));
	return res;
}

void v__builder__Builder_build_c(v__builder__Builder* b, array_string v_files, string out_file) { 
	v__builder__Builder_info(b, _STR("build_c(%.*s)", out_file.len, out_file.str));
	Option_os__File f = os__create(out_file);
	if (!f.ok) {
		string err = f.v_error;
		int errcode = f.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		v_panic(err);
	};
	os__File_writeln(&/*opt*/(*(os__File*)f.data), v__builder__Builder_gen_c(b, v_files));
	os__File_close(&/*opt*/(*(os__File*)f.data));
}

void v__builder__Builder_build_x64(v__builder__Builder* b, array_string v_files, string out_file) { 
	i64 t0 = time__ticks();
	b->parsed_files = v__parser__parse_files(v_files, b->table, b->pref, b->global_scope);
	v__builder__Builder_parse_imports(b);
	i64 t1 = time__ticks();
	i64 parse_time = t1 - t0;
	v__builder__Builder_info(b, _STR("PARSE: %dms", parse_time));
	v__checker__Checker_check_files(&b->checker, b->parsed_files);
	i64 t2 = time__ticks();
	i64 check_time = t2 - t1;
	v__builder__Builder_info(b, _STR("CHECK: %dms", check_time));
	v__gen__x64__gen(b->parsed_files, out_file);
	i64 t3 = time__ticks();
	i64 gen_time = t3 - t2;
	v__builder__Builder_info(b, _STR("x64 GEN: %dms", gen_time));
}

void v__builder__Builder_parse_imports(v__builder__Builder* b) { 
	array_string done_imports = new_array(0, 0, sizeof(string));
	for (int tmp1 = 0; tmp1 < b->parsed_files.len; tmp1++) { 
		int i = tmp1;
		v__ast__File ast_file = (*(v__ast__File*)array_get(b->parsed_files, i));
		// FOR IN
		for (int _ = 0; _ < ast_file.imports.
		len; _++) {	v__ast__Import imp = ((v__ast__Import*)ast_file.imports.
		data)[_];string mod = imp.mod;
			if (_IN(string, mod, done_imports)) {
				continue;
			}
			Option_string import_path = v__builder__Builder_find_module_path(b, mod);
			if (!import_path.ok) {
				string err = import_path.v_error;
				int errcode = import_path.ecode;
				 // typeof it_expr_type: v.ast.CallExpr
				// last_type: v.ast.ExprStmt
				// last_expr_result_type: void
				v_panic(_STR("cannot import module \"%.*s\" (not found)", mod.len, mod.str));
			};
			array_string v_files = v__builder__Builder_v_files_from_dir(b, /*opt*/(*(string*)import_path.data));
			if (v_files.len == 0) {
				v_panic(_STR("cannot import module \"%.*s\" (no .v files in \"%.*s\")", mod.len, mod.str, /*opt*/(*(string*)import_path.data).len, /*opt*/(*(string*)import_path.data).str));
			}
			array_v__ast__File parsed_files = v__parser__parse_files(v_files, b->table, b->pref, b->global_scope);
			// FOR IN
			for (int tmp4 = 0; tmp4 < parsed_files.
			len; tmp4++) {	v__ast__File file = ((v__ast__File*)parsed_files.
			data)[tmp4];if (string_ne(file.mod.name, mod)) {
					v_panic(_STR("bad module definition: %.*s imports module \"%.*s\" but %.*s is defined as module `%.*s`", ast_file.path.len, ast_file.path.str, mod.len, mod.str, file.path.len, file.path.str, file.mod.name.len, file.mod.name.str));
				}
			}
			_PUSH_MANY(&b->parsed_files, (parsed_files), tmp6, array_v__ast__File);
			_PUSH(&done_imports, (mod), tmp7, string);
		}
	}
}

array_string v__builder__Builder_v_files_from_dir(v__builder__Builder* b, string dir) { 
	array_string res = new_array(0, 0, sizeof(string));
	if (!os__exists(dir)) {
		if (string_eq(dir, tos3("compiler")) && os__is_dir(tos3("vlib"))) {
			println(tos3("looks like you are trying to build V with an old command"));
			println(tos3("use `v -o v cmd/v` instead of `v -o v compiler`"));
		}
		v__builder__verror(_STR("%.*s doesn't exist", dir.len, dir.str));
	} else if (!os__is_dir(dir)) {
		v__builder__verror(_STR("%.*s isn't a directory!", dir.len, dir.str));
	}
	Option_array_string files = os__ls(dir);
	if (!files.ok) {
		string err = files.v_error;
		int errcode = files.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		v_panic(err);
	};
	if (v__pref__VerboseLevel_is_higher_or_equal(b->pref->verbosity, v__pref__VerboseLevel_level_one)) {
		println(_STR("v_files_from_dir (\"%.*s\")", dir.len, dir.str));
	}
	array_string_sort(&/*opt*/(*(array_string*)files.data));
	// FOR IN
	for (int tmp4 = 0; tmp4 < /*opt*/(*(array_string*)files.data).
	len; tmp4++) {	string file = ((string*)/*opt*/(*(array_string*)files.data).
	data)[tmp4];if (!string_ends_with(file, tos3(".v")) && !string_ends_with(file, tos3(".vh"))) {
			continue;
		}
		if (string_ends_with(file, tos3("_test.v"))) {
			continue;
		}
		if ((string_ends_with(file, tos3("_win.v")) || string_ends_with(file, tos3("_windows.v"))) && b->os != v__pref__OS_windows) {
			continue;
		}
		if ((string_ends_with(file, tos3("_lin.v")) || string_ends_with(file, tos3("_linux.v"))) && b->os != v__pref__OS_linux) {
			continue;
		}
		if ((string_ends_with(file, tos3("_mac.v")) || string_ends_with(file, tos3("_darwin.v"))) && b->os != v__pref__OS_mac) {
			continue;
		}
		if (string_ends_with(file, tos3("_nix.v")) && b->os == v__pref__OS_windows) {
			continue;
		}
		if (string_ends_with(file, tos3("_android.v")) && b->pref->os != v__pref__OS_android) {
			continue;
		}
		if (string_ends_with(file, tos3("_freebsd.v")) && b->pref->os != v__pref__OS_freebsd) {
			continue;
		}
		if (string_ends_with(file, tos3("_solaris.v")) && b->pref->os != v__pref__OS_solaris) {
			continue;
		}
		if (string_ends_with(file, tos3("_js.v")) && b->os != v__pref__OS_js) {
			continue;
		}
		if (string_ends_with(file, tos3("_c.v")) && b->os == v__pref__OS_js) {
			continue;
		}
		if (b->pref->compile_defines_all.len > 0 && string_contains(file, tos3("_d_"))) {
			bool allowed = false;
			// FOR IN
			for (int tmp17 = 0; tmp17 < b->pref->compile_defines.
			len; tmp17++) {	string cdefine = ((string*)b->pref->compile_defines.
			data)[tmp17];string file_postfix = _STR("_d_%.*s.v", cdefine.len, cdefine.str);
				if (string_ends_with(file, file_postfix)) {
					allowed = true;
					break;
				}
			}
			if (!allowed) {
				continue;
			}
		}
		_PUSH(&res, (os__join_path(dir, (varg_string){.len=1,.args={file}})), tmp20, string);
	}
	return res;
}

void v__builder__Builder_log(v__builder__Builder* b, string s) { 
	if (v__pref__VerboseLevel_is_higher_or_equal(b->pref->verbosity, v__pref__VerboseLevel_level_two)) {
		println(s);
	}
}

void v__builder__Builder_info(v__builder__Builder* b, string s) { 
	if (v__pref__VerboseLevel_is_higher_or_equal(b->pref->verbosity, v__pref__VerboseLevel_level_one)) {
		println(s);
	}
}

//[inline]
string v__builder__module_path(string mod) { 
	return string_replace(mod, tos3("."), _const_os__path_separator);
}

Option_string v__builder__Builder_find_module_path(v__builder__Builder* b, string mod) { 
	string mod_path = v__builder__module_path(mod);
	// FOR IN
	for (int tmp1 = 0; tmp1 < b->module_search_paths.
	len; tmp1++) {	string search_path = ((string*)b->module_search_paths.
	data)[tmp1];string try_path = os__join_path(search_path, (varg_string){.len=1,.args={mod_path}});
		if (v__pref__VerboseLevel_is_higher_or_equal(b->pref->verbosity, v__pref__VerboseLevel_level_three)) {
			println(_STR("  >> trying to find %.*s in %.*s ..", mod.len, mod.str, try_path.len, try_path.str));
		}
		if (os__is_dir(try_path)) {
			if (v__pref__VerboseLevel_is_higher_or_equal(b->pref->verbosity, v__pref__VerboseLevel_level_three)) {
				println(_STR("  << found %.*s .", try_path.len, try_path.str));
			}
			return opt_ok(& (string []) { try_path }, sizeof(string));
		}
	}
	return v_error(_STR("module \"%.*s\" not found", mod.len, mod.str));
}

void v__builder__verror(string s) { 
	v__util__verror(tos3("builder error"), s);
}

v__builder__ModFileCacher* v__builder__new_mod_file_cacher() { 
	return (v__builder__ModFileCacher*)memdup(&(v__builder__ModFileCacher){	.cache = new_map(1, sizeof(v__builder__ModFileAndFolder)),
		.folder_files = new_map(1, sizeof(array_string)),
	}, sizeof(v__builder__ModFileCacher));
}

void v__builder__ModFileCacher_dump(v__builder__ModFileCacher* mcache) { 
	
#ifdef _VDEBUG
	// #if debug
		eprintln(tos3("ModFileCacher DUMP:"));
		eprintln(tos3("	 ModFileCacher.cache:"));
		// FOR IN
		array_string keys_tmp1 = map_keys(&mcache->cache);
		for (int tmp2 = 0; tmp2 < keys_tmp1.len; tmp2++) {
			string k = ((string*)keys_tmp1.data)[tmp2];
			v__builder__ModFileAndFolder v = (*(v__builder__ModFileAndFolder*)map_get3(mcache->cache, k, &(v__builder__ModFileAndFolder[]){ {0} }));
			eprintln(_STR("	 K: %-32s | V: \"%32s\" | \"%32s\" ", k.str, v.vmod_file.str, v.vmod_folder.str));
		}
		eprintln(tos3("	 ModFileCacher.folder_files:"));
		// FOR IN
		array_string keys_tmp3 = map_keys(&mcache->folder_files);
		for (int tmp4 = 0; tmp4 < keys_tmp3.len; tmp4++) {
			string k = ((string*)keys_tmp3.data)[tmp4];
			array_string v = (*(array_string*)map_get3(mcache->folder_files, k, &(array_string[]){ new_array(0, 1, sizeof(string)) }));
			eprintln(_STR("	 K: %-32s | V: %.*s", k.str, array_string_str(v).len, array_string_str(v).str));
		}
	#endif
}

v__builder__ModFileAndFolder v__builder__ModFileCacher_get(v__builder__ModFileCacher* mcache, string mfolder) { 
	if (_IN_MAP(mfolder, mcache->cache)) {
		return (*(v__builder__ModFileAndFolder*)map_get3(mcache->cache, mfolder, &(v__builder__ModFileAndFolder[]){ {0} }));
	}
	multi_return_array_string_v__builder__ModFileAndFolder mr_1959 = v__builder__ModFileCacher_traverse(mcache, mfolder);
	array_string traversed_folders = mr_1959.arg0;
	v__builder__ModFileAndFolder res = mr_1959.arg1;
	// FOR IN
	for (int tmp2 = 0; tmp2 < traversed_folders.
	len; tmp2++) {	string tfolder = ((string*)traversed_folders.
	data)[tmp2];v__builder__ModFileCacher_add(mcache, tfolder, res);
	}
	return res;
}

void v__builder__ModFileCacher_add(v__builder__ModFileCacher* cacher, string path, v__builder__ModFileAndFolder result) { 
	map_set(&cacher->cache, path, &(v__builder__ModFileAndFolder[]) { result });
}

multi_return_array_string_v__builder__ModFileAndFolder v__builder__ModFileCacher_traverse(v__builder__ModFileCacher* mcache, string mfolder) { 
	string cfolder = mfolder;
	array_string folders_so_far = new_array_from_c_array(1, 1, sizeof(string), (string[1]){	
	cfolder, 
});
	int levels = 0;
	while (1) {
		if (levels > 255) {
			break;
		}
		if (string_eq(cfolder, tos3("/")) || string_eq(cfolder, tos3(""))) {
			break;
		}
		if (_IN_MAP(cfolder, mcache->cache)) {
			v__builder__ModFileAndFolder res = (*(v__builder__ModFileAndFolder*)map_get3(mcache->cache, cfolder, &(v__builder__ModFileAndFolder[]){ {0} }));
			if (res.vmod_file.len == 0) {
				v__builder__ModFileCacher_mark_folders_as_vmod_free(mcache, folders_so_far);
			} else {
				v__builder__ModFileCacher_mark_folders_with_vmod(mcache, folders_so_far, res);
			}
			return (multi_return_array_string_v__builder__ModFileAndFolder){.arg0=new_array(0, 0, sizeof(string)),.arg1=res};
		}
		array_string files = v__builder__ModFileCacher_get_files(mcache, cfolder);
		if (_IN(string, tos3("v.mod"), files)) {
			v__builder__ModFileAndFolder res = (v__builder__ModFileAndFolder){
				.vmod_file = os__join_path(cfolder, (varg_string){.len=1,.args={tos3("v.mod")}}),
				.vmod_folder = cfolder,
			};
			return (multi_return_array_string_v__builder__ModFileAndFolder){.arg0=folders_so_far,.arg1=res};
		}
		if (v__builder__ModFileCacher_check_for_stop(mcache, cfolder, files)) {
			break;
		}
		cfolder = os__base_dir(cfolder);
		_PUSH(&folders_so_far, (cfolder), tmp7, string);
		levels++;
	}
	v__builder__ModFileCacher_mark_folders_as_vmod_free(mcache, folders_so_far);
	return (multi_return_array_string_v__builder__ModFileAndFolder){.arg0=new_array_from_c_array(1, 1, sizeof(string), (string[1]){	
	mfolder, 
}),.arg1=(v__builder__ModFileAndFolder){
		.vmod_file = tos3(""),
		.vmod_folder = mfolder,
	}};
}

void v__builder__ModFileCacher_mark_folders_with_vmod(v__builder__ModFileCacher* mcache, array_string folders_so_far, v__builder__ModFileAndFolder vmod) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < folders_so_far.
	len; tmp1++) {	string f = ((string*)folders_so_far.
	data)[tmp1];v__builder__ModFileCacher_add(mcache, f, vmod);
	}
}

void v__builder__ModFileCacher_mark_folders_as_vmod_free(v__builder__ModFileCacher* mcache, array_string folders_so_far) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < folders_so_far.
	len; tmp1++) {	string f = ((string*)folders_so_far.
	data)[tmp1];v__builder__ModFileCacher_add(mcache, f, (v__builder__ModFileAndFolder){
			.vmod_file = tos3(""),
			.vmod_folder = f,
		});
	}
}

bool v__builder__ModFileCacher_check_for_stop(v__builder__ModFileCacher* mcache, string cfolder, array_string files) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < _const_v__builder__MOD_FILE_STOP_PATHS.
	len; tmp1++) {	string i = ((string*)_const_v__builder__MOD_FILE_STOP_PATHS.
	data)[tmp1];if (_IN(string, i, files)) {
			return true;
		}
	}
	return false;
}

array_string v__builder__ModFileCacher_get_files(v__builder__ModFileCacher* mcache, string cfolder) { 
	if (_IN_MAP(cfolder, mcache->folder_files)) {
		return (*(array_string*)map_get3(mcache->folder_files, cfolder, &(array_string[]){ new_array(0, 1, sizeof(string)) }));
	}
	Option_array_string files = os__ls(cfolder);
	if (!files.ok) {
		string err = files.v_error;
		int errcode = files.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		return new_array(0, 0, sizeof(string));
	};
	map_set(&mcache->folder_files, cfolder, &(array_string[]) { /*opt*/(*(array_string*)files.data) });
	return /*opt*/(*(array_string*)files.data);
}

v__ast__CompIf v__parser__Parser_comp_if(v__parser__Parser* p) { 
	v__token__Position pos = v__token__Token_position(&p->tok);
	v__parser__Parser_next(p);
	v__parser__Parser_check(p, v__token__Kind_key_if);
	bool is_not = p->tok.kind == v__token__Kind_not;
	if (is_not) {
		v__parser__Parser_next(p);
	}
	string val = v__parser__Parser_check_name(p);
	array_v__ast__Stmt stmts = new_array(0, 0, sizeof(v__ast__Stmt));
	bool skip_os = false;
	if (_IN(string, val, _const_v__parser__supported_platforms)) {
		v__pref__OS os = v__parser__os_from_string(val);
		if (false && ((!is_not && os != p->pref->os) || (is_not && os == p->pref->os)) && !p->pref->output_cross_c) {
			skip_os = true;
			v__parser__Parser_check(p, v__token__Kind_lcbr);
			int stack = 1;
			while (1) {
				if (p->tok.kind == v__token__Kind_key_return) {
					p->returns = true;
				}
				if (p->tok.kind == v__token__Kind_lcbr) {
					stack++;
				} else if (p->tok.kind == v__token__Kind_rcbr) {
					stack--;
				}
				if (p->tok.kind == v__token__Kind_eof) {
					break;
				}
				if (stack <= 0 && p->tok.kind == v__token__Kind_rcbr) {
					v__parser__Parser_next(p);
					break;
				}
				v__parser__Parser_next(p);
			}
		}
	}
	if (p->tok.kind == v__token__Kind_question) {
		v__parser__Parser_next(p);
	}
	if (!skip_os) {
		stmts = v__parser__Parser_parse_block(p);
	}
	v__ast__CompIf node = (v__ast__CompIf){
		.is_not = is_not,
		.pos = pos,
		.val = val,
		.stmts = stmts,
		.has_else = 0,
		.else_stmts = new_array(0, 1, sizeof(v__ast__Stmt)),
	};
	if (p->tok.kind == v__token__Kind_dollar && p->peek_tok.kind == v__token__Kind_key_else) {
		v__parser__Parser_next(p);
		v__parser__Parser_check(p, v__token__Kind_key_else);
		node.has_else = true;
		node.else_stmts = v__parser__Parser_parse_block(p);
	}
	return node;
}

v__pref__OS v__parser__os_from_string(string os) { 
	if (string_eq(os, tos3("linux"))) {
		return v__pref__OS_linux;
	}
	else if (string_eq(os, tos3("windows"))) {
		return v__pref__OS_windows;
	}
	else if (string_eq(os, tos3("mac"))) {
		return v__pref__OS_mac;
	}
	else if (string_eq(os, tos3("macos"))) {
		return v__pref__OS_mac;
	}
	else if (string_eq(os, tos3("freebsd"))) {
		return v__pref__OS_freebsd;
	}
	else if (string_eq(os, tos3("openbsd"))) {
		return v__pref__OS_openbsd;
	}
	else if (string_eq(os, tos3("netbsd"))) {
		return v__pref__OS_netbsd;
	}
	else if (string_eq(os, tos3("dragonfly"))) {
		return v__pref__OS_dragonfly;
	}
	else if (string_eq(os, tos3("js"))) {
		return v__pref__OS_js;
	}
	else if (string_eq(os, tos3("solaris"))) {
		return v__pref__OS_solaris;
	}
	else if (string_eq(os, tos3("android"))) {
		return v__pref__OS_android;
	}
	else if (string_eq(os, tos3("msvc"))) {
		v__parser__verror(tos3("use the flag `-cc msvc` to build using msvc"));
	}
	else if (string_eq(os, tos3("haiku"))) {
		return v__pref__OS_haiku;
	}
	else if (string_eq(os, tos3("linux_or_macos"))) {
		return v__pref__OS_linux;
	}
	else {
		v_panic(_STR("bad os %.*s", os.len, os.str));
	}
	;
	return v__pref__OS_linux;
}

v__ast__CallExpr v__parser__Parser_call_expr(v__parser__Parser* p, bool is_c, string mod) { 
	v__token__Token tok = p->tok;
	string name = v__parser__Parser_check_name(p);
	string fn_name = (is_c ? _STR("C.%.*s", name.len, name.str) : mod.len > 0 ? _STR("%.*s.%.*s", mod.len, mod.str, name.len, name.str) : name);
	v__parser__Parser_check(p, v__token__Kind_lpar);
	array_v__ast__CallArg args = v__parser__Parser_call_args(p);
	array_v__ast__Stmt or_stmts = new_array(0, 0, sizeof(v__ast__Stmt));
	if (p->tok.kind == v__token__Kind_key_orelse) {
		v__parser__Parser_next(p);
		v__parser__Parser_open_scope(p);
		v__ast__Scope_register(p->scope, tos3("err"), /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
			.name = tos3("err"),
			.typ = _const_v__table__string_type,
			.expr = {0},
			.is_mut = 0,
			.pos = {0},
		}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
		v__ast__Scope_register(p->scope, tos3("errcode"), /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
			.name = tos3("errcode"),
			.typ = _const_v__table__int_type,
			.expr = {0},
			.is_mut = 0,
			.pos = {0},
		}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
		or_stmts = v__parser__Parser_parse_block_no_scope(p);
		v__parser__Parser_close_scope(p);
	}
	v__ast__CallExpr node = (v__ast__CallExpr){
		.name = fn_name,
		.args = args,
		.mod = p->mod,
		.pos = v__token__Token_position(&tok),
		.is_c = is_c,
		.or_block = (v__ast__OrExpr){
		.stmts = or_stmts,
	},
		.left = {0},
		.is_method = 0,
		.expected_arg_types = new_array(0, 1, sizeof(v__table__Type)),
		.left_type = {0},
		.receiver_type = {0},
		.return_type = {0},
	};
	return node;
}

array_v__ast__CallArg v__parser__Parser_call_args(v__parser__Parser* p) { 
	array_v__ast__CallArg args = new_array(0, 0, sizeof(v__ast__CallArg));
	while (p->tok.kind != v__token__Kind_rpar) {
		bool is_mut = false;
		if (p->tok.kind == v__token__Kind_key_mut) {
			v__parser__Parser_check(p, v__token__Kind_key_mut);
			is_mut = true;
		}
		v__ast__Expr e = v__parser__Parser_expr(p, 0);
		_PUSH(&args, ((v__ast__CallArg){
			.is_mut = is_mut,
			.expr = e,
			.typ = {0},
		}), tmp2, v__ast__CallArg);
		if (p->tok.kind != v__token__Kind_rpar) {
			v__parser__Parser_check(p, v__token__Kind_comma);
		}
	}
	v__parser__Parser_check(p, v__token__Kind_rpar);
	return args;
}

v__ast__FnDecl v__parser__Parser_fn_decl(v__parser__Parser* p) { 
	v__parser__Parser_open_scope(p);
	bool is_deprecated = string_eq(p->attr, tos3("deprecated"));
	bool is_pub = p->tok.kind == v__token__Kind_key_pub;
	if (is_pub) {
		v__parser__Parser_next(p);
	}
	v__parser__Parser_check(p, v__token__Kind_key_fn);
	bool is_c = p->tok.kind == v__token__Kind_name && string_eq(p->tok.lit, tos3("C"));
	if (is_c) {
		v__parser__Parser_next(p);
		v__parser__Parser_check(p, v__token__Kind_dot);
	}
	string rec_name = tos3("");
	bool is_method = false;
	v__table__Type rec_type = _const_v__table__void_type;
	bool rec_mut = false;
	array_v__table__Arg args = new_array(0, 0, sizeof(v__table__Arg));
	if (p->tok.kind == v__token__Kind_lpar) {
		is_method = true;
		v__parser__Parser_next(p);
		rec_name = v__parser__Parser_check_name(p);
		rec_mut = p->tok.kind == v__token__Kind_key_mut;
		rec_type = v__parser__Parser_parse_type(p);
		_PUSH(&args, ((v__table__Arg){
			.name = rec_name,
			.is_mut = rec_mut,
			.typ = rec_type,
		}), tmp4, v__table__Arg);
		v__parser__Parser_check(p, v__token__Kind_rpar);
	}
	string name = tos3("");
	if (p->tok.kind == v__token__Kind_name) {
		name = v__parser__Parser_check_name(p);
		if (!is_c && !p->pref->translated && v__scanner__contains_capital(name)) {
			v__parser__Parser_error(p, tos3("function names cannot contain uppercase letters, use snake_case instead"));
		}
	}
	if ((p->tok.kind == v__token__Kind_plus || p->tok.kind == v__token__Kind_minus || p->tok.kind == v__token__Kind_mul || p->tok.kind == v__token__Kind_div || p->tok.kind == v__token__Kind_mod)) {
		name = v__token__Kind_str(p->tok.kind);
		v__parser__Parser_next(p);
	}
	if (p->tok.kind == v__token__Kind_lt) {
		v__parser__Parser_next(p);
		v__parser__Parser_next(p);
		v__parser__Parser_check(p, v__token__Kind_gt);
	}
	multi_return_array_v__table__Arg_bool mr_2664 = v__parser__Parser_fn_args(p);
	array_v__table__Arg args2 = mr_2664.arg0;
	bool is_variadic = mr_2664.arg1;
	_PUSH_MANY(&args, (args2), tmp9, array_v__table__Arg);
	// FOR IN
	for (int tmp10 = 0; tmp10 < args.
	len; tmp10++) {	v__table__Arg arg = ((v__table__Arg*)args.
	data)[tmp10];v__ast__Scope_register(p->scope, arg.name, /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
			.name = arg.name,
			.typ = arg.typ,
			.expr = {0},
			.is_mut = 0,
			.pos = {0},
		}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
	}
	v__table__Type return_type = _const_v__table__void_type;
	if (v__token__Kind_is_start_of_type(p->tok.kind)) {
		return_type = v__parser__Parser_parse_type(p);
	}
	if (is_method) {
		v__table__TypeSymbol* type_sym = v__table__Table_get_type_symbol(p->table, rec_type);
		v__table__TypeSymbol_register_method(type_sym, (v__table__Fn){
			.name = name,
			.args = args,
			.return_type = return_type,
			.is_variadic = is_variadic,
			.is_c = 0,
		});
	} else {
		if (is_c) {
			name = _STR("C.%.*s", name.len, name.str);
		} else {
			name = v__parser__Parser_prepend_mod(p, name);
		}
		v__table__Table_register_fn(p->table, (v__table__Fn){
			.name = name,
			.args = args,
			.return_type = return_type,
			.is_variadic = is_variadic,
			.is_c = is_c,
		});
	}
	array_v__ast__Stmt stmts = new_array(0, 0, sizeof(v__ast__Stmt));
	bool no_body = p->tok.kind != v__token__Kind_lcbr;
	if (p->tok.kind == v__token__Kind_lcbr) {
		stmts = v__parser__Parser_parse_block(p);
	}
	v__parser__Parser_close_scope(p);
	p->attr = tos3("");
	return (v__ast__FnDecl){
		.name = name,
		.stmts = stmts,
		.return_type = return_type,
		.args = args,
		.is_deprecated = is_deprecated,
		.is_pub = is_pub,
		.is_variadic = is_variadic,
		.receiver = (v__ast__Field){
		.name = rec_name,
		.typ = rec_type,
		.pos = {0},
	},
		.is_method = is_method,
		.rec_mut = rec_mut,
		.is_c = is_c,
		.no_body = no_body,
		.pos = v__token__Token_position(&p->tok),
	};
}

multi_return_array_v__table__Arg_bool v__parser__Parser_fn_args(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_lpar);
	array_v__table__Arg args = new_array(0, 0, sizeof(v__table__Arg));
	bool is_variadic = false;
	bool types_only = (p->tok.kind == v__token__Kind_amp || p->tok.kind == v__token__Kind_and) || (p->peek_tok.kind == v__token__Kind_comma && v__table__Table_known_type(p->table, p->tok.lit)) || p->peek_tok.kind == v__token__Kind_rpar;
	if (types_only) {
		int arg_no = 1;
		while (p->tok.kind != v__token__Kind_rpar) {
			string arg_name = _STR("arg_%d", arg_no);
			bool is_mut = p->tok.kind == v__token__Kind_key_mut;
			if (is_mut) {
				v__parser__Parser_check(p, v__token__Kind_key_mut);
			}
			if (p->tok.kind == v__token__Kind_ellipsis) {
				v__parser__Parser_check(p, v__token__Kind_ellipsis);
				is_variadic = true;
			}
			v__table__Type arg_type = v__parser__Parser_parse_type(p);
			if (is_variadic) {
				arg_type = v__table__type_set(arg_type, v__table__TypeFlag_variadic);
			}
			if (p->tok.kind == v__token__Kind_comma) {
				if (is_variadic) {
					v__parser__Parser_error(p, _STR("cannot use ...(variadic) with non-final parameter no %d", arg_no));
				}
				v__parser__Parser_next(p);
			}
			_PUSH(&args, ((v__table__Arg){
				.name = arg_name,
				.is_mut = is_mut,
				.typ = arg_type,
			}), tmp7, v__table__Arg);
			arg_no++;
		}
	} else {
		while (p->tok.kind != v__token__Kind_rpar) {
			array_string arg_names = new_array_from_c_array(1, 1, sizeof(string), (string[1]){	
			v__parser__Parser_check_name(p), 
});
			while (p->tok.kind == v__token__Kind_comma) {
				v__parser__Parser_check(p, v__token__Kind_comma);
				_PUSH(&arg_names, (v__parser__Parser_check_name(p)), tmp8, string);
			}
			bool is_mut = p->tok.kind == v__token__Kind_key_mut;
			if (p->tok.kind == v__token__Kind_ellipsis) {
				v__parser__Parser_check(p, v__token__Kind_ellipsis);
				is_variadic = true;
			}
			v__table__Type typ = v__parser__Parser_parse_type(p);
			if (is_variadic) {
				typ = v__table__type_set(typ, v__table__TypeFlag_variadic);
			}
			// FOR IN
			for (int tmp11 = 0; tmp11 < arg_names.
			len; tmp11++) {	string arg_name = ((string*)arg_names.
			data)[tmp11];_PUSH(&args, ((v__table__Arg){
					.name = arg_name,
					.is_mut = is_mut,
					.typ = typ,
				}), tmp12, v__table__Arg);
				if (is_variadic && p->tok.kind == v__token__Kind_comma) {
					v__parser__Parser_error(p, _STR("cannot use ...(variadic) with non-final parameter %.*s", arg_name.len, arg_name.str));
				}
			}
			if (p->tok.kind != v__token__Kind_rpar) {
				v__parser__Parser_check(p, v__token__Kind_comma);
			}
		}
	}
	v__parser__Parser_check(p, v__token__Kind_rpar);
	return (multi_return_array_v__table__Arg_bool){.arg0=args,.arg1=is_variadic};
}

bool v__parser__Parser_fileis(v__parser__Parser* p, string s) { 
	return string_contains(p->file_name, s);
}

bool v__parser__Parser_known_import(v__parser__Parser* p, string mod) { 
	return _IN_MAP(mod, p->imports);
}

string v__parser__Parser_prepend_mod(v__parser__Parser* p, string name) { 
	if (string_ne(p->expr_mod, tos3(""))) {
		return string_add(string_add(p->expr_mod, tos3(".")), name);
	}
	if (p->builtin_mod || string_eq(p->mod, tos3("main"))) {
		return name;
	}
	return _STR("%.*s.%.*s", p->mod.len, p->mod.str, name.len, name.str);
}

v__table__Type v__parser__Parser_parse_array_type(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_lsbr);
	if (p->tok.kind == v__token__Kind_number) {
		int size = string_int(p->tok.lit);
		v__parser__Parser_next(p);
		v__parser__Parser_check(p, v__token__Kind_rsbr);
		v__table__Type elem_type = v__parser__Parser_parse_type(p);
		int idx = v__table__Table_find_or_register_array_fixed(p->table, elem_type, size, 1);
		return v__table__new_type(idx);
	}
	v__parser__Parser_check(p, v__token__Kind_rsbr);
	v__table__Type elem_type = v__parser__Parser_parse_type(p);
	int nr_dims = 1;
	while (p->tok.kind == v__token__Kind_lsbr) {
		v__parser__Parser_check(p, v__token__Kind_lsbr);
		v__parser__Parser_check(p, v__token__Kind_rsbr);
		nr_dims++;
	}
	int idx = v__table__Table_find_or_register_array(p->table, elem_type, nr_dims);
	return v__table__new_type(idx);
}

v__table__Type v__parser__Parser_parse_map_type(v__parser__Parser* p) { 
	v__parser__Parser_next(p);
	if (p->tok.kind != v__token__Kind_lsbr) {
		return _const_v__table__map_type;
	}
	v__parser__Parser_check(p, v__token__Kind_lsbr);
	v__table__Type key_type = v__parser__Parser_parse_type(p);
	if (v__table__type_idx(key_type) != _const_v__table__string_type_idx) {
		v__parser__Parser_error(p, tos3("maps can only have string keys for now"));
	}
	v__parser__Parser_check(p, v__token__Kind_rsbr);
	v__table__Type value_type = v__parser__Parser_parse_type(p);
	int idx = v__table__Table_find_or_register_map(p->table, key_type, value_type);
	return v__table__new_type(idx);
}

v__table__Type v__parser__Parser_parse_multi_return_type(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_lpar);
	array_v__table__Type mr_types = new_array(0, 0, sizeof(v__table__Type));
	while (1) {
		v__table__Type mr_type = v__parser__Parser_parse_type(p);
		_PUSH(&mr_types, (mr_type), tmp1, v__table__Type);
		if (p->tok.kind == v__token__Kind_comma) {
			v__parser__Parser_check(p, v__token__Kind_comma);
		} else {
			break;
		}
	}
	v__parser__Parser_check(p, v__token__Kind_rpar);
	int idx = v__table__Table_find_or_register_multi_return(p->table, mr_types);
	return v__table__new_type(idx);
}

v__table__Type v__parser__Parser_parse_fn_type(v__parser__Parser* p, string name) { 
	v__parser__Parser_check(p, v__token__Kind_key_fn);
	int line_nr = p->tok.line_nr;
	multi_return_array_v__table__Arg_bool mr_1783 = v__parser__Parser_fn_args(p);
	array_v__table__Arg args = mr_1783.arg0;
	bool is_variadic = mr_1783.arg1;
	v__table__Type return_type = _const_v__table__void_type;
	if (p->tok.line_nr == line_nr && v__token__Kind_is_start_of_type(p->tok.kind)) {
		return_type = v__parser__Parser_parse_type(p);
	}
	v__table__Fn func = (v__table__Fn){
		.name = name,
		.args = args,
		.is_variadic = is_variadic,
		.return_type = return_type,
		.is_c = 0,
	};
	int idx = v__table__Table_find_or_register_fn_type(p->table, func, false);
	return v__table__new_type(idx);
}

v__table__Type v__parser__Parser_parse_type(v__parser__Parser* p) { 
	bool is_optional = false;
	if (p->tok.kind == v__token__Kind_question) {
		v__parser__Parser_next(p);
		is_optional = true;
	}
	int nr_muls = 0;
	if (p->tok.kind == v__token__Kind_key_mut) {
		nr_muls++;
		v__parser__Parser_next(p);
	}
	while ((p->tok.kind == v__token__Kind_and || p->tok.kind == v__token__Kind_amp)) {
		if (p->tok.kind == v__token__Kind_and) {
			nr_muls += 2;
		} else {
			nr_muls++;
		}
		v__parser__Parser_next(p);
	}
	bool is_c = string_eq(p->tok.lit, tos3("C"));
	if (is_c) {
		v__parser__Parser_next(p);
		v__parser__Parser_check(p, v__token__Kind_dot);
	}
	v__table__Type typ = v__parser__Parser_parse_any_type(p, is_c, nr_muls > 0);
	if (is_optional) {
		typ = v__table__type_set(typ, v__table__TypeFlag_optional);
	}
	if (nr_muls > 0) {
		typ = v__table__type_set_nr_muls(typ, nr_muls);
	}
	return typ;
}

v__table__Type v__parser__Parser_parse_any_type(v__parser__Parser* p, bool is_c, bool is_ptr) { 
	string name = p->tok.lit;
	if (is_c) {
		name = _STR("C.%.*s", name.len, name.str);
	} else if (p->peek_tok.kind == v__token__Kind_dot) {
		if (!v__parser__Parser_known_import(p, name)) {
			println(array_string_str(p->table->imports));
			v__parser__Parser_error(p, _STR("unknown module `%.*s`", p->tok.lit.len, p->tok.lit.str));
		}
		v__parser__Parser_next(p);
		v__parser__Parser_check(p, v__token__Kind_dot);
		name = _STR("%.*s.%.*s", (*(string*)map_get3(p->imports, name, &(string[]){ tos3("") })).len, (*(string*)map_get3(p->imports, name, &(string[]){ tos3("") })).str, p->tok.lit.len, p->tok.lit.str);
	} else if (string_ne(p->expr_mod, tos3(""))) {
		name = string_add(string_add(p->expr_mod, tos3(".")), name);
	} else if (!((string_eq(p->mod, tos3("builtin")) || string_eq(p->mod, tos3("main")))) && !(_IN(string, name, _const_v__table__builtin_type_names))) {
		name = string_add(string_add(p->mod, tos3(".")), name);
	}
	if (p->tok.kind == v__token__Kind_key_fn) {
		return v__parser__Parser_parse_fn_type(p, tos3(""));
	}
	else if (p->tok.kind == v__token__Kind_lsbr) {
		return v__parser__Parser_parse_array_type(p);
	}
	else if (p->tok.kind == v__token__Kind_lpar) {
		if (is_ptr) {
			v__parser__Parser_error(p, tos3("parse_type: unexpected `&` before multiple returns"));
		}
		return v__parser__Parser_parse_multi_return_type(p);
	}
	else {
		if (string_eq(name, tos3("map"))) {
			return v__parser__Parser_parse_map_type(p);
		}
		if (string_eq(name, tos3("voidptr"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__voidptr_type;
		}
		else if (string_eq(name, tos3("byteptr"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__byteptr_type;
		}
		else if (string_eq(name, tos3("charptr"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__charptr_type;
		}
		else if (string_eq(name, tos3("i8"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__i8_type;
		}
		else if (string_eq(name, tos3("i16"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__i16_type;
		}
		else if (string_eq(name, tos3("int"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__int_type;
		}
		else if (string_eq(name, tos3("i64"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__i64_type;
		}
		else if (string_eq(name, tos3("byte"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__byte_type;
		}
		else if (string_eq(name, tos3("u16"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__u16_type;
		}
		else if (string_eq(name, tos3("u32"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__u32_type;
		}
		else if (string_eq(name, tos3("u64"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__u64_type;
		}
		else if (string_eq(name, tos3("f32"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__f32_type;
		}
		else if (string_eq(name, tos3("f64"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__f64_type;
		}
		else if (string_eq(name, tos3("string"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__string_type;
		}
		else if (string_eq(name, tos3("char"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__char_type;
		}
		else if (string_eq(name, tos3("bool"))) {
			// defer
				v__parser__Parser_next(p);
			return _const_v__table__bool_type;
		}
		else {
			int idx = v__table__Table_find_type_idx(p->table, name);
			if (idx > 0) {
				// defer
					v__parser__Parser_next(p);
				return v__table__new_type(idx);
			}
			idx = v__table__Table_add_placeholder_type(p->table, name);
			// defer
				v__parser__Parser_next(p);
			return v__table__new_type(idx);
		}
		;
	}
	;
// defer
	v__parser__Parser_next(p);
}

v__ast__Stmt v__parser__parse_stmt(string text, v__table__Table* table, v__ast__Scope* scope) { 
	v__scanner__Scanner* s = v__scanner__new_scanner(text, v__scanner__CommentsMode_skip_comments);
	v__parser__Parser p = (v__parser__Parser){
		.scanner = s,
		.table = table,
		.pref = (v__pref__Preferences*)memdup(&(v__pref__Preferences){	.os = {0},
		.backend = {0},
		.build_mode = {0},
		.verbosity = {0},
		.is_verbose = 0,
		.is_test = 0,
		.is_script = 0,
		.is_live = 0,
		.is_solive = 0,
		.is_so = 0,
		.is_prof = 0,
		.translated = 0,
		.is_prod = 0,
		.obfuscate = 0,
		.is_repl = 0,
		.is_run = 0,
		.sanitize = 0,
		.is_debug = 0,
		.is_vlines = 0,
		.is_keep_c = 0,
		.is_pretty_c = 0,
		.is_cache = 0,
		.is_stats = 0,
		.no_auto_free = 0,
		.cflags = tos3(""),
		.ccompiler = tos3(""),
		.third_party_option = tos3(""),
		.building_v = 0,
		.autofree = 0,
		.compress = 0,
		.fast = 0,
		.enable_globals = 0,
		.is_bare = 0,
		.lookup_path = new_array(0, 1, sizeof(string)),
		.output_cross_c = 0,
		.prealloc = 0,
		.vroot = tos3(""),
		.out_name = tos3(""),
		.path = tos3(""),
		.compile_defines = new_array(0, 1, sizeof(string)),
		.compile_defines_all = new_array(0, 1, sizeof(string)),
		.mod = tos3(""),
	}, sizeof(v__pref__Preferences)),
		.scope = scope,
		.global_scope = (v__ast__Scope*)memdup(&(v__ast__Scope){	.start_pos = 0,
		.parent = 0,
		.children = new_array(0, 1, sizeof(v__ast__Scope)),
		.end_pos = 0,
		.objects = new_map(1, sizeof(v__ast__ScopeObject)),
	}, sizeof(v__ast__Scope)),
		.file_name = tos3(""),
		.tok = {0},
		.peek_tok = {0},
		.is_c = 0,
		.inside_if = 0,
		.builtin_mod = 0,
		.mod = tos3(""),
		.attr = tos3(""),
		.expr_mod = tos3(""),
		.imports = new_map(1, sizeof(string)),
		.ast_imports = new_array(0, 1, sizeof(v__ast__Import)),
		.is_amp = 0,
		.returns = 0,
		.inside_match_case = 0,
		.comments = new_array(0, 1, sizeof(v__ast__Comment)),
	};
	v__parser__Parser_init_parse_fns(&p);
	v__parser__Parser_read_first_token(&p);
	return v__parser__Parser_stmt(&p);
}

v__ast__File v__parser__parse_file(string path, v__table__Table* table, v__scanner__CommentsMode comments_mode, v__pref__Preferences* pref, v__ast__Scope* global_scope) { 
	array_v__ast__Stmt stmts = new_array(0, 0, sizeof(v__ast__Stmt));
	v__parser__Parser p = (v__parser__Parser){
		.scanner = v__scanner__new_scanner_file(path, comments_mode),
		.table = table,
		.file_name = path,
		.pref = pref,
		.scope = (v__ast__Scope*)memdup(&(v__ast__Scope){	.start_pos = 0,
		.parent = 0,
		.children = new_array(0, 1, sizeof(v__ast__Scope)),
		.end_pos = 0,
		.objects = new_map(1, sizeof(v__ast__ScopeObject)),
	}, sizeof(v__ast__Scope)),
		.global_scope = global_scope,
		.tok = {0},
		.peek_tok = {0},
		.is_c = 0,
		.inside_if = 0,
		.builtin_mod = 0,
		.mod = tos3(""),
		.attr = tos3(""),
		.expr_mod = tos3(""),
		.imports = new_map(1, sizeof(string)),
		.ast_imports = new_array(0, 1, sizeof(v__ast__Import)),
		.is_amp = 0,
		.returns = 0,
		.inside_match_case = 0,
		.comments = new_array(0, 1, sizeof(v__ast__Comment)),
	};
	v__parser__Parser_read_first_token(&p);
	v__ast__Module module_decl = (p.tok.kind == v__token__Kind_key_module ? v__parser__Parser_module_decl(&p) : (v__ast__Module){
			.name = tos3("main"),
			.path = tos3(""),
			.expr = {0},
		});
	p.mod = module_decl.name;
	p.builtin_mod = string_eq(p.mod, tos3("builtin"));
	while (1) {
		if (p.tok.kind == v__token__Kind_eof) {
			break;
		}
		_PUSH(&stmts, (v__parser__Parser_top_stmt(&p)), tmp3, v__ast__Stmt);
	}
	p.scope->end_pos = p.tok.pos;
	return (v__ast__File){
		.path = path,
		.mod = module_decl,
		.imports = p.ast_imports,
		.stmts = stmts,
		.scope = p.scope,
		.global_scope = p.global_scope,
	};
}

array_v__ast__File v__parser__parse_files(array_string paths, v__table__Table* table, v__pref__Preferences* pref, v__ast__Scope* global_scope) { 
	array_v__ast__File files = new_array(0, 0, sizeof(v__ast__File));
	// FOR IN
	for (int tmp1 = 0; tmp1 < paths.
	len; tmp1++) {	string path = ((string*)paths.
	data)[tmp1];_PUSH(&files, (v__parser__parse_file(path, table, v__scanner__CommentsMode_skip_comments, pref, global_scope)), tmp2, v__ast__File);
	}
	return files;
}

void v__parser__Parser_init_parse_fns(v__parser__Parser* p) { 
	println(tos3(""));
}

void v__parser__Parser_read_first_token(v__parser__Parser* p) { 
	v__parser__Parser_next(p);
	v__parser__Parser_next(p);
}

void v__parser__Parser_open_scope(v__parser__Parser* p) { 
	p->scope = (v__ast__Scope*)memdup(&(v__ast__Scope){	.parent = p->scope,
		.start_pos = p->tok.pos,
		.children = new_array(0, 1, sizeof(v__ast__Scope)),
		.end_pos = 0,
		.objects = new_map(1, sizeof(v__ast__ScopeObject)),
	}, sizeof(v__ast__Scope));
}

void v__parser__Parser_close_scope(v__parser__Parser* p) { 
	p->scope->end_pos = p->tok.pos;
	_PUSH(&p->scope->parent->children, (p->scope), tmp1, v__ast__Scope*);
	p->scope = p->scope->parent;
}

array_v__ast__Stmt v__parser__Parser_parse_block(v__parser__Parser* p) { 
	v__parser__Parser_open_scope(p);
	array_v__ast__Stmt stmts = v__parser__Parser_parse_block_no_scope(p);
	v__parser__Parser_close_scope(p);
	return stmts;
}

array_v__ast__Stmt v__parser__Parser_parse_block_no_scope(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_lcbr);
	array_v__ast__Stmt stmts = new_array(0, 0, sizeof(v__ast__Stmt));
	if (p->tok.kind != v__token__Kind_rcbr) {
		while (1) {
			_PUSH(&stmts, (v__parser__Parser_stmt(p)), tmp2, v__ast__Stmt);
			if ((p->tok.kind == v__token__Kind_eof || p->tok.kind == v__token__Kind_rcbr)) {
				break;
			}
		}
	}
	v__parser__Parser_check(p, v__token__Kind_rcbr);
	return stmts;
}

void v__parser__Parser_next(v__parser__Parser* p) { 
	p->tok = p->peek_tok;
	p->peek_tok = v__scanner__Scanner_scan(p->scanner);
}

void v__parser__Parser_check(v__parser__Parser* p, v__token__Kind expected) { 
	if (p->tok.kind != expected) {
		string s = _STR("unexpected `%.*s`, expecting `%.*s`", v__token__Kind_str(p->tok.kind).len, v__token__Kind_str(p->tok.kind).str, v__token__Kind_str(expected).len, v__token__Kind_str(expected).str);
		v__parser__Parser_error(p, s);
	}
	v__parser__Parser_next(p);
}

string v__parser__Parser_check_name(v__parser__Parser* p) { 
	string name = p->tok.lit;
	v__parser__Parser_check(p, v__token__Kind_name);
	return name;
}

v__ast__Stmt v__parser__Parser_top_stmt(v__parser__Parser* p) { 
	if (p->tok.kind == v__token__Kind_key_pub) {
		if (p->peek_tok.kind == v__token__Kind_key_const) {
			return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__ConstDecl[]) {v__parser__Parser_const_decl(p)}, sizeof(v__ast__ConstDecl)), .typ = 215 /* v.ast.ConstDecl */};
		}
		else if (p->peek_tok.kind == v__token__Kind_key_fn) {
			return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__FnDecl[]) {v__parser__Parser_fn_decl(p)}, sizeof(v__ast__FnDecl)), .typ = 126 /* v.ast.FnDecl */};
		}
		else if (p->peek_tok.kind == v__token__Kind_key_struct || p->peek_tok.kind == v__token__Kind_key_union) {
			return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__StructDecl[]) {v__parser__Parser_struct_decl(p)}, sizeof(v__ast__StructDecl)), .typ = 218 /* v.ast.StructDecl */};
		}
		else if (p->peek_tok.kind == v__token__Kind_key_interface) {
			return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__InterfaceDecl[]) {v__parser__Parser_interface_decl(p)}, sizeof(v__ast__InterfaceDecl)), .typ = 221 /* v.ast.InterfaceDecl */};
		}
		else if (p->peek_tok.kind == v__token__Kind_key_enum) {
			return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__EnumDecl[]) {v__parser__Parser_enum_decl(p)}, sizeof(v__ast__EnumDecl)), .typ = 232 /* v.ast.EnumDecl */};
		}
		else if (p->peek_tok.kind == v__token__Kind_key_type) {
			return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__TypeDecl[]) {v__parser__Parser_type_decl(p)}, sizeof(v__ast__TypeDecl)), .typ = 233 /* v.ast.TypeDecl */};
		}
		else {
			v__parser__Parser_error(p, tos3("wrong pub keyword usage"));
			return (v__ast__Stmt){
			0};
		}
		;
	}
	else if (p->tok.kind == v__token__Kind_lsbr) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__Attr[]) {v__parser__Parser_attribute(p)}, sizeof(v__ast__Attr)), .typ = 184 /* v.ast.Attr */};
	}
	else if (p->tok.kind == v__token__Kind_key_interface) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__InterfaceDecl[]) {v__parser__Parser_interface_decl(p)}, sizeof(v__ast__InterfaceDecl)), .typ = 221 /* v.ast.InterfaceDecl */};
	}
	else if (p->tok.kind == v__token__Kind_key_module) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__Module[]) {v__parser__Parser_module_decl(p)}, sizeof(v__ast__Module)), .typ = 170 /* v.ast.Module */};
	}
	else if (p->tok.kind == v__token__Kind_key_import) {
		array_v__ast__Import node = v__parser__Parser_import_stmt(p);
		_PUSH_MANY(&p->ast_imports, (node), tmp3, array_v__ast__Import);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__Import[]) {(*(v__ast__Import*)array_get(node, 0))}, sizeof(v__ast__Import)), .typ = 165 /* v.ast.Import */};
	}
	else if (p->tok.kind == v__token__Kind_key_global) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__GlobalDecl[]) {v__parser__Parser_global_decl(p)}, sizeof(v__ast__GlobalDecl)), .typ = 227 /* v.ast.GlobalDecl */};
	}
	else if (p->tok.kind == v__token__Kind_key_const) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__ConstDecl[]) {v__parser__Parser_const_decl(p)}, sizeof(v__ast__ConstDecl)), .typ = 215 /* v.ast.ConstDecl */};
	}
	else if (p->tok.kind == v__token__Kind_key_fn) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__FnDecl[]) {v__parser__Parser_fn_decl(p)}, sizeof(v__ast__FnDecl)), .typ = 126 /* v.ast.FnDecl */};
	}
	else if (p->tok.kind == v__token__Kind_key_struct) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__StructDecl[]) {v__parser__Parser_struct_decl(p)}, sizeof(v__ast__StructDecl)), .typ = 218 /* v.ast.StructDecl */};
	}
	else if (p->tok.kind == v__token__Kind_dollar) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__CompIf[]) {v__parser__Parser_comp_if(p)}, sizeof(v__ast__CompIf)), .typ = 155 /* v.ast.CompIf */};
	}
	else if (p->tok.kind == v__token__Kind_hash) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__HashStmt[]) {v__parser__Parser_hash(p)}, sizeof(v__ast__HashStmt)), .typ = 226 /* v.ast.HashStmt */};
	}
	else if (p->tok.kind == v__token__Kind_key_type) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__TypeDecl[]) {v__parser__Parser_type_decl(p)}, sizeof(v__ast__TypeDecl)), .typ = 233 /* v.ast.TypeDecl */};
	}
	else if (p->tok.kind == v__token__Kind_key_enum) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__EnumDecl[]) {v__parser__Parser_enum_decl(p)}, sizeof(v__ast__EnumDecl)), .typ = 232 /* v.ast.EnumDecl */};
	}
	else if (p->tok.kind == v__token__Kind_key_union) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__StructDecl[]) {v__parser__Parser_struct_decl(p)}, sizeof(v__ast__StructDecl)), .typ = 218 /* v.ast.StructDecl */};
	}
	else if (p->tok.kind == v__token__Kind_comment) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__Comment[]) {v__parser__Parser_comment(p)}, sizeof(v__ast__Comment)), .typ = 167 /* v.ast.Comment */};
	}
	else {
		v__parser__Parser_error(p, string_add(tos3("bad top level statement "), v__token__Token_str(p->tok)));
		return (v__ast__Stmt){
		0};
	}
	;
}

v__ast__Comment v__parser__Parser_check_comment(v__parser__Parser* p) { 
	if (p->tok.kind == v__token__Kind_comment) {
		return v__parser__Parser_comment(p);
	}
}

v__ast__Comment v__parser__Parser_comment(v__parser__Parser* p) { 
	v__token__Position pos = v__token__Token_position(&p->tok);
	string text = p->tok.lit;
	v__parser__Parser_next(p);
	return (v__ast__Comment){
		.text = text,
		.pos = pos,
		.is_multi = 0,
		.line_nr = 0,
	};
}

v__ast__Stmt v__parser__Parser_stmt(v__parser__Parser* p) { 
	if (p->tok.kind == v__token__Kind_lcbr) {
		array_v__ast__Stmt stmts = v__parser__Parser_parse_block(p);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__Block[]) {(v__ast__Block){
			.stmts = stmts,
		}}, sizeof(v__ast__Block)), .typ = 172 /* v.ast.Block */};
	}
	else if (p->tok.kind == v__token__Kind_key_assert) {
		v__parser__Parser_next(p);
		v__ast__Expr expr = v__parser__Parser_expr(p, 0);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__AssertStmt[]) {(v__ast__AssertStmt){
			.expr = expr,
			.pos = v__token__Token_position(&p->tok),
		}}, sizeof(v__ast__AssertStmt)), .typ = 173 /* v.ast.AssertStmt */};
	}
	else if (p->tok.kind == v__token__Kind_key_mut || p->tok.kind == v__token__Kind_key_static) {
		return v__parser__Parser_assign_stmt(p);
	}
	else if (p->tok.kind == v__token__Kind_key_for) {
		return v__parser__Parser_for_statement(p);
	}
	else if (p->tok.kind == v__token__Kind_comment) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__Comment[]) {v__parser__Parser_comment(p)}, sizeof(v__ast__Comment)), .typ = 167 /* v.ast.Comment */};
	}
	else if (p->tok.kind == v__token__Kind_key_return) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__Return[]) {v__parser__Parser_return_stmt(p)}, sizeof(v__ast__Return)), .typ = 222 /* v.ast.Return */};
	}
	else if (p->tok.kind == v__token__Kind_dollar) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__CompIf[]) {v__parser__Parser_comp_if(p)}, sizeof(v__ast__CompIf)), .typ = 155 /* v.ast.CompIf */};
	}
	else if (p->tok.kind == v__token__Kind_key_continue || p->tok.kind == v__token__Kind_key_break) {
		v__token__Token tok = p->tok;
		v__parser__Parser_next(p);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__BranchStmt[]) {(v__ast__BranchStmt){
			.tok = tok,
		}}, sizeof(v__ast__BranchStmt)), .typ = 174 /* v.ast.BranchStmt */};
	}
	else if (p->tok.kind == v__token__Kind_key_unsafe) {
		v__parser__Parser_next(p);
		array_v__ast__Stmt stmts = v__parser__Parser_parse_block(p);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__UnsafeStmt[]) {(v__ast__UnsafeStmt){
			.stmts = stmts,
		}}, sizeof(v__ast__UnsafeStmt)), .typ = 175 /* v.ast.UnsafeStmt */};
	}
	else if (p->tok.kind == v__token__Kind_hash) {
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__HashStmt[]) {v__parser__Parser_hash(p)}, sizeof(v__ast__HashStmt)), .typ = 226 /* v.ast.HashStmt */};
	}
	else if (p->tok.kind == v__token__Kind_key_defer) {
		v__parser__Parser_next(p);
		array_v__ast__Stmt stmts = v__parser__Parser_parse_block(p);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__DeferStmt[]) {(v__ast__DeferStmt){
			.stmts = stmts,
			.ifdef = tos3(""),
		}}, sizeof(v__ast__DeferStmt)), .typ = 176 /* v.ast.DeferStmt */};
	}
	else if (p->tok.kind == v__token__Kind_key_go) {
		v__parser__Parser_next(p);
		v__ast__Expr expr = v__parser__Parser_expr(p, 0);
		if (expr.typ == 156 /* v.ast.CallExpr */) {
			v__ast__CallExpr* it = (v__ast__CallExpr*)expr.obj; // ST it
		}
		else {
			v__parser__Parser_error(p, tos3("expression in `go` must be a function call"));
		}
		;
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__GoStmt[]) {(v__ast__GoStmt){
			.call_expr = expr,
		}}, sizeof(v__ast__GoStmt)), .typ = 177 /* v.ast.GoStmt */};
	}
	else if (p->tok.kind == v__token__Kind_key_goto) {
		v__parser__Parser_next(p);
		string name = v__parser__Parser_check_name(p);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__GotoStmt[]) {(v__ast__GotoStmt){
			.name = name,
		}}, sizeof(v__ast__GotoStmt)), .typ = 178 /* v.ast.GotoStmt */};
	}
	else {
		if (p->tok.kind == v__token__Kind_name && (p->peek_tok.kind == v__token__Kind_decl_assign || p->peek_tok.kind == v__token__Kind_comma)) {
			return v__parser__Parser_assign_stmt(p);
		} else if (p->tok.kind == v__token__Kind_name && p->peek_tok.kind == v__token__Kind_colon) {
			string name = v__parser__Parser_check_name(p);
			v__parser__Parser_check(p, v__token__Kind_colon);
			return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__GotoLabel[]) {(v__ast__GotoLabel){
				.name = name,
			}}, sizeof(v__ast__GotoLabel)), .typ = 179 /* v.ast.GotoLabel */};
		}
		v__ast__Expr expr = v__parser__Parser_expr(p, 0);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__ExprStmt[]) {(v__ast__ExprStmt){
			.expr = expr,
			.typ = {0},
		}}, sizeof(v__ast__ExprStmt)), .typ = 180 /* v.ast.ExprStmt */};
	}
	;
}

v__ast__AssignExpr v__parser__Parser_assign_expr(v__parser__Parser* p, v__ast__Expr left) { 
	v__token__Kind op = p->tok.kind;
	v__parser__Parser_next(p);
	v__ast__Expr val = v__parser__Parser_expr(p, 0);
	if (left.typ == 183 /* v.ast.IndexExpr */) {
		v__ast__IndexExpr* it = (v__ast__IndexExpr*)left.obj; // ST it
		it->is_setter = true;
	}
	else {
	}
	;
	v__ast__AssignExpr node = (v__ast__AssignExpr){
		.left = left,
		.val = val,
		.op = op,
		.pos = v__token__Token_position(&p->tok),
		.left_type = {0},
		.right_type = {0},
	};
	return node;
}

v__ast__Attr v__parser__Parser_attribute(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_lsbr);
	if (p->tok.kind == v__token__Kind_key_if) {
		v__parser__Parser_next(p);
	}
	string name = v__parser__Parser_check_name(p);
	v__parser__Parser_check(p, v__token__Kind_rsbr);
	p->attr = name;
	return (v__ast__Attr){
		.name = name,
	};
}

void v__parser__Parser_error(v__parser__Parser* p, string s) { 
	string kind = tos3("error:");
	if (v__pref__VerboseLevel_is_higher_or_equal(p->pref->verbosity, v__pref__VerboseLevel_level_one)) {
		print_backtrace();
		kind = tos3("parser error:");
	}
	string ferror = v__util__formated_error(kind, s, p->file_name, v__token__Token_position(&p->tok));
	eprintln(ferror);
	v_exit(1);
}

void v__parser__Parser_warn(v__parser__Parser* p, string s) { 
	string ferror = v__util__formated_error(tos3("warning:"), s, p->file_name, v__token__Token_position(&p->tok));
	eprintln(ferror);
}

v__ast__Ident v__parser__Parser_parse_ident(v__parser__Parser* p, bool is_c) { 
	v__token__Position pos = v__token__Token_position(&p->tok);
	string name = v__parser__Parser_check_name(p);
	if (string_eq(name, tos3("_"))) {
		return (v__ast__Ident){
			.name = tos3("_"),
			.kind = v__ast__IdentKind_blank_ident,
			.pos = pos,
			.value = tos3(""),
			.is_c = 0,
			.tok_kind = {0},
			.mod = tos3(""),
			.info = {0},
		};
	}
	if (p->expr_mod.len > 0) {
		name = _STR("%.*s.%.*s", p->expr_mod.len, p->expr_mod.str, name.len, name.str);
	}
	v__ast__Ident ident = (v__ast__Ident){
		.kind = v__ast__IdentKind_unresolved,
		.name = name,
		.is_c = is_c,
		.mod = p->mod,
		.pos = pos,
		.value = tos3(""),
		.tok_kind = {0},
		.info = {0},
	};
	return ident;
}

v__ast__StructInit v__parser__Parser_struct_init(v__parser__Parser* p, bool short_syntax) { 
	v__table__Type typ = (short_syntax ? _const_v__table__void_type : v__parser__Parser_parse_type(p));
	p->expr_mod = tos3("");
	if (!short_syntax) {
		v__parser__Parser_check(p, v__token__Kind_lcbr);
	}
	array_string field_names = new_array(0, 0, sizeof(string));
	array_v__ast__Expr exprs = new_array(0, 0, sizeof(v__ast__Expr));
	int i = 0;
	bool is_short_syntax = !(p->peek_tok.kind == v__token__Kind_colon || p->tok.kind == v__token__Kind_rcbr);
	while (p->tok.kind != v__token__Kind_rcbr) {
		v__parser__Parser_check_comment(p);
		string field_name = tos3("");
		if (is_short_syntax) {
			v__ast__Expr expr = v__parser__Parser_expr(p, 0);
			_PUSH(&exprs, (expr), tmp4, v__ast__Expr);
		} else {
			field_name = v__parser__Parser_check_name(p);
			_PUSH(&field_names, (field_name), tmp5, string);
		}
		if (!is_short_syntax) {
			v__parser__Parser_check(p, v__token__Kind_colon);
			v__ast__Expr expr = v__parser__Parser_expr(p, 0);
			_PUSH(&exprs, (expr), tmp7, v__ast__Expr);
		}
		i++;
		if (p->tok.kind == v__token__Kind_comma) {
			v__parser__Parser_check(p, v__token__Kind_comma);
		}
		v__parser__Parser_check_comment(p);
	}
	v__ast__StructInit node = (v__ast__StructInit){
		.typ = typ,
		.exprs = exprs,
		.fields = field_names,
		.pos = v__token__Token_position(&p->tok),
		.expr_types = new_array(0, 1, sizeof(v__table__Type)),
		.expected_types = new_array(0, 1, sizeof(v__table__Type)),
	};
	if (!short_syntax) {
		v__parser__Parser_check(p, v__token__Kind_rcbr);
	}
	return node;
}

v__ast__Expr v__parser__Parser_name_expr(v__parser__Parser* p) { 
	v__ast__Expr node = (v__ast__Expr){
	0};
	bool is_c = string_eq(p->tok.lit, tos3("C"));
	string mod = tos3("");
	p->expr_mod = tos3("");
	if (string_eq(p->tok.lit, tos3("map")) && p->peek_tok.kind == v__token__Kind_lsbr) {
		v__table__Type map_type = v__parser__Parser_parse_map_type(p);
		return /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__MapInit[]) {(v__ast__MapInit){
			.typ = map_type,
			.pos = {0},
			.keys = new_array(0, 1, sizeof(v__ast__Expr)),
			.vals = new_array(0, 1, sizeof(v__ast__Expr)),
			.key_type = {0},
			.value_type = {0},
		}}, sizeof(v__ast__MapInit)), .typ = 188 /* v.ast.MapInit */};
	}
	if ((string_eq(p->tok.lit, tos3("r")) || string_eq(p->tok.lit, tos3("c"))) && p->peek_tok.kind == v__token__Kind_string) {
		return v__parser__Parser_string_expr(p);
	}
	bool known_var = v__ast__Scope_known_var(p->scope, p->tok.lit);
	if (p->peek_tok.kind == v__token__Kind_dot && !known_var && (is_c || v__parser__Parser_known_import(p, p->tok.lit) || string_eq(string_all_after(p->mod, tos3(".")), p->tok.lit))) {
		if (is_c) {
			mod = tos3("C");
		} else {
			mod = (*(string*)map_get3(p->imports, p->tok.lit, &(string[]){ tos3("") }));
		}
		v__parser__Parser_next(p);
		v__parser__Parser_check(p, v__token__Kind_dot);
		p->expr_mod = mod;
	}
	if (p->peek_tok.kind == v__token__Kind_lpar) {
		string name = p->tok.lit;
		if (mod.len > 0) {
			name = _STR("%.*s.%.*s", mod.len, mod.str, name.len, name.str);
		}
		string name_w_mod = v__parser__Parser_prepend_mod(p, name);
		if ((_IN_MAP(name, p->table->type_idxs) || _IN_MAP(name_w_mod, p->table->type_idxs)) && !((string_eq(name, tos3("C.stat")) || string_eq(name, tos3("C.sigaction"))))) {
			v__table__Type to_typ = v__parser__Parser_parse_type(p);
			if (p->is_amp) {
				to_typ = v__table__type_to_ptr(to_typ);
			}
			v__parser__Parser_check(p, v__token__Kind_lpar);
			v__ast__Expr expr = (v__ast__Expr){
			0};
			v__ast__Expr arg = (v__ast__Expr){
			0};
			bool has_arg = false;
			expr = v__parser__Parser_expr(p, 0);
			if (p->tok.kind == v__token__Kind_comma && v__table__type_idx(to_typ) == _const_v__table__string_type_idx) {
				v__parser__Parser_check(p, v__token__Kind_comma);
				arg = v__parser__Parser_expr(p, 0);
				has_arg = true;
			}
			v__parser__Parser_check(p, v__token__Kind_rpar);
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__CastExpr[]) {(v__ast__CastExpr){
				.typ = to_typ,
				.expr = expr,
				.arg = arg,
				.has_arg = has_arg,
				.expr_type = {0},
			}}, sizeof(v__ast__CastExpr)), .typ = 189 /* v.ast.CastExpr */};
			p->expr_mod = tos3("");
			return node;
		} else {
			v__ast__CallExpr x = v__parser__Parser_call_expr(p, is_c, mod);
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__CallExpr[]) {x}, sizeof(v__ast__CallExpr)), .typ = 156 /* v.ast.CallExpr */};
		}
	} else if (p->peek_tok.kind == v__token__Kind_lcbr && (byte_is_capital(string_at(p->tok.lit, 0)) || is_c || (p->builtin_mod && _IN(string, p->tok.lit, _const_v__table__builtin_type_names))) && ((p->tok.lit.len == 1 || p->tok.lit.len == 2) || !byte_is_capital(string_at(p->tok.lit, p->tok.lit.len - 1))) && !p->inside_match_case) {
		return /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__StructInit[]) {v__parser__Parser_struct_init(p, false)}, sizeof(v__ast__StructInit)), .typ = 186 /* v.ast.StructInit */};
	} else if (p->peek_tok.kind == v__token__Kind_dot && (byte_is_capital(string_at(p->tok.lit, 0)) && !known_var)) {
		string enum_name = v__parser__Parser_check_name(p);
		if (string_ne(mod, tos3(""))) {
			enum_name = string_add(string_add(mod, tos3(".")), enum_name);
		} else {
			enum_name = v__parser__Parser_prepend_mod(p, enum_name);
		}
		v__parser__Parser_check(p, v__token__Kind_dot);
		string val = v__parser__Parser_check_name(p);
		p->expr_mod = tos3("");
		return /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__EnumVal[]) {(v__ast__EnumVal){
			.enum_name = enum_name,
			.val = val,
			.pos = v__token__Token_position(&p->tok),
			.mod = mod,
			.typ = {0},
		}}, sizeof(v__ast__EnumVal)), .typ = 190 /* v.ast.EnumVal */};
	} else {
		v__ast__Ident ident = (v__ast__Ident){
			.value = tos3(""),
			.is_c = 0,
			.tok_kind = {0},
			.mod = tos3(""),
			.pos = {0},
			.name = tos3(""),
			.kind = {0},
			.info = {0},
		};
		ident = v__parser__Parser_parse_ident(p, is_c);
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__Ident[]) {ident}, sizeof(v__ast__Ident)), .typ = 185 /* v.ast.Ident */};
	}
	p->expr_mod = tos3("");
	return node;
}

v__ast__Expr v__parser__Parser_expr(v__parser__Parser* p, int precedence) { 
	v__table__Type typ = _const_v__table__void_type;
	v__ast__Expr node = (v__ast__Expr){
	0};
	if (p->tok.kind == v__token__Kind_name) {
		node = v__parser__Parser_name_expr(p);
	}
	else if (p->tok.kind == v__token__Kind_string) {
		node = v__parser__Parser_string_expr(p);
	}
	else if (p->tok.kind == v__token__Kind_dot) {
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__EnumVal[]) {v__parser__Parser_enum_val(p)}, sizeof(v__ast__EnumVal)), .typ = 190 /* v.ast.EnumVal */};
	}
	else if (p->tok.kind == v__token__Kind_chartoken) {
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__CharLiteral[]) {(v__ast__CharLiteral){
			.val = p->tok.lit,
		}}, sizeof(v__ast__CharLiteral)), .typ = 191 /* v.ast.CharLiteral */};
		v__parser__Parser_next(p);
	}
	else if (p->tok.kind == v__token__Kind_minus || p->tok.kind == v__token__Kind_amp || p->tok.kind == v__token__Kind_mul || p->tok.kind == v__token__Kind_not || p->tok.kind == v__token__Kind_bit_not) {
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__PrefixExpr[]) {v__parser__Parser_prefix_expr(p)}, sizeof(v__ast__PrefixExpr)), .typ = 200 /* v.ast.PrefixExpr */};
	}
	else if (p->tok.kind == v__token__Kind_key_true || p->tok.kind == v__token__Kind_key_false) {
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__BoolLiteral[]) {(v__ast__BoolLiteral){
			.val = p->tok.kind == v__token__Kind_key_true,
		}}, sizeof(v__ast__BoolLiteral)), .typ = 192 /* v.ast.BoolLiteral */};
		v__parser__Parser_next(p);
	}
	else if (p->tok.kind == v__token__Kind_key_match) {
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__MatchExpr[]) {v__parser__Parser_match_expr(p)}, sizeof(v__ast__MatchExpr)), .typ = 228 /* v.ast.MatchExpr */};
	}
	else if (p->tok.kind == v__token__Kind_number) {
		node = v__parser__Parser_parse_number_literal(p);
	}
	else if (p->tok.kind == v__token__Kind_lpar) {
		v__parser__Parser_check(p, v__token__Kind_lpar);
		node = v__parser__Parser_expr(p, 0);
		v__parser__Parser_check(p, v__token__Kind_rpar);
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__ParExpr[]) {(v__ast__ParExpr){
			.expr = node,
		}}, sizeof(v__ast__ParExpr)), .typ = 193 /* v.ast.ParExpr */};
	}
	else if (p->tok.kind == v__token__Kind_key_if) {
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__IfExpr[]) {v__parser__Parser_if_expr(p)}, sizeof(v__ast__IfExpr)), .typ = 206 /* v.ast.IfExpr */};
	}
	else if (p->tok.kind == v__token__Kind_lsbr) {
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__ArrayInit[]) {v__parser__Parser_array_init(p)}, sizeof(v__ast__ArrayInit)), .typ = 212 /* v.ast.ArrayInit */};
	}
	else if (p->tok.kind == v__token__Kind_key_none) {
		v__parser__Parser_next(p);
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__None[]) {(v__ast__None){
			.foo = 0,
		}}, sizeof(v__ast__None)), .typ = 194 /* v.ast.None */};
	}
	else if (p->tok.kind == v__token__Kind_key_sizeof) {
		v__parser__Parser_next(p);
		v__parser__Parser_check(p, v__token__Kind_lpar);
		if (p->tok.kind == v__token__Kind_amp) {
			v__parser__Parser_next(p);
		}
		if (string_eq(p->tok.lit, tos3("C"))) {
			v__parser__Parser_next(p);
			v__parser__Parser_check(p, v__token__Kind_dot);
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__SizeOf[]) {(v__ast__SizeOf){
				.type_name = v__parser__Parser_check_name(p),
				.typ = {0},
			}}, sizeof(v__ast__SizeOf)), .typ = 195 /* v.ast.SizeOf */};
		} else {
			v__table__Type sizeof_type = v__parser__Parser_parse_type(p);
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__SizeOf[]) {(v__ast__SizeOf){
				.typ = sizeof_type,
				.type_name = tos3(""),
			}}, sizeof(v__ast__SizeOf)), .typ = 195 /* v.ast.SizeOf */};
		}
		v__parser__Parser_check(p, v__token__Kind_rpar);
	}
	else if (p->tok.kind == v__token__Kind_key_typeof) {
		v__parser__Parser_next(p);
		v__parser__Parser_check(p, v__token__Kind_lpar);
		v__ast__Expr expr = v__parser__Parser_expr(p, 0);
		v__parser__Parser_check(p, v__token__Kind_rpar);
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__TypeOf[]) {(v__ast__TypeOf){
			.expr = expr,
			.expr_type = {0},
		}}, sizeof(v__ast__TypeOf)), .typ = 196 /* v.ast.TypeOf */};
	}
	else if (p->tok.kind == v__token__Kind_lcbr) {
		v__parser__Parser_next(p);
		if (p->tok.kind == v__token__Kind_string) {
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__MapInit[]) {v__parser__Parser_map_init(p)}, sizeof(v__ast__MapInit)), .typ = 188 /* v.ast.MapInit */};
		} else {
			if (p->peek_tok.kind == v__token__Kind_pipe) {
				node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__Assoc[]) {v__parser__Parser_assoc(p)}, sizeof(v__ast__Assoc)), .typ = 237 /* v.ast.Assoc */};
			} else if (p->peek_tok.kind == v__token__Kind_colon || p->tok.kind == v__token__Kind_rcbr) {
				node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__StructInit[]) {v__parser__Parser_struct_init(p, true)}, sizeof(v__ast__StructInit)), .typ = 186 /* v.ast.StructInit */};
			} else {
				v__parser__Parser_error(p, tos3("unexpected {"));
			}
		}
		v__parser__Parser_check(p, v__token__Kind_rcbr);
	}
	else {
		if (p->tok.kind == v__token__Kind_comment) {
			println(p->tok.lit);
		}
		v__parser__Parser_error(p, _STR("expr(): bad token `%.*s`", v__token__Kind_str(p->tok.kind).len, v__token__Kind_str(p->tok.kind).str));
	}
	;
	while (precedence < v__token__Token_precedence(p->tok)) {
		if (v__token__Kind_is_assign(p->tok.kind)) {
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__AssignExpr[]) {v__parser__Parser_assign_expr(p, node)}, sizeof(v__ast__AssignExpr)), .typ = 182 /* v.ast.AssignExpr */};
		} else if (p->tok.kind == v__token__Kind_dot) {
			node = v__parser__Parser_dot_expr(p, node);
		} else if (p->tok.kind == v__token__Kind_lsbr) {
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__IndexExpr[]) {v__parser__Parser_index_expr(p, node)}, sizeof(v__ast__IndexExpr)), .typ = 183 /* v.ast.IndexExpr */};
		} else if (p->tok.kind == v__token__Kind_key_as) {
			v__token__Position pos = v__token__Token_position(&p->tok);
			v__parser__Parser_next(p);
			typ = v__parser__Parser_parse_type(p);
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__AsCast[]) {(v__ast__AsCast){
				.expr = node,
				.typ = typ,
				.pos = pos,
				.expr_type = {0},
			}}, sizeof(v__ast__AsCast)), .typ = 197 /* v.ast.AsCast */};
		} else if (p->tok.kind == v__token__Kind_left_shift) {
			v__token__Token tok = p->tok;
			v__parser__Parser_next(p);
			v__ast__Expr right = v__parser__Parser_expr(p, precedence - 1);
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__InfixExpr[]) {(v__ast__InfixExpr){
				.left = node,
				.right = right,
				.op = tok.kind,
				.pos = v__token__Token_position(&tok),
				.left_type = {0},
				.right_type = {0},
			}}, sizeof(v__ast__InfixExpr)), .typ = 198 /* v.ast.InfixExpr */};
		} else if (v__token__Kind_is_infix(p->tok.kind)) {
			node = v__parser__Parser_infix_expr(p, node);
		} else if ((p->tok.kind == v__token__Kind_inc || p->tok.kind == v__token__Kind_dec)) {
			node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__PostfixExpr[]) {(v__ast__PostfixExpr){
				.op = p->tok.kind,
				.expr = node,
				.pos = v__token__Token_position(&p->tok),
			}}, sizeof(v__ast__PostfixExpr)), .typ = 199 /* v.ast.PostfixExpr */};
			v__parser__Parser_next(p);
		} else {
			return node;
		}
	}
	return node;
}

v__ast__PrefixExpr v__parser__Parser_prefix_expr(v__parser__Parser* p) { 
	v__token__Position pos = v__token__Token_position(&p->tok);
	v__token__Kind op = p->tok.kind;
	if (op == v__token__Kind_amp) {
		p->is_amp = true;
	}
	v__parser__Parser_next(p);
	v__ast__Expr right = v__parser__Parser_expr(p, 1);
	p->is_amp = false;
	return (v__ast__PrefixExpr){
		.op = op,
		.right = right,
		.pos = pos,
	};
}

v__ast__IndexExpr v__parser__Parser_index_expr(v__parser__Parser* p, v__ast__Expr left) { 
	v__parser__Parser_next(p);
	bool has_low = true;
	if (p->tok.kind == v__token__Kind_dotdot) {
		has_low = false;
		v__parser__Parser_next(p);
		v__ast__Expr high = v__parser__Parser_expr(p, 0);
		v__parser__Parser_check(p, v__token__Kind_rsbr);
		return (v__ast__IndexExpr){
			.left = left,
			.pos = v__token__Token_position(&p->tok),
			.index = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__RangeExpr[]) {(v__ast__RangeExpr){
			.low = (v__ast__Expr){
		0},
			.high = high,
			.has_high = true,
			.has_low = 0,
		}}, sizeof(v__ast__RangeExpr)), .typ = 201 /* v.ast.RangeExpr */},
			.left_type = {0},
			.is_setter = 0,
		};
	}
	v__ast__Expr expr = v__parser__Parser_expr(p, 0);
	bool has_high = false;
	if (p->tok.kind == v__token__Kind_dotdot) {
		v__parser__Parser_check(p, v__token__Kind_dotdot);
		v__ast__Expr high = (v__ast__Expr){
		0};
		if (p->tok.kind != v__token__Kind_rsbr) {
			has_high = true;
			high = v__parser__Parser_expr(p, 0);
		}
		v__parser__Parser_check(p, v__token__Kind_rsbr);
		return (v__ast__IndexExpr){
			.left = left,
			.pos = v__token__Token_position(&p->tok),
			.index = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__RangeExpr[]) {(v__ast__RangeExpr){
			.low = expr,
			.high = high,
			.has_high = has_high,
			.has_low = has_low,
		}}, sizeof(v__ast__RangeExpr)), .typ = 201 /* v.ast.RangeExpr */},
			.left_type = {0},
			.is_setter = 0,
		};
	}
	v__parser__Parser_check(p, v__token__Kind_rsbr);
	return (v__ast__IndexExpr){
		.left = left,
		.index = expr,
		.pos = v__token__Token_position(&p->tok),
		.left_type = {0},
		.is_setter = 0,
	};
}

void v__parser__Parser_filter(v__parser__Parser* p) { 
	v__ast__Scope_register(p->scope, tos3("it"), /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
		.name = tos3("it"),
		.expr = {0},
		.is_mut = 0,
		.typ = {0},
		.pos = {0},
	}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
}

v__ast__Expr v__parser__Parser_dot_expr(v__parser__Parser* p, v__ast__Expr left) { 
	v__parser__Parser_next(p);
	string field_name = v__parser__Parser_check_name(p);
	bool is_filter = (string_eq(field_name, tos3("filter")) || string_eq(field_name, tos3("map")));
	if (is_filter) {
		v__parser__Parser_open_scope(p);
		v__parser__Parser_filter(p);
	}
	v__token__Position pos = v__token__Token_position(&p->tok);
	if (p->tok.kind == v__token__Kind_lpar) {
		v__parser__Parser_next(p);
		array_v__ast__CallArg args = v__parser__Parser_call_args(p);
		array_v__ast__Stmt or_stmts = new_array(0, 0, sizeof(v__ast__Stmt));
		if (p->tok.kind == v__token__Kind_key_orelse) {
			v__parser__Parser_next(p);
			v__parser__Parser_open_scope(p);
			v__ast__Scope_register(p->scope, tos3("errcode"), /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
				.name = tos3("errcode"),
				.typ = _const_v__table__int_type,
				.expr = {0},
				.is_mut = 0,
				.pos = {0},
			}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
			v__ast__Scope_register(p->scope, tos3("err"), /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
				.name = tos3("err"),
				.typ = _const_v__table__string_type,
				.expr = {0},
				.is_mut = 0,
				.pos = {0},
			}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
			or_stmts = v__parser__Parser_parse_block_no_scope(p);
			v__parser__Parser_close_scope(p);
		}
		v__ast__CallExpr mcall_expr = (v__ast__CallExpr){
			.left = left,
			.name = field_name,
			.args = args,
			.pos = pos,
			.is_method = true,
			.or_block = (v__ast__OrExpr){
			.stmts = or_stmts,
		},
			.mod = tos3(""),
			.expected_arg_types = new_array(0, 1, sizeof(v__table__Type)),
			.is_c = 0,
			.left_type = {0},
			.receiver_type = {0},
			.return_type = {0},
		};
		v__ast__Expr node = (v__ast__Expr){
		0};
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__CallExpr[]) {mcall_expr}, sizeof(v__ast__CallExpr)), .typ = 156 /* v.ast.CallExpr */};
		if (is_filter) {
			v__parser__Parser_close_scope(p);
		}
		return node;
	}
	v__ast__SelectorExpr sel_expr = (v__ast__SelectorExpr){
		.expr = left,
		.field = field_name,
		.pos = v__token__Token_position(&p->tok),
		.expr_type = {0},
	};
	v__ast__Expr node = (v__ast__Expr){
	0};
	node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__SelectorExpr[]) {sel_expr}, sizeof(v__ast__SelectorExpr)), .typ = 202 /* v.ast.SelectorExpr */};
	if (is_filter) {
		v__parser__Parser_close_scope(p);
	}
	return node;
}

v__ast__Expr v__parser__Parser_infix_expr(v__parser__Parser* p, v__ast__Expr left) { 
	v__token__Kind op = p->tok.kind;
	int precedence = v__token__Token_precedence(p->tok);
	v__token__Position pos = v__token__Token_position(&p->tok);
	v__parser__Parser_next(p);
	v__ast__Expr right = (v__ast__Expr){
	0};
	right = v__parser__Parser_expr(p, precedence);
	v__ast__Expr expr = (v__ast__Expr){
	0};
	expr = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__InfixExpr[]) {(v__ast__InfixExpr){
		.left = left,
		.right = right,
		.op = op,
		.pos = pos,
		.left_type = {0},
		.right_type = {0},
	}}, sizeof(v__ast__InfixExpr)), .typ = 198 /* v.ast.InfixExpr */};
	return expr;
}

v__ast__EnumVal v__parser__Parser_enum_val(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_dot);
	string val = v__parser__Parser_check_name(p);
	return (v__ast__EnumVal){
		.val = val,
		.pos = v__token__Token_position(&p->tok),
		.enum_name = tos3(""),
		.mod = tos3(""),
		.typ = {0},
	};
}

v__ast__Stmt v__parser__Parser_for_statement(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_key_for);
	v__token__Position pos = v__token__Token_position(&p->tok);
	v__parser__Parser_open_scope(p);
	if (p->tok.kind == v__token__Kind_lcbr) {
		array_v__ast__Stmt stmts = v__parser__Parser_parse_block(p);
		v__parser__Parser_close_scope(p);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__ForStmt[]) {(v__ast__ForStmt){
			.stmts = stmts,
			.pos = pos,
			.is_inf = true,
			.cond = {0},
		}}, sizeof(v__ast__ForStmt)), .typ = 203 /* v.ast.ForStmt */};
	} else if (p->tok.kind == v__token__Kind_key_mut) {
		v__parser__Parser_error(p, tos3("`mut` is not required in for loops"));
	} else if ((p->peek_tok.kind == v__token__Kind_decl_assign || p->peek_tok.kind == v__token__Kind_assign || p->peek_tok.kind == v__token__Kind_semicolon) || p->tok.kind == v__token__Kind_semicolon) {
		v__ast__Stmt init = (v__ast__Stmt){
		0};
		v__ast__Expr cond = v__parser__Parser_new_true_expr(p);
		v__ast__Expr inc = (v__ast__Expr){
		0};
		bool has_init = false;
		if ((p->peek_tok.kind == v__token__Kind_assign || p->peek_tok.kind == v__token__Kind_decl_assign)) {
			init = v__parser__Parser_assign_stmt(p);
			has_init = true;
		} else if (p->tok.kind != v__token__Kind_semicolon) {
		}
		v__parser__Parser_check(p, v__token__Kind_semicolon);
		if (p->tok.kind != v__token__Kind_semicolon) {
			v__table__Type typ = _const_v__table__void_type;
			cond = v__parser__Parser_expr(p, 0);
		}
		v__parser__Parser_check(p, v__token__Kind_semicolon);
		if (p->tok.kind != v__token__Kind_lcbr) {
			inc = v__parser__Parser_expr(p, 0);
		}
		array_v__ast__Stmt stmts = v__parser__Parser_parse_block(p);
		v__parser__Parser_close_scope(p);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__ForCStmt[]) {(v__ast__ForCStmt){
			.stmts = stmts,
			.has_init = has_init,
			.init = init,
			.cond = cond,
			.inc = inc,
			.pos = pos,
		}}, sizeof(v__ast__ForCStmt)), .typ = 204 /* v.ast.ForCStmt */};
	} else if ((p->peek_tok.kind == v__token__Kind_key_in || p->peek_tok.kind == v__token__Kind_comma)) {
		string key_var_name = tos3("");
		string val_var_name = v__parser__Parser_check_name(p);
		if (p->tok.kind == v__token__Kind_comma) {
			v__parser__Parser_check(p, v__token__Kind_comma);
			key_var_name = val_var_name;
			val_var_name = v__parser__Parser_check_name(p);
			v__ast__Scope_register(p->scope, key_var_name, /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
				.name = key_var_name,
				.typ = _const_v__table__int_type,
				.expr = {0},
				.is_mut = 0,
				.pos = {0},
			}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
		}
		v__parser__Parser_check(p, v__token__Kind_key_in);
		v__ast__Expr cond = v__parser__Parser_expr(p, 0);
		v__ast__Expr high_expr = (v__ast__Expr){
		0};
		bool is_range = false;
		if (p->tok.kind == v__token__Kind_dotdot) {
			is_range = true;
			v__parser__Parser_check(p, v__token__Kind_dotdot);
			high_expr = v__parser__Parser_expr(p, 0);
			v__ast__Scope_register(p->scope, val_var_name, /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
				.name = val_var_name,
				.typ = _const_v__table__int_type,
				.expr = {0},
				.is_mut = 0,
				.pos = {0},
			}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
		} else {
			v__ast__Scope_register(p->scope, val_var_name, /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
				.name = val_var_name,
				.expr = {0},
				.is_mut = 0,
				.typ = {0},
				.pos = {0},
			}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
		}
		array_v__ast__Stmt stmts = v__parser__Parser_parse_block(p);
		v__parser__Parser_close_scope(p);
		return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__ForInStmt[]) {(v__ast__ForInStmt){
			.stmts = stmts,
			.cond = cond,
			.key_var = key_var_name,
			.val_var = val_var_name,
			.high = high_expr,
			.is_range = is_range,
			.pos = pos,
			.key_type = {0},
			.val_type = {0},
			.cond_type = {0},
			.kind = {0},
		}}, sizeof(v__ast__ForInStmt)), .typ = 205 /* v.ast.ForInStmt */};
	}
	v__ast__Expr cond = v__parser__Parser_expr(p, 0);
	array_v__ast__Stmt stmts = v__parser__Parser_parse_block(p);
	v__parser__Parser_close_scope(p);
	return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__ForStmt[]) {(v__ast__ForStmt){
		.cond = cond,
		.stmts = stmts,
		.pos = pos,
		.is_inf = 0,
	}}, sizeof(v__ast__ForStmt)), .typ = 203 /* v.ast.ForStmt */};
}

v__ast__IfExpr v__parser__Parser_if_expr(v__parser__Parser* p) { 
	p->inside_if = true;
	v__token__Position pos = v__token__Token_position(&p->tok);
	array_v__ast__IfBranch branches = new_array(0, 0, sizeof(v__ast__IfBranch));
	bool has_else = false;
	while ((p->tok.kind == v__token__Kind_key_if || p->tok.kind == v__token__Kind_key_else)) {
		v__token__Position branch_pos = v__token__Token_position(&p->tok);
		if (p->tok.kind == v__token__Kind_key_if) {
			v__parser__Parser_check(p, v__token__Kind_key_if);
		} else {
			v__parser__Parser_check(p, v__token__Kind_key_else);
			if (p->tok.kind == v__token__Kind_key_if) {
				v__parser__Parser_check(p, v__token__Kind_key_if);
			} else {
				has_else = true;
				_PUSH(&branches, ((v__ast__IfBranch){
					.stmts = v__parser__Parser_parse_block(p),
					.pos = branch_pos,
					.cond = {0},
				}), tmp3, v__ast__IfBranch);
				break;
			}
		}
		v__ast__Expr cond = (v__ast__Expr){
		0};
		bool is_or = false;
		if (p->peek_tok.kind == v__token__Kind_decl_assign) {
			is_or = true;
			v__parser__Parser_open_scope(p);
			string var_name = v__parser__Parser_check_name(p);
			v__parser__Parser_check(p, v__token__Kind_decl_assign);
			v__ast__Expr expr = v__parser__Parser_expr(p, 0);
			v__ast__Scope_register(p->scope, var_name, /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
				.name = var_name,
				.expr = expr,
				.is_mut = 0,
				.typ = {0},
				.pos = {0},
			}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
			cond = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__IfGuardExpr[]) {(v__ast__IfGuardExpr){
				.var_name = var_name,
				.expr = expr,
				.expr_type = {0},
			}}, sizeof(v__ast__IfGuardExpr)), .typ = 209 /* v.ast.IfGuardExpr */};
		} else {
			cond = v__parser__Parser_expr(p, 0);
		}
		p->inside_if = false;
		array_v__ast__Stmt stmts = v__parser__Parser_parse_block(p);
		if (is_or) {
			v__parser__Parser_close_scope(p);
		}
		_PUSH(&branches, ((v__ast__IfBranch){
			.cond = cond,
			.stmts = stmts,
			.pos = branch_pos,
		}), tmp6, v__ast__IfBranch);
		if (p->tok.kind != v__token__Kind_key_else) {
			break;
		}
	}
	return (v__ast__IfExpr){
		.branches = branches,
		.pos = pos,
		.has_else = has_else,
		.tok_kind = {0},
		.left = {0},
		.is_expr = 0,
		.typ = {0},
	};
}

v__ast__Expr v__parser__Parser_string_expr(v__parser__Parser* p) { 
	bool is_raw = p->tok.kind == v__token__Kind_name && string_eq(p->tok.lit, tos3("r"));
	bool is_cstr = p->tok.kind == v__token__Kind_name && string_eq(p->tok.lit, tos3("c"));
	if (is_raw || is_cstr) {
		v__parser__Parser_next(p);
	}
	v__ast__Expr node = (v__ast__Expr){
	0};
	string val = p->tok.lit;
	node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__StringLiteral[]) {(v__ast__StringLiteral){
		.val = val,
		.is_raw = is_raw,
		.is_c = is_cstr,
	}}, sizeof(v__ast__StringLiteral)), .typ = 210 /* v.ast.StringLiteral */};
	if (p->peek_tok.kind != v__token__Kind_str_dollar) {
		v__parser__Parser_next(p);
		return node;
	}
	array_v__ast__Expr exprs = new_array(0, 0, sizeof(v__ast__Expr));
	array_string vals = new_array(0, 0, sizeof(string));
	array_string efmts = new_array(0, 0, sizeof(string));
	while (p->tok.kind == v__token__Kind_string) {
		_PUSH(&vals, (p->tok.lit), tmp3, string);
		v__parser__Parser_next(p);
		if (p->tok.kind != v__token__Kind_str_dollar) {
			continue;
		}
		v__parser__Parser_check(p, v__token__Kind_str_dollar);
		_PUSH(&exprs, (v__parser__Parser_expr(p, 0)), tmp5, v__ast__Expr);
		array_string efmt = new_array(0, 0, sizeof(string));
		if (p->tok.kind == v__token__Kind_colon) {
			_PUSH(&efmt, (tos3(":")), tmp7, string);
			v__parser__Parser_next(p);
		}
		if (p->tok.kind == v__token__Kind_minus) {
			_PUSH(&efmt, (tos3("-")), tmp9, string);
			v__parser__Parser_next(p);
		}
		if (p->tok.kind == v__token__Kind_number) {
			_PUSH(&efmt, (p->tok.lit), tmp11, string);
			v__parser__Parser_next(p);
			if (p->tok.lit.len == 1) {
				_PUSH(&efmt, (p->tok.lit), tmp13, string);
				v__parser__Parser_next(p);
			}
		}
		_PUSH(&efmts, (array_string_join(efmt, tos3(""))), tmp14, string);
	}
	node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__StringInterLiteral[]) {(v__ast__StringInterLiteral){
		.vals = vals,
		.exprs = exprs,
		.expr_fmts = efmts,
		.expr_types = new_array(0, 1, sizeof(v__table__Type)),
	}}, sizeof(v__ast__StringInterLiteral)), .typ = 211 /* v.ast.StringInterLiteral */};
	return node;
}

v__ast__ArrayInit v__parser__Parser_array_init(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_lsbr);
	v__table__Type array_type = _const_v__table__void_type;
	v__table__Type elem_type = _const_v__table__void_type;
	array_v__ast__Expr exprs = new_array(0, 0, sizeof(v__ast__Expr));
	if (p->tok.kind == v__token__Kind_rsbr) {
		int line_nr = p->tok.line_nr;
		v__parser__Parser_check(p, v__token__Kind_rsbr);
		if ((p->tok.kind == v__token__Kind_name || p->tok.kind == v__token__Kind_amp) && p->tok.line_nr == line_nr) {
			elem_type = v__parser__Parser_parse_type(p);
			int idx = v__table__Table_find_or_register_array(p->table, elem_type, 1);
			array_type = v__table__new_type(idx);
		}
	} else {
		for (int i = 0;
		p->tok.kind != v__token__Kind_rsbr; i++) {
			v__ast__Expr expr = v__parser__Parser_expr(p, 0);
			_PUSH(&exprs, (expr), tmp3, v__ast__Expr);
			if (p->tok.kind == v__token__Kind_comma) {
				v__parser__Parser_check(p, v__token__Kind_comma);
			}
		}
		int line_nr = p->tok.line_nr;
		v__parser__Parser_check(p, v__token__Kind_rsbr);
		if (exprs.len == 1 && (p->tok.kind == v__token__Kind_name || p->tok.kind == v__token__Kind_amp) && p->tok.line_nr == line_nr) {
			elem_type = v__parser__Parser_parse_type(p);
		}
	}
	if (p->tok.kind == v__token__Kind_not) {
		v__parser__Parser_next(p);
	}
	if (p->tok.kind == v__token__Kind_not) {
		v__parser__Parser_next(p);
	}
	return (v__ast__ArrayInit){
		.elem_type = elem_type,
		.typ = array_type,
		.exprs = exprs,
		.pos = v__token__Token_position(&p->tok),
	};
}

v__ast__MapInit v__parser__Parser_map_init(v__parser__Parser* p) { 
	v__token__Position pos = v__token__Token_position(&p->tok);
	array_v__ast__Expr keys = new_array(0, 0, sizeof(v__ast__Expr));
	array_v__ast__Expr vals = new_array(0, 0, sizeof(v__ast__Expr));
	while (p->tok.kind != v__token__Kind_rcbr && p->tok.kind != v__token__Kind_eof) {
		v__ast__Expr key = v__parser__Parser_expr(p, 0);
		_PUSH(&keys, (key), tmp1, v__ast__Expr);
		v__parser__Parser_check(p, v__token__Kind_colon);
		v__ast__Expr val = v__parser__Parser_expr(p, 0);
		_PUSH(&vals, (val), tmp2, v__ast__Expr);
		if (p->tok.kind == v__token__Kind_comma) {
			v__parser__Parser_next(p);
		}
	}
	return (v__ast__MapInit){
		.keys = keys,
		.vals = vals,
		.pos = pos,
		.typ = {0},
		.key_type = {0},
		.value_type = {0},
	};
}

v__ast__Expr v__parser__Parser_parse_number_literal(v__parser__Parser* p) { 
	string lit = p->tok.lit;
	v__ast__Expr node = (v__ast__Expr){
	0};
	if (string_contains(lit, tos3("."))) {
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__FloatLiteral[]) {(v__ast__FloatLiteral){
			.val = lit,
		}}, sizeof(v__ast__FloatLiteral)), .typ = 213 /* v.ast.FloatLiteral */};
	} else {
		node = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__IntegerLiteral[]) {(v__ast__IntegerLiteral){
			.val = lit,
		}}, sizeof(v__ast__IntegerLiteral)), .typ = 214 /* v.ast.IntegerLiteral */};
	}
	v__parser__Parser_next(p);
	return node;
}

v__ast__Module v__parser__Parser_module_decl(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_key_module);
	string mod = v__parser__Parser_check_name(p);
	string full_mod = v__table__Table_qualify_module(p->table, mod, p->file_name);
	p->mod = full_mod;
	return (v__ast__Module){
		.name = full_mod,
		.path = tos3(""),
		.expr = {0},
	};
}

v__ast__Import v__parser__Parser_parse_import(v__parser__Parser* p) { 
	v__token__Position pos = v__token__Token_position(&p->tok);
	string mod_name = v__parser__Parser_check_name(p);
	string mod_alias = mod_name;
	while (p->tok.kind == v__token__Kind_dot) {
		v__parser__Parser_check(p, v__token__Kind_dot);
		string submod_name = v__parser__Parser_check_name(p);
		mod_name = string_add(mod_name, string_add(tos3("."), submod_name));
		mod_alias = submod_name;
	}
	if (p->tok.kind == v__token__Kind_key_as) {
		v__parser__Parser_check(p, v__token__Kind_key_as);
		mod_alias = v__parser__Parser_check_name(p);
	}
	map_set(&p->imports, mod_alias, &(string[]) { mod_name });
	_PUSH(&p->table->imports, (mod_name), tmp2, string);
	return (v__ast__Import){
		.mod = mod_name,
		.alias = mod_alias,
		.pos = pos,
	};
}

array_v__ast__Import v__parser__Parser_import_stmt(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_key_import);
	array_v__ast__Import imports = new_array(0, 0, sizeof(v__ast__Import));
	if (p->tok.kind == v__token__Kind_lpar) {
		v__parser__Parser_check(p, v__token__Kind_lpar);
		while (p->tok.kind != v__token__Kind_rpar) {
			_PUSH(&imports, (v__parser__Parser_parse_import(p)), tmp2, v__ast__Import);
			if (p->tok.kind == v__token__Kind_comment) {
				v__parser__Parser_comment(p);
			}
		}
		v__parser__Parser_check(p, v__token__Kind_rpar);
	} else {
		_PUSH(&imports, (v__parser__Parser_parse_import(p)), tmp4, v__ast__Import);
	}
	return imports;
}

v__ast__ConstDecl v__parser__Parser_const_decl(v__parser__Parser* p) { 
	bool is_pub = p->tok.kind == v__token__Kind_key_pub;
	if (is_pub) {
		v__parser__Parser_next(p);
	}
	v__token__Position pos = v__token__Token_position(&p->tok);
	v__parser__Parser_check(p, v__token__Kind_key_const);
	v__parser__Parser_check(p, v__token__Kind_lpar);
	array_v__ast__ConstField fields = new_array(0, 0, sizeof(v__ast__ConstField));
	while (p->tok.kind != v__token__Kind_rpar) {
		if (p->tok.kind == v__token__Kind_comment) {
			v__parser__Parser_comment(p);
		}
		string name = v__parser__Parser_prepend_mod(p, v__parser__Parser_check_name(p));
		v__parser__Parser_check(p, v__token__Kind_assign);
		v__ast__Expr expr = v__parser__Parser_expr(p, 0);
		v__ast__ConstField field = (v__ast__ConstField){
			.name = name,
			.expr = expr,
			.pos = v__token__Token_position(&p->tok),
			.is_pub = 0,
			.typ = {0},
		};
		_PUSH(&fields, (field), tmp3, v__ast__ConstField);
		v__ast__Scope_register(p->global_scope, field.name, /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__ConstField[]) {field}, sizeof(v__ast__ConstField)), .typ = 216 /* v.ast.ConstField */});
	}
	v__parser__Parser_check(p, v__token__Kind_rpar);
	return (v__ast__ConstDecl){
		.pos = pos,
		.fields = fields,
		.is_pub = is_pub,
	};
}

v__ast__StructDecl v__parser__Parser_struct_decl(v__parser__Parser* p) { 
	bool is_pub = p->tok.kind == v__token__Kind_key_pub;
	if (is_pub) {
		v__parser__Parser_next(p);
	}
	if (p->tok.kind == v__token__Kind_key_struct) {
		v__parser__Parser_check(p, v__token__Kind_key_struct);
	} else {
		v__parser__Parser_check(p, v__token__Kind_key_union);
	}
	bool is_c = string_eq(p->tok.lit, tos3("C")) && p->peek_tok.kind == v__token__Kind_dot;
	if (is_c) {
		v__parser__Parser_next(p);
		v__parser__Parser_next(p);
	}
	bool is_typedef = string_eq(p->attr, tos3("typedef"));
	string name = v__parser__Parser_check_name(p);
	v__parser__Parser_check(p, v__token__Kind_lcbr);
	array_v__ast__StructField ast_fields = new_array(0, 0, sizeof(v__ast__StructField));
	array_v__table__Field fields = new_array(0, 0, sizeof(v__table__Field));
	int mut_pos = -1;
	int pub_pos = -1;
	int pub_mut_pos = -1;
	while (p->tok.kind != v__token__Kind_rcbr) {
		v__ast__Comment comment = (v__ast__Comment){
			.text = tos3(""),
			.is_multi = 0,
			.line_nr = 0,
			.pos = {0},
		};
		if (p->tok.kind == v__token__Kind_comment) {
			comment = v__parser__Parser_comment(p);
		}
		if (p->tok.kind == v__token__Kind_key_pub) {
			v__parser__Parser_check(p, v__token__Kind_key_pub);
			if (p->tok.kind == v__token__Kind_key_mut) {
				v__parser__Parser_check(p, v__token__Kind_key_mut);
				pub_mut_pos = fields.len;
			} else {
				pub_pos = fields.len;
			}
			v__parser__Parser_check(p, v__token__Kind_colon);
		} else if (p->tok.kind == v__token__Kind_key_mut) {
			v__parser__Parser_check(p, v__token__Kind_key_mut);
			v__parser__Parser_check(p, v__token__Kind_colon);
			mut_pos = fields.len;
		} else if (p->tok.kind == v__token__Kind_key_global) {
			v__parser__Parser_check(p, v__token__Kind_key_global);
			v__parser__Parser_check(p, v__token__Kind_colon);
		}
		string field_name = v__parser__Parser_check_name(p);
		v__token__Position field_pos = v__token__Token_position(&p->tok);
		v__table__Type typ = v__parser__Parser_parse_type(p);
		v__ast__Expr default_expr = (v__ast__Expr){
		0};
		if (p->tok.kind == v__token__Kind_assign) {
			v__parser__Parser_next(p);
			default_expr = v__parser__Parser_expr(p, 0);
		}
		if (p->tok.kind == v__token__Kind_comment) {
			comment = v__parser__Parser_comment(p);
		}
		_PUSH(&ast_fields, ((v__ast__StructField){
			.name = field_name,
			.pos = field_pos,
			.typ = typ,
			.comment = comment,
			.default_expr = {0},
		}), tmp9, v__ast__StructField);
		_PUSH(&fields, ((v__table__Field){
			.name = field_name,
			.typ = typ,
		}), tmp10, v__table__Field);
	}
	v__parser__Parser_check(p, v__token__Kind_rcbr);
	if (is_c) {
		name = _STR("C.%.*s", name.len, name.str);
	} else {
		name = v__parser__Parser_prepend_mod(p, name);
	}
	v__table__TypeSymbol t = (v__table__TypeSymbol){
		.kind = v__table__Kind_struct_,
		.name = name,
		.info = /* sum type cast */ (v__table__TypeInfo) {.obj = memdup(&(v__table__Struct[]) {(v__table__Struct){
		.fields = fields,
		.is_typedef = is_typedef,
	}}, sizeof(v__table__Struct)), .typ = 101 /* v.table.Struct */},
		.parent_idx = 0,
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	};
	int ret = 0;
	if (p->builtin_mod && _IN(string, t.name, _const_v__table__builtin_type_names)) {
		ret = v__table__Table_register_builtin_type_symbol(p->table, t);
	} else {
		ret = v__table__Table_register_type_symbol(p->table, t);
	}
	if (ret == -1) {
		v__parser__Parser_error(p, _STR("cannot register type `%.*s`, another type with this name exists", name.len, name.str));
	}
	p->expr_mod = tos3("");
	return (v__ast__StructDecl){
		.name = name,
		.is_pub = is_pub,
		.fields = ast_fields,
		.pos = v__token__Token_position(&p->tok),
		.mut_pos = mut_pos,
		.pub_pos = pub_pos,
		.pub_mut_pos = pub_mut_pos,
		.is_c = is_c,
	};
}

v__ast__InterfaceDecl v__parser__Parser_interface_decl(v__parser__Parser* p) { 
	bool is_pub = p->tok.kind == v__token__Kind_key_pub;
	if (is_pub) {
		v__parser__Parser_next(p);
	}
	v__parser__Parser_next(p);
	string interface_name = v__parser__Parser_check_name(p);
	v__parser__Parser_check(p, v__token__Kind_lcbr);
	array_string field_names = new_array(0, 0, sizeof(string));
	while (p->tok.kind != v__token__Kind_rcbr && p->tok.kind != v__token__Kind_eof) {
		int line_nr = p->tok.line_nr;
		string name = v__parser__Parser_check_name(p);
		_PUSH(&field_names, (name), tmp2, string);
		v__parser__Parser_fn_args(p);
		if (p->tok.kind == v__token__Kind_name && p->tok.line_nr == line_nr) {
			v__parser__Parser_parse_type(p);
		}
	}
	v__parser__Parser_check(p, v__token__Kind_rcbr);
	return (v__ast__InterfaceDecl){
		.name = interface_name,
		.field_names = field_names,
	};
}

v__ast__Return v__parser__Parser_return_stmt(v__parser__Parser* p) { 
	v__parser__Parser_next(p);
	array_v__ast__Expr exprs = new_array(0, 0, sizeof(v__ast__Expr));
	if (p->tok.kind == v__token__Kind_rcbr) {
		return (v__ast__Return){
			.pos = v__token__Token_position(&p->tok),
			.exprs = new_array(0, 1, sizeof(v__ast__Expr)),
			.types = new_array(0, 1, sizeof(v__table__Type)),
		};
	}
	while (1) {
		v__ast__Expr expr = v__parser__Parser_expr(p, 0);
		_PUSH(&exprs, (expr), tmp2, v__ast__Expr);
		if (p->tok.kind == v__token__Kind_comma) {
			v__parser__Parser_check(p, v__token__Kind_comma);
		} else {
			break;
		}
	}
	v__ast__Return stmt = (v__ast__Return){
		.exprs = exprs,
		.pos = v__token__Token_position(&p->tok),
		.types = new_array(0, 1, sizeof(v__table__Type)),
	};
	return stmt;
}

array_v__ast__Ident v__parser__Parser_parse_assign_lhs(v__parser__Parser* p) { 
	array_v__ast__Ident idents = new_array(0, 0, sizeof(v__ast__Ident));
	while (1) {
		bool is_mut = p->tok.kind == v__token__Kind_key_mut;
		if (is_mut) {
			v__parser__Parser_check(p, v__token__Kind_key_mut);
		}
		bool is_static = p->tok.kind == v__token__Kind_key_static;
		if (is_static) {
			v__parser__Parser_check(p, v__token__Kind_key_static);
		}
		v__ast__Ident ident = v__parser__Parser_parse_ident(p, false);
		ident.info = /* sum type cast */ (v__ast__IdentInfo) {.obj = memdup(&(v__ast__IdentVar[]) {(v__ast__IdentVar){
			.is_mut = is_mut,
			.is_static = is_static,
			.typ = {0},
			.is_optional = 0,
		}}, sizeof(v__ast__IdentVar)), .typ = 224 /* v.ast.IdentVar */};
		_PUSH(&idents, (ident), tmp3, v__ast__Ident);
		if (p->tok.kind == v__token__Kind_comma) {
			v__parser__Parser_check(p, v__token__Kind_comma);
		} else {
			break;
		}
	}
	return idents;
}

array_v__ast__Expr v__parser__Parser_parse_assign_rhs(v__parser__Parser* p) { 
	array_v__ast__Expr exprs = new_array(0, 0, sizeof(v__ast__Expr));
	while (1) {
		v__ast__Expr expr = v__parser__Parser_expr(p, 0);
		_PUSH(&exprs, (expr), tmp1, v__ast__Expr);
		if (p->tok.kind == v__token__Kind_comma) {
			v__parser__Parser_check(p, v__token__Kind_comma);
		} else {
			break;
		}
	}
	return exprs;
}

v__ast__Stmt v__parser__Parser_assign_stmt(v__parser__Parser* p) { 
	bool is_static = p->tok.kind == v__token__Kind_key_static;
	if (is_static) {
		v__parser__Parser_next(p);
	}
	array_v__ast__Ident idents = v__parser__Parser_parse_assign_lhs(p);
	v__token__Position pos = v__token__Token_position(&p->tok);
	v__token__Kind op = p->tok.kind;
	v__parser__Parser_next(p);
	array_v__ast__Expr exprs = v__parser__Parser_parse_assign_rhs(p);
	bool is_decl = op == v__token__Kind_decl_assign;
	// FOR IN
	for (int i = 0; i < idents.
	len; i++) {	v__ast__Ident ident = ((v__ast__Ident*)idents.
	data)[i];bool known_var = v__ast__Scope_known_var(p->scope, ident.name);
		if (!is_decl && !known_var) {
			v__parser__Parser_error(p, _STR("unknown variable `%.*s`", ident.name.len, ident.name.str));
		}
		if (is_decl && ident.kind != v__ast__IdentKind_blank_ident) {
			if (string_starts_with(ident.name, tos3("__"))) {
				v__parser__Parser_error(p, tos3("variable names cannot start with `__`"));
			}
			if (v__ast__Scope_known_var(p->scope, ident.name)) {
				v__parser__Parser_error(p, _STR("redefinition of `%.*s`", ident.name.len, ident.name.str));
			}
			if (idents.len == exprs.len) {
				v__ast__Scope_register(p->scope, ident.name, /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
					.name = ident.name,
					.expr = (*(v__ast__Expr*)array_get(exprs, i)),
					.is_mut = 0,
					.typ = {0},
					.pos = {0},
				}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
			} else {
				v__ast__Scope_register(p->scope, ident.name, /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
					.name = ident.name,
					.expr = {0},
					.is_mut = 0,
					.typ = {0},
					.pos = {0},
				}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
			}
		}
	}
	return /* sum type cast */ (v__ast__Stmt) {.obj = memdup(&(v__ast__AssignStmt[]) {(v__ast__AssignStmt){
		.left = idents,
		.right = exprs,
		.op = op,
		.pos = pos,
		.is_static = is_static,
		.left_types = new_array(0, 1, sizeof(v__table__Type)),
		.right_types = new_array(0, 1, sizeof(v__table__Type)),
	}}, sizeof(v__ast__AssignStmt)), .typ = 225 /* v.ast.AssignStmt */};
}

v__ast__HashStmt v__parser__Parser_hash(v__parser__Parser* p) { 
	string val = p->tok.lit;
	v__parser__Parser_next(p);
	return (v__ast__HashStmt){
		.val = val,
	};
}

v__ast__GlobalDecl v__parser__Parser_global_decl(v__parser__Parser* p) { 
	if (!p->pref->translated && !p->pref->is_live && !p->builtin_mod && !p->pref->building_v && string_ne(p->mod, tos3("ui")) && string_ne(p->mod, tos3("gg2")) && string_ne(p->mod, tos3("uiold")) && !string_contains(os__getwd(), tos3("/volt")) && !p->pref->enable_globals) {
		v__parser__Parser_error(p, tos3("use `v --enable-globals ...` to enable globals"));
	}
	v__parser__Parser_next(p);
	string name = v__parser__Parser_check_name(p);
	v__table__Type typ = v__parser__Parser_parse_type(p);
	if (p->tok.kind == v__token__Kind_assign) {
		v__parser__Parser_next(p);
		v__parser__Parser_expr(p, 0);
	}
	v__ast__GlobalDecl glob = (v__ast__GlobalDecl){
		.name = name,
		.typ = typ,
		.expr = {0},
	};
	v__ast__Scope_register(p->global_scope, name, /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__GlobalDecl[]) {glob}, sizeof(v__ast__GlobalDecl)), .typ = 227 /* v.ast.GlobalDecl */});
	return glob;
}

v__ast__MatchExpr v__parser__Parser_match_expr(v__parser__Parser* p) { 
	v__parser__Parser_check(p, v__token__Kind_key_match);
	v__token__Position pos = v__token__Token_position(&p->tok);
	bool is_mut = p->tok.kind == v__token__Kind_key_mut;
	bool is_sum_type = false;
	if (is_mut) {
		v__parser__Parser_next(p);
	}
	v__ast__Expr cond = v__parser__Parser_expr(p, 0);
	v__parser__Parser_check(p, v__token__Kind_lcbr);
	array_v__ast__MatchBranch branches = new_array(0, 0, sizeof(v__ast__MatchBranch));
	bool have_final_else = false;
	while (1) {
		array_v__ast__Expr exprs = new_array(0, 0, sizeof(v__ast__Expr));
		v__token__Position branch_pos = v__token__Token_position(&p->tok);
		v__parser__Parser_open_scope(p);
		if (p->tok.kind == v__token__Kind_key_else) {
			have_final_else = true;
			v__parser__Parser_next(p);
		} else if (p->tok.kind == v__token__Kind_name && (_IN(string, p->tok.lit, _const_v__table__builtin_type_names) || byte_is_capital(string_at(p->tok.lit, 0)) || p->peek_tok.kind == v__token__Kind_dot)) {
			v__table__Type typ = v__parser__Parser_parse_type(p);
			v__ast__Type x = (v__ast__Type){
				.typ = typ,
			};
			v__ast__Expr expr = (v__ast__Expr){
			0};
			expr = /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__Type[]) {x}, sizeof(v__ast__Type)), .typ = 231 /* v.ast.Type */};
			_PUSH(&exprs, (expr), tmp3, v__ast__Expr);
			v__ast__Scope_register(p->scope, tos3("it"), /* sum type cast */ (v__ast__ScopeObject) {.obj = memdup(&(v__ast__Var[]) {(v__ast__Var){
				.name = tos3("it"),
				.typ = v__table__type_to_ptr(typ),
				.expr = {0},
				.is_mut = 0,
				.pos = {0},
			}}, sizeof(v__ast__Var)), .typ = 157 /* v.ast.Var */});
			if (p->tok.kind == v__token__Kind_comma) {
				v__parser__Parser_next(p);
				v__parser__Parser_parse_type(p);
			}
			is_sum_type = true;
		} else {
			while (1) {
				p->inside_match_case = true;
				v__ast__Expr expr = v__parser__Parser_expr(p, 0);
				p->inside_match_case = false;
				_PUSH(&exprs, (expr), tmp5, v__ast__Expr);
				if (p->tok.kind != v__token__Kind_comma) {
					break;
				}
				v__parser__Parser_check(p, v__token__Kind_comma);
			}
		}
		array_v__ast__Stmt stmts = v__parser__Parser_parse_block(p);
		_PUSH(&branches, ((v__ast__MatchBranch){
			.exprs = exprs,
			.stmts = stmts,
			.pos = branch_pos,
		}), tmp7, v__ast__MatchBranch);
		v__parser__Parser_close_scope(p);
		if (p->tok.kind == v__token__Kind_rcbr) {
			break;
		}
	}
	if (!have_final_else) {
		v__parser__Parser_error(p, tos3("match must be exhaustive"));
	}
	v__parser__Parser_check(p, v__token__Kind_rcbr);
	return (v__ast__MatchExpr){
		.branches = branches,
		.cond = cond,
		.is_sum_type = is_sum_type,
		.pos = pos,
		.tok_kind = {0},
		.is_expr = 0,
		.return_type = {0},
		.cond_type = {0},
		.expected_type = {0},
	};
}

v__ast__EnumDecl v__parser__Parser_enum_decl(v__parser__Parser* p) { 
	bool is_pub = p->tok.kind == v__token__Kind_key_pub;
	if (is_pub) {
		v__parser__Parser_next(p);
	}
	v__parser__Parser_check(p, v__token__Kind_key_enum);
	string name = v__parser__Parser_prepend_mod(p, v__parser__Parser_check_name(p));
	v__parser__Parser_check(p, v__token__Kind_lcbr);
	array_string vals = new_array(0, 0, sizeof(string));
	array_v__ast__Expr default_exprs = new_array(0, 0, sizeof(v__ast__Expr));
	while (p->tok.kind != v__token__Kind_eof && p->tok.kind != v__token__Kind_rcbr) {
		string val = v__parser__Parser_check_name(p);
		_PUSH(&vals, (val), tmp2, string);
		if (p->tok.kind == v__token__Kind_assign) {
			v__parser__Parser_next(p);
			_PUSH(&default_exprs, (v__parser__Parser_expr(p, 0)), tmp4, v__ast__Expr);
		}
		if (p->tok.kind == v__token__Kind_comma) {
			v__parser__Parser_next(p);
		}
	}
	v__parser__Parser_check(p, v__token__Kind_rcbr);
	v__table__Table_register_type_symbol(p->table, (v__table__TypeSymbol){
		.kind = v__table__Kind_enum_,
		.name = name,
		.info = /* sum type cast */ (v__table__TypeInfo) {.obj = memdup(&(v__table__Enum[]) {(v__table__Enum){
		.vals = vals,
	}}, sizeof(v__table__Enum)), .typ = 104 /* v.table.Enum */},
		.parent_idx = 0,
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	return (v__ast__EnumDecl){
		.name = name,
		.is_pub = is_pub,
		.vals = vals,
		.default_exprs = default_exprs,
	};
}

v__ast__TypeDecl v__parser__Parser_type_decl(v__parser__Parser* p) { 
	bool is_pub = p->tok.kind == v__token__Kind_key_pub;
	if (is_pub) {
		v__parser__Parser_next(p);
	}
	v__parser__Parser_check(p, v__token__Kind_key_type);
	string name = v__parser__Parser_check_name(p);
	array_v__table__Type sum_variants = new_array(0, 0, sizeof(v__table__Type));
	if (p->tok.kind == v__token__Kind_assign) {
		v__parser__Parser_next(p);
		while (1) {
			v__table__Type variant_type = v__parser__Parser_parse_type(p);
			_PUSH(&sum_variants, (variant_type), tmp3, v__table__Type);
			if (p->tok.kind != v__token__Kind_pipe) {
				break;
			}
			v__parser__Parser_check(p, v__token__Kind_pipe);
		}
		v__table__Table_register_type_symbol(p->table, (v__table__TypeSymbol){
			.kind = v__table__Kind_sum_type,
			.name = v__parser__Parser_prepend_mod(p, name),
			.info = /* sum type cast */ (v__table__TypeInfo) {.obj = memdup(&(v__table__SumType[]) {(v__table__SumType){
			.variants = sum_variants,
		}}, sizeof(v__table__SumType)), .typ = 105 /* v.table.SumType */},
			.parent_idx = 0,
			.methods = new_array(0, 1, sizeof(v__table__Fn)),
		});
		return /* sum type cast */ (v__ast__TypeDecl) {.obj = memdup(&(v__ast__SumTypeDecl[]) {(v__ast__SumTypeDecl){
			.name = name,
			.is_pub = is_pub,
			.sub_types = sum_variants,
		}}, sizeof(v__ast__SumTypeDecl)), .typ = 234 /* v.ast.SumTypeDecl */};
	}
	if (p->tok.kind == v__token__Kind_key_fn) {
		string fn_name = v__parser__Parser_prepend_mod(p, name);
		v__table__Type fn_type = v__parser__Parser_parse_fn_type(p, fn_name);
		return /* sum type cast */ (v__ast__TypeDecl) {.obj = memdup(&(v__ast__FnTypeDecl[]) {(v__ast__FnTypeDecl){
			.name = fn_name,
			.is_pub = is_pub,
			.typ = fn_type,
		}}, sizeof(v__ast__FnTypeDecl)), .typ = 235 /* v.ast.FnTypeDecl */};
	}
	v__table__Type parent_type = v__parser__Parser_parse_type(p);
	int pid = v__table__type_idx(parent_type);
	v__table__Table_register_type_symbol(p->table, (v__table__TypeSymbol){
		.kind = v__table__Kind_alias,
		.name = v__parser__Parser_prepend_mod(p, name),
		.parent_idx = pid,
		.info = /* sum type cast */ (v__table__TypeInfo) {.obj = memdup(&(v__table__Alias[]) {(v__table__Alias){
		.foo = tos3(""),
	}}, sizeof(v__table__Alias)), .typ = 103 /* v.table.Alias */},
		.methods = new_array(0, 1, sizeof(v__table__Fn)),
	});
	return /* sum type cast */ (v__ast__TypeDecl) {.obj = memdup(&(v__ast__AliasTypeDecl[]) {(v__ast__AliasTypeDecl){
		.name = name,
		.is_pub = is_pub,
		.parent_type = parent_type,
	}}, sizeof(v__ast__AliasTypeDecl)), .typ = 236 /* v.ast.AliasTypeDecl */};
}

v__ast__Assoc v__parser__Parser_assoc(v__parser__Parser* p) { 
	string var_name = v__parser__Parser_check_name(p);
	v__token__Position pos = v__token__Token_position(&p->tok);
	Option_v__ast__Var var = v__ast__Scope_find_var(p->scope, var_name);
	if (!var.ok) {
		string err = var.v_error;
		int errcode = var.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		v__parser__Parser_error(p, _STR("unknown variable `%.*s`", var_name.len, var_name.str));
		return (v__ast__Assoc){
			.var_name = tos3(""),
			.fields = new_array(0, 1, sizeof(string)),
			.exprs = new_array(0, 1, sizeof(v__ast__Expr)),
			.pos = {0},
			.typ = {0},
		};
	};
	array_string fields = new_array(0, 0, sizeof(string));
	array_v__ast__Expr vals = new_array(0, 0, sizeof(v__ast__Expr));
	v__parser__Parser_check(p, v__token__Kind_pipe);
	while (1) {
		_PUSH(&fields, (v__parser__Parser_check_name(p)), tmp1, string);
		v__parser__Parser_check(p, v__token__Kind_colon);
		v__ast__Expr expr = v__parser__Parser_expr(p, 0);
		_PUSH(&vals, (expr), tmp2, v__ast__Expr);
		if (p->tok.kind == v__token__Kind_comma) {
			v__parser__Parser_check(p, v__token__Kind_comma);
		}
		if (p->tok.kind == v__token__Kind_rcbr) {
			break;
		}
	}
	return (v__ast__Assoc){
		.var_name = var_name,
		.fields = fields,
		.exprs = vals,
		.pos = pos,
		.typ = /*opt*/(*(v__ast__Var*)var.data).typ,
	};
}

v__ast__Expr v__parser__Parser_new_true_expr(v__parser__Parser* p) { 
	return /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__BoolLiteral[]) {(v__ast__BoolLiteral){
		.val = true,
	}}, sizeof(v__ast__BoolLiteral)), .typ = 192 /* v.ast.BoolLiteral */};
}

void v__parser__verror(string s) { 
	v__util__verror(tos3("parser error"), s);
}

// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
// TypeDecl
v__ast__IdentVar v__ast__Ident_var_info(v__ast__Ident* i) { 
	if (i->info.typ == 224 /* v.ast.IdentVar */) {
		v__ast__IdentVar* it = (v__ast__IdentVar*)i->info.obj; // ST it
		return *it;
	}
	else {
		v_panic(tos3("Ident.var_info(): info is not IdentVar variant"));
	}
	;
}

//[inline]
bool v__ast__expr_is_blank_ident(v__ast__Expr expr) { 
	if (expr.typ == 185 /* v.ast.Ident */) {
		v__ast__Ident* it = (v__ast__Ident*)expr.obj; // ST it
		return it->kind == v__ast__IdentKind_blank_ident;
	}
	else {
		return false;
	}
	;
}

//[inline]
bool v__ast__expr_is_call(v__ast__Expr expr) { 
	return (expr.typ == 156 /* v.ast.CallExpr */) ? true : false;
}

v__ast__Scope* v__ast__new_scope(v__ast__Scope* parent, int start_pos) { 
	return (v__ast__Scope*)memdup(&(v__ast__Scope){	.parent = parent,
		.start_pos = start_pos,
		.children = new_array(0, 1, sizeof(v__ast__Scope)),
		.end_pos = 0,
		.objects = new_map(1, sizeof(v__ast__ScopeObject)),
	}, sizeof(v__ast__Scope));
}

Option_multi_return_v__ast__ScopeObject_v__ast__Scope v__ast__Scope_find_with_scope(v__ast__Scope* s, string name) { 
	v__ast__Scope* sc = s;
	while (1) {
		if (_IN_MAP(name, sc->objects)) {
			return opt_ok(& (multi_return_v__ast__ScopeObject_v__ast__Scope []) { (multi_return_v__ast__ScopeObject_v__ast__Scope){.arg0=(*(v__ast__ScopeObject*)map_get3(sc->objects, name, &(v__ast__ScopeObject[]){ {0} })),.arg1=sc} }, sizeof(multi_return_v__ast__ScopeObject_v__ast__Scope));
		}
		if (isnil(sc->parent)) {
			break;
		}
		sc = sc->parent;
	}
	return opt_none();
}

Option_v__ast__ScopeObject v__ast__Scope_find(v__ast__Scope* s, string name) { 
	for (v__ast__Scope* sc = s;
	true; sc = sc->parent) {
		if (_IN_MAP(name, sc->objects)) {
			return opt_ok(& (v__ast__ScopeObject []) { (*(v__ast__ScopeObject*)map_get3(sc->objects, name, &(v__ast__ScopeObject[]){ {0} })) }, sizeof(v__ast__ScopeObject));
		}
		if (isnil(sc->parent)) {
			break;
		}
	}
	return opt_none();
}

bool v__ast__Scope_is_known(v__ast__Scope* s, string name) { 
	bool tmp1;
	{ /* if guard */ Option_v__ast__ScopeObject _ = v__ast__Scope_find(s, name);
	if ((tmp1 = _.ok)) {
		return true;
	}}
	return false;
}

Option_v__ast__Var v__ast__Scope_find_var(v__ast__Scope* s, string name) { 
	bool tmp1;
	{ /* if guard */ Option_v__ast__ScopeObject obj = v__ast__Scope_find(s, name);
	if ((tmp1 = obj.ok)) {
		if (/*opt*/(*(v__ast__ScopeObject*)obj.data).typ == 157 /* v.ast.Var */) {
			v__ast__Var* it = (v__ast__Var*)/*opt*/(*(v__ast__ScopeObject*)obj.data).obj; // ST it
			return opt_ok(& (v__ast__Var []) { *it }, sizeof(v__ast__Var));
		}
		else {
		}
		;
	}}
	return opt_none();
}

bool v__ast__Scope_known_var(v__ast__Scope* s, string name) { 
	bool tmp1;
	{ /* if guard */ Option_v__ast__Var _ = v__ast__Scope_find_var(s, name);
	if ((tmp1 = _.ok)) {
		return true;
	}}
	return false;
}

void v__ast__Scope_update_var_type(v__ast__Scope* s, string name, v__table__Type typ) { 
	if ((*(v__ast__ScopeObject*)map_get3(s->objects, name, &(v__ast__ScopeObject[]){ {0} })).typ == 157 /* v.ast.Var */) {
		v__ast__Var* it = (v__ast__Var*)(*(v__ast__ScopeObject*)map_get3(s->objects, name, &(v__ast__ScopeObject[]){ {0} })).obj; // ST it
		if (it->typ == typ) {
			return;
		}
		it->typ = typ;
	}
	else {
	}
	;
}

void v__ast__Scope_register(v__ast__Scope* s, string name, v__ast__ScopeObject obj) { 
	bool tmp1;
	{ /* if guard */ Option_v__ast__ScopeObject x = v__ast__Scope_find(s, name);
	if ((tmp1 = x.ok)) {
		return;
	}}
	map_set(&s->objects, name, &(v__ast__ScopeObject[]) { obj });
}

v__ast__Scope* v__ast__Scope_outermost(v__ast__Scope* s) { 
	v__ast__Scope* sc = s;
	while (!isnil(sc->parent)) {
		sc = sc->parent;
	}
	return sc;
}

v__ast__Scope* v__ast__Scope_innermost(v__ast__Scope* s, int pos) { 
	if (v__ast__Scope_contains(s, pos)) {
		int first = 0;
		int last = s->children.len - 1;
		int middle = last / 2;
		while (first <= last) {
			v__ast__Scope* s1 = (*(v__ast__Scope**)array_get(s->children, middle));
			if (s1->end_pos < pos) {
				first = middle + 1;
			} else if (v__ast__Scope_contains(s1, pos)) {
				return v__ast__Scope_innermost(s1, pos);
			} else {
				last = middle - 1;
			}
			middle = (first + last) / 2;
			if (first > last) {
				break;
			}
		}
		return s;
	}
	return s;
}

//[inline]
bool v__ast__Scope_contains(v__ast__Scope* s, int pos) { 
	return pos >= s->start_pos && pos <= s->end_pos;
}

string v__ast__Scope_show(v__ast__Scope* sc, int depth, int max_depth) { 
	string out = tos3("");
	string indent = tos3("");
	for (int tmp1 = 0; tmp1 < depth * 4; tmp1++) { 
		int _ = tmp1;
		indent = string_add(indent, tos3(" "));
	}
	out = string_add(out, _STR("%.*s# %d - %d\n", indent.len, indent.str, sc->start_pos, sc->end_pos));
	// FOR IN
	array_string keys_tmp2 = map_keys(&sc->objects);
	for (int tmp3 = 0; tmp3 < keys_tmp2.len; tmp3++) {
		string _ = ((string*)keys_tmp2.data)[tmp3];
		v__ast__ScopeObject obj = (*(v__ast__ScopeObject*)map_get3(sc->objects, _, &(v__ast__ScopeObject[]){ {0} }));
		if (obj.typ == 216 /* v.ast.ConstField */) {
			v__ast__ConstField* it = (v__ast__ConstField*)obj.obj; // ST it
			out = string_add(out, _STR("%.*s  * const: %.*s - %d\n", indent.len, indent.str, it->name.len, it->name.str, it->typ));
		}
		else if (obj.typ == 157 /* v.ast.Var */) {
			v__ast__Var* it = (v__ast__Var*)obj.obj; // ST it
			out = string_add(out, _STR("%.*s  * var: %.*s - %d\n", indent.len, indent.str, it->name.len, it->name.str, it->typ));
		}
		else {
		}
		;
	}
	if (max_depth == 0 || depth < max_depth - 1) {
		// FOR IN
		for (int i = 0; i < sc->children.
		len; i++) {	v__ast__Scope* _ = ((v__ast__Scope**)sc->children.
		data)[i];out = string_add(out, v__ast__Scope_show((*(v__ast__Scope**)array_get(sc->children, i)), depth + 1, max_depth));
		}
	}
	return out;
}

string v__ast__Scope_str(v__ast__Scope* sc) { 
	return v__ast__Scope_show(sc, 0, 0);
}

string v__ast__FnDecl_str(v__ast__FnDecl* node, v__table__Table* t) { 
	strings__Builder f = strings__new_builder(30);
	if (node->is_pub) {
		strings__Builder_write(&f, tos3("pub "));
	}
	string receiver = tos3("");
	if (node->is_method) {
		v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(t, node->receiver.typ);
		string name = string_after(sym->name, tos3("."));
		string m = (node->rec_mut ? tos3("mut ") : tos3(""));
		receiver = _STR("(%.*s %.*s%.*s) ", node->receiver.name.len, node->receiver.name.str, m.len, m.str, name.len, name.str);
	}
	string name = string_after(node->name, tos3("."));
	if (node->is_c) {
		name = _STR("C.%.*s", name.len, name.str);
	}
	strings__Builder_write(&f, _STR("fn %.*s%.*s(", receiver.len, receiver.str, name.len, name.str));
	// FOR IN
	for (int i = 0; i < node->args.
	len; i++) {	v__table__Arg arg = ((v__table__Arg*)node->args.
	data)[i];if (node->is_method && i == 0) {
			continue;
		}
		bool is_last_arg = i == node->args.len - 1;
		bool should_add_type = is_last_arg || (*(v__table__Arg*)array_get(node->args, i + 1)).typ != arg.typ || (node->is_variadic && i == node->args.len - 2);
		strings__Builder_write(&f, arg.name);
		if (should_add_type) {
			if (node->is_variadic && is_last_arg) {
				strings__Builder_write(&f, string_add(tos3(" ..."), v__table__Table_type_to_str(t, arg.typ)));
			} else {
				strings__Builder_write(&f, string_add(tos3(" "), v__table__Table_type_to_str(t, arg.typ)));
			}
		}
		if (!is_last_arg) {
			strings__Builder_write(&f, tos3(", "));
		}
	}
	strings__Builder_write(&f, tos3(")"));
	if (node->return_type != _const_v__table__void_type) {
		strings__Builder_write(&f, string_add(tos3(" "), v__table__Table_type_to_str(t, node->return_type)));
	}
	return strings__Builder_str(&f);
}

string v__ast__Expr_str(v__ast__Expr x) { 
	if (x.typ == 185 /* v.ast.Ident */) {
		v__ast__Ident* it = (v__ast__Ident*)x.obj; // ST it
		return it->name;
	}
	else if (x.typ == 198 /* v.ast.InfixExpr */) {
		v__ast__InfixExpr* it = (v__ast__InfixExpr*)x.obj; // ST it
		return _STR("(%.*s %.*s %.*s)", v__ast__Expr_str(it->left).len, v__ast__Expr_str(it->left).str, v__token__Kind_str(it->op).len, v__token__Kind_str(it->op).str, v__ast__Expr_str(it->right).len, v__ast__Expr_str(it->right).str);
	}
	else if (x.typ == 200 /* v.ast.PrefixExpr */) {
		v__ast__PrefixExpr* it = (v__ast__PrefixExpr*)x.obj; // ST it
		return string_add(v__token__Kind_str(it->op), v__ast__Expr_str(it->right));
	}
	else if (x.typ == 214 /* v.ast.IntegerLiteral */) {
		v__ast__IntegerLiteral* it = (v__ast__IntegerLiteral*)x.obj; // ST it
		return it->val;
	}
	else if (x.typ == 210 /* v.ast.StringLiteral */) {
		v__ast__StringLiteral* it = (v__ast__StringLiteral*)x.obj; // ST it
		return _STR("\"%.*s\"", it->val.len, it->val.str);
	}
	else if (x.typ == 211 /* v.ast.StringInterLiteral */) {
		v__ast__StringInterLiteral* it = (v__ast__StringInterLiteral*)x.obj; // ST it
		array_string res = new_array(0, 0, sizeof(string));
		_PUSH(&res, (tos3("'")), tmp2, string);
		// FOR IN
		for (int i = 0; i < it->vals.
		len; i++) {	string val = ((string*)it->vals.
		data)[i];_PUSH(&res, (val), tmp3, string);
			if (i >= it->exprs.len) {
				continue;
			}
			_PUSH(&res, (tos3("$")), tmp5, string);
			if ((*(string*)array_get(it->expr_fmts, i)).len > 0) {
				_PUSH(&res, (tos3("{")), tmp7, string);
				_PUSH(&res, (v__ast__Expr_str((*(v__ast__Expr*)array_get(it->exprs, i)))), tmp8, string);
				_PUSH(&res, ((*(string*)array_get(it->expr_fmts, i))), tmp9, string);
				_PUSH(&res, (tos3("}")), tmp10, string);
			} else {
				_PUSH(&res, (v__ast__Expr_str((*(v__ast__Expr*)array_get(it->exprs, i)))), tmp11, string);
			}
		}
		_PUSH(&res, (tos3("'")), tmp12, string);
		return array_string_join(res, tos3(""));
	}
	else if (x.typ == 192 /* v.ast.BoolLiteral */) {
		v__ast__BoolLiteral* it = (v__ast__BoolLiteral*)x.obj; // ST it
		return bool_str(it->val);
	}
	else if (x.typ == 193 /* v.ast.ParExpr */) {
		v__ast__ParExpr* it = (v__ast__ParExpr*)x.obj; // ST it
		return v__ast__Expr_str(it->expr);
	}
	else if (x.typ == 183 /* v.ast.IndexExpr */) {
		v__ast__IndexExpr* it = (v__ast__IndexExpr*)x.obj; // ST it
		return _STR("%.*s[%.*s]", v__ast__Expr_str(it->left).len, v__ast__Expr_str(it->left).str, v__ast__Expr_str(it->index).len, v__ast__Expr_str(it->index).str);
	}
	else {
		return _STR("[unhandled expr type %.*s]", tos3( /* v.ast.Expr */ v_typeof_sumtype_181( (x).typ )).len, tos3( /* v.ast.Expr */ v_typeof_sumtype_181( (x).typ )).str);
	}
	;
}

string v__ast__Stmt_str(v__ast__Stmt node) { 
	if (node.typ == 225 /* v.ast.AssignStmt */) {
		v__ast__AssignStmt* it = (v__ast__AssignStmt*)node.obj; // ST it
		string out = tos3("");
		// FOR IN
		for (int i = 0; i < it->left.
		len; i++) {	v__ast__Ident ident = ((v__ast__Ident*)it->left.
		data)[i];v__ast__IdentVar var_info = v__ast__Ident_var_info(&ident);
			if (var_info.is_mut) {
				out = string_add(out, tos3("mut "));
			}
			out = string_add(out, ident.name);
			if (i < it->left.len - 1) {
				out = string_add(out, tos3(","));
			}
		}
		out = string_add(out, _STR(" %.*s ", v__token__Kind_str(it->op).len, v__token__Kind_str(it->op).str));
		// FOR IN
		for (int i = 0; i < it->right.
		len; i++) {	v__ast__Expr val = ((v__ast__Expr*)it->right.
		data)[i];out = string_add(out, v__ast__Expr_str(val));
			if (i < it->right.len - 1) {
				out = string_add(out, tos3(","));
			}
		}
		return out;
	}
	else if (node.typ == 180 /* v.ast.ExprStmt */) {
		v__ast__ExprStmt* it = (v__ast__ExprStmt*)node.obj; // ST it
		return v__ast__Expr_str(it->expr);
	}
	else if (node.typ == 126 /* v.ast.FnDecl */) {
		v__ast__FnDecl* it = (v__ast__FnDecl*)node.obj; // ST it
		return _STR("fn %.*s() { %d stmts }", it->name.len, it->name.str, it->stmts.len);
	}
	else {
		return _STR("[unhandled stmt str type: %.*s ]", tos3( /* v.ast.Stmt */ v_typeof_sumtype_123( (node).typ )).len, tos3( /* v.ast.Stmt */ v_typeof_sumtype_123( (node).typ )).str);
	}
	;
}

//[inline]
v__token__Position v__token__Token_position(v__token__Token* tok) { 
	return (v__token__Position){
		.line_nr = tok->line_nr - 1,
		.pos = tok->pos,
	};
}

map_string_int v__token__build_keys() { 
	map_string_int res = new_map(1, sizeof(int));
	for (int tmp1 = ((int)(v__token__Kind_keyword_beg)) + 1; tmp1 < ((int)(v__token__Kind_keyword_end)); tmp1++) { 
		int t = tmp1;
		string key = (*(string*)array_get(_const_v__token__token_str, t));
		map_set(&res, key, &(int[]) { t });
	}
	return res;
}

array_string v__token__build_token_str() { 
	array_string s = array_repeat(new_array_from_c_array(1, 1, sizeof(string), (string[1]){	
	tos3(""), 
}), _const_v__token__nr_tokens);
	array_set(&s, v__token__Kind_eof, &(string[]) { tos3("eof") });
	array_set(&s, v__token__Kind_name, &(string[]) { tos3("name") });
	array_set(&s, v__token__Kind_number, &(string[]) { tos3("number") });
	array_set(&s, v__token__Kind_string, &(string[]) { tos3("STR") });
	array_set(&s, v__token__Kind_chartoken, &(string[]) { tos3("char") });
	array_set(&s, v__token__Kind_plus, &(string[]) { tos3("+") });
	array_set(&s, v__token__Kind_minus, &(string[]) { tos3("-") });
	array_set(&s, v__token__Kind_mul, &(string[]) { tos3("*") });
	array_set(&s, v__token__Kind_div, &(string[]) { tos3("/") });
	array_set(&s, v__token__Kind_mod, &(string[]) { tos3("%") });
	array_set(&s, v__token__Kind_xor, &(string[]) { tos3("^") });
	array_set(&s, v__token__Kind_bit_not, &(string[]) { tos3("~") });
	array_set(&s, v__token__Kind_pipe, &(string[]) { tos3("|") });
	array_set(&s, v__token__Kind_hash, &(string[]) { tos3("#") });
	array_set(&s, v__token__Kind_amp, &(string[]) { tos3("&") });
	array_set(&s, v__token__Kind_inc, &(string[]) { tos3("++") });
	array_set(&s, v__token__Kind_dec, &(string[]) { tos3("--") });
	array_set(&s, v__token__Kind_and, &(string[]) { tos3("&&") });
	array_set(&s, v__token__Kind_logical_or, &(string[]) { tos3("||") });
	array_set(&s, v__token__Kind_not, &(string[]) { tos3("!") });
	array_set(&s, v__token__Kind_dot, &(string[]) { tos3(".") });
	array_set(&s, v__token__Kind_dotdot, &(string[]) { tos3("..") });
	array_set(&s, v__token__Kind_ellipsis, &(string[]) { tos3("...") });
	array_set(&s, v__token__Kind_comma, &(string[]) { tos3(",") });
	array_set(&s, v__token__Kind_semicolon, &(string[]) { tos3(";") });
	array_set(&s, v__token__Kind_colon, &(string[]) { tos3(":") });
	array_set(&s, v__token__Kind_arrow, &(string[]) { tos3("=>") });
	array_set(&s, v__token__Kind_assign, &(string[]) { tos3("=") });
	array_set(&s, v__token__Kind_decl_assign, &(string[]) { tos3(":=") });
	array_set(&s, v__token__Kind_plus_assign, &(string[]) { tos3("+=") });
	array_set(&s, v__token__Kind_minus_assign, &(string[]) { tos3("-=") });
	array_set(&s, v__token__Kind_mult_assign, &(string[]) { tos3("*=") });
	array_set(&s, v__token__Kind_div_assign, &(string[]) { tos3("/=") });
	array_set(&s, v__token__Kind_xor_assign, &(string[]) { tos3("^=") });
	array_set(&s, v__token__Kind_mod_assign, &(string[]) { tos3("%=") });
	array_set(&s, v__token__Kind_or_assign, &(string[]) { tos3("|=") });
	array_set(&s, v__token__Kind_and_assign, &(string[]) { tos3("&=") });
	array_set(&s, v__token__Kind_right_shift_assign, &(string[]) { tos3(">>=") });
	array_set(&s, v__token__Kind_left_shift_assign, &(string[]) { tos3("<<=") });
	array_set(&s, v__token__Kind_lcbr, &(string[]) { tos3("{") });
	array_set(&s, v__token__Kind_rcbr, &(string[]) { tos3("}") });
	array_set(&s, v__token__Kind_lpar, &(string[]) { tos3("(") });
	array_set(&s, v__token__Kind_rpar, &(string[]) { tos3(")") });
	array_set(&s, v__token__Kind_lsbr, &(string[]) { tos3("[") });
	array_set(&s, v__token__Kind_rsbr, &(string[]) { tos3("]") });
	array_set(&s, v__token__Kind_eq, &(string[]) { tos3("==") });
	array_set(&s, v__token__Kind_ne, &(string[]) { tos3("!=") });
	array_set(&s, v__token__Kind_gt, &(string[]) { tos3(">") });
	array_set(&s, v__token__Kind_lt, &(string[]) { tos3("<") });
	array_set(&s, v__token__Kind_ge, &(string[]) { tos3(">=") });
	array_set(&s, v__token__Kind_le, &(string[]) { tos3("<=") });
	array_set(&s, v__token__Kind_question, &(string[]) { tos3("?") });
	array_set(&s, v__token__Kind_left_shift, &(string[]) { tos3("<<") });
	array_set(&s, v__token__Kind_right_shift, &(string[]) { tos3(">>") });
	array_set(&s, v__token__Kind_comment, &(string[]) { tos3("// comment") });
	array_set(&s, v__token__Kind_nl, &(string[]) { tos3("NLL") });
	array_set(&s, v__token__Kind_dollar, &(string[]) { tos3("$") });
	array_set(&s, v__token__Kind_str_dollar, &(string[]) { tos3("$2") });
	array_set(&s, v__token__Kind_key_assert, &(string[]) { tos3("assert") });
	array_set(&s, v__token__Kind_key_struct, &(string[]) { tos3("struct") });
	array_set(&s, v__token__Kind_key_if, &(string[]) { tos3("if") });
	array_set(&s, v__token__Kind_key_else, &(string[]) { tos3("else") });
	array_set(&s, v__token__Kind_key_asm, &(string[]) { tos3("asm") });
	array_set(&s, v__token__Kind_key_return, &(string[]) { tos3("return") });
	array_set(&s, v__token__Kind_key_module, &(string[]) { tos3("module") });
	array_set(&s, v__token__Kind_key_sizeof, &(string[]) { tos3("sizeof") });
	array_set(&s, v__token__Kind_key_go, &(string[]) { tos3("go") });
	array_set(&s, v__token__Kind_key_goto, &(string[]) { tos3("goto") });
	array_set(&s, v__token__Kind_key_const, &(string[]) { tos3("const") });
	array_set(&s, v__token__Kind_key_mut, &(string[]) { tos3("mut") });
	array_set(&s, v__token__Kind_key_type, &(string[]) { tos3("type") });
	array_set(&s, v__token__Kind_key_for, &(string[]) { tos3("for") });
	array_set(&s, v__token__Kind_key_switch, &(string[]) { tos3("switch") });
	array_set(&s, v__token__Kind_key_fn, &(string[]) { tos3("fn") });
	array_set(&s, v__token__Kind_key_true, &(string[]) { tos3("true") });
	array_set(&s, v__token__Kind_key_false, &(string[]) { tos3("false") });
	array_set(&s, v__token__Kind_key_continue, &(string[]) { tos3("continue") });
	array_set(&s, v__token__Kind_key_break, &(string[]) { tos3("break") });
	array_set(&s, v__token__Kind_key_import, &(string[]) { tos3("import") });
	array_set(&s, v__token__Kind_key_embed, &(string[]) { tos3("embed") });
	array_set(&s, v__token__Kind_key_unsafe, &(string[]) { tos3("unsafe") });
	array_set(&s, v__token__Kind_key_typeof, &(string[]) { tos3("typeof") });
	array_set(&s, v__token__Kind_key_enum, &(string[]) { tos3("enum") });
	array_set(&s, v__token__Kind_key_interface, &(string[]) { tos3("interface") });
	array_set(&s, v__token__Kind_key_pub, &(string[]) { tos3("pub") });
	array_set(&s, v__token__Kind_key_import_const, &(string[]) { tos3("import_const") });
	array_set(&s, v__token__Kind_key_in, &(string[]) { tos3("in") });
	array_set(&s, v__token__Kind_key_atomic, &(string[]) { tos3("atomic") });
	array_set(&s, v__token__Kind_key_orelse, &(string[]) { tos3("or") });
	array_set(&s, v__token__Kind_key_global, &(string[]) { tos3("__global") });
	array_set(&s, v__token__Kind_key_union, &(string[]) { tos3("union") });
	array_set(&s, v__token__Kind_key_static, &(string[]) { tos3("static") });
	array_set(&s, v__token__Kind_key_as, &(string[]) { tos3("as") });
	array_set(&s, v__token__Kind_key_defer, &(string[]) { tos3("defer") });
	array_set(&s, v__token__Kind_key_match, &(string[]) { tos3("match") });
	array_set(&s, v__token__Kind_key_select, &(string[]) { tos3("select") });
	array_set(&s, v__token__Kind_key_none, &(string[]) { tos3("none") });
	array_set(&s, v__token__Kind_key_offsetof, &(string[]) { tos3("__offsetof") });
	return s;
}

v__token__Kind v__token__key_to_token(string key) { 
	v__token__Kind a = ((v__token__Kind)((*(int*)map_get3(_const_v__token__keywords, key, &(int[]){ 0 }))));
	return a;
}

bool v__token__is_key(string key) { 
	return ((int)(v__token__key_to_token(key))) > 0;
}

bool v__token__is_decl(v__token__Kind t) { 
	return (t == v__token__Kind_key_enum || t == v__token__Kind_key_interface || t == v__token__Kind_key_fn || t == v__token__Kind_key_struct || t == v__token__Kind_key_type || t == v__token__Kind_key_const || t == v__token__Kind_key_import_const || t == v__token__Kind_key_pub || t == v__token__Kind_eof);
}

bool v__token__Kind_is_assign(v__token__Kind t) { 
	return _IN(v__token__Kind, t, _const_v__token__assign_tokens);
}

bool array_v__token__Kind_contains(array_v__token__Kind t, v__token__Kind val) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < t.
	len; tmp1++) {	v__token__Kind tt = ((v__token__Kind*)t.
	data)[tmp1];if (tt == val) {
			return true;
		}
	}
	return false;
}

string v__token__Kind_str(v__token__Kind t) { 
	return (*(string*)array_get(_const_v__token__token_str, ((int)(t))));
}

string v__token__Token_str(v__token__Token t) { 
	return _STR("%.*s \"%.*s\"", v__token__Kind_str(t.kind).len, v__token__Kind_str(t.kind).str, t.lit.len, t.lit.str);
}

array_v__token__Precedence v__token__build_precedences() { 
	array_v__token__Precedence p = new_array(0, 0, sizeof(v__token__Precedence));
	p = make(100, 100, sizeof(v__token__Precedence));
	array_set(&p, v__token__Kind_assign, &(v__token__Precedence[]) { v__token__Precedence_assign });
	array_set(&p, v__token__Kind_eq, &(v__token__Precedence[]) { v__token__Precedence_eq });
	array_set(&p, v__token__Kind_ne, &(v__token__Precedence[]) { v__token__Precedence_eq });
	array_set(&p, v__token__Kind_lt, &(v__token__Precedence[]) { v__token__Precedence_eq });
	array_set(&p, v__token__Kind_gt, &(v__token__Precedence[]) { v__token__Precedence_eq });
	array_set(&p, v__token__Kind_le, &(v__token__Precedence[]) { v__token__Precedence_eq });
	array_set(&p, v__token__Kind_ge, &(v__token__Precedence[]) { v__token__Precedence_eq });
	array_set(&p, v__token__Kind_plus, &(v__token__Precedence[]) { v__token__Precedence_sum });
	array_set(&p, v__token__Kind_plus_assign, &(v__token__Precedence[]) { v__token__Precedence_sum });
	array_set(&p, v__token__Kind_minus, &(v__token__Precedence[]) { v__token__Precedence_sum });
	array_set(&p, v__token__Kind_minus_assign, &(v__token__Precedence[]) { v__token__Precedence_sum });
	array_set(&p, v__token__Kind_div, &(v__token__Precedence[]) { v__token__Precedence_product });
	array_set(&p, v__token__Kind_div_assign, &(v__token__Precedence[]) { v__token__Precedence_product });
	array_set(&p, v__token__Kind_mul, &(v__token__Precedence[]) { v__token__Precedence_product });
	array_set(&p, v__token__Kind_mult_assign, &(v__token__Precedence[]) { v__token__Precedence_product });
	array_set(&p, v__token__Kind_mod, &(v__token__Precedence[]) { v__token__Precedence_product });
	array_set(&p, v__token__Kind_and, &(v__token__Precedence[]) { v__token__Precedence_cond });
	array_set(&p, v__token__Kind_logical_or, &(v__token__Precedence[]) { v__token__Precedence_cond });
	array_set(&p, v__token__Kind_lpar, &(v__token__Precedence[]) { v__token__Precedence_call });
	array_set(&p, v__token__Kind_dot, &(v__token__Precedence[]) { v__token__Precedence_call });
	array_set(&p, v__token__Kind_lsbr, &(v__token__Precedence[]) { v__token__Precedence_index });
	return p;
}

int v__token__Token_precedence(v__token__Token tok) { 
	if (tok.kind == v__token__Kind_lsbr) {
		return ((int)(v__token__Precedence_index));
	}
	else if (tok.kind == v__token__Kind_dot) {
		return ((int)(v__token__Precedence_call));
	}
	else if (tok.kind == v__token__Kind_inc || tok.kind == v__token__Kind_dec) {
		return ((int)(v__token__Precedence_postfix));
	}
	else if (tok.kind == v__token__Kind_mul || tok.kind == v__token__Kind_div || tok.kind == v__token__Kind_mod || tok.kind == v__token__Kind_left_shift || tok.kind == v__token__Kind_right_shift || tok.kind == v__token__Kind_amp) {
		return ((int)(v__token__Precedence_product));
	}
	else if (tok.kind == v__token__Kind_plus || tok.kind == v__token__Kind_minus || tok.kind == v__token__Kind_pipe || tok.kind == v__token__Kind_xor) {
		return ((int)(v__token__Precedence_sum));
	}
	else if (tok.kind == v__token__Kind_eq || tok.kind == v__token__Kind_ne || tok.kind == v__token__Kind_lt || tok.kind == v__token__Kind_le || tok.kind == v__token__Kind_gt || tok.kind == v__token__Kind_ge) {
		return ((int)(v__token__Precedence_eq));
	}
	else if (tok.kind == v__token__Kind_assign || tok.kind == v__token__Kind_plus_assign || tok.kind == v__token__Kind_minus_assign || tok.kind == v__token__Kind_div_assign || tok.kind == v__token__Kind_mod_assign || tok.kind == v__token__Kind_or_assign || tok.kind == v__token__Kind_and_assign || tok.kind == v__token__Kind_left_shift_assign || tok.kind == v__token__Kind_right_shift_assign || tok.kind == v__token__Kind_mult_assign || tok.kind == v__token__Kind_xor_assign) {
		return ((int)(v__token__Precedence_assign));
	}
	else if (tok.kind == v__token__Kind_key_in || tok.kind == v__token__Kind_key_as) {
		return ((int)(v__token__Precedence_in_as));
	}
	else if (tok.kind == v__token__Kind_logical_or || tok.kind == v__token__Kind_and) {
		return ((int)(v__token__Precedence_cond));
	}
	else {
		return ((int)(v__token__Precedence_lowest));
	}
	;
}

bool v__token__Token_is_scalar(v__token__Token tok) { 
	return (tok.kind == v__token__Kind_number || tok.kind == v__token__Kind_string);
}

bool v__token__Token_is_unary(v__token__Token tok) { 
	return (tok.kind == v__token__Kind_plus || tok.kind == v__token__Kind_minus || tok.kind == v__token__Kind_not || tok.kind == v__token__Kind_bit_not || tok.kind == v__token__Kind_mul || tok.kind == v__token__Kind_amp);
}

bool v__token__Kind_is_relational(v__token__Kind tok) { 
	return (tok == v__token__Kind_lt || tok == v__token__Kind_le || tok == v__token__Kind_gt || tok == v__token__Kind_ge || tok == v__token__Kind_eq || tok == v__token__Kind_ne);
}

bool v__token__Kind_is_start_of_type(v__token__Kind k) { 
	return (k == v__token__Kind_name || k == v__token__Kind_lpar || k == v__token__Kind_amp || k == v__token__Kind_lsbr || k == v__token__Kind_question);
}

bool v__token__Kind_is_infix(v__token__Kind kind) { 
	return (kind == v__token__Kind_plus || kind == v__token__Kind_minus || kind == v__token__Kind_mod || kind == v__token__Kind_mul || kind == v__token__Kind_div || kind == v__token__Kind_eq || kind == v__token__Kind_ne || kind == v__token__Kind_gt || kind == v__token__Kind_lt || kind == v__token__Kind_key_in || kind == v__token__Kind_key_as || kind == v__token__Kind_ge || kind == v__token__Kind_le || kind == v__token__Kind_logical_or || kind == v__token__Kind_xor || kind == v__token__Kind_and || kind == v__token__Kind_dot || kind == v__token__Kind_pipe || kind == v__token__Kind_amp || kind == v__token__Kind_left_shift || kind == v__token__Kind_right_shift);
}

v__checker__Checker v__checker__new_checker(v__table__Table* table, v__pref__Preferences* pref) { 
	return (v__checker__Checker){
		.table = table,
		.pref = pref,
		.file = {0},
		.nr_errors = 0,
		.errors = new_array(0, 1, sizeof(string)),
		.error_lines = new_array(0, 1, sizeof(int)),
		.expected_type = {0},
		.fn_return_type = {0},
		.const_decl = tos3(""),
		.const_deps = new_array(0, 1, sizeof(string)),
	};
}

void v__checker__Checker_check(v__checker__Checker* c, v__ast__File ast_file) { 
	c->file = ast_file;
	// FOR IN
	for (int tmp1 = 0; tmp1 < ast_file.stmts.
	len; tmp1++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)ast_file.stmts.
	data)[tmp1];v__checker__Checker_stmt(c, stmt);
	}
}

array_string v__checker__Checker_check2(v__checker__Checker* c, v__ast__File ast_file) { 
	c->file = ast_file;
	// FOR IN
	for (int tmp1 = 0; tmp1 < ast_file.stmts.
	len; tmp1++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)ast_file.stmts.
	data)[tmp1];v__checker__Checker_stmt(c, stmt);
	}
	return c->errors;
}

void v__checker__Checker_check_files(v__checker__Checker* c, array_v__ast__File ast_files) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < ast_files.
	len; tmp1++) {	v__ast__File file = ((v__ast__File*)ast_files.
	data)[tmp1];v__checker__Checker_check(c, file);
	}
}

v__table__Type v__checker__Checker_struct_init(v__checker__Checker* c, v__ast__StructInit* struct_init) { 
	if (struct_init->typ == _const_v__table__void_type) {
		if (c->expected_type == _const_v__table__void_type) {
			v__checker__Checker_error(c, tos3("unexpected short struct syntax"), struct_init->pos);
			return _const_v__table__void_type;
		}
		struct_init->typ = c->expected_type;
	}
	v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(c->table, struct_init->typ);
	if (typ_sym->kind == v__table__Kind_placeholder) {
		v__checker__Checker_error(c, _STR("unknown struct: %.*s", typ_sym->name.len, typ_sym->name.str), struct_init->pos);
	}
	else if (typ_sym->kind == v__table__Kind_struct_ || typ_sym->kind == v__table__Kind_string || typ_sym->kind == v__table__Kind_array) {
		v__table__Struct info = /* as */ *(v__table__Struct*)typ_sym->info.obj;
		bool is_short_syntax = struct_init->fields.len == 0;
		if (struct_init->exprs.len > info.fields.len) {
			v__checker__Checker_error(c, tos3("too many fields"), struct_init->pos);
		}
		array_string inited_fields = new_array(0, 0, sizeof(string));
		// FOR IN
		for (int i = 0; i < struct_init->exprs.
		len; i++) {	v__ast__Expr expr = ((v__ast__Expr*)struct_init->exprs.
		data)[i];string field_name = (is_short_syntax ? (*(v__table__Field*)array_get(info.fields, i)).name : (*(string*)array_get(struct_init->fields, i)));
			v__table__Field field = (*(v__table__Field*)array_get(info.fields, i));
			_PUSH(&inited_fields, (field_name), tmp6, string);
			bool found_field = false;
			// FOR IN
			for (int tmp7 = 0; tmp7 < info.fields.
			len; tmp7++) {	v__table__Field f = ((v__table__Field*)info.fields.
			data)[tmp7];if (string_eq(f.name, field_name)) {
					field = f;
					found_field = true;
					break;
				}
			}
			if (!found_field) {
				v__checker__Checker_error(c, _STR("struct init: no such field `%.*s` for struct `%.*s`", field_name.len, field_name.str, typ_sym->name.len, typ_sym->name.str), struct_init->pos);
			}
			c->expected_type = field.typ;
			v__table__Type expr_type = v__checker__Checker_expr(c, expr);
			v__table__TypeSymbol* expr_type_sym = v__table__Table_get_type_symbol(c->table, expr_type);
			v__table__TypeSymbol* field_type_sym = v__table__Table_get_type_symbol(c->table, field.typ);
			if (!v__table__Table_check(c->table, expr_type, field.typ)) {
				v__checker__Checker_error(c, _STR("cannot assign `%.*s` as `%.*s` for field `%.*s`", expr_type_sym->name.len, expr_type_sym->name.str, field_type_sym->name.len, field_type_sym->name.str, field.name.len, field.name.str), struct_init->pos);
			}
			_PUSH(&struct_init->expr_types, (expr_type), tmp11, v__table__Type);
			_PUSH(&struct_init->expected_types, (field.typ), tmp12, v__table__Type);
		}
		// FOR IN
		for (int tmp13 = 0; tmp13 < info.fields.
		len; tmp13++) {	v__table__Field field = ((v__table__Field*)info.fields.
		data)[tmp13];if (_IN(string, field.name, inited_fields)) {
				continue;
			}
			if (v__table__type_is_ptr(field.typ)) {
				v__checker__Checker_warn(c, _STR("reference field `%.*s.%.*s` must be initialized", typ_sym->name.len, typ_sym->name.str, field.name.len, field.name.str), struct_init->pos);
			}
		}
	}
	else {
	}
	;
	return struct_init->typ;
}

v__table__Type v__checker__Checker_infix_expr(v__checker__Checker* c, v__ast__InfixExpr* infix_expr) { 
	v__table__Type left_type = v__checker__Checker_expr(c, infix_expr->left);
	infix_expr->left_type = left_type;
	c->expected_type = left_type;
	v__table__Type right_type = v__checker__Checker_expr(c, infix_expr->right);
	infix_expr->right_type = right_type;
	v__table__TypeSymbol* right = v__table__Table_get_type_symbol(c->table, right_type);
	if (infix_expr->op == v__token__Kind_key_in && !((right->kind == v__table__Kind_array || right->kind == v__table__Kind_map || right->kind == v__table__Kind_string))) {
		v__checker__Checker_error(c, tos3("infix expr: `in` can only be used with array/map/string."), infix_expr->pos);
	}
	if (!v__table__Table_check(c->table, right_type, left_type)) {
		v__table__TypeSymbol* left = v__table__Table_get_type_symbol(c->table, left_type);
		if (left->kind == v__table__Kind_array && infix_expr->op == v__token__Kind_left_shift) {
			return _const_v__table__void_type;
		}
		if ((right->kind == v__table__Kind_array || right->kind == v__table__Kind_map) && infix_expr->op == v__token__Kind_key_in) {
			return _const_v__table__bool_type;
		}
		if (left_type == _const_v__table__void_type || right_type == _const_v__table__void_type) {
			return _const_v__table__void_type;
		}
		v__checker__Checker_error(c, _STR("infix expr: cannot use `%.*s` (right) as `%.*s`", right->name.len, right->name.str, left->name.len, left->name.str), infix_expr->pos);
	}
	if (v__token__Kind_is_relational(infix_expr->op)) {
		return _const_v__table__bool_type;
	}
	return left_type;
}

void v__checker__Checker_assign_expr(v__checker__Checker* c, v__ast__AssignExpr* assign_expr) { 
	v__table__Type left_type = v__checker__Checker_expr(c, assign_expr->left);
	c->expected_type = left_type;
	assign_expr->left_type = left_type;
	v__table__Type right_type = v__checker__Checker_expr(c, assign_expr->val);
	assign_expr->right_type = right_type;
	if (v__ast__expr_is_blank_ident(assign_expr->left)) {
		return;
	}
	if (!v__table__Table_check(c->table, right_type, left_type)) {
		v__table__TypeSymbol* left_type_sym = v__table__Table_get_type_symbol(c->table, left_type);
		v__table__TypeSymbol* right_type_sym = v__table__Table_get_type_symbol(c->table, right_type);
		v__checker__Checker_error(c, _STR("cannot assign %.*s to %.*s", right_type_sym->name.len, right_type_sym->name.str, left_type_sym->name.len, left_type_sym->name.str), assign_expr->pos);
	}
}

v__table__Type v__checker__Checker_call_expr(v__checker__Checker* c, v__ast__CallExpr* call_expr) { 
	v__checker__Checker_stmts(c, call_expr->or_block.stmts);
	if (call_expr->is_method) {
		v__table__Type left_type = v__checker__Checker_expr(c, call_expr->left);
		call_expr->left_type = left_type;
		v__table__TypeSymbol* left_type_sym = v__table__Table_get_type_symbol(c->table, left_type);
		string method_name = call_expr->name;
		if (left_type_sym->kind == v__table__Kind_array && (string_eq(method_name, tos3("filter")) || string_eq(method_name, tos3("clone")) || string_eq(method_name, tos3("repeat")) || string_eq(method_name, tos3("reverse")) || string_eq(method_name, tos3("map")) || string_eq(method_name, tos3("slice")))) {
			if ((string_eq(method_name, tos3("filter")) || string_eq(method_name, tos3("map")))) {
				v__table__Array array_info = /* as */ *(v__table__Array*)left_type_sym->info.obj;
				v__ast__Scope* scope = v__ast__Scope_innermost(c->file.scope, call_expr->pos.pos);
				v__ast__Scope_update_var_type(scope, tos3("it"), array_info.elem_type);
			}
			// FOR IN
			for (int i = 0; i < call_expr->args.
			len; i++) {	v__ast__CallArg arg = ((v__ast__CallArg*)call_expr->args.
			data)[i];v__checker__Checker_expr(c, arg.expr);
			}
			call_expr->return_type = left_type;
			if (string_eq(method_name, tos3("clone"))) {
				call_expr->receiver_type = v__table__type_to_ptr(left_type);
			} else {
				call_expr->receiver_type = left_type;
			}
			return left_type;
		} else if (left_type_sym->kind == v__table__Kind_array && (string_eq(method_name, tos3("first")) || string_eq(method_name, tos3("last")))) {
			v__table__Array info = /* as */ *(v__table__Array*)left_type_sym->info.obj;
			call_expr->return_type = info.elem_type;
			call_expr->receiver_type = left_type;
			return info.elem_type;
		}
		bool tmp5;
		{ /* if guard */ Option_v__table__Fn method = v__table__Table_type_find_method(c->table, left_type_sym, method_name);
		if ((tmp5 = method.ok)) {
			int no_args = /*opt*/(*(v__table__Fn*)method.data).args.len - 1;
			int min_required_args = /*opt*/(*(v__table__Fn*)method.data).args.len - (/*opt*/(*(v__table__Fn*)method.data).is_variadic && /*opt*/(*(v__table__Fn*)method.data).args.len > 1 ? 2 : 1);
			if (call_expr->args.len < min_required_args) {
				v__checker__Checker_error(c, _STR("too few arguments in call to `%.*s.%.*s` (%d instead of %d)", left_type_sym->name.len, left_type_sym->name.str, method_name.len, method_name.str, call_expr->args.len, min_required_args), call_expr->pos);
			} else if (!/*opt*/(*(v__table__Fn*)method.data).is_variadic && call_expr->args.len > no_args) {
				v__checker__Checker_error(c, _STR("too many arguments in call to `%.*s.%.*s` (%d instead of %d)", left_type_sym->name.len, left_type_sym->name.str, method_name.len, method_name.str, call_expr->args.len, no_args), call_expr->pos);
				return /*opt*/(*(v__table__Fn*)method.data).return_type;
			}
			// FOR IN
			for (int i = 0; i < call_expr->args.
			len; i++) {	v__ast__CallArg arg = ((v__ast__CallArg*)call_expr->args.
			data)[i];c->expected_type = (/*opt*/(*(v__table__Fn*)method.data).is_variadic && i >= /*opt*/(*(v__table__Fn*)method.data).args.len - 1 ? (*(v__table__Arg*)array_get(/*opt*/(*(v__table__Fn*)method.data).args, /*opt*/(*(v__table__Fn*)method.data).args.len - 1)).typ : (*(v__table__Arg*)array_get(/*opt*/(*(v__table__Fn*)method.data).args, i + 1)).typ);
				(*(v__ast__CallArg*)array_get(call_expr->args, i)).typ = v__checker__Checker_expr(c, arg.expr);
			}
			if (call_expr->expected_arg_types.len == 0) {
				for (int tmp10 = 1; tmp10 < /*opt*/(*(v__table__Fn*)method.data).args.len; tmp10++) { 
					int i = tmp10;
					_PUSH(&call_expr->expected_arg_types, ((*(v__table__Arg*)array_get(/*opt*/(*(v__table__Fn*)method.data).args, i)).typ), tmp11, v__table__Type);
				}
			}
			call_expr->receiver_type = (*(v__table__Arg*)array_get(/*opt*/(*(v__table__Fn*)method.data).args, 0)).typ;
			call_expr->return_type = /*opt*/(*(v__table__Fn*)method.data).return_type;
			return /*opt*/(*(v__table__Fn*)method.data).return_type;
		}}
		if (left_type_sym->kind == v__table__Kind_map && string_eq(method_name, tos3("str"))) {
			call_expr->receiver_type = v__table__new_type((*(int*)map_get3(c->table->type_idxs, tos3("map_string"), &(int[]){ 0 })));
			call_expr->return_type = _const_v__table__string_type;
			return _const_v__table__string_type;
		}
		if (left_type_sym->kind == v__table__Kind_array && string_eq(method_name, tos3("str"))) {
			call_expr->receiver_type = left_type;
			call_expr->return_type = _const_v__table__string_type;
			return _const_v__table__string_type;
		}
		v__checker__Checker_error(c, _STR("unknown method: %.*s.%.*s", left_type_sym->name.len, left_type_sym->name.str, method_name.len, method_name.str), call_expr->pos);
		return _const_v__table__void_type;
	} else {
		string fn_name = call_expr->name;
		if (string_eq(fn_name, tos3("typeof"))) {
			return _const_v__table__string_type;
		}
		if ((string_eq(fn_name, tos3("C.calloc")) || string_eq(fn_name, tos3("C.malloc")) || string_eq(fn_name, tos3("C.exit")) || string_eq(fn_name, tos3("C.free")))) {
			// FOR IN
			for (int tmp16 = 0; tmp16 < call_expr->args.
			len; tmp16++) {	v__ast__CallArg arg = ((v__ast__CallArg*)call_expr->args.
			data)[tmp16];v__checker__Checker_expr(c, arg.expr);
			}
			if ((string_eq(fn_name, tos3("C.calloc")) || string_eq(fn_name, tos3("C.malloc")))) {
				return _const_v__table__byteptr_type;
			}
			return _const_v__table__void_type;
		}
		v__table__Fn f = (v__table__Fn){
			.name = tos3(""),
			.args = new_array(0, 1, sizeof(v__table__Arg)),
			.return_type = {0},
			.is_variadic = 0,
			.is_c = 0,
		};
		bool found = false;
		if (!string_contains(fn_name, tos3(".")) && !((string_eq(call_expr->mod, tos3("builtin")) || string_eq(call_expr->mod, tos3("main"))))) {
			string name_prefixed = _STR("%.*s.%.*s", call_expr->mod.len, call_expr->mod.str, fn_name.len, fn_name.str);
			bool tmp19;
			{ /* if guard */ Option_v__table__Fn f1 = v__table__Table_find_fn(c->table, name_prefixed);
			if ((tmp19 = f1.ok)) {
				call_expr->name = name_prefixed;
				found = true;
				f = /*opt*/(*(v__table__Fn*)f1.data);
			}}
		}
		if (!found) {
			bool tmp21;
			{ /* if guard */ Option_v__table__Fn f1 = v__table__Table_find_fn(c->table, fn_name);
			if ((tmp21 = f1.ok)) {
				found = true;
				f = /*opt*/(*(v__table__Fn*)f1.data);
			}}
		}
		if (!found) {
			v__ast__Scope* scope = v__ast__Scope_innermost(c->file.scope, call_expr->pos.pos);
			bool tmp23;
			{ /* if guard */ Option_v__ast__Var var = v__ast__Scope_find_var(scope, fn_name);
			if ((tmp23 = var.ok)) {
				if (/*opt*/(*(v__ast__Var*)var.data).typ != 0) {
					v__table__TypeSymbol* vts = v__table__Table_get_type_symbol(c->table, /*opt*/(*(v__ast__Var*)var.data).typ);
					if (vts->kind == v__table__Kind_function) {
						v__table__FnType info = /* as */ *(v__table__FnType*)vts->info.obj;
						f = info.func;
						found = true;
					}
				}
			}}
		}
		if (!found) {
			v__checker__Checker_error(c, _STR("unknown fn: %.*s", fn_name.len, fn_name.str), call_expr->pos);
			return _const_v__table__void_type;
		}
		call_expr->return_type = f.return_type;
		if (f.is_c || call_expr->is_c) {
			// FOR IN
			for (int tmp28 = 0; tmp28 < call_expr->args.
			len; tmp28++) {	v__ast__CallArg arg = ((v__ast__CallArg*)call_expr->args.
			data)[tmp28];v__checker__Checker_expr(c, arg.expr);
			}
			return f.return_type;
		}
		int min_required_args = (f.is_variadic ? f.args.len - 1 : f.args.len);
		if (call_expr->args.len < min_required_args) {
			v__checker__Checker_error(c, _STR("too few arguments in call to `%.*s` (%d instead of %d)", fn_name.len, fn_name.str, call_expr->args.len, min_required_args), call_expr->pos);
		} else if (!f.is_variadic && call_expr->args.len > f.args.len) {
			v__checker__Checker_error(c, _STR("too many arguments in call to `%.*s` (%d instead of %d)", fn_name.len, fn_name.str, call_expr->args.len, f.args.len), call_expr->pos);
			return f.return_type;
		}
		if (string_eq(fn_name, tos3("println")) || string_eq(fn_name, tos3("print"))) {
			c->expected_type = _const_v__table__string_type;
			(*(v__ast__CallArg*)array_get(call_expr->args, 0)).typ = v__checker__Checker_expr(c, (*(v__ast__CallArg*)array_get(call_expr->args, 0)).expr);
			return f.return_type;
		}
		if (call_expr->expected_arg_types.len == 0) {
			// FOR IN
			for (int tmp33 = 0; tmp33 < f.args.
			len; tmp33++) {	v__table__Arg arg = ((v__table__Arg*)f.args.
			data)[tmp33];_PUSH(&call_expr->expected_arg_types, (arg.typ), tmp34, v__table__Type);
			}
		}
		// FOR IN
		for (int i = 0; i < call_expr->args.
		len; i++) {	v__ast__CallArg call_arg = ((v__ast__CallArg*)call_expr->args.
		data)[i];v__table__Arg arg = (f.is_variadic && i >= f.args.len - 1 ? (*(v__table__Arg*)array_get(f.args, f.args.len - 1)) : (*(v__table__Arg*)array_get(f.args, i)));
			c->expected_type = arg.typ;
			v__table__Type typ = v__checker__Checker_expr(c, call_arg.expr);
			(*(v__ast__CallArg*)array_get(call_expr->args, i)).typ = typ;
			v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(c->table, typ);
			v__table__TypeSymbol* arg_typ_sym = v__table__Table_get_type_symbol(c->table, arg.typ);
			if (!v__table__Table_check(c->table, typ, arg.typ)) {
				if (arg_typ_sym->kind == v__table__Kind_string && v__table__TypeSymbol_has_method(typ_sym, tos3("str"))) {
					continue;
				}
				if (typ_sym->kind == v__table__Kind_void && arg_typ_sym->kind == v__table__Kind_string) {
					continue;
				}
				if (typ_sym->kind == v__table__Kind_array_fixed) {
				}
				v__checker__Checker_error(c, _STR("cannot use type `%.*s` as type `%.*s` in argument %d to `%.*s`", v__table__TypeSymbol_str(typ_sym).len, v__table__TypeSymbol_str(typ_sym).str, v__table__TypeSymbol_str(arg_typ_sym).len, v__table__TypeSymbol_str(arg_typ_sym).str, i + 1, fn_name.len, fn_name.str), call_expr->pos);
			}
		}
		return f.return_type;
	}
}

v__table__Type v__checker__Checker_selector_expr(v__checker__Checker* c, v__ast__SelectorExpr* selector_expr) { 
	v__table__Type typ = v__checker__Checker_expr(c, selector_expr->expr);
	if (typ == _const_v__table__void_type_idx) {
		v__checker__Checker_error(c, tos3("unknown selector expression"), selector_expr->pos);
		return _const_v__table__void_type;
	}
	selector_expr->expr_type = typ;
	v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(c->table, typ);
	string field_name = selector_expr->field;
	if (v__table__type_is(typ, v__table__TypeFlag_variadic)) {
		if (string_eq(field_name, tos3("len"))) {
			return _const_v__table__int_type;
		}
	}
	bool tmp4;
	{ /* if guard */ Option_v__table__Field field = v__table__Table_struct_find_field(c->table, typ_sym, field_name);
	if ((tmp4 = field.ok)) {
		return /*opt*/(*(v__table__Field*)field.data).typ;
	}}
	if (typ_sym->kind != v__table__Kind_struct_) {
		v__checker__Checker_error(c, _STR("`%.*s` is not a struct", typ_sym->name.len, typ_sym->name.str), selector_expr->pos);
	} else {
		v__checker__Checker_error(c, _STR("unknown field `%.*s.%.*s`", typ_sym->name.len, typ_sym->name.str, field_name.len, field_name.str), selector_expr->pos);
	}
	return _const_v__table__void_type;
}

void v__checker__Checker_return_stmt(v__checker__Checker* c, v__ast__Return* return_stmt) { 
	c->expected_type = c->fn_return_type;
	if (return_stmt->exprs.len == 0) {
		return;
	}
	if (return_stmt->exprs.len > 0 && c->fn_return_type == _const_v__table__void_type) {
		v__checker__Checker_error(c, tos3("too many arguments to return, current function does not return anything"), return_stmt->pos);
		return;
	}
	v__table__Type expected_type = c->fn_return_type;
	v__table__TypeSymbol* expected_type_sym = v__table__Table_get_type_symbol(c->table, expected_type);
	bool exp_is_optional = v__table__type_is(expected_type, v__table__TypeFlag_optional);
	array_v__table__Type expected_types = new_array_from_c_array(1, 1, sizeof(v__table__Type), (v__table__Type[1]){	
	expected_type, 
});
	if (expected_type_sym->kind == v__table__Kind_multi_return) {
		v__table__MultiReturn mr_info = /* as */ *(v__table__MultiReturn*)expected_type_sym->info.obj;
		expected_types = mr_info.types;
	}
	array_v__table__Type got_types = new_array(0, 0, sizeof(v__table__Type));
	// FOR IN
	for (int tmp4 = 0; tmp4 < return_stmt->exprs.
	len; tmp4++) {	v__ast__Expr expr = ((v__ast__Expr*)return_stmt->exprs.
	data)[tmp4];v__table__Type typ = v__checker__Checker_expr(c, expr);
		_PUSH(&got_types, (typ), tmp5, v__table__Type);
	}
	return_stmt->types = got_types;
	if (exp_is_optional && (v__table__type_idx((*(v__table__Type*)array_get(got_types, 0))) == _const_v__table__none_type_idx || v__table__type_idx((*(v__table__Type*)array_get(got_types, 0))) == (*(int*)map_get3(c->table->type_idxs, tos3("Option"), &(int[]){ 0 })))) {
		return;
	}
	if (expected_types.len > 0 && expected_types.len != got_types.len) {
		v__checker__Checker_error(c, tos3("wrong number of return arguments"), return_stmt->pos);
	}
	// FOR IN
	for (int i = 0; i < expected_types.
	len; i++) {	v__table__Type exp_typ = ((v__table__Type*)expected_types.
	data)[i];v__table__Type got_typ = (*(v__table__Type*)array_get(got_types, i));
		if (!v__table__Table_check(c->table, got_typ, exp_typ)) {
			v__table__TypeSymbol* got_typ_sym = v__table__Table_get_type_symbol(c->table, got_typ);
			v__table__TypeSymbol* exp_typ_sym = v__table__Table_get_type_symbol(c->table, exp_typ);
			v__checker__Checker_error(c, _STR("cannot use `%.*s` as type `%.*s` in return argument", got_typ_sym->name.len, got_typ_sym->name.str, exp_typ_sym->name.len, exp_typ_sym->name.str), return_stmt->pos);
		}
	}
}

void v__checker__Checker_assign_stmt(v__checker__Checker* c, v__ast__AssignStmt* assign_stmt) { 
	c->expected_type = _const_v__table__none_type;
	if (assign_stmt->left.len > assign_stmt->right.len) {
		if ((*(v__ast__Expr*)array_get(assign_stmt->right, 0)).typ == 156 /* v.ast.CallExpr */) {
			v__ast__CallExpr* it = (v__ast__CallExpr*)(*(v__ast__Expr*)array_get(assign_stmt->right, 0)).obj; // ST it
		}
		else {
			v__checker__Checker_error(c, tos3("assign_stmt: expected call"), assign_stmt->pos);
		}
		;
		v__table__Type right_type = v__checker__Checker_expr(c, (*(v__ast__Expr*)array_get(assign_stmt->right, 0)));
		v__table__TypeSymbol* right_type_sym = v__table__Table_get_type_symbol(c->table, right_type);
		v__table__MultiReturn mr_info = v__table__TypeSymbol_mr_info(right_type_sym);
		if (right_type_sym->kind != v__table__Kind_multi_return) {
			v__checker__Checker_error(c, tos3("wrong number of vars"), assign_stmt->pos);
		}
		v__ast__Scope* scope = v__ast__Scope_innermost(c->file.scope, assign_stmt->pos.pos);
		// FOR IN
		for (int i = 0; i < assign_stmt->left.
		len; i++) {	v__ast__Ident _ = ((v__ast__Ident*)assign_stmt->left.
		data)[i];v__ast__Ident ident = (*(v__ast__Ident*)array_get(assign_stmt->left, i));
			v__ast__IdentVar ident_var_info = v__ast__Ident_var_info(&ident);
			v__table__Type val_type = (*(v__table__Type*)array_get(mr_info.types, i));
			if (assign_stmt->op == v__token__Kind_assign) {
				v__table__Type var_type = v__checker__Checker_expr(c, /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__Ident[]) {ident}, sizeof(v__ast__Ident)), .typ = 185 /* v.ast.Ident */});
				_PUSH(&assign_stmt->left_types, (var_type), tmp5, v__table__Type);
				if (!v__table__Table_check(c->table, val_type, var_type)) {
					v__table__TypeSymbol* val_type_sym = v__table__Table_get_type_symbol(c->table, val_type);
					v__table__TypeSymbol* var_type_sym = v__table__Table_get_type_symbol(c->table, var_type);
					v__checker__Checker_error(c, _STR("assign stmt: cannot use `%.*s` as `%.*s`", val_type_sym->name.len, val_type_sym->name.str, var_type_sym->name.len, var_type_sym->name.str), assign_stmt->pos);
				}
			}
			ident_var_info.typ = val_type;
			ident.info = /* sum type cast */ (v__ast__IdentInfo) {.obj = memdup(&(v__ast__IdentVar[]) {ident_var_info}, sizeof(v__ast__IdentVar)), .typ = 224 /* v.ast.IdentVar */};
			(*(v__ast__Ident*)array_get(assign_stmt->left, i)) = ident;
			_PUSH(&assign_stmt->right_types, (val_type), tmp7, v__table__Type);
			v__ast__Scope_update_var_type(scope, ident.name, val_type);
		}
	} else {
		if (assign_stmt->left.len != assign_stmt->right.len) {
			v__checker__Checker_error(c, tos3("wrong number of vars"), assign_stmt->pos);
		}
		v__ast__Scope* scope = v__ast__Scope_innermost(c->file.scope, assign_stmt->pos.pos);
		// FOR IN
		for (int i = 0; i < assign_stmt->left.
		len; i++) {	v__ast__Ident _ = ((v__ast__Ident*)assign_stmt->left.
		data)[i];v__ast__Ident ident = (*(v__ast__Ident*)array_get(assign_stmt->left, i));
			v__ast__IdentVar ident_var_info = v__ast__Ident_var_info(&ident);
			v__table__Type val_type = v__checker__Checker_expr(c, (*(v__ast__Expr*)array_get(assign_stmt->right, i)));
			if (assign_stmt->op == v__token__Kind_assign) {
				v__table__Type var_type = v__checker__Checker_expr(c, /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__Ident[]) {ident}, sizeof(v__ast__Ident)), .typ = 185 /* v.ast.Ident */});
				_PUSH(&assign_stmt->left_types, (var_type), tmp10, v__table__Type);
				if (!v__table__Table_check(c->table, val_type, var_type)) {
					v__table__TypeSymbol* val_type_sym = v__table__Table_get_type_symbol(c->table, val_type);
					v__table__TypeSymbol* var_type_sym = v__table__Table_get_type_symbol(c->table, var_type);
					v__checker__Checker_error(c, _STR("assign stmt: cannot use `%.*s` as `%.*s`", val_type_sym->name.len, val_type_sym->name.str, var_type_sym->name.len, var_type_sym->name.str), assign_stmt->pos);
				}
			}
			ident_var_info.typ = val_type;
			ident.info = /* sum type cast */ (v__ast__IdentInfo) {.obj = memdup(&(v__ast__IdentVar[]) {ident_var_info}, sizeof(v__ast__IdentVar)), .typ = 224 /* v.ast.IdentVar */};
			(*(v__ast__Ident*)array_get(assign_stmt->left, i)) = ident;
			_PUSH(&assign_stmt->right_types, (val_type), tmp12, v__table__Type);
			v__ast__Scope_update_var_type(scope, ident.name, val_type);
		}
	}
	c->expected_type = _const_v__table__void_type;
}

v__table__Type v__checker__Checker_array_init(v__checker__Checker* c, v__ast__ArrayInit* array_init) { 
	v__table__Type elem_type = _const_v__table__void_type;
	if (array_init->typ != _const_v__table__void_type) {
		return array_init->typ;
	}
	if (array_init->exprs.len == 0) {
		v__table__TypeSymbol* type_sym = v__table__Table_get_type_symbol(c->table, c->expected_type);
		if (type_sym->kind != v__table__Kind_array) {
			v__checker__Checker_error(c, tos3("array_init: no type specified (maybe: `[]Type` instead of `[]`)"), array_init->pos);
			return _const_v__table__void_type;
		}
		v__table__Array array_info = v__table__TypeSymbol_array_info(type_sym);
		array_init->elem_type = array_info.elem_type;
		return c->expected_type;
	}
	if (array_init->exprs.len > 0 && array_init->elem_type == _const_v__table__void_type) {
		// FOR IN
		for (int i = 0; i < array_init->exprs.
		len; i++) {	v__ast__Expr expr = ((v__ast__Expr*)array_init->exprs.
		data)[i];v__table__Type typ = v__checker__Checker_expr(c, expr);
			if (i == 0) {
				elem_type = typ;
				c->expected_type = typ;
				continue;
			}
			if (!v__table__Table_check(c->table, elem_type, typ)) {
				v__table__TypeSymbol* elem_type_sym = v__table__Table_get_type_symbol(c->table, elem_type);
				v__checker__Checker_error(c, _STR("expected array element with type `%.*s`", elem_type_sym->name.len, elem_type_sym->name.str), array_init->pos);
			}
		}
		int idx = v__table__Table_find_or_register_array(c->table, elem_type, 1);
		array_init->typ = v__table__new_type(idx);
		array_init->elem_type = elem_type;
	} else if (array_init->exprs.len == 1 && array_init->elem_type != _const_v__table__void_type) {
		int fixed_size = 1;
		if ((*(v__ast__Expr*)array_get(array_init->exprs, 0)).typ == 214 /* v.ast.IntegerLiteral */) {
			v__ast__IntegerLiteral* it = (v__ast__IntegerLiteral*)(*(v__ast__Expr*)array_get(array_init->exprs, 0)).obj; // ST it
			fixed_size = string_int(it->val);
		}
		else {
			v__checker__Checker_error(c, tos3("expecting `int` for fixed size"), array_init->pos);
		}
		;
		int idx = v__table__Table_find_or_register_array_fixed(c->table, array_init->elem_type, fixed_size, 1);
		v__table__Type array_type = v__table__new_type(idx);
		array_init->typ = array_type;
	}
	return array_init->typ;
}

void v__checker__Checker_stmt(v__checker__Checker* c, v__ast__Stmt node) { 
	if (node.typ == 173 /* v.ast.AssertStmt */) {
		v__ast__AssertStmt* it = (v__ast__AssertStmt*)node.obj; // ST it
		v__checker__Checker_expr(c, it->expr);
	}
	else if (node.typ == 225 /* v.ast.AssignStmt */) {
		v__ast__AssignStmt* it = (v__ast__AssignStmt*)node.obj; // ST it
		v__checker__Checker_assign_stmt(c, it);
	}
	else if (node.typ == 172 /* v.ast.Block */) {
		v__ast__Block* it = (v__ast__Block*)node.obj; // ST it
		v__checker__Checker_stmts(c, it->stmts);
	}
	else if (node.typ == 155 /* v.ast.CompIf */) {
		v__ast__CompIf* it = (v__ast__CompIf*)node.obj; // ST it
		v__checker__Checker_stmts(c, it->stmts);
		if (it->has_else) {
			v__checker__Checker_stmts(c, it->else_stmts);
		}
	}
	else if (node.typ == 176 /* v.ast.DeferStmt */) {
		v__ast__DeferStmt* it = (v__ast__DeferStmt*)node.obj; // ST it
		v__checker__Checker_stmts(c, it->stmts);
	}
	else if (node.typ == 215 /* v.ast.ConstDecl */) {
		v__ast__ConstDecl* it = (v__ast__ConstDecl*)node.obj; // ST it
		array_string field_names = new_array(0, 0, sizeof(string));
		array_int field_order = new_array(0, 0, sizeof(int));
		// FOR IN
		for (int i = 0; i < it->fields.
		len; i++) {	v__ast__ConstField field = ((v__ast__ConstField*)it->fields.
		data)[i];_PUSH(&field_names, (field.name), tmp3, string);
			_PUSH(&field_order, (i), tmp4, int);
		}
		bool needs_order = false;
		array_int done_fields = new_array(0, 0, sizeof(int));
		// FOR IN
		for (int i = 0; i < it->fields.
		len; i++) {	v__ast__ConstField field = ((v__ast__ConstField*)it->fields.
		data)[i];c->const_decl = field.name;
			_PUSH(&c->const_deps, (field.name), tmp5, string);
			v__table__Type typ = v__checker__Checker_expr(c, field.expr);
			(*(v__ast__ConstField*)array_get(it->fields, i)).typ = typ;
			// FOR IN
			for (int tmp6 = 0; tmp6 < c->const_deps.
			len; tmp6++) {	string cd = ((string*)c->const_deps.
			data)[tmp6];// FOR IN
				for (int j = 0; j < it->fields.
				len; j++) {	v__ast__ConstField f = ((v__ast__ConstField*)it->fields.
				data)[j];if (j != i && _IN(string, cd, field_names) && string_eq(cd, f.name) && !(_IN(int, j, done_fields))) {
						needs_order = true;
						int x = (*(int*)array_get(field_order, j));
						array_set(&field_order, j, &(int[]) { (*(int*)array_get(field_order, i)) });
						array_set(&field_order, i, &(int[]) { x });
						break;
					}
				}
			}
			_PUSH(&done_fields, (i), tmp8, int);
			c->const_deps = new_array(0, 0, sizeof(string));
		}
		if (needs_order) {
			array_v__ast__ConstField ordered_fields = new_array(0, 0, sizeof(v__ast__ConstField));
			// FOR IN
			for (int tmp10 = 0; tmp10 < field_order.
			len; tmp10++) {	int order = ((int*)field_order.
			data)[tmp10];_PUSH(&ordered_fields, ((*(v__ast__ConstField*)array_get(it->fields, order))), tmp11, v__ast__ConstField);
			}
			it->fields = ordered_fields;
		}
	}
	else if (node.typ == 180 /* v.ast.ExprStmt */) {
		v__ast__ExprStmt* it = (v__ast__ExprStmt*)node.obj; // ST it
		v__checker__Checker_expr(c, it->expr);
		c->expected_type = _const_v__table__void_type;
	}
	else if (node.typ == 126 /* v.ast.FnDecl */) {
		v__ast__FnDecl* it = (v__ast__FnDecl*)node.obj; // ST it
		c->expected_type = _const_v__table__void_type;
		c->fn_return_type = it->return_type;
		v__checker__Checker_stmts(c, it->stmts);
	}
	else if (node.typ == 203 /* v.ast.ForStmt */) {
		v__ast__ForStmt* it = (v__ast__ForStmt*)node.obj; // ST it
		v__table__Type typ = v__checker__Checker_expr(c, it->cond);
		if (!it->is_inf && v__table__type_idx(typ) != _const_v__table__bool_type_idx) {
			v__checker__Checker_error(c, tos3("non-bool used as for condition"), it->pos);
		}
		v__checker__Checker_stmts(c, it->stmts);
	}
	else if (node.typ == 204 /* v.ast.ForCStmt */) {
		v__ast__ForCStmt* it = (v__ast__ForCStmt*)node.obj; // ST it
		v__checker__Checker_stmt(c, it->init);
		v__checker__Checker_expr(c, it->cond);
		v__checker__Checker_expr(c, it->inc);
		v__checker__Checker_stmts(c, it->stmts);
	}
	else if (node.typ == 205 /* v.ast.ForInStmt */) {
		v__ast__ForInStmt* it = (v__ast__ForInStmt*)node.obj; // ST it
		v__table__Type typ = v__checker__Checker_expr(c, it->cond);
		if (it->is_range) {
			v__checker__Checker_expr(c, it->high);
		} else {
			v__ast__Scope* scope = v__ast__Scope_innermost(c->file.scope, it->pos.pos);
			v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(c->table, typ);
			if (it->key_var.len > 0) {
				v__table__Type key_type = (sym->kind == v__table__Kind_map) ? v__table__TypeSymbol_map_info(sym).key_type : _const_v__table__int_type;
				it->key_type = key_type;
				v__ast__Scope_update_var_type(scope, it->key_var, key_type);
			}
			v__table__Type value_type = v__table__Table_value_type(c->table, typ);
			if (value_type == _const_v__table__void_type) {
				v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(c->table, typ);
				v__checker__Checker_error(c, _STR("for in: cannot index `%.*s`", typ_sym->name.len, typ_sym->name.str), it->pos);
			}
			it->cond_type = typ;
			it->kind = sym->kind;
			it->val_type = value_type;
			v__ast__Scope_update_var_type(scope, it->val_var, value_type);
		}
		v__checker__Checker_stmts(c, it->stmts);
	}
	else if (node.typ == 177 /* v.ast.GoStmt */) {
		v__ast__GoStmt* it = (v__ast__GoStmt*)node.obj; // ST it
		v__checker__Checker_expr(c, it->call_expr);
	}
	else if (node.typ == 165 /* v.ast.Import */) {
		v__ast__Import* it = (v__ast__Import*)node.obj; // ST it
	}
	else if (node.typ == 222 /* v.ast.Return */) {
		v__ast__Return* it = (v__ast__Return*)node.obj; // ST it
		v__checker__Checker_return_stmt(c, it);
	}
	else if (node.typ == 175 /* v.ast.UnsafeStmt */) {
		v__ast__UnsafeStmt* it = (v__ast__UnsafeStmt*)node.obj; // ST it
		v__checker__Checker_stmts(c, it->stmts);
	}
	else {
	}
	;
}

void v__checker__Checker_stmts(v__checker__Checker* c, array_v__ast__Stmt stmts) { 
	c->expected_type = _const_v__table__void_type;
	// FOR IN
	for (int tmp1 = 0; tmp1 < stmts.
	len; tmp1++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)stmts.
	data)[tmp1];v__checker__Checker_stmt(c, stmt);
	}
	c->expected_type = _const_v__table__void_type;
}

v__table__Type v__checker__Checker_expr(v__checker__Checker* c, v__ast__Expr node) { 
	if (node.typ == 212 /* v.ast.ArrayInit */) {
		v__ast__ArrayInit* it = (v__ast__ArrayInit*)node.obj; // ST it
		return v__checker__Checker_array_init(c, it);
	}
	else if (node.typ == 197 /* v.ast.AsCast */) {
		v__ast__AsCast* it = (v__ast__AsCast*)node.obj; // ST it
		it->expr_type = v__checker__Checker_expr(c, it->expr);
		v__table__TypeSymbol* expr_type_sym = v__table__Table_get_type_symbol(c->table, it->expr_type);
		v__table__TypeSymbol* type_sym = v__table__Table_get_type_symbol(c->table, it->typ);
		if (expr_type_sym->kind == v__table__Kind_sum_type) {
			v__table__SumType info = /* as */ *(v__table__SumType*)expr_type_sym->info.obj;
			if (!_IN(v__table__Type, it->typ, info.variants)) {
				v__checker__Checker_error(c, _STR("cannot cast `%.*s` to `%.*s`", expr_type_sym->name.len, expr_type_sym->name.str, type_sym->name.len, type_sym->name.str), it->pos);
			}
		} else {
			v__checker__Checker_error(c, _STR("cannot cast non sum type `%.*s` using `as`", type_sym->name.len, type_sym->name.str), it->pos);
		}
		return it->typ;
	}
	else if (node.typ == 182 /* v.ast.AssignExpr */) {
		v__ast__AssignExpr* it = (v__ast__AssignExpr*)node.obj; // ST it
		v__checker__Checker_assign_expr(c, it);
	}
	else if (node.typ == 237 /* v.ast.Assoc */) {
		v__ast__Assoc* it = (v__ast__Assoc*)node.obj; // ST it
		v__ast__Scope* scope = v__ast__Scope_innermost(c->file.scope, it->pos.pos);
		Option_v__ast__Var var = v__ast__Scope_find_var(scope, it->var_name);
		if (!var.ok) {
			string err = var.v_error;
			int errcode = var.ecode;
			 // typeof it_expr_type: v.ast.CallExpr
			// last_type: v.ast.ExprStmt
			// last_expr_result_type: void
			v_panic(err);
		};
		// FOR IN
		for (int i = 0; i < it->fields.
		len; i++) {	string _ = ((string*)it->fields.
		data)[i];v__checker__Checker_expr(c, (*(v__ast__Expr*)array_get(it->exprs, i)));
		}
		it->typ = /*opt*/(*(v__ast__Var*)var.data).typ;
		return /*opt*/(*(v__ast__Var*)var.data).typ;
	}
	else if (node.typ == 192 /* v.ast.BoolLiteral */) {
		v__ast__BoolLiteral* it = (v__ast__BoolLiteral*)node.obj; // ST it
		return _const_v__table__bool_type;
	}
	else if (node.typ == 189 /* v.ast.CastExpr */) {
		v__ast__CastExpr* it = (v__ast__CastExpr*)node.obj; // ST it
		it->expr_type = v__checker__Checker_expr(c, it->expr);
		if (it->has_arg) {
			v__checker__Checker_expr(c, it->arg);
		}
		return it->typ;
	}
	else if (node.typ == 156 /* v.ast.CallExpr */) {
		v__ast__CallExpr* it = (v__ast__CallExpr*)node.obj; // ST it
		return v__checker__Checker_call_expr(c, it);
	}
	else if (node.typ == 191 /* v.ast.CharLiteral */) {
		v__ast__CharLiteral* it = (v__ast__CharLiteral*)node.obj; // ST it
		return _const_v__table__byte_type;
	}
	else if (node.typ == 190 /* v.ast.EnumVal */) {
		v__ast__EnumVal* it = (v__ast__EnumVal*)node.obj; // ST it
		return v__checker__Checker_enum_val(c, it);
	}
	else if (node.typ == 213 /* v.ast.FloatLiteral */) {
		v__ast__FloatLiteral* it = (v__ast__FloatLiteral*)node.obj; // ST it
		return _const_v__table__f64_type;
	}
	else if (node.typ == 185 /* v.ast.Ident */) {
		v__ast__Ident* it = (v__ast__Ident*)node.obj; // ST it
		return v__checker__Checker_ident(c, it);
	}
	else if (node.typ == 206 /* v.ast.IfExpr */) {
		v__ast__IfExpr* it = (v__ast__IfExpr*)node.obj; // ST it
		return v__checker__Checker_if_expr(c, it);
	}
	else if (node.typ == 209 /* v.ast.IfGuardExpr */) {
		v__ast__IfGuardExpr* it = (v__ast__IfGuardExpr*)node.obj; // ST it
		it->expr_type = v__checker__Checker_expr(c, it->expr);
		return _const_v__table__bool_type;
	}
	else if (node.typ == 183 /* v.ast.IndexExpr */) {
		v__ast__IndexExpr* it = (v__ast__IndexExpr*)node.obj; // ST it
		return v__checker__Checker_index_expr(c, it);
	}
	else if (node.typ == 198 /* v.ast.InfixExpr */) {
		v__ast__InfixExpr* it = (v__ast__InfixExpr*)node.obj; // ST it
		return v__checker__Checker_infix_expr(c, it);
	}
	else if (node.typ == 214 /* v.ast.IntegerLiteral */) {
		v__ast__IntegerLiteral* it = (v__ast__IntegerLiteral*)node.obj; // ST it
		return _const_v__table__int_type;
	}
	else if (node.typ == 188 /* v.ast.MapInit */) {
		v__ast__MapInit* it = (v__ast__MapInit*)node.obj; // ST it
		return v__checker__Checker_map_init(c, it);
	}
	else if (node.typ == 228 /* v.ast.MatchExpr */) {
		v__ast__MatchExpr* it = (v__ast__MatchExpr*)node.obj; // ST it
		return v__checker__Checker_match_expr(c, it);
	}
	else if (node.typ == 199 /* v.ast.PostfixExpr */) {
		v__ast__PostfixExpr* it = (v__ast__PostfixExpr*)node.obj; // ST it
		return v__checker__Checker_postfix_expr(c, */*d*/it);
	}
	else if (node.typ == 200 /* v.ast.PrefixExpr */) {
		v__ast__PrefixExpr* it = (v__ast__PrefixExpr*)node.obj; // ST it
		v__table__Type right_type = v__checker__Checker_expr(c, it->right);
		if (it->op == v__token__Kind_amp && !v__table__type_is_ptr(right_type)) {
			return v__table__type_to_ptr(right_type);
		}
		if (it->op == v__token__Kind_mul && v__table__type_is_ptr(right_type)) {
			return v__table__type_deref(right_type);
		}
		if (it->op == v__token__Kind_not && right_type != _const_v__table__bool_type_idx) {
			v__checker__Checker_error(c, tos3("! operator can only be used with bool types"), it->pos);
		}
		return right_type;
	}
	else if (node.typ == 194 /* v.ast.None */) {
		v__ast__None* it = (v__ast__None*)node.obj; // ST it
		return _const_v__table__none_type;
	}
	else if (node.typ == 193 /* v.ast.ParExpr */) {
		v__ast__ParExpr* it = (v__ast__ParExpr*)node.obj; // ST it
		return v__checker__Checker_expr(c, it->expr);
	}
	else if (node.typ == 202 /* v.ast.SelectorExpr */) {
		v__ast__SelectorExpr* it = (v__ast__SelectorExpr*)node.obj; // ST it
		return v__checker__Checker_selector_expr(c, it);
	}
	else if (node.typ == 195 /* v.ast.SizeOf */) {
		v__ast__SizeOf* it = (v__ast__SizeOf*)node.obj; // ST it
		return _const_v__table__int_type;
	}
	else if (node.typ == 210 /* v.ast.StringLiteral */) {
		v__ast__StringLiteral* it = (v__ast__StringLiteral*)node.obj; // ST it
		if (it->is_c) {
			return _const_v__table__byteptr_type;
		}
		return _const_v__table__string_type;
	}
	else if (node.typ == 211 /* v.ast.StringInterLiteral */) {
		v__ast__StringInterLiteral* it = (v__ast__StringInterLiteral*)node.obj; // ST it
		// FOR IN
		for (int tmp9 = 0; tmp9 < it->exprs.
		len; tmp9++) {	v__ast__Expr expr = ((v__ast__Expr*)it->exprs.
		data)[tmp9];_PUSH(&it->expr_types, (v__checker__Checker_expr(c, expr)), tmp10, v__table__Type);
		}
		return _const_v__table__string_type;
	}
	else if (node.typ == 186 /* v.ast.StructInit */) {
		v__ast__StructInit* it = (v__ast__StructInit*)node.obj; // ST it
		return v__checker__Checker_struct_init(c, it);
	}
	else if (node.typ == 231 /* v.ast.Type */) {
		v__ast__Type* it = (v__ast__Type*)node.obj; // ST it
		return it->typ;
	}
	else if (node.typ == 196 /* v.ast.TypeOf */) {
		v__ast__TypeOf* it = (v__ast__TypeOf*)node.obj; // ST it
		it->expr_type = v__checker__Checker_expr(c, it->expr);
		return _const_v__table__string_type;
	}
	else {
		string tnode = tos3( /* v.ast.Expr */ v_typeof_sumtype_181( (node).typ ));
		if (string_ne(tnode, tos3("unknown v.ast.Expr"))) {
			println(_STR("checker.expr(): unhandled node with typeof(`%.*s`)", tnode.len, tnode.str));
		}
	}
	;
	return _const_v__table__void_type;
}

v__table__Type v__checker__Checker_ident(v__checker__Checker* c, v__ast__Ident* ident) { 
	if (c->const_deps.len > 0) {
		string name = ident->name;
		if (!string_contains(name, tos3(".")) && !((string_eq(ident->mod, tos3("builtin")) || string_eq(ident->mod, tos3("main"))))) {
			name = _STR("%.*s.%.*s", ident->mod.len, ident->mod.str, ident->name.len, ident->name.str);
		}
		if (string_eq(name, c->const_decl)) {
			v__checker__Checker_error(c, _STR("cycle in constant `%.*s`", c->const_decl.len, c->const_decl.str), ident->pos);
			return _const_v__table__void_type;
		}
		_PUSH(&c->const_deps, (name), tmp4, string);
	}
	if (ident->kind == v__ast__IdentKind_blank_ident) {
		return _const_v__table__void_type;
	}
	if (ident->kind == v__ast__IdentKind_variable) {
		v__ast__IdentVar info = /* as */ *(v__ast__IdentVar*)ident->info.obj;
		return info.typ;
	} else if (ident->kind == v__ast__IdentKind_constant) {
		v__ast__IdentVar info = /* as */ *(v__ast__IdentVar*)ident->info.obj;
		return info.typ;
	} else if (ident->kind == v__ast__IdentKind_function) {
		v__ast__IdentFn info = /* as */ *(v__ast__IdentFn*)ident->info.obj;
		return info.typ;
	} else if (ident->kind == v__ast__IdentKind_unresolved) {
		v__ast__Scope* start_scope = v__ast__Scope_innermost(c->file.scope, ident->pos.pos);
		bool tmp7;
		{ /* if guard */ Option_v__ast__ScopeObject obj = v__ast__Scope_find(start_scope, ident->name);
		if ((tmp7 = obj.ok)) {
			if (/*opt*/(*(v__ast__ScopeObject*)obj.data).typ == 157 /* v.ast.Var */) {
				v__ast__Var* it = (v__ast__Var*)/*opt*/(*(v__ast__ScopeObject*)obj.data).obj; // ST it
				v__table__Type typ = it->typ;
				if (typ == 0) {
					typ = v__checker__Checker_expr(c, it->expr);
				}
				bool is_optional = v__table__type_is(typ, v__table__TypeFlag_optional);
				ident->kind = v__ast__IdentKind_variable;
				ident->info = /* sum type cast */ (v__ast__IdentInfo) {.obj = memdup(&(v__ast__IdentVar[]) {(v__ast__IdentVar){
					.typ = typ,
					.is_optional = is_optional,
					.is_mut = 0,
					.is_static = 0,
				}}, sizeof(v__ast__IdentVar)), .typ = 224 /* v.ast.IdentVar */};
				it->typ = typ;
				if (is_optional) {
					return v__table__type_set(typ, v__table__TypeFlag_unset);
				}
				return typ;
			}
			else {
			}
			;
		}}
		string name = ident->name;
		if (!string_contains(name, tos3(".")) && !((string_eq(ident->mod, tos3("builtin")) || string_eq(ident->mod, tos3("main"))))) {
			name = _STR("%.*s.%.*s", ident->mod.len, ident->mod.str, ident->name.len, ident->name.str);
		}
		bool tmp12;
		{ /* if guard */ Option_v__ast__ScopeObject obj = v__ast__Scope_find(c->file.global_scope, name);
		if ((tmp12 = obj.ok)) {
			if (/*opt*/(*(v__ast__ScopeObject*)obj.data).typ == 227 /* v.ast.GlobalDecl */) {
				v__ast__GlobalDecl* it = (v__ast__GlobalDecl*)/*opt*/(*(v__ast__ScopeObject*)obj.data).obj; // ST it
				ident->kind = v__ast__IdentKind_global;
				ident->info = /* sum type cast */ (v__ast__IdentInfo) {.obj = memdup(&(v__ast__IdentVar[]) {(v__ast__IdentVar){
					.typ = it->typ,
					.is_mut = 0,
					.is_static = 0,
					.is_optional = 0,
				}}, sizeof(v__ast__IdentVar)), .typ = 224 /* v.ast.IdentVar */};
				return it->typ;
			}
			else if (/*opt*/(*(v__ast__ScopeObject*)obj.data).typ == 216 /* v.ast.ConstField */) {
				v__ast__ConstField* it = (v__ast__ConstField*)/*opt*/(*(v__ast__ScopeObject*)obj.data).obj; // ST it
				v__table__Type typ = it->typ;
				if (typ == 0) {
					typ = v__checker__Checker_expr(c, it->expr);
				}
				ident->name = name;
				ident->kind = v__ast__IdentKind_constant;
				ident->info = /* sum type cast */ (v__ast__IdentInfo) {.obj = memdup(&(v__ast__IdentVar[]) {(v__ast__IdentVar){
					.typ = typ,
					.is_mut = 0,
					.is_static = 0,
					.is_optional = 0,
				}}, sizeof(v__ast__IdentVar)), .typ = 224 /* v.ast.IdentVar */};
				it->typ = typ;
				return typ;
			}
			else {
			}
			;
		}}
		bool tmp15;
		{ /* if guard */ Option_v__table__Fn func = v__table__Table_find_fn(c->table, name);
		if ((tmp15 = func.ok)) {
			v__table__Type fn_type = v__table__new_type(v__table__Table_find_or_register_fn_type(c->table, /*opt*/(*(v__table__Fn*)func.data), true));
			ident->name = name;
			ident->kind = v__ast__IdentKind_function;
			ident->info = /* sum type cast */ (v__ast__IdentInfo) {.obj = memdup(&(v__ast__IdentFn[]) {(v__ast__IdentFn){
				.typ = fn_type,
			}}, sizeof(v__ast__IdentFn)), .typ = 240 /* v.ast.IdentFn */};
			return fn_type;
		}}
	}
	if (ident->is_c) {
		return _const_v__table__int_type;
	}
	if (string_ne(ident->name, tos3("_"))) {
		v__checker__Checker_error(c, _STR("undefined: `%.*s`", ident->name.len, ident->name.str), ident->pos);
	}
	return _const_v__table__void_type;
}

v__table__Type v__checker__Checker_match_expr(v__checker__Checker* c, v__ast__MatchExpr* node) { 
	node->is_expr = c->expected_type != _const_v__table__void_type;
	node->expected_type = c->expected_type;
	v__table__Type cond_type = v__checker__Checker_expr(c, node->cond);
	if (cond_type == 0) {
		v__checker__Checker_error(c, tos3("match 0 cond type"), node->pos);
	}
	c->expected_type = cond_type;
	v__table__Type ret_type = _const_v__table__void_type;
	// FOR IN
	for (int tmp2 = 0; tmp2 < node->branches.
	len; tmp2++) {	v__ast__MatchBranch branch = ((v__ast__MatchBranch*)node->branches.
	data)[tmp2];// FOR IN
		for (int tmp3 = 0; tmp3 < branch.exprs.
		len; tmp3++) {	v__ast__Expr expr = ((v__ast__Expr*)branch.exprs.
		data)[tmp3];c->expected_type = cond_type;
			v__table__Type typ = v__checker__Checker_expr(c, expr);
			v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(c->table, typ);
			if (typ_sym->kind == v__table__Kind_sum_type) {
			}
		}
		v__checker__Checker_stmts(c, branch.stmts);
		if (branch.stmts.len > 0) {
			if ((*(v__ast__Stmt*)array_get(branch.stmts, branch.stmts.len - 1)).typ == 180 /* v.ast.ExprStmt */) {
				v__ast__ExprStmt* it = (v__ast__ExprStmt*)(*(v__ast__Stmt*)array_get(branch.stmts, branch.stmts.len - 1)).obj; // ST it
				ret_type = v__checker__Checker_expr(c, it->expr);
			}
			else {
			}
			;
		}
	}
	node->return_type = ret_type;
	node->cond_type = cond_type;
	return ret_type;
}

v__table__Type v__checker__Checker_if_expr(v__checker__Checker* c, v__ast__IfExpr* node) { 
	if (c->expected_type != _const_v__table__void_type) {
		node->is_expr = true;
	}
	node->typ = _const_v__table__void_type;
	// FOR IN
	for (int i = 0; i < node->branches.
	len; i++) {	v__ast__IfBranch branch = ((v__ast__IfBranch*)node->branches.
	data)[i];if (branch.cond.typ == 193 /* v.ast.ParExpr */) {
			v__ast__ParExpr* it = (v__ast__ParExpr*)branch.cond.obj; // ST it
			v__checker__Checker_error(c, tos3("unnecessary `()` in an if condition. use `if expr {` instead of `if (expr) {`."), node->pos);
		}
		else {
		}
		;
		v__table__Type typ = v__checker__Checker_expr(c, branch.cond);
		if (i < node->branches.len - 1 || !node->has_else) {
			v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(c->table, typ);
			if (v__table__type_idx(typ) != _const_v__table__bool_type_idx) {
				v__checker__Checker_error(c, _STR("non-bool (`%.*s`) used as if condition", typ_sym->name.len, typ_sym->name.str), node->pos);
			}
		}
		v__checker__Checker_stmts(c, branch.stmts);
	}
	if (node->has_else && node->is_expr) {
		v__ast__IfBranch last_branch = (*(v__ast__IfBranch*)array_get(node->branches, node->branches.len - 1));
		if (last_branch.stmts.len > 0) {
			if ((*(v__ast__Stmt*)array_get(last_branch.stmts, last_branch.stmts.len - 1)).typ == 180 /* v.ast.ExprStmt */) {
				v__ast__ExprStmt* it = (v__ast__ExprStmt*)(*(v__ast__Stmt*)array_get(last_branch.stmts, last_branch.stmts.len - 1)).obj; // ST it
				v__table__Type t = v__checker__Checker_expr(c, it->expr);
				node->typ = t;
				return t;
			}
			else {
			}
			;
		}
	}
	return _const_v__table__bool_type;
}

v__table__Type v__checker__Checker_postfix_expr(v__checker__Checker* c, v__ast__PostfixExpr node) { 
	v__table__Type typ = v__checker__Checker_expr(c, node.expr);
	v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(c->table, typ);
	if (!v__table__TypeSymbol_is_number(typ_sym)) {
		println(v__table__Kind_str(typ_sym->kind));
		v__checker__Checker_error(c, _STR("invalid operation: %.*s (non-numeric type `%.*s`)", v__token__Kind_str(node.op).len, v__token__Kind_str(node.op).str, typ_sym->name.len, typ_sym->name.str), node.pos);
	}
	return typ;
}

v__table__Type v__checker__Checker_index_expr(v__checker__Checker* c, v__ast__IndexExpr* node) { 
	v__table__Type typ = v__checker__Checker_expr(c, node->left);
	node->left_type = typ;
	bool is_range = false;
	if (node->index.typ == 201 /* v.ast.RangeExpr */) {
		v__ast__RangeExpr* it = (v__ast__RangeExpr*)node->index.obj; // ST it
		is_range = true;
		if (it->has_low) {
			v__checker__Checker_expr(c, it->low);
		}
		if (it->has_high) {
			v__checker__Checker_expr(c, it->high);
		}
	}
	else {
	}
	;
	v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(c->table, typ);
	if (!is_range) {
		v__table__Type index_type = v__checker__Checker_expr(c, node->index);
		v__table__TypeSymbol* index_type_sym = v__table__Table_get_type_symbol(c->table, index_type);
		if ((typ_sym->kind == v__table__Kind_array || typ_sym->kind == v__table__Kind_array_fixed) && !(v__table__is_number(index_type) || index_type_sym->kind == v__table__Kind_enum_)) {
			v__checker__Checker_error(c, _STR("non-integer index `%.*s` (array type `%.*s`)", index_type_sym->name.len, index_type_sym->name.str, typ_sym->name.len, typ_sym->name.str), node->pos);
		} else if (typ_sym->kind == v__table__Kind_map && v__table__type_idx(index_type) != _const_v__table__string_type_idx) {
			v__checker__Checker_error(c, _STR("non-string map index (map type `%.*s`)", typ_sym->name.len, typ_sym->name.str), node->pos);
		}
		v__table__Type value_type = v__table__Table_value_type(c->table, typ);
		if (value_type != _const_v__table__void_type) {
			return value_type;
		}
	} else if (is_range) {
		if (typ_sym->kind == v__table__Kind_array_fixed) {
			v__table__Type elem_type = v__table__Table_value_type(c->table, typ);
			int idx = v__table__Table_find_or_register_array(c->table, elem_type, 1);
			return v__table__new_type(idx);
		}
	}
	return typ;
}

v__table__Type v__checker__Checker_enum_val(v__checker__Checker* c, v__ast__EnumVal* node) { 
	int typ_idx = (string_eq(node->enum_name, tos3("")) ? v__table__type_idx(c->expected_type) : v__table__Table_find_type_idx(c->table, node->enum_name));
	if (typ_idx == 0) {
		v__checker__Checker_error(c, _STR("not an enum (name=%.*s) (type_idx=0)", node->enum_name.len, node->enum_name.str), node->pos);
	}
	v__table__Type typ = v__table__new_type(typ_idx);
	v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(c->table, typ);
	if (typ_sym->kind != v__table__Kind_enum_) {
		v__checker__Checker_error(c, tos3("not an enum"), node->pos);
	}
	v__table__Enum info = v__table__TypeSymbol_enum_info(typ_sym);
	if (!(_IN(string, node->val, info.vals))) {
		v__checker__Checker_error(c, _STR("enum `%.*s` does not have a value `%.*s`", typ_sym->name.len, typ_sym->name.str, node->val.len, node->val.str), node->pos);
	}
	node->typ = typ;
	return typ;
}

v__table__Type v__checker__Checker_map_init(v__checker__Checker* c, v__ast__MapInit* node) { 
	if (node->typ != 0) {
		v__table__Map info = v__table__TypeSymbol_map_info(v__table__Table_get_type_symbol(c->table, node->typ));
		node->key_type = info.key_type;
		node->value_type = info.value_type;
		return node->typ;
	}
	v__table__Type key0_type = v__checker__Checker_expr(c, (*(v__ast__Expr*)array_get(node->keys, 0)));
	v__table__Type val0_type = v__checker__Checker_expr(c, (*(v__ast__Expr*)array_get(node->vals, 0)));
	// FOR IN
	for (int i = 0; i < node->keys.
	len; i++) {	v__ast__Expr key = ((v__ast__Expr*)node->keys.
	data)[i];if (i == 0) {
			continue;
		}
		v__ast__Expr val = (*(v__ast__Expr*)array_get(node->vals, i));
		v__table__Type key_type = v__checker__Checker_expr(c, key);
		v__table__Type val_type = v__checker__Checker_expr(c, val);
		if (!v__table__Table_check(c->table, key_type, key0_type)) {
			v__table__TypeSymbol* key0_type_sym = v__table__Table_get_type_symbol(c->table, key0_type);
			v__table__TypeSymbol* key_type_sym = v__table__Table_get_type_symbol(c->table, key_type);
			v__checker__Checker_error(c, _STR("map init: cannot use `%.*s` as `%d` for map key", key_type_sym->name.len, key_type_sym->name.str, key0_type_sym), node->pos);
		}
		if (!v__table__Table_check(c->table, val_type, val0_type)) {
			v__table__TypeSymbol* val0_type_sym = v__table__Table_get_type_symbol(c->table, val0_type);
			v__table__TypeSymbol* val_type_sym = v__table__Table_get_type_symbol(c->table, val_type);
			v__checker__Checker_error(c, _STR("map init: cannot use `%.*s` as `%d` for map value", val_type_sym->name.len, val_type_sym->name.str, val0_type_sym), node->pos);
		}
	}
	v__table__Type map_type = v__table__new_type(v__table__Table_find_or_register_map(c->table, key0_type, val0_type));
	node->typ = map_type;
	node->key_type = key0_type;
	node->value_type = val0_type;
	return map_type;
}

void v__checker__Checker_warn(v__checker__Checker* c, string s, v__token__Position pos) { 
	bool allow_warnings = !c->pref->is_prod;
	v__checker__Checker_warn_or_error(c, s, pos, allow_warnings);
}

void v__checker__Checker_error(v__checker__Checker* c, string s, v__token__Position pos) { 
	v__checker__Checker_warn_or_error(c, s, pos, false);
}

void v__checker__Checker_warn_or_error(v__checker__Checker* c, string s, v__token__Position pos, bool warn) { 
	if (!warn) {
		c->nr_errors++;
	}
	if (v__pref__VerboseLevel_is_higher_or_equal(c->pref->verbosity, v__pref__VerboseLevel_level_one)) {
		print_backtrace();
	}
	string typ = (warn ? tos3("warning") : tos3("error"));
	string kind = (v__pref__VerboseLevel_is_higher_or_equal(c->pref->verbosity, v__pref__VerboseLevel_level_one) ? _STR("checker %.*s #%d:", typ.len, typ.str, c->nr_errors) : _STR("%.*s:", typ.len, typ.str));
	string ferror = v__util__formated_error(kind, s, c->file.path, pos);
	_PUSH(&c->errors, (ferror), tmp5, string);
	if (!(_IN(int, pos.line_nr, c->error_lines))) {
		if (warn) {
			println(ferror);
		} else {
			eprintln(ferror);
		}
	}
	if (!warn) {
		_PUSH(&c->error_lines, (pos.line_nr), tmp9, int);
	}
	if (v__pref__VerboseLevel_is_higher_or_equal(c->pref->verbosity, v__pref__VerboseLevel_level_one)) {
		println(tos3("\n\n"));
	}
	if (c->nr_errors >= _const_v__checker__max_nr_errors) {
		v_exit(1);
	}
}

string v__gen__cgen(array_v__ast__File files, v__table__Table* table, v__pref__Preferences* pref) { 
	if (true) {
		int x = 10;
		int y = 20;
	} else {
	}
	v__gen__Gen g = (v__gen__Gen){
		.out = strings__new_builder(100),
		.typedefs = strings__new_builder(100),
		.definitions = strings__new_builder(100),
		.gowrappers = strings__new_builder(100),
		.stringliterals = strings__new_builder(100),
		.inits = strings__new_builder(100),
		.table = table,
		.pref = pref,
		.fn_decl = 0,
		.autofree = true,
		.indent = -1,
		.file = {0},
		.tmp_count = 0,
		.variadic_args = new_map(1, sizeof(int)),
		.is_c_call = 0,
		.is_assign_lhs = 0,
		.is_assign_rhs = 0,
		.is_array_set = 0,
		.is_amp = 0,
		.optionals = new_array(0, 1, sizeof(string)),
		.inside_ternary = 0,
		.stmt_start_pos = 0,
		.right_is_opt = 0,
		.empty_line = 0,
		.is_test = 0,
		.assign_op = {0},
		.defer_stmts = new_array(0, 1, sizeof(v__ast__DeferStmt)),
		.defer_ifdef = tos3(""),
		.str_types = new_array(0, 1, sizeof(string)),
		.threaded_fns = new_array(0, 1, sizeof(string)),
	};
	v__gen__Gen_init(&g);
	bool autofree_used = false;
	// FOR IN
	for (int tmp2 = 0; tmp2 < files.
	len; tmp2++) {	v__ast__File file = ((v__ast__File*)files.
	data)[tmp2];g.file = file;
		bool building_v = true && (string_contains(g.file.path, tos3("/vlib/")) || string_contains(g.file.path, tos3("cmd/v")));
		bool is_test = string_ends_with(g.file.path, tos3(".vv")) || string_ends_with(g.file.path, tos3("_test.v"));
		if (string_ends_with(g.file.path, tos3("_test.v"))) {
			g.is_test = is_test;
		}
		if (string_eq(g.file.path, tos3("")) || is_test || building_v || !g.pref->autofree) {
			g.autofree = false;
		} else {
			g.autofree = true;
			autofree_used = true;
		}
		v__gen__Gen_stmts(&g, file.stmts);
	}
	if (autofree_used) {
		g.autofree = true;
	}
	v__gen__Gen_write_variadic_types(&g);
	v__gen__Gen_write_init_function(&g);
	if (g.is_test) {
		v__gen__Gen_write_tests_main(&g);
	}
	v__gen__Gen_finish(&g);
	return string_add(string_add(string_add(string_add(string_add(v__gen__Gen_hashes(g), strings__Builder_str(&g.typedefs)), strings__Builder_str(&g.definitions)), strings__Builder_str(&g.gowrappers)), strings__Builder_str(&g.stringliterals)), strings__Builder_str(&g.out));
}

string v__gen__Gen_hashes(v__gen__Gen g) { 
	string res = string_replace(_const_v__gen__c_commit_hash_default, tos3("@@@"), v__util__vhash());
	res = string_add(res, string_replace(_const_v__gen__c_current_commit_hash_default, tos3("@@@"), v__util__githash(g.pref->building_v)));
	return res;
}

void v__gen__Gen_init(v__gen__Gen* g) { 
	strings__Builder_writeln(&g->definitions, tos3("// Generated by the V compiler"));
	strings__Builder_writeln(&g->definitions, tos3("#include <inttypes.h>"));
	strings__Builder_writeln(&g->definitions, _const_v__gen__c_builtin_types);
	strings__Builder_writeln(&g->definitions, _const_v__gen__c_headers);
	strings__Builder_writeln(&g->definitions, tos3("\nstring _STR(const char*, ...);\n"));
	strings__Builder_writeln(&g->definitions, tos3("\nstring _STR_TMP(const char*, ...);\n"));
	v__gen__Gen_write_builtin_types(g);
	v__gen__Gen_write_typedef_types(g);
	v__gen__Gen_write_typeof_functions(g);
	v__gen__Gen_write_str_definitions(g);
	v__gen__Gen_write_sorted_types(g);
	v__gen__Gen_write_multi_return_types(g);
	strings__Builder_writeln(&g->definitions, tos3("// end of definitions #endif"));
	strings__Builder_writeln(&g->stringliterals, tos3(""));
	strings__Builder_writeln(&g->stringliterals, tos3("// >> string literal consts"));
	strings__Builder_writeln(&g->stringliterals, tos3("void vinit_string_literals(){"));
}

void v__gen__Gen_finish(v__gen__Gen* g) { 
	strings__Builder_writeln(&g->stringliterals, tos3("}"));
	strings__Builder_writeln(&g->stringliterals, tos3("// << string literal consts"));
	strings__Builder_writeln(&g->stringliterals, tos3(""));
}

void v__gen__Gen_write_typeof_functions(v__gen__Gen* g) { 
	v__gen__Gen_writeln(g, tos3(""));
	v__gen__Gen_writeln(g, tos3("// >> typeof() support for sum types"));
	// FOR IN
	for (int tmp1 = 0; tmp1 < g->table->types.
	len; tmp1++) {	v__table__TypeSymbol typ = ((v__table__TypeSymbol*)g->table->types.
	data)[tmp1];if (typ.kind == v__table__Kind_sum_type) {
			v__table__SumType sum_info = /* as */ *(v__table__SumType*)typ.info.obj;
			int tidx = v__table__Table_find_type_idx(g->table, typ.name);
			v__gen__Gen_writeln(g, _STR("char * v_typeof_sumtype_%d(int sidx) { /* %.*s */ ", tidx, typ.name.len, typ.name.str));
			v__gen__Gen_writeln(g, tos3("	switch(sidx) {"));
			v__gen__Gen_writeln(g, _STR("		case %d: return \"%.*s\";", tidx, typ.name.len, typ.name.str));
			// FOR IN
			for (int tmp3 = 0; tmp3 < sum_info.variants.
			len; tmp3++) {	v__table__Type v = ((v__table__Type*)sum_info.variants.
			data)[tmp3];v__table__TypeSymbol* subtype = v__table__Table_get_type_symbol(g->table, v);
				v__gen__Gen_writeln(g, _STR("		case %d: return \"%.*s\";", v, subtype->name.len, subtype->name.str));
			}
			v__gen__Gen_writeln(g, _STR("		default: return \"unknown %.*s\";", typ.name.len, typ.name.str));
			v__gen__Gen_writeln(g, tos3("	}"));
			v__gen__Gen_writeln(g, tos3("}"));
		}
	}
	v__gen__Gen_writeln(g, tos3("// << typeof() support for sum types"));
	v__gen__Gen_writeln(g, tos3(""));
}

string v__gen__Gen_typ(v__gen__Gen* g, v__table__Type t) { 
	int nr_muls = v__table__type_nr_muls(t);
	v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, t);
	string styp = string_replace(sym->name, tos3("."), tos3("__"));
	if (nr_muls > 0) {
		styp = string_add(styp, strings__repeat('*', nr_muls));
	}
	if (string_starts_with(styp, tos3("C__"))) {
		styp = string_substr(styp, 3, styp.len);
		if (sym->kind == v__table__Kind_struct_) {
			v__table__Struct info = /* as */ *(v__table__Struct*)sym->info.obj;
			if (!info.is_typedef) {
				styp = _STR("struct %.*s", styp.len, styp.str);
			}
		}
	}
	if (v__table__type_is(t, v__table__TypeFlag_optional)) {
		styp = string_add(tos3("Option_"), styp);
		if (!(_IN(string, styp, g->optionals))) {
			strings__Builder_writeln(&g->definitions, _STR("typedef Option %.*s;", styp.len, styp.str));
			_PUSH(&g->optionals, (styp), tmp7, string);
		}
	}
	return styp;
}

void v__gen__Gen_write_typedef_types(v__gen__Gen* g) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < g->table->types.
	len; tmp1++) {	v__table__TypeSymbol typ = ((v__table__TypeSymbol*)g->table->types.
	data)[tmp1];if (typ.kind == v__table__Kind_alias) {
			v__table__TypeSymbol* parent = &(*(v__table__TypeSymbol*)array_get(g->table->types, typ.parent_idx));
			string styp = string_replace(typ.name, tos3("."), tos3("__"));
			string parent_styp = string_replace(parent->name, tos3("."), tos3("__"));
			strings__Builder_writeln(&g->definitions, _STR("typedef %.*s %.*s;", parent_styp.len, parent_styp.str, styp.len, styp.str));
		}
		else if (typ.kind == v__table__Kind_array) {
			string styp = string_replace(typ.name, tos3("."), tos3("__"));
			strings__Builder_writeln(&g->definitions, _STR("typedef array %.*s;", styp.len, styp.str));
		}
		else if (typ.kind == v__table__Kind_map) {
			string styp = string_replace(typ.name, tos3("."), tos3("__"));
			strings__Builder_writeln(&g->definitions, _STR("typedef map %.*s;", styp.len, styp.str));
		}
		else if (typ.kind == v__table__Kind_function) {
			v__table__FnType info = /* as */ *(v__table__FnType*)typ.info.obj;
			v__table__Fn func = info.func;
			if (!info.has_decl && !info.is_anon) {
				string fn_name = (func.is_c ? string_replace(func.name, tos3("."), tos3("__")) : v__gen__c_name(func.name));
				strings__Builder_write(&g->definitions, _STR("typedef %.*s (*%.*s)(", v__gen__Gen_typ(g, func.return_type).len, v__gen__Gen_typ(g, func.return_type).str, fn_name.len, fn_name.str));
				// FOR IN
				for (int i = 0; i < func.args.
				len; i++) {	v__table__Arg arg = ((v__table__Arg*)func.args.
				data)[i];strings__Builder_write(&g->definitions, v__gen__Gen_typ(g, arg.typ));
					if (i < func.args.len - 1) {
						strings__Builder_write(&g->definitions, tos3(","));
					}
				}
				strings__Builder_writeln(&g->definitions, tos3(");"));
			}
		}
		else {
			continue;
		}
		;
	}
}

void v__gen__Gen_write_multi_return_types(v__gen__Gen* g) { 
	strings__Builder_writeln(&g->definitions, tos3("// multi return structs"));
	// FOR IN
	for (int tmp1 = 0; tmp1 < g->table->types.
	len; tmp1++) {	v__table__TypeSymbol typ = ((v__table__TypeSymbol*)g->table->types.
	data)[tmp1];if (typ.kind != v__table__Kind_multi_return) {
			continue;
		}
		string name = string_replace(typ.name, tos3("."), tos3("__"));
		v__table__MultiReturn info = /* as */ *(v__table__MultiReturn*)typ.info.obj;
		strings__Builder_writeln(&g->definitions, tos3("typedef struct {"));
		// FOR IN
		for (int i = 0; i < info.types.
		len; i++) {	v__table__Type mr_typ = ((v__table__Type*)info.types.
		data)[i];string type_name = v__gen__Gen_typ(g, mr_typ);
			strings__Builder_writeln(&g->definitions, _STR("\t%.*s arg%d;", type_name.len, type_name.str, i));
		}
		strings__Builder_writeln(&g->definitions, _STR("} %.*s;\n", name.len, name.str));
	}
}

void v__gen__Gen_write_variadic_types(v__gen__Gen* g) { 
	if (g->variadic_args.size > 0) {
		strings__Builder_writeln(&g->definitions, tos3("// variadic structs"));
	}
	// FOR IN
	array_string keys_tmp2 = map_keys(&g->variadic_args);
	for (int tmp3 = 0; tmp3 < keys_tmp2.len; tmp3++) {
		string type_str = ((string*)keys_tmp2.data)[tmp3];
		int arg_len = (*(int*)map_get3(g->variadic_args, type_str, &(int[]){ 0 }));
		v__table__Type typ = ((v__table__Type)(string_int(type_str)));
		string type_name = v__gen__Gen_typ(g, typ);
		string struct_name = string_add(tos3("varg_"), string_replace(type_name, tos3("*"), tos3("_ptr")));
		strings__Builder_writeln(&g->definitions, _STR("struct %.*s {", struct_name.len, struct_name.str));
		strings__Builder_writeln(&g->definitions, tos3("\tint len;"));
		strings__Builder_writeln(&g->definitions, _STR("\t%.*s args[%d];", type_name.len, type_name.str, arg_len));
		strings__Builder_writeln(&g->definitions, tos3("};\n"));
		strings__Builder_writeln(&g->typedefs, _STR("typedef struct %.*s %.*s;", struct_name.len, struct_name.str, struct_name.len, struct_name.str));
	}
}

void v__gen__Gen_save(v__gen__Gen g) { 
}

void v__gen__Gen_write(v__gen__Gen* g, string s) { 
	if (g->indent > 0 && g->empty_line) {
		strings__Builder_write(&g->out, (*(string*)array_get(_const_v__gen__tabs, g->indent)));
	}
	strings__Builder_write(&g->out, s);
	g->empty_line = false;
}

void v__gen__Gen_writeln(v__gen__Gen* g, string s) { 
	if (g->indent > 0 && g->empty_line) {
		strings__Builder_write(&g->out, (*(string*)array_get(_const_v__gen__tabs, g->indent)));
	}
	strings__Builder_writeln(&g->out, s);
	g->empty_line = true;
}

string v__gen__Gen_new_tmp_var(v__gen__Gen* g) { 
	g->tmp_count++;
	return _STR("tmp%d", g->tmp_count);
}

void v__gen__Gen_reset_tmp_count(v__gen__Gen* g) { 
	g->tmp_count = 0;
}

void v__gen__Gen_stmts(v__gen__Gen* g, array_v__ast__Stmt stmts) { 
	g->indent++;
	// FOR IN
	for (int tmp1 = 0; tmp1 < stmts.
	len; tmp1++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)stmts.
	data)[tmp1];v__gen__Gen_stmt(g, stmt);
	}
	g->indent--;
}

void v__gen__Gen_stmt(v__gen__Gen* g, v__ast__Stmt node) { 
	g->stmt_start_pos = g->out.len;
	if (node.typ == 173 /* v.ast.AssertStmt */) {
		v__ast__AssertStmt* it = (v__ast__AssertStmt*)node.obj; // ST it
		v__gen__Gen_gen_assert_stmt(g, */*d*/it);
	}
	else if (node.typ == 225 /* v.ast.AssignStmt */) {
		v__ast__AssignStmt* it = (v__ast__AssignStmt*)node.obj; // ST it
		v__gen__Gen_gen_assign_stmt(g, */*d*/it);
	}
	else if (node.typ == 184 /* v.ast.Attr */) {
		v__ast__Attr* it = (v__ast__Attr*)node.obj; // ST it
		v__gen__Gen_writeln(g, _STR("//[%.*s]", it->name.len, it->name.str));
	}
	else if (node.typ == 172 /* v.ast.Block */) {
		v__ast__Block* it = (v__ast__Block*)node.obj; // ST it
		v__gen__Gen_writeln(g, tos3("{"));
		v__gen__Gen_stmts(g, it->stmts);
		v__gen__Gen_writeln(g, tos3("}"));
	}
	else if (node.typ == 174 /* v.ast.BranchStmt */) {
		v__ast__BranchStmt* it = (v__ast__BranchStmt*)node.obj; // ST it
		v__gen__Gen_write(g, v__token__Kind_str(it->tok.kind));
		v__gen__Gen_writeln(g, tos3(";"));
	}
	else if (node.typ == 215 /* v.ast.ConstDecl */) {
		v__ast__ConstDecl* it = (v__ast__ConstDecl*)node.obj; // ST it
		v__gen__Gen_const_decl(g, */*d*/it);
	}
	else if (node.typ == 155 /* v.ast.CompIf */) {
		v__ast__CompIf* it = (v__ast__CompIf*)node.obj; // ST it
		v__gen__Gen_comp_if(g, */*d*/it);
	}
	else if (node.typ == 176 /* v.ast.DeferStmt */) {
		v__ast__DeferStmt* it = (v__ast__DeferStmt*)node.obj; // ST it
		v__ast__DeferStmt defer_stmt = *it;
		defer_stmt.ifdef = g->defer_ifdef;
		_PUSH(&g->defer_stmts, (defer_stmt), tmp2, v__ast__DeferStmt);
	}
	else if (node.typ == 232 /* v.ast.EnumDecl */) {
		v__ast__EnumDecl* it = (v__ast__EnumDecl*)node.obj; // ST it
		string name = string_replace(it->name, tos3("."), tos3("__"));
		strings__Builder_writeln(&g->typedefs, tos3("typedef enum {"));
		// FOR IN
		for (int j = 0; j < it->vals.
		len; j++) {	string val = ((string*)it->vals.
		data)[j];if (j < it->default_exprs.len) {
				strings__Builder_write(&g->typedefs, _STR("\t%.*s_%.*s = ", name.len, name.str, val.len, val.str));
				int pos = g->out.len;
				v__gen__Gen_expr(g, (*(v__ast__Expr*)array_get(it->default_exprs, j)));
				string expr = strings__Builder_after(&g->out, pos);
				strings__Builder_go_back(&g->out, expr.len);
				strings__Builder_writeln(&g->typedefs, _STR("%.*s ,", expr.len, expr.str));
			} else {
				strings__Builder_writeln(&g->typedefs, _STR("\t%.*s_%.*s, // %d", name.len, name.str, val.len, val.str, j));
			}
		}
		strings__Builder_writeln(&g->typedefs, _STR("} %.*s;\n", name.len, name.str));
	}
	else if (node.typ == 180 /* v.ast.ExprStmt */) {
		v__ast__ExprStmt* it = (v__ast__ExprStmt*)node.obj; // ST it
		v__gen__Gen_expr(g, it->expr);
		v__ast__Expr expr = it->expr;
		if (expr.typ == 206 /* v.ast.IfExpr */) {
			v__ast__IfExpr* it = (v__ast__IfExpr*)expr.obj; // ST it
		}
		else {
			if (!g->inside_ternary) {
				v__gen__Gen_writeln(g, tos3(";"));
			}
		}
		;
	}
	else if (node.typ == 126 /* v.ast.FnDecl */) {
		v__ast__FnDecl* it = (v__ast__FnDecl*)node.obj; // ST it
		g->fn_decl = it;
		v__gen__Gen_gen_fn_decl(g, */*d*/it);
		v__gen__Gen_writeln(g, tos3(""));
	}
	else if (node.typ == 204 /* v.ast.ForCStmt */) {
		v__ast__ForCStmt* it = (v__ast__ForCStmt*)node.obj; // ST it
		v__gen__Gen_write(g, tos3("for ("));
		if (!it->has_init) {
			v__gen__Gen_write(g, tos3("; "));
		} else {
			v__gen__Gen_stmt(g, it->init);
		}
		v__gen__Gen_expr(g, it->cond);
		v__gen__Gen_write(g, tos3("; "));
		v__gen__Gen_expr(g, it->inc);
		v__gen__Gen_writeln(g, tos3(") {"));
		v__gen__Gen_stmts(g, it->stmts);
		v__gen__Gen_writeln(g, tos3("}"));
	}
	else if (node.typ == 205 /* v.ast.ForInStmt */) {
		v__ast__ForInStmt* it = (v__ast__ForInStmt*)node.obj; // ST it
		v__gen__Gen_for_in(g, */*d*/it);
	}
	else if (node.typ == 203 /* v.ast.ForStmt */) {
		v__ast__ForStmt* it = (v__ast__ForStmt*)node.obj; // ST it
		v__gen__Gen_write(g, tos3("while ("));
		if (it->is_inf) {
			v__gen__Gen_write(g, tos3("1"));
		} else {
			v__gen__Gen_expr(g, it->cond);
		}
		v__gen__Gen_writeln(g, tos3(") {"));
		v__gen__Gen_stmts(g, it->stmts);
		v__gen__Gen_writeln(g, tos3("}"));
	}
	else if (node.typ == 227 /* v.ast.GlobalDecl */) {
		v__ast__GlobalDecl* it = (v__ast__GlobalDecl*)node.obj; // ST it
		string styp = v__gen__Gen_typ(g, it->typ);
		strings__Builder_writeln(&g->definitions, _STR("%.*s %.*s; // global", styp.len, styp.str, it->name.len, it->name.str));
	}
	else if (node.typ == 177 /* v.ast.GoStmt */) {
		v__ast__GoStmt* it = (v__ast__GoStmt*)node.obj; // ST it
		v__gen__Gen_go_stmt(g, */*d*/it);
	}
	else if (node.typ == 179 /* v.ast.GotoLabel */) {
		v__ast__GotoLabel* it = (v__ast__GotoLabel*)node.obj; // ST it
		v__gen__Gen_writeln(g, _STR("%.*s:", it->name.len, it->name.str));
	}
	else if (node.typ == 178 /* v.ast.GotoStmt */) {
		v__ast__GotoStmt* it = (v__ast__GotoStmt*)node.obj; // ST it
		v__gen__Gen_writeln(g, _STR("goto %.*s;", it->name.len, it->name.str));
	}
	else if (node.typ == 226 /* v.ast.HashStmt */) {
		v__ast__HashStmt* it = (v__ast__HashStmt*)node.obj; // ST it
		string typ = string_all_before(it->val, tos3(" "));
		if ((string_eq(typ, tos3("include")) || string_eq(typ, tos3("define")))) {
			strings__Builder_writeln(&g->definitions, _STR("#%.*s", it->val.len, it->val.str));
		}
	}
	else if (node.typ == 165 /* v.ast.Import */) {
		v__ast__Import* it = (v__ast__Import*)node.obj; // ST it
	}
	else if (node.typ == 221 /* v.ast.InterfaceDecl */) {
		v__ast__InterfaceDecl* it = (v__ast__InterfaceDecl*)node.obj; // ST it
		v__gen__Gen_writeln(g, tos3("// interface"));
	}
	else if (node.typ == 222 /* v.ast.Return */) {
		v__ast__Return* it = (v__ast__Return*)node.obj; // ST it
		if (g->defer_stmts.len > 0) {
			v__gen__Gen_write_defer_stmts(g);
		}
		v__gen__Gen_return_statement(g, */*d*/it);
	}
	else if (node.typ == 218 /* v.ast.StructDecl */) {
		v__ast__StructDecl* it = (v__ast__StructDecl*)node.obj; // ST it
		string name = (it->is_c ? string_replace(it->name, tos3("."), tos3("__")) : v__gen__c_name(it->name));
		if (!it->is_c) {
			strings__Builder_writeln(&g->typedefs, _STR("typedef struct %.*s %.*s;", name.len, name.str, name.len, name.str));
		}
	}
	else if (node.typ == 233 /* v.ast.TypeDecl */) {
		v__ast__TypeDecl* it = (v__ast__TypeDecl*)node.obj; // ST it
		v__gen__Gen_writeln(g, tos3("// TypeDecl"));
	}
	else if (node.typ == 175 /* v.ast.UnsafeStmt */) {
		v__ast__UnsafeStmt* it = (v__ast__UnsafeStmt*)node.obj; // ST it
		v__gen__Gen_stmts(g, it->stmts);
	}
	else {
		v__gen__verror(string_add(tos3("cgen.stmt(): unhandled node "), tos3( /* v.ast.Stmt */ v_typeof_sumtype_123( (node).typ ))));
	}
	;
}

void v__gen__Gen_write_defer_stmts(v__gen__Gen* g) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < g->defer_stmts.
	len; tmp1++) {	v__ast__DeferStmt defer_stmt = ((v__ast__DeferStmt*)g->defer_stmts.
	data)[tmp1];v__gen__Gen_writeln(g, tos3("// defer"));
		if (defer_stmt.ifdef.len > 0) {
			v__gen__Gen_writeln(g, defer_stmt.ifdef);
			v__gen__Gen_stmts(g, defer_stmt.stmts);
			v__gen__Gen_writeln(g, tos3("#endif"));
		} else {
			v__gen__Gen_stmts(g, defer_stmt.stmts);
		}
	}
}

void v__gen__Gen_for_in(v__gen__Gen* g, v__ast__ForInStmt it) { 
	if (it.is_range) {
		string i = v__gen__Gen_new_tmp_var(g);
		v__gen__Gen_write(g, _STR("for (int %.*s = ", i.len, i.str));
		v__gen__Gen_expr(g, it.cond);
		v__gen__Gen_write(g, _STR("; %.*s < ", i.len, i.str));
		v__gen__Gen_expr(g, it.high);
		v__gen__Gen_writeln(g, _STR("; %.*s++) { ", i.len, i.str));
		v__gen__Gen_writeln(g, _STR("\tint %.*s = %.*s;", it.val_var.len, it.val_var.str, i.len, i.str));
		v__gen__Gen_stmts(g, it.stmts);
		v__gen__Gen_writeln(g, tos3("}"));
	} else if (it.kind == v__table__Kind_array) {
		v__gen__Gen_writeln(g, tos3("// FOR IN"));
		string i = (string_eq(it.key_var, tos3("")) ? v__gen__Gen_new_tmp_var(g) : it.key_var);
		string styp = v__gen__Gen_typ(g, it.val_type);
		v__gen__Gen_write(g, _STR("for (int %.*s = 0; %.*s < ", i.len, i.str, i.len, i.str));
		v__gen__Gen_expr(g, it.cond);
		bool cond_type_is_ptr = v__table__type_is_ptr(it.cond_type);
		if (cond_type_is_ptr) {
			v__gen__Gen_writeln(g, tos3("->"));
		} else {
			v__gen__Gen_writeln(g, tos3("."));
		}
		v__gen__Gen_write(g, _STR("len; %.*s++) {", i.len, i.str));
		v__gen__Gen_write(g, _STR("\t%.*s %.*s = ((%.*s*)", styp.len, styp.str, it.val_var.len, it.val_var.str, styp.len, styp.str));
		v__gen__Gen_expr(g, it.cond);
		if (cond_type_is_ptr) {
			v__gen__Gen_writeln(g, tos3("->"));
		} else {
			v__gen__Gen_writeln(g, tos3("."));
		}
		v__gen__Gen_write(g, _STR("data)[%.*s];", i.len, i.str));
		v__gen__Gen_stmts(g, it.stmts);
		v__gen__Gen_writeln(g, tos3("}"));
	} else if (it.kind == v__table__Kind_map) {
		v__gen__Gen_writeln(g, tos3("// FOR IN"));
		string key_styp = v__gen__Gen_typ(g, it.key_type);
		string val_styp = v__gen__Gen_typ(g, it.val_type);
		string keys_tmp = string_add(tos3("keys_"), v__gen__Gen_new_tmp_var(g));
		string idx = v__gen__Gen_new_tmp_var(g);
		string key = (string_eq(it.key_var, tos3("")) ? v__gen__Gen_new_tmp_var(g) : it.key_var);
		string zero = v__gen__Gen_type_default(/*rec*/*g, it.val_type);
		v__gen__Gen_write(g, _STR("array_%.*s %.*s = map_keys(&", key_styp.len, key_styp.str, keys_tmp.len, keys_tmp.str));
		v__gen__Gen_expr(g, it.cond);
		v__gen__Gen_writeln(g, tos3(");"));
		v__gen__Gen_writeln(g, _STR("for (int %.*s = 0; %.*s < %.*s.len; %.*s++) {", idx.len, idx.str, idx.len, idx.str, keys_tmp.len, keys_tmp.str, idx.len, idx.str));
		v__gen__Gen_writeln(g, _STR("\t%.*s %.*s = ((%.*s*)%.*s.data)[%.*s];", key_styp.len, key_styp.str, key.len, key.str, key_styp.len, key_styp.str, keys_tmp.len, keys_tmp.str, idx.len, idx.str));
		v__gen__Gen_write(g, _STR("\t%.*s %.*s = (*(%.*s*)map_get3(", val_styp.len, val_styp.str, it.val_var.len, it.val_var.str, val_styp.len, val_styp.str));
		v__gen__Gen_expr(g, it.cond);
		v__gen__Gen_writeln(g, _STR(", %.*s, &(%.*s[]){ %.*s }));", key.len, key.str, val_styp.len, val_styp.str, zero.len, zero.str));
		v__gen__Gen_stmts(g, it.stmts);
		v__gen__Gen_writeln(g, tos3("}"));
	} else if (v__table__type_is(it.cond_type, v__table__TypeFlag_variadic)) {
		v__gen__Gen_writeln(g, tos3("// FOR IN"));
		string i = (string_eq(it.key_var, tos3("")) ? v__gen__Gen_new_tmp_var(g) : it.key_var);
		string styp = v__gen__Gen_typ(g, it.cond_type);
		v__gen__Gen_write(g, _STR("for (int %.*s = 0; %.*s < ", i.len, i.str, i.len, i.str));
		v__gen__Gen_expr(g, it.cond);
		v__gen__Gen_writeln(g, _STR(".len; %.*s++) {", i.len, i.str));
		v__gen__Gen_write(g, _STR("%.*s %.*s = ", styp.len, styp.str, it.val_var.len, it.val_var.str));
		v__gen__Gen_expr(g, it.cond);
		v__gen__Gen_writeln(g, _STR(".args[%.*s];", i.len, i.str));
		v__gen__Gen_stmts(g, it.stmts);
		v__gen__Gen_writeln(g, tos3("}"));
	} else if (it.kind == v__table__Kind_string) {
		string i = (string_eq(it.key_var, tos3("")) ? v__gen__Gen_new_tmp_var(g) : it.key_var);
		v__gen__Gen_write(g, _STR("for (int %.*s = 0; %.*s < ", i.len, i.str, i.len, i.str));
		v__gen__Gen_expr(g, it.cond);
		v__gen__Gen_writeln(g, _STR(".len; %.*s++) {", i.len, i.str));
		v__gen__Gen_write(g, _STR("byte %.*s = ", it.val_var.len, it.val_var.str));
		v__gen__Gen_expr(g, it.cond);
		v__gen__Gen_writeln(g, _STR(".str[%.*s];", i.len, i.str));
		v__gen__Gen_stmts(g, it.stmts);
		v__gen__Gen_writeln(g, tos3("}"));
	}
}

void v__gen__Gen_expr_with_cast(v__gen__Gen* g, v__ast__Expr expr, v__table__Type got_type, v__table__Type exp_type) { 
	if (exp_type != _const_v__table__void_type) {
		v__table__TypeSymbol* exp_sym = v__table__Table_get_type_symbol(g->table, exp_type);
		if (exp_sym->kind == v__table__Kind_sum_type) {
			v__table__SumType sum_info = /* as */ *(v__table__SumType*)exp_sym->info.obj;
			if (_IN(v__table__Type, got_type, sum_info.variants)) {
				v__table__TypeSymbol* got_sym = v__table__Table_get_type_symbol(g->table, got_type);
				string got_styp = v__gen__Gen_typ(g, got_type);
				string exp_styp = v__gen__Gen_typ(g, exp_type);
				int got_idx = v__table__type_idx(got_type);
				v__gen__Gen_write(g, _STR("/* sum type cast */ (%.*s) {.obj = memdup(&(%.*s[]) {", exp_styp.len, exp_styp.str, got_styp.len, got_styp.str));
				v__gen__Gen_expr(g, expr);
				v__gen__Gen_write(g, _STR("}, sizeof(%.*s)), .typ = %d /* %.*s */}", got_styp.len, got_styp.str, got_idx, got_sym->name.len, got_sym->name.str));
				return;
			}
		}
	}
	v__gen__Gen_expr(g, expr);
}

void v__gen__Gen_gen_assert_stmt(v__gen__Gen* g, v__ast__AssertStmt a) { 
	v__gen__Gen_writeln(g, tos3("// assert"));
	v__gen__Gen_write(g, tos3("if( "));
	v__gen__Gen_expr(g, a.expr);
	v__gen__Gen_write(g, tos3(" )"));
	string s_assertion = string_replace(v__ast__Expr_str(a.expr), tos3("\""), tos3("\'"));
	string mod_path = g->file.path;
	
#ifdef _WIN32
	// #if windows
		mod_path = string_replace(g->file.path, tos3("\\"), tos3("\\\\"));
	#endif
	if (g->is_test) {
		v__gen__Gen_writeln(g, tos3("{"));
		v__gen__Gen_writeln(g, tos3("	g_test_oks++;"));
		v__gen__Gen_writeln(g, _STR("	cb_assertion_ok( _STR(\"%.*s\"), %d, _STR(\"assert %.*s\"), _STR(\"%.*s()\") );", mod_path.len, mod_path.str, a.pos.line_nr, s_assertion.len, s_assertion.str, g->fn_decl->name.len, g->fn_decl->name.str));
		v__gen__Gen_writeln(g, tos3("}else{"));
		v__gen__Gen_writeln(g, tos3("	g_test_fails++;"));
		v__gen__Gen_writeln(g, _STR("	cb_assertion_failed( _STR(\"%.*s\"), %d, _STR(\"assert %.*s\"), _STR(\"%.*s()\") );", mod_path.len, mod_path.str, a.pos.line_nr, s_assertion.len, s_assertion.str, g->fn_decl->name.len, g->fn_decl->name.str));
		v__gen__Gen_writeln(g, tos3("	exit(1);"));
		v__gen__Gen_writeln(g, tos3("	// TODO"));
		v__gen__Gen_writeln(g, tos3("	// Maybe print all vars in a test function if it fails?"));
		v__gen__Gen_writeln(g, tos3("}"));
		return;
	}
	v__gen__Gen_writeln(g, tos3("{}else{"));
	v__gen__Gen_writeln(g, _STR("	eprintln(_STR(\"%.*s:%d: FAIL: fn %.*s(): assert %.*s\"));", mod_path.len, mod_path.str, a.pos.line_nr, g->fn_decl->name.len, g->fn_decl->name.str, s_assertion.len, s_assertion.str));
	v__gen__Gen_writeln(g, tos3("	exit(1);"));
	v__gen__Gen_writeln(g, tos3("}"));
}

void v__gen__Gen_gen_assign_stmt(v__gen__Gen* g, v__ast__AssignStmt assign_stmt) { 
	if (assign_stmt.is_static) {
		v__gen__Gen_write(g, tos3("static "));
	}
	if (assign_stmt.left.len > assign_stmt.right.len) {
		array_v__ast__Stmt or_stmts = new_array(0, 0, sizeof(v__ast__Stmt));
		v__table__Type return_type = _const_v__table__void_type;
		if ((*(v__ast__Expr*)array_get(assign_stmt.right, 0)).typ == 156 /* v.ast.CallExpr */) {
			v__ast__CallExpr* it = (v__ast__CallExpr*)(*(v__ast__Expr*)array_get(assign_stmt.right, 0)).obj; // ST it
			or_stmts = it->or_block.stmts;
			return_type = it->return_type;
		}
		else {
		}
		;
		bool is_optional = v__table__type_is(return_type, v__table__TypeFlag_optional);
		string mr_var_name = _STR("mr_%d", assign_stmt.pos.pos);
		string mr_styp = v__gen__Gen_typ(g, return_type);
		v__gen__Gen_write(g, _STR("%.*s %.*s = ", mr_styp.len, mr_styp.str, mr_var_name.len, mr_var_name.str));
		g->is_assign_rhs = true;
		v__gen__Gen_expr(g, (*(v__ast__Expr*)array_get(assign_stmt.right, 0)));
		g->is_assign_rhs = false;
		if (is_optional) {
			v__gen__Gen_or_block(g, mr_var_name, or_stmts, return_type);
		}
		v__gen__Gen_writeln(g, tos3(";"));
		// FOR IN
		for (int i = 0; i < assign_stmt.left.
		len; i++) {	v__ast__Ident ident = ((v__ast__Ident*)assign_stmt.left.
		data)[i];if (ident.kind == v__ast__IdentKind_blank_ident) {
				continue;
			}
			v__ast__IdentVar ident_var_info = v__ast__Ident_var_info(&ident);
			string styp = v__gen__Gen_typ(g, ident_var_info.typ);
			if (assign_stmt.op == v__token__Kind_decl_assign) {
				v__gen__Gen_write(g, _STR("%.*s ", styp.len, styp.str));
			}
			v__gen__Gen_expr(g, /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__Ident[]) {ident}, sizeof(v__ast__Ident)), .typ = 185 /* v.ast.Ident */});
			if (is_optional) {
				string mr_styp2 = string_substr(mr_styp, 7, mr_styp.len);
				v__gen__Gen_writeln(g, _STR(" = (*(%.*s*)%.*s.data).arg%d;", mr_styp2.len, mr_styp2.str, mr_var_name.len, mr_var_name.str, i));
			} else {
				v__gen__Gen_writeln(g, _STR(" = %.*s.arg%d;", mr_var_name.len, mr_var_name.str, i));
			}
		}
	} else {
		// FOR IN
		for (int i = 0; i < assign_stmt.left.
		len; i++) {	v__ast__Ident ident = ((v__ast__Ident*)assign_stmt.left.
		data)[i];v__ast__Expr val = (*(v__ast__Expr*)array_get(assign_stmt.right, i));
			v__ast__IdentVar ident_var_info = v__ast__Ident_var_info(&ident);
			string styp = v__gen__Gen_typ(g, ident_var_info.typ);
			bool is_call = false;
			array_v__ast__Stmt or_stmts = new_array(0, 0, sizeof(v__ast__Stmt));
			v__table__Type return_type = _const_v__table__void_type;
			if (val.typ == 156 /* v.ast.CallExpr */) {
				v__ast__CallExpr* it = (v__ast__CallExpr*)val.obj; // ST it
				is_call = true;
				or_stmts = it->or_block.stmts;
				return_type = it->return_type;
			}
			else {
			}
			;
			bool gen_or = is_call && v__table__type_is(return_type, v__table__TypeFlag_optional);
			g->is_assign_rhs = true;
			if (ident.kind == v__ast__IdentKind_blank_ident) {
				if (is_call) {
					v__gen__Gen_expr(g, val);
				} else {
					v__gen__Gen_write(g, _STR("{%.*s _ = ", styp.len, styp.str));
					v__gen__Gen_expr(g, val);
					v__gen__Gen_writeln(g, tos3(";}"));
				}
			} else {
				v__table__TypeSymbol* right_sym = v__table__Table_get_type_symbol(g->table, (*(v__table__Type*)array_get(assign_stmt.right_types, i)));
				bool is_fixed_array_init = false;
				if (val.typ == 212 /* v.ast.ArrayInit */) {
					v__ast__ArrayInit* it = (v__ast__ArrayInit*)val.obj; // ST it
					is_fixed_array_init = right_sym->kind == v__table__Kind_array_fixed;
				}
				else {
				}
				;
				bool is_decl = assign_stmt.op == v__token__Kind_decl_assign;
				if (is_decl) {
					v__gen__Gen_write(g, _STR("%.*s ", styp.len, styp.str));
				}
				v__gen__Gen_expr(g, /* sum type cast */ (v__ast__Expr) {.obj = memdup(&(v__ast__Ident[]) {ident}, sizeof(v__ast__Ident)), .typ = 185 /* v.ast.Ident */});
				if (g->autofree && (right_sym->kind == v__table__Kind_array || right_sym->kind == v__table__Kind_string)) {
					if (v__gen__Gen_gen_clone_assignment(g, val, */*d*/right_sym, true)) {
						v__gen__Gen_writeln(g, tos3(";"));
						return;
					}
				}
				if (!is_fixed_array_init) {
					v__gen__Gen_write(g, tos3(" = "));
					if (!is_decl) {
						v__gen__Gen_expr_with_cast(g, val, (*(v__table__Type*)array_get(assign_stmt.left_types, i)), ident_var_info.typ);
					} else {
						v__gen__Gen_expr(g, val);
					}
				} else if (is_fixed_array_init) {
					v__gen__Gen_write(g, tos3("= {0}"));
				}
				if (gen_or) {
					v__gen__Gen_or_block(g, ident.name, or_stmts, return_type);
				}
			}
			g->is_assign_rhs = false;
			v__gen__Gen_writeln(g, tos3(";"));
		}
	}
}

bool v__gen__Gen_gen_clone_assignment(v__gen__Gen* g, v__ast__Expr val, v__table__TypeSymbol right_sym, bool add_eq) { 
	bool is_ident = false;
	if (val.typ == 185 /* v.ast.Ident */) {
		v__ast__Ident* it = (v__ast__Ident*)val.obj; // ST it
		is_ident = true;
	}
	else if (val.typ == 202 /* v.ast.SelectorExpr */) {
		v__ast__SelectorExpr* it = (v__ast__SelectorExpr*)val.obj; // ST it
		is_ident = true;
	}
	else {
		return false;
	}
	;
	if (g->autofree && right_sym.kind == v__table__Kind_array && is_ident) {
		if (add_eq) {
			v__gen__Gen_write(g, tos3("="));
		}
		v__gen__Gen_write(g, tos3(" array_clone(&"));
		v__gen__Gen_expr(g, val);
		v__gen__Gen_write(g, tos3(")"));
	} else if (g->autofree && right_sym.kind == v__table__Kind_string && is_ident) {
		if (add_eq) {
			v__gen__Gen_write(g, tos3("="));
		}
		v__gen__Gen_write(g, tos3(" string_clone("));
		v__gen__Gen_expr(g, val);
		v__gen__Gen_write(g, tos3(")"));
	}
	return true;
}

void v__gen__Gen_gen_fn_decl(v__gen__Gen* g, v__ast__FnDecl it) { 
	if (it.is_c) {
		return;
	}
	v__gen__Gen_reset_tmp_count(g);
	bool is_main = string_eq(it.name, tos3("main"));
	if (is_main) {
		if (g->pref->os == v__pref__OS_windows) {
			v__gen__Gen_write(g, tos3("int wmain(int ___argc, wchar_t *___argv[], wchar_t *___envp[]"));
		} else {
			v__gen__Gen_write(g, _STR("int %.*s(int ___argc, char** ___argv", it.name.len, it.name.str));
		}
	} else {
		string name = it.name;
		if (it.is_method) {
			name = string_add(string_add(v__table__Table_get_type_symbol(g->table, it.receiver.typ)->name, tos3("_")), name);
		}
		if (it.is_c) {
			name = string_replace(name, tos3("."), tos3("__"));
		} else {
			name = v__gen__c_name(name);
		}
		if (string_starts_with(name, tos3("_op_"))) {
			name = v__gen__op_to_fn_name(name);
		}
		string type_name = v__gen__Gen_typ(g, it.return_type);
		v__gen__Gen_write(g, _STR("%.*s %.*s(", type_name.len, type_name.str, name.len, name.str));
		strings__Builder_write(&g->definitions, _STR("%.*s %.*s(", type_name.len, type_name.str, name.len, name.str));
	}
	v__gen__Gen_fn_args(g, it.args, it.is_variadic);
	if (it.no_body) {
		strings__Builder_writeln(&g->definitions, tos3(");"));
		v__gen__Gen_writeln(g, tos3(");"));
		return;
	}
	v__gen__Gen_writeln(g, tos3(") { "));
	if (!is_main) {
		strings__Builder_writeln(&g->definitions, tos3(");"));
	}
	if (is_main) {
		v__gen__Gen_writeln(g, tos3("\t_vinit();"));
		if (v__gen__Gen_is_importing_os(/*rec*/*g)) {
			if (g->autofree) {
				v__gen__Gen_writeln(g, tos3("free(_const_os__args.data); // empty, inited in _vinit()"));
			}
			if (g->pref->os == v__pref__OS_windows) {
				v__gen__Gen_writeln(g, tos3("_const_os__args = os__init_os_args_wide(___argc, ___argv);"));
			} else {
				v__gen__Gen_writeln(g, tos3("_const_os__args = os__init_os_args(___argc, (byteptr*)___argv);"));
			}
		}
	}
	v__gen__Gen_stmts(g, it.stmts);
	if (g->autofree) {
		v__gen__Gen_free_scope_vars(g, it.pos.pos - 1);
	}
	if (is_main) {
		if (g->autofree) {
			v__gen__Gen_writeln(g, tos3("\t_vcleanup();"));
		}
		if (g->is_test) {
			v__gen__verror(tos3("test files cannot have function `main`"));
		}
		v__gen__Gen_writeln(g, tos3("\treturn 0;"));
	}
	if (g->defer_stmts.len > 0) {
		v__gen__Gen_write_defer_stmts(g);
	}
	v__gen__Gen_writeln(g, tos3("}"));
	g->defer_stmts = new_array(0, 0, sizeof(v__ast__DeferStmt));
	g->fn_decl = 0;
}

void v__gen__Gen_free_scope_vars(v__gen__Gen* g, int pos) { 
	v__ast__Scope* scope = v__ast__Scope_innermost(g->file.scope, pos);
	// FOR IN
	array_string keys_tmp1 = map_keys(&scope->objects);
	for (int tmp2 = 0; tmp2 < keys_tmp1.len; tmp2++) {
		string _ = ((string*)keys_tmp1.data)[tmp2];
		v__ast__ScopeObject obj = (*(v__ast__ScopeObject*)map_get3(scope->objects, _, &(v__ast__ScopeObject[]){ {0} }));
		if (obj.typ == 157 /* v.ast.Var */) {
			v__ast__Var* it = (v__ast__Var*)obj.obj; // ST it
			v__ast__Var var = *it;
			v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, var.typ);
			bool is_optional = v__table__type_is(var.typ, v__table__TypeFlag_optional);
			if (sym->kind == v__table__Kind_array && !is_optional) {
				v__gen__Gen_writeln(g, _STR("array_free(%.*s); // autofreed", var.name.len, var.name.str));
			}
			if (sym->kind == v__table__Kind_string && !is_optional) {
				string t = tos3( /* v.ast.Expr */ v_typeof_sumtype_181( (var.expr).typ ));
				if (var.expr.typ == 210 /* v.ast.StringLiteral */) {
					v__ast__StringLiteral* it = (v__ast__StringLiteral*)var.expr.obj; // ST it
					v__gen__Gen_writeln(g, tos3("// str literal"));
					continue;
				}
				else {
					v__gen__Gen_writeln(g, string_add(tos3("// other "), t));
					continue;
				}
				;
				v__gen__Gen_writeln(g, _STR("string_free(%.*s); // autofreed", var.name.len, var.name.str));
			}
		}
		else {
		}
		;
	}
}

void v__gen__Gen_fn_args(v__gen__Gen* g, array_v__table__Arg args, bool is_variadic) { 
	bool no_names = args.len > 0 && string_eq((*(v__table__Arg*)array_get(args, 0)).name, tos3("arg_1"));
	// FOR IN
	for (int i = 0; i < args.
	len; i++) {	v__table__Arg arg = ((v__table__Arg*)args.
	data)[i];v__table__TypeSymbol* arg_type_sym = v__table__Table_get_type_symbol(g->table, arg.typ);
		string arg_type_name = v__gen__Gen_typ(g, arg.typ);
		bool is_varg = i == args.len - 1 && is_variadic;
		if (is_varg) {
			string varg_type_str = int_str(((int)(arg.typ)));
			if (!(_IN_MAP(varg_type_str, g->variadic_args))) {
				map_set(&g->variadic_args, varg_type_str, &(int[]) { 0 });
			}
			arg_type_name = string_add(tos3("varg_"), string_replace(v__gen__Gen_typ(g, arg.typ), tos3("*"), tos3("_ptr")));
		}
		if (arg_type_sym->kind == v__table__Kind_function) {
			v__table__FnType info = /* as */ *(v__table__FnType*)arg_type_sym->info.obj;
			v__table__Fn func = info.func;
			if (!info.is_anon) {
				v__gen__Gen_write(g, string_add(string_add(arg_type_name, tos3(" ")), arg.name));
				strings__Builder_write(&g->definitions, string_add(string_add(arg_type_name, tos3(" ")), arg.name));
			} else {
				v__gen__Gen_write(g, _STR("%.*s (*%.*s)(", v__gen__Gen_typ(g, func.return_type).len, v__gen__Gen_typ(g, func.return_type).str, arg.name.len, arg.name.str));
				strings__Builder_write(&g->definitions, _STR("%.*s (*%.*s)(", v__gen__Gen_typ(g, func.return_type).len, v__gen__Gen_typ(g, func.return_type).str, arg.name.len, arg.name.str));
				v__gen__Gen_fn_args(g, func.args, func.is_variadic);
				v__gen__Gen_write(g, tos3(")"));
				strings__Builder_write(&g->definitions, tos3(")"));
			}
		} else if (no_names) {
			v__gen__Gen_write(g, arg_type_name);
			strings__Builder_write(&g->definitions, arg_type_name);
		} else {
			int nr_muls = v__table__type_nr_muls(arg.typ);
			string s = string_add(string_add(arg_type_name, tos3(" ")), arg.name);
			if (arg.is_mut) {
				nr_muls = 1;
			}
			v__gen__Gen_write(g, s);
			strings__Builder_write(&g->definitions, s);
		}
		if (i < args.len - 1) {
			v__gen__Gen_write(g, tos3(", "));
			strings__Builder_write(&g->definitions, tos3(", "));
		}
	}
}

void v__gen__Gen_expr(v__gen__Gen* g, v__ast__Expr node) { 
	if (node.typ == 212 /* v.ast.ArrayInit */) {
		v__ast__ArrayInit* it = (v__ast__ArrayInit*)node.obj; // ST it
		v__table__TypeSymbol* type_sym = v__table__Table_get_type_symbol(g->table, it->typ);
		if (type_sym->kind != v__table__Kind_array_fixed) {
			v__table__TypeSymbol* elem_sym = v__table__Table_get_type_symbol(g->table, it->elem_type);
			string elem_type_str = v__gen__Gen_typ(g, it->elem_type);
			if (it->exprs.len == 0) {
				v__gen__Gen_write(g, _STR("new_array(%d, %d, sizeof(%.*s))", it->exprs.len, it->exprs.len, elem_type_str.len, elem_type_str.str));
			} else {
				int len = it->exprs.len;
				v__gen__Gen_write(g, _STR("new_array_from_c_array(%d, %d, sizeof(%.*s), ", len, len, elem_type_str.len, elem_type_str.str));
				v__gen__Gen_writeln(g, _STR("(%.*s[%d]){\t", elem_type_str.len, elem_type_str.str, len));
				// FOR IN
				for (int tmp4 = 0; tmp4 < it->exprs.
				len; tmp4++) {	v__ast__Expr expr = ((v__ast__Expr*)it->exprs.
				data)[tmp4];v__gen__Gen_expr(g, expr);
					v__gen__Gen_write(g, tos3(", "));
				}
				v__gen__Gen_write(g, tos3("\n})"));
			}
		} else {
		}
	}
	else if (node.typ == 197 /* v.ast.AsCast */) {
		v__ast__AsCast* it = (v__ast__AsCast*)node.obj; // ST it
		string styp = v__gen__Gen_typ(g, it->typ);
		v__table__TypeSymbol* expr_type_sym = v__table__Table_get_type_symbol(g->table, it->expr_type);
		if (expr_type_sym->kind == v__table__Kind_sum_type) {
			v__gen__Gen_write(g, _STR("/* as */ *(%.*s*)", styp.len, styp.str));
			v__gen__Gen_expr(g, it->expr);
			v__gen__Gen_write(g, tos3(".obj"));
		}
	}
	else if (node.typ == 182 /* v.ast.AssignExpr */) {
		v__ast__AssignExpr* it = (v__ast__AssignExpr*)node.obj; // ST it
		v__gen__Gen_assign_expr(g, */*d*/it);
	}
	else if (node.typ == 237 /* v.ast.Assoc */) {
		v__ast__Assoc* it = (v__ast__Assoc*)node.obj; // ST it
		v__gen__Gen_assoc(g, */*d*/it);
	}
	else if (node.typ == 192 /* v.ast.BoolLiteral */) {
		v__ast__BoolLiteral* it = (v__ast__BoolLiteral*)node.obj; // ST it
		v__gen__Gen_write(g, bool_str(it->val));
	}
	else if (node.typ == 156 /* v.ast.CallExpr */) {
		v__ast__CallExpr* it = (v__ast__CallExpr*)node.obj; // ST it
		v__gen__Gen_call_expr(g, */*d*/it);
	}
	else if (node.typ == 189 /* v.ast.CastExpr */) {
		v__ast__CastExpr* it = (v__ast__CastExpr*)node.obj; // ST it
		if (g->is_amp) {
			strings__Builder_go_back(&g->out, 1);
		}
		v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, it->typ);
		if (sym->kind == v__table__Kind_string) {
			if (it->has_arg) {
				v__gen__Gen_write(g, tos3("tos("));
			} else {
				v__gen__Gen_write(g, tos3("tos2("));
			}
			v__gen__Gen_expr(g, it->expr);
			v__table__TypeSymbol* expr_sym = v__table__Table_get_type_symbol(g->table, it->expr_type);
			if (expr_sym->kind == v__table__Kind_array) {
				v__gen__Gen_write(g, tos3(".data"));
			}
			if (it->has_arg) {
				v__gen__Gen_write(g, tos3(", "));
				v__gen__Gen_expr(g, it->arg);
			}
			v__gen__Gen_write(g, tos3(")"));
		} else if (sym->kind == v__table__Kind_sum_type) {
			v__gen__Gen_expr_with_cast(g, it->expr, it->expr_type, it->typ);
		} else {
			string styp = v__gen__Gen_typ(g, it->typ);
			v__gen__Gen_write(g, _STR("((%.*s)(", styp.len, styp.str));
			v__gen__Gen_expr(g, it->expr);
			v__gen__Gen_write(g, tos3("))"));
		}
	}
	else if (node.typ == 191 /* v.ast.CharLiteral */) {
		v__ast__CharLiteral* it = (v__ast__CharLiteral*)node.obj; // ST it
		v__gen__Gen_write(g, _STR("'%.*s'", it->val.len, it->val.str));
	}
	else if (node.typ == 190 /* v.ast.EnumVal */) {
		v__ast__EnumVal* it = (v__ast__EnumVal*)node.obj; // ST it
		string styp = v__gen__Gen_typ(g, it->typ);
		v__gen__Gen_write(g, styp);
		v__gen__Gen_write(g, _STR("_%.*s", it->val.len, it->val.str));
	}
	else if (node.typ == 213 /* v.ast.FloatLiteral */) {
		v__ast__FloatLiteral* it = (v__ast__FloatLiteral*)node.obj; // ST it
		v__gen__Gen_write(g, it->val);
	}
	else if (node.typ == 185 /* v.ast.Ident */) {
		v__ast__Ident* it = (v__ast__Ident*)node.obj; // ST it
		v__gen__Gen_ident(g, */*d*/it);
	}
	else if (node.typ == 206 /* v.ast.IfExpr */) {
		v__ast__IfExpr* it = (v__ast__IfExpr*)node.obj; // ST it
		v__gen__Gen_if_expr(g, */*d*/it);
	}
	else if (node.typ == 209 /* v.ast.IfGuardExpr */) {
		v__ast__IfGuardExpr* it = (v__ast__IfGuardExpr*)node.obj; // ST it
		v__gen__Gen_write(g, tos3("/* guard */"));
	}
	else if (node.typ == 183 /* v.ast.IndexExpr */) {
		v__ast__IndexExpr* it = (v__ast__IndexExpr*)node.obj; // ST it
		v__gen__Gen_index_expr(g, */*d*/it);
	}
	else if (node.typ == 198 /* v.ast.InfixExpr */) {
		v__ast__InfixExpr* it = (v__ast__InfixExpr*)node.obj; // ST it
		v__gen__Gen_infix_expr(g, */*d*/it);
	}
	else if (node.typ == 214 /* v.ast.IntegerLiteral */) {
		v__ast__IntegerLiteral* it = (v__ast__IntegerLiteral*)node.obj; // ST it
		if (string_starts_with(it->val, tos3("0o"))) {
			v__gen__Gen_write(g, tos3("0"));
			v__gen__Gen_write(g, string_substr(it->val, 2, it->val.len));
		} else {
			v__gen__Gen_write(g, it->val);
		}
	}
	else if (node.typ == 228 /* v.ast.MatchExpr */) {
		v__ast__MatchExpr* it = (v__ast__MatchExpr*)node.obj; // ST it
		v__gen__Gen_match_expr(g, */*d*/it);
	}
	else if (node.typ == 188 /* v.ast.MapInit */) {
		v__ast__MapInit* it = (v__ast__MapInit*)node.obj; // ST it
		v__table__TypeSymbol* key_typ_sym = v__table__Table_get_type_symbol(g->table, it->key_type);
		v__table__TypeSymbol* value_typ_sym = v__table__Table_get_type_symbol(g->table, it->value_type);
		string key_typ_str = string_replace(key_typ_sym->name, tos3("."), tos3("__"));
		string value_typ_str = string_replace(value_typ_sym->name, tos3("."), tos3("__"));
		int size = it->vals.len;
		if (size > 0) {
			v__gen__Gen_write(g, _STR("new_map_init(%d, sizeof(%.*s), (%.*s[%d]){", size, value_typ_str.len, value_typ_str.str, key_typ_str.len, key_typ_str.str, size));
			// FOR IN
			for (int tmp13 = 0; tmp13 < it->keys.
			len; tmp13++) {	v__ast__Expr expr = ((v__ast__Expr*)it->keys.
			data)[tmp13];v__gen__Gen_expr(g, expr);
				v__gen__Gen_write(g, tos3(", "));
			}
			v__gen__Gen_write(g, _STR("}, (%.*s[%d]){", value_typ_str.len, value_typ_str.str, size));
			// FOR IN
			for (int tmp14 = 0; tmp14 < it->vals.
			len; tmp14++) {	v__ast__Expr expr = ((v__ast__Expr*)it->vals.
			data)[tmp14];v__gen__Gen_expr(g, expr);
				v__gen__Gen_write(g, tos3(", "));
			}
			v__gen__Gen_write(g, tos3("})"));
		} else {
			v__gen__Gen_write(g, _STR("new_map(1, sizeof(%.*s))", value_typ_str.len, value_typ_str.str));
		}
	}
	else if (node.typ == 194 /* v.ast.None */) {
		v__ast__None* it = (v__ast__None*)node.obj; // ST it
		v__gen__Gen_write(g, tos3("opt_none()"));
	}
	else if (node.typ == 193 /* v.ast.ParExpr */) {
		v__ast__ParExpr* it = (v__ast__ParExpr*)node.obj; // ST it
		v__gen__Gen_write(g, tos3("("));
		v__gen__Gen_expr(g, it->expr);
		v__gen__Gen_write(g, tos3(")"));
	}
	else if (node.typ == 199 /* v.ast.PostfixExpr */) {
		v__ast__PostfixExpr* it = (v__ast__PostfixExpr*)node.obj; // ST it
		v__gen__Gen_expr(g, it->expr);
		v__gen__Gen_write(g, v__token__Kind_str(it->op));
	}
	else if (node.typ == 200 /* v.ast.PrefixExpr */) {
		v__ast__PrefixExpr* it = (v__ast__PrefixExpr*)node.obj; // ST it
		if (it->op == v__token__Kind_amp) {
			g->is_amp = true;
		}
		v__gen__Gen_write(g, v__token__Kind_str(it->op));
		v__gen__Gen_expr(g, it->right);
		g->is_amp = false;
	}
	else if (node.typ == 195 /* v.ast.SizeOf */) {
		v__ast__SizeOf* it = (v__ast__SizeOf*)node.obj; // ST it
		if (string_ne(it->type_name, tos3(""))) {
			v__gen__Gen_write(g, _STR("sizeof(%.*s)", it->type_name.len, it->type_name.str));
		} else {
			string styp = v__gen__Gen_typ(g, it->typ);
			v__gen__Gen_write(g, _STR("sizeof(%.*s)", styp.len, styp.str));
		}
	}
	else if (node.typ == 210 /* v.ast.StringLiteral */) {
		v__ast__StringLiteral* it = (v__ast__StringLiteral*)node.obj; // ST it
		if (it->is_raw) {
			string escaped_val = string_replace_each(it->val, new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
			tos3("\""), tos3("\\\""), tos3("\\"), tos3("\\\\"), 
}));
			v__gen__Gen_write(g, _STR("tos3(\"%.*s\")", escaped_val.len, escaped_val.str));
			return;
		}
		string escaped_val = string_replace_each(it->val, new_array_from_c_array(6, 6, sizeof(string), (string[6]){	
		tos3("\""), tos3("\\\""), tos3("\r\n"), tos3("\\n"), tos3("\n"), tos3("\\n"), 
}));
		if (g->is_c_call || it->is_c) {
			v__gen__Gen_write(g, _STR("\"%.*s\"", escaped_val.len, escaped_val.str));
		} else {
			v__gen__Gen_write(g, _STR("tos3(\"%.*s\")", escaped_val.len, escaped_val.str));
		}
	}
	else if (node.typ == 211 /* v.ast.StringInterLiteral */) {
		v__ast__StringInterLiteral* it = (v__ast__StringInterLiteral*)node.obj; // ST it
		v__gen__Gen_string_inter_literal(g, */*d*/it);
	}
	else if (node.typ == 186 /* v.ast.StructInit */) {
		v__ast__StructInit* it = (v__ast__StructInit*)node.obj; // ST it
		v__gen__Gen_struct_init(g, */*d*/it);
	}
	else if (node.typ == 202 /* v.ast.SelectorExpr */) {
		v__ast__SelectorExpr* it = (v__ast__SelectorExpr*)node.obj; // ST it
		v__gen__Gen_expr(g, it->expr);
		if (v__table__type_is_ptr(it->expr_type)) {
			v__gen__Gen_write(g, tos3("->"));
		} else {
			v__gen__Gen_write(g, tos3("."));
		}
		if (it->expr_type == 0) {
			v__gen__verror(_STR("cgen: SelectorExpr typ=0 field=%.*s", it->field.len, it->field.str));
		}
		v__gen__Gen_write(g, v__gen__c_name(it->field));
	}
	else if (node.typ == 231 /* v.ast.Type */) {
		v__ast__Type* it = (v__ast__Type*)node.obj; // ST it
		int type_idx = v__table__type_idx(it->typ);
		v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, it->typ);
		v__gen__Gen_write(g, _STR("%d /* %.*s */", type_idx, sym->name.len, sym->name.str));
	}
	else if (node.typ == 196 /* v.ast.TypeOf */) {
		v__ast__TypeOf* it = (v__ast__TypeOf*)node.obj; // ST it
		v__gen__Gen_typeof_expr(g, */*d*/it);
	}
	else {
		println(term__red(string_add(tos3("cgen.expr(): bad node "), tos3( /* v.ast.Expr */ v_typeof_sumtype_181( (node).typ )))));
	}
	;
}

void v__gen__Gen_typeof_expr(v__gen__Gen* g, v__ast__TypeOf node) { 
	v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, node.expr_type);
	if (sym->kind == v__table__Kind_sum_type) {
		int sum_type_idx = v__table__type_idx(node.expr_type);
		v__gen__Gen_write(g, _STR("tos3( /* %.*s */ v_typeof_sumtype_%d( (", sym->name.len, sym->name.str, sum_type_idx));
		v__gen__Gen_expr(g, node.expr);
		v__gen__Gen_write(g, tos3(").typ ))"));
	} else if (sym->kind == v__table__Kind_array_fixed) {
		v__table__ArrayFixed fixed_info = /* as */ *(v__table__ArrayFixed*)sym->info.obj;
		v__table__TypeSymbol* elem_sym = v__table__Table_get_type_symbol(g->table, fixed_info.elem_type);
		v__gen__Gen_write(g, _STR("tos3(\"[%d]%.*s\")", fixed_info.size, elem_sym->name.len, elem_sym->name.str));
	} else {
		v__gen__Gen_write(g, _STR("tos3(\"%.*s\")", sym->name.len, sym->name.str));
	}
}

void v__gen__Gen_enum_expr(v__gen__Gen* g, v__ast__Expr node) { 
	if (node.typ == 190 /* v.ast.EnumVal */) {
		v__ast__EnumVal* it = (v__ast__EnumVal*)node.obj; // ST it
		v__gen__Gen_write(g, _STR("%.*s", string_capitalize(it->val).len, string_capitalize(it->val).str));
	}
	else {
		println(term__red(string_add(tos3("cgen.enum_expr(): bad node "), tos3( /* v.ast.Expr */ v_typeof_sumtype_181( (node).typ )))));
	}
	;
}

void v__gen__Gen_assign_expr(v__gen__Gen* g, v__ast__AssignExpr node) { 
	bool is_call = false;
	array_v__ast__Stmt or_stmts = new_array(0, 0, sizeof(v__ast__Stmt));
	v__table__Type return_type = _const_v__table__void_type;
	if (node.val.typ == 156 /* v.ast.CallExpr */) {
		v__ast__CallExpr* it = (v__ast__CallExpr*)node.val.obj; // ST it
		is_call = true;
		or_stmts = it->or_block.stmts;
		return_type = it->return_type;
	}
	else {
	}
	;
	bool gen_or = is_call && v__table__type_is(return_type, v__table__TypeFlag_optional);
	string tmp_opt = (gen_or ? v__gen__Gen_new_tmp_var(g) : tos3(""));
	if (gen_or) {
		string rstyp = v__gen__Gen_typ(g, return_type);
		v__gen__Gen_write(g, _STR("%.*s %.*s =", rstyp.len, rstyp.str, tmp_opt.len, tmp_opt.str));
	}
	g->is_assign_rhs = true;
	if (v__ast__expr_is_blank_ident(node.left)) {
		if (is_call) {
			v__gen__Gen_expr(g, node.val);
		} else {
			v__gen__Gen_write(g, _STR("{%.*s _ = ", v__gen__Gen_typ(g, node.left_type).len, v__gen__Gen_typ(g, node.left_type).str));
			v__gen__Gen_expr(g, node.val);
			v__gen__Gen_writeln(g, tos3(";}"));
		}
	} else {
		g->is_assign_lhs = true;
		if (v__table__type_is(node.right_type, v__table__TypeFlag_optional)) {
			g->right_is_opt = true;
		}
		bool str_add = false;
		if (node.left_type == _const_v__table__string_type_idx && node.op == v__token__Kind_plus_assign) {
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3(" = string_add("));
			str_add = true;
		}
		g->assign_op = node.op;
		v__gen__Gen_expr(g, node.left);
		if (!g->is_array_set && !str_add) {
			v__gen__Gen_write(g, _STR(" %.*s ", v__token__Kind_str(node.op).len, v__token__Kind_str(node.op).str));
		} else if (str_add) {
			v__gen__Gen_write(g, tos3(", "));
		}
		g->is_assign_lhs = false;
		v__table__TypeSymbol* right_sym = v__table__Table_get_type_symbol(g->table, node.right_type);
		bool cloned = false;
		if (g->autofree && (right_sym->kind == v__table__Kind_array || right_sym->kind == v__table__Kind_string)) {
			if (v__gen__Gen_gen_clone_assignment(g, node.val, */*d*/right_sym, false)) {
				cloned = true;
			}
		}
		if (!cloned) {
			v__gen__Gen_expr_with_cast(g, node.val, node.right_type, node.left_type);
		}
		if (g->is_array_set) {
			v__gen__Gen_write(g, tos3(" })"));
			g->is_array_set = false;
		} else if (str_add) {
			v__gen__Gen_write(g, tos3(")"));
		}
		g->right_is_opt = false;
	}
	if (gen_or) {
		v__gen__Gen_or_block(g, tmp_opt, or_stmts, return_type);
	}
	g->is_assign_rhs = false;
}

void v__gen__Gen_infix_expr(v__gen__Gen* g, v__ast__InfixExpr node) { 
	if (node.left_type == _const_v__table__string_type_idx && node.op != v__token__Kind_key_in) {
		string fn_name = (node.op == v__token__Kind_plus) ? tos3("string_add(") : (node.op == v__token__Kind_eq) ? tos3("string_eq(") : (node.op == v__token__Kind_ne) ? tos3("string_ne(") : (node.op == v__token__Kind_lt) ? tos3("string_lt(") : (node.op == v__token__Kind_le) ? tos3("string_le(") : (node.op == v__token__Kind_gt) ? tos3("string_gt(") : (node.op == v__token__Kind_ge) ? tos3("string_ge(") : tos3("/*node error*/");
		v__gen__Gen_write(g, fn_name);
		v__gen__Gen_expr(g, node.left);
		v__gen__Gen_write(g, tos3(", "));
		v__gen__Gen_expr(g, node.right);
		v__gen__Gen_write(g, tos3(")"));
	} else if (node.op == v__token__Kind_key_in) {
		v__table__TypeSymbol* right_sym = v__table__Table_get_type_symbol(g->table, node.right_type);
		if (right_sym->kind == v__table__Kind_array) {
			if (node.right.typ == 212 /* v.ast.ArrayInit */) {
				v__ast__ArrayInit* it = (v__ast__ArrayInit*)node.right.obj; // ST it
				v__gen__Gen_write(g, tos3("("));
				v__gen__Gen_in_optimization(g, node.left, */*d*/it);
				v__gen__Gen_write(g, tos3(")"));
				return;
			}
			else {
			}
			;
			string styp = v__gen__Gen_typ(g, node.left_type);
			v__gen__Gen_write(g, _STR("_IN(%.*s, ", styp.len, styp.str));
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3(", "));
			v__gen__Gen_expr(g, node.right);
			v__gen__Gen_write(g, tos3(")"));
		} else if (right_sym->kind == v__table__Kind_map) {
			v__gen__Gen_write(g, tos3("_IN_MAP("));
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3(", "));
			v__gen__Gen_expr(g, node.right);
			v__gen__Gen_write(g, tos3(")"));
		} else if (right_sym->kind == v__table__Kind_string) {
			v__gen__Gen_write(g, tos3("string_contains("));
			v__gen__Gen_expr(g, node.right);
			v__gen__Gen_write(g, tos3(", "));
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3(")"));
		}
	} else if (node.op == v__token__Kind_left_shift && v__table__Table_get_type_symbol(g->table, node.left_type)->kind == v__table__Kind_array) {
		string tmp = v__gen__Gen_new_tmp_var(g);
		v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, node.left_type);
		v__table__Array info = /* as */ *(v__table__Array*)sym->info.obj;
		v__table__TypeSymbol* right_sym = v__table__Table_get_type_symbol(g->table, node.right_type);
		if (right_sym->kind == v__table__Kind_array && info.elem_type != node.right_type) {
			v__gen__Gen_write(g, tos3("_PUSH_MANY(&"));
			v__gen__Gen_expr_with_cast(g, node.left, node.right_type, node.left_type);
			v__gen__Gen_write(g, tos3(", ("));
			v__gen__Gen_expr(g, node.right);
			string styp = v__gen__Gen_typ(g, node.left_type);
			v__gen__Gen_write(g, _STR("), %.*s, %.*s)", tmp.len, tmp.str, styp.len, styp.str));
		} else {
			string elem_type_str = v__gen__Gen_typ(g, info.elem_type);
			v__gen__Gen_write(g, tos3("_PUSH(&"));
			v__gen__Gen_expr_with_cast(g, node.left, node.right_type, info.elem_type);
			v__gen__Gen_write(g, tos3(", ("));
			v__gen__Gen_expr(g, node.right);
			v__gen__Gen_write(g, _STR("), %.*s, %.*s)", tmp.len, tmp.str, elem_type_str.len, elem_type_str.str));
		}
	} else {
		bool need_par = (node.op == v__token__Kind_amp || node.op == v__token__Kind_pipe || node.op == v__token__Kind_xor);
		if (need_par) {
			v__gen__Gen_write(g, tos3("("));
		}
		v__gen__Gen_expr(g, node.left);
		v__gen__Gen_write(g, _STR(" %.*s ", v__token__Kind_str(node.op).len, v__token__Kind_str(node.op).str));
		v__gen__Gen_expr(g, node.right);
		if (need_par) {
			v__gen__Gen_write(g, tos3(")"));
		}
	}
}

void v__gen__Gen_match_expr(v__gen__Gen* g, v__ast__MatchExpr node) { 
	if (node.cond_type == 0) {
		v__gen__Gen_writeln(g, tos3("// match 0"));
		return;
	}
	bool is_expr = node.is_expr && node.return_type != _const_v__table__void_type;
	if (is_expr) {
		g->inside_ternary = true;
	}
	v__table__TypeSymbol* type_sym = v__table__Table_get_type_symbol(g->table, node.cond_type);
	string tmp = tos3("");
	if (type_sym->kind != v__table__Kind_void) {
		tmp = v__gen__Gen_new_tmp_var(g);
	}
	// FOR IN
	for (int j = 0; j < node.branches.
	len; j++) {	v__ast__MatchBranch branch = ((v__ast__MatchBranch*)node.branches.
	data)[j];if (j == node.branches.len - 1) {
			if (is_expr) {
				v__gen__Gen_write(g, tos3(" : "));
			} else {
				v__gen__Gen_writeln(g, tos3("else {"));
			}
		} else {
			if (j > 0) {
				if (is_expr) {
					v__gen__Gen_write(g, tos3(" : "));
				} else {
					v__gen__Gen_write(g, tos3("else "));
				}
			}
			if (is_expr) {
				v__gen__Gen_write(g, tos3("("));
			} else {
				v__gen__Gen_write(g, tos3("if ("));
			}
			// FOR IN
			for (int i = 0; i < branch.exprs.
			len; i++) {	v__ast__Expr expr = ((v__ast__Expr*)branch.exprs.
			data)[i];if (node.is_sum_type) {
					v__gen__Gen_expr(g, node.cond);
					v__gen__Gen_write(g, tos3(".typ == "));
				} else if (type_sym->kind == v__table__Kind_string) {
					v__gen__Gen_write(g, tos3("string_eq("));
					v__gen__Gen_expr(g, node.cond);
					v__gen__Gen_write(g, tos3(", "));
				} else {
					v__gen__Gen_expr(g, node.cond);
					v__gen__Gen_write(g, tos3(" == "));
				}
				v__gen__Gen_expr(g, expr);
				if (type_sym->kind == v__table__Kind_string) {
					v__gen__Gen_write(g, tos3(")"));
				}
				if (i < branch.exprs.len - 1) {
					v__gen__Gen_write(g, tos3(" || "));
				}
			}
			if (is_expr) {
				v__gen__Gen_write(g, tos3(") ? "));
			} else {
				v__gen__Gen_writeln(g, tos3(") {"));
			}
		}
		if (node.is_sum_type && branch.exprs.len > 0 && !node.is_expr) {
			v__ast__Expr first_expr = (*(v__ast__Expr*)array_get(branch.exprs, 0));
			if (first_expr.typ == 231 /* v.ast.Type */) {
				v__ast__Type* it = (v__ast__Type*)first_expr.obj; // ST it
				string it_type = v__gen__Gen_typ(g, it->typ);
				v__gen__Gen_write(g, _STR("\t%.*s* it = (%.*s*)", it_type.len, it_type.str, it_type.len, it_type.str));
				v__gen__Gen_expr(g, node.cond);
				v__gen__Gen_writeln(g, tos3(".obj; // ST it"));
			}
			else {
				v__gen__verror(tos3("match sum type"));
			}
			;
		}
		v__gen__Gen_stmts(g, branch.stmts);
		if (!g->inside_ternary) {
			v__gen__Gen_writeln(g, tos3("}"));
		}
	}
	g->inside_ternary = false;
}

void v__gen__Gen_ident(v__gen__Gen* g, v__ast__Ident node) { 
	if (string_eq(node.name, tos3("lld"))) {
		return;
	}
	if (string_starts_with(node.name, tos3("C."))) {
		v__gen__Gen_write(g, string_replace(string_substr(node.name, 2, node.name.len), tos3("."), tos3("__")));
		return;
	}
	if (node.kind == v__ast__IdentKind_constant && !string_starts_with(node.name, tos3("g_"))) {
		v__gen__Gen_write(g, tos3("_const_"));
	}
	string name = v__gen__c_name(node.name);
	if (node.info.typ == 224 /* v.ast.IdentVar */) {
		v__ast__IdentVar* it = (v__ast__IdentVar*)node.info.obj; // ST it
		if (it->is_optional && !(g->is_assign_lhs && g->right_is_opt)) {
			v__gen__Gen_write(g, tos3("/*opt*/"));
			string styp = string_substr(v__gen__Gen_typ(g, it->typ), 7, v__gen__Gen_typ(g, it->typ).len);
			v__gen__Gen_write(g, _STR("(*(%.*s*)%.*s.data)", styp.len, styp.str, name.len, name.str));
			return;
		}
	}
	else {
	}
	;
	v__gen__Gen_write(g, name);
}

void v__gen__Gen_if_expr(v__gen__Gen* g, v__ast__IfExpr node) { 
	v__table__TypeSymbol* type_sym = v__table__Table_get_type_symbol(g->table, node.typ);
	string tmp = tos3("");
	if (type_sym->kind != v__table__Kind_void) {
		tmp = v__gen__Gen_new_tmp_var(g);
	}
	if (node.is_expr && node.branches.len >= 2 && node.has_else && type_sym->kind != v__table__Kind_void) {
		g->inside_ternary = true;
		v__gen__Gen_write(g, tos3("("));
		// FOR IN
		for (int i = 0; i < node.branches.
		len; i++) {	v__ast__IfBranch branch = ((v__ast__IfBranch*)node.branches.
		data)[i];if (i > 0) {
				v__gen__Gen_write(g, tos3(" : "));
			}
			if (i < node.branches.len - 1 || !node.has_else) {
				v__gen__Gen_expr(g, branch.cond);
				v__gen__Gen_write(g, tos3(" ? "));
			}
			v__gen__Gen_stmts(g, branch.stmts);
		}
		v__gen__Gen_write(g, tos3(")"));
		g->inside_ternary = false;
	} else {
		string guard_ok = v__gen__Gen_new_tmp_var(g);
		bool is_guard = false;
		// FOR IN
		for (int i = 0; i < node.branches.
		len; i++) {	v__ast__IfBranch branch = ((v__ast__IfBranch*)node.branches.
		data)[i];if (i == 0) {
				if (branch.cond.typ == 209 /* v.ast.IfGuardExpr */) {
					v__ast__IfGuardExpr* it = (v__ast__IfGuardExpr*)branch.cond.obj; // ST it
					is_guard = true;
					v__gen__Gen_writeln(g, _STR("bool %.*s;", guard_ok.len, guard_ok.str));
					v__gen__Gen_write(g, _STR("{ /* if guard */ %.*s %.*s = ", v__gen__Gen_typ(g, it->expr_type).len, v__gen__Gen_typ(g, it->expr_type).str, it->var_name.len, it->var_name.str));
					v__gen__Gen_expr(g, it->expr);
					v__gen__Gen_writeln(g, tos3(";"));
					v__gen__Gen_writeln(g, _STR("if ((%.*s = %.*s.ok)) {", guard_ok.len, guard_ok.str, it->var_name.len, it->var_name.str));
				}
				else {
					v__gen__Gen_write(g, tos3("if ("));
					v__gen__Gen_expr(g, branch.cond);
					v__gen__Gen_writeln(g, tos3(") {"));
				}
				;
			} else if (i < node.branches.len - 1 || !node.has_else) {
				v__gen__Gen_write(g, tos3("} else if ("));
				v__gen__Gen_expr(g, branch.cond);
				v__gen__Gen_writeln(g, tos3(") {"));
			} else if (i == node.branches.len - 1 && node.has_else) {
				if (is_guard) {
					v__gen__Gen_writeln(g, _STR("} if (!%.*s) { /* else */", guard_ok.len, guard_ok.str));
				} else {
					v__gen__Gen_writeln(g, tos3("} else {"));
				}
			}
			v__gen__Gen_stmts(g, branch.stmts);
		}
		if (is_guard) {
			v__gen__Gen_write(g, tos3("}"));
		}
		v__gen__Gen_writeln(g, tos3("}"));
	}
}

void v__gen__Gen_index_expr(v__gen__Gen* g, v__ast__IndexExpr node) { 
	bool is_range = false;
	if (node.index.typ == 201 /* v.ast.RangeExpr */) {
		v__ast__RangeExpr* it = (v__ast__RangeExpr*)node.index.obj; // ST it
		v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, node.left_type);
		is_range = true;
		if (sym->kind == v__table__Kind_string) {
			v__gen__Gen_write(g, tos3("string_substr("));
			v__gen__Gen_expr(g, node.left);
		} else if (sym->kind == v__table__Kind_array) {
			v__gen__Gen_write(g, tos3("array_slice("));
			v__gen__Gen_expr(g, node.left);
		} else if (sym->kind == v__table__Kind_array_fixed) {
			v__gen__Gen_write(g, tos3("array_slice(new_array_from_c_array(_ARR_LEN("));
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3("), _ARR_LEN("));
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3("), sizeof("));
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3("[0]), "));
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3(")"));
		} else {
			v__gen__Gen_expr(g, node.left);
		}
		v__gen__Gen_write(g, tos3(", "));
		if (it->has_low) {
			v__gen__Gen_expr(g, it->low);
		} else {
			v__gen__Gen_write(g, tos3("0"));
		}
		v__gen__Gen_write(g, tos3(", "));
		if (it->has_high) {
			v__gen__Gen_expr(g, it->high);
		} else {
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3(".len"));
		}
		v__gen__Gen_write(g, tos3(")"));
		return;
	}
	else {
	}
	;
	if (!is_range) {
		v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, node.left_type);
		bool left_is_ptr = v__table__type_is_ptr(node.left_type);
		if (v__table__type_is(node.left_type, v__table__TypeFlag_variadic)) {
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3(".args"));
			v__gen__Gen_write(g, tos3("["));
			v__gen__Gen_expr(g, node.index);
			v__gen__Gen_write(g, tos3("]"));
		} else if (sym->kind == v__table__Kind_array) {
			v__table__Array info = /* as */ *(v__table__Array*)sym->info.obj;
			string elem_type_str = v__gen__Gen_typ(g, info.elem_type);
			bool is_selector = false;
			if (node.left.typ == 202 /* v.ast.SelectorExpr */) {
				v__ast__SelectorExpr* it = (v__ast__SelectorExpr*)node.left.obj; // ST it
				is_selector = true;
			}
			else {
			}
			;
			if (g->is_assign_lhs && !is_selector && node.is_setter) {
				g->is_array_set = true;
				v__gen__Gen_write(g, tos3("array_set("));
				if (!left_is_ptr) {
					v__gen__Gen_write(g, tos3("&"));
				}
				v__gen__Gen_expr(g, node.left);
				v__gen__Gen_write(g, tos3(", "));
				v__gen__Gen_expr(g, node.index);
				v__gen__Gen_write(g, _STR(", &(%.*s[]) { ", elem_type_str.len, elem_type_str.str));
				if ((g->assign_op == v__token__Kind_mult_assign)) {
					v__gen__Gen_write(g, _STR("*(%.*s*)array_get(", elem_type_str.len, elem_type_str.str));
					if (left_is_ptr) {
						v__gen__Gen_write(g, tos3("*"));
					}
					v__gen__Gen_expr(g, node.left);
					v__gen__Gen_write(g, tos3(", "));
					v__gen__Gen_expr(g, node.index);
					v__gen__Gen_write(g, tos3(") "));
					string op = (g->assign_op == v__token__Kind_mult_assign) ? tos3("*") : tos3("");
					v__gen__Gen_write(g, op);
				}
			} else {
				v__gen__Gen_write(g, _STR("(*(%.*s*)array_get(", elem_type_str.len, elem_type_str.str));
				if (left_is_ptr) {
					v__gen__Gen_write(g, tos3("*"));
				}
				v__gen__Gen_expr(g, node.left);
				v__gen__Gen_write(g, tos3(", "));
				v__gen__Gen_expr(g, node.index);
				v__gen__Gen_write(g, tos3("))"));
			}
		} else if (sym->kind == v__table__Kind_map) {
			v__table__Map info = /* as */ *(v__table__Map*)sym->info.obj;
			string elem_type_str = v__gen__Gen_typ(g, info.value_type);
			if (g->is_assign_lhs) {
				g->is_array_set = true;
				v__gen__Gen_write(g, tos3("map_set("));
				if (!left_is_ptr) {
					v__gen__Gen_write(g, tos3("&"));
				}
				v__gen__Gen_expr(g, node.left);
				v__gen__Gen_write(g, tos3(", "));
				v__gen__Gen_expr(g, node.index);
				v__gen__Gen_write(g, _STR(", &(%.*s[]) { ", elem_type_str.len, elem_type_str.str));
			} else {
				string zero = v__gen__Gen_type_default(/*rec*/*g, info.value_type);
				v__gen__Gen_write(g, _STR("(*(%.*s*)map_get3(", elem_type_str.len, elem_type_str.str));
				v__gen__Gen_expr(g, node.left);
				v__gen__Gen_write(g, tos3(", "));
				v__gen__Gen_expr(g, node.index);
				v__gen__Gen_write(g, _STR(", &(%.*s[]){ %.*s }))", elem_type_str.len, elem_type_str.str, zero.len, zero.str));
			}
		} else if (sym->kind == v__table__Kind_string && !v__table__type_is_ptr(node.left_type)) {
			v__gen__Gen_write(g, tos3("string_at("));
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3(", "));
			v__gen__Gen_expr(g, node.index);
			v__gen__Gen_write(g, tos3(")"));
		} else {
			v__gen__Gen_expr(g, node.left);
			v__gen__Gen_write(g, tos3("["));
			v__gen__Gen_expr(g, node.index);
			v__gen__Gen_write(g, tos3("]"));
		}
	}
}

void v__gen__Gen_return_statement(v__gen__Gen* g, v__ast__Return node) { 
	v__gen__Gen_write(g, tos3("return"));
	if (string_eq(g->fn_decl->name, tos3("main"))) {
		v__gen__Gen_writeln(g, tos3(" 0;"));
		return;
	}
	bool fn_return_is_optional = v__table__type_is(g->fn_decl->return_type, v__table__TypeFlag_optional);
	if (node.exprs.len > 1) {
		v__gen__Gen_write(g, tos3(" "));
		v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(g->table, g->fn_decl->return_type);
		v__table__MultiReturn mr_info = /* as */ *(v__table__MultiReturn*)typ_sym->info.obj;
		string styp = v__gen__Gen_typ(g, g->fn_decl->return_type);
		if (fn_return_is_optional) {
			styp = string_substr(styp, 7, styp.len);
			v__gen__Gen_write(g, _STR("opt_ok(& (%.*s []) { ", styp.len, styp.str));
		}
		v__gen__Gen_write(g, _STR("(%.*s){", styp.len, styp.str));
		// FOR IN
		for (int i = 0; i < node.exprs.
		len; i++) {	v__ast__Expr expr = ((v__ast__Expr*)node.exprs.
		data)[i];v__gen__Gen_write(g, _STR(".arg%d=", i));
			v__gen__Gen_expr(g, expr);
			if (i < node.exprs.len - 1) {
				v__gen__Gen_write(g, tos3(","));
			}
		}
		v__gen__Gen_write(g, tos3("}"));
		if (fn_return_is_optional) {
			v__gen__Gen_write(g, _STR(" }, sizeof(%.*s))", styp.len, styp.str));
		}
	} else if (node.exprs.len == 1) {
		v__gen__Gen_write(g, tos3(" "));
		if (fn_return_is_optional && !v__table__type_is((*(v__table__Type*)array_get(node.types, 0)), v__table__TypeFlag_optional)) {
			bool is_none = false;
			bool is_error = false;
			v__ast__Expr expr0 = (*(v__ast__Expr*)array_get(node.exprs, 0));
			if (expr0.typ == 194 /* v.ast.None */) {
				v__ast__None* it = (v__ast__None*)expr0.obj; // ST it
				is_none = true;
			}
			else if (expr0.typ == 156 /* v.ast.CallExpr */) {
				v__ast__CallExpr* it = (v__ast__CallExpr*)expr0.obj; // ST it
				if (!it->is_method) {
					is_error = true;
				}
			}
			else {
			}
			;
			if (!is_none && !is_error) {
				string styp = string_substr(v__gen__Gen_typ(g, g->fn_decl->return_type), 7, v__gen__Gen_typ(g, g->fn_decl->return_type).len);
				v__gen__Gen_write(g, _STR("opt_ok(& (%.*s []) { ", styp.len, styp.str));
				v__gen__Gen_expr(g, (*(v__ast__Expr*)array_get(node.exprs, 0)));
				v__gen__Gen_writeln(g, _STR(" }, sizeof(%.*s));", styp.len, styp.str));
				return;
			}
		}
		if (!v__table__type_is_ptr(g->fn_decl->return_type) && v__table__type_is_ptr((*(v__table__Type*)array_get(node.types, 0)))) {
			v__gen__Gen_write(g, tos3("*"));
		}
		v__gen__Gen_expr_with_cast(g, (*(v__ast__Expr*)array_get(node.exprs, 0)), (*(v__table__Type*)array_get(node.types, 0)), g->fn_decl->return_type);
	}
	v__gen__Gen_writeln(g, tos3(";"));
}

void v__gen__Gen_const_decl(v__gen__Gen* g, v__ast__ConstDecl node) { 
	// FOR IN
	for (int i = 0; i < node.fields.
	len; i++) {	v__ast__ConstField field = ((v__ast__ConstField*)node.fields.
	data)[i];string name = v__gen__c_name(field.name);
		int pos = g->out.len;
		v__gen__Gen_expr(g, field.expr);
		string val = strings__Builder_after(&g->out, pos);
		strings__Builder_go_back(&g->out, val.len);
		if (field.expr.typ == 191 /* v.ast.CharLiteral */) {
			v__ast__CharLiteral* it = (v__ast__CharLiteral*)field.expr.obj; // ST it
			v__gen__Gen_const_decl_simple_define(g, name, val);
		}
		else if (field.expr.typ == 214 /* v.ast.IntegerLiteral */) {
			v__ast__IntegerLiteral* it = (v__ast__IntegerLiteral*)field.expr.obj; // ST it
			v__gen__Gen_const_decl_simple_define(g, name, val);
		}
		else if (field.expr.typ == 210 /* v.ast.StringLiteral */) {
			v__ast__StringLiteral* it = (v__ast__StringLiteral*)field.expr.obj; // ST it
			strings__Builder_writeln(&g->definitions, _STR("string _const_%.*s; // a string literal, inited later", name.len, name.str));
			strings__Builder_writeln(&g->stringliterals, _STR("\t_const_%.*s = %.*s;", name.len, name.str, val.len, val.str));
		}
		else {
			string styp = v__gen__Gen_typ(g, field.typ);
			strings__Builder_writeln(&g->definitions, _STR("%.*s _const_%.*s; // inited later", styp.len, styp.str, name.len, name.str));
			strings__Builder_writeln(&g->inits, _STR("\t_const_%.*s = %.*s;", name.len, name.str, val.len, val.str));
		}
		;
	}
}

void v__gen__Gen_const_decl_simple_define(v__gen__Gen* g, string name, string val) { 
	strings__Builder_write(&g->definitions, _STR("#define _const_%.*s ", name.len, name.str));
	strings__Builder_writeln(&g->definitions, val);
}

void v__gen__Gen_struct_init(v__gen__Gen* g, v__ast__StructInit it) { 
	v__table__Struct info = (v__table__Struct){
		.fields = new_array(0, 1, sizeof(v__table__Field)),
		.is_typedef = 0,
	};
	bool is_struct = false;
	v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, it.typ);
	if (sym->kind == v__table__Kind_struct_) {
		is_struct = true;
		info = /* as */ *(v__table__Struct*)sym->info.obj;
	}
	string styp = v__gen__Gen_typ(g, it.typ);
	bool is_amp = g->is_amp;
	if (is_amp) {
		strings__Builder_go_back(&g->out, 1);
		v__gen__Gen_write(g, _STR("(%.*s*)memdup(&(%.*s){", styp.len, styp.str, styp.len, styp.str));
	} else {
		v__gen__Gen_writeln(g, _STR("(%.*s){", styp.len, styp.str));
	}
	array_string fields = new_array(0, 0, sizeof(string));
	array_string inited_fields = new_array(0, 0, sizeof(string));
	if (it.fields.len == 0 && it.exprs.len > 0) {
		// FOR IN
		for (int tmp4 = 0; tmp4 < info.fields.
		len; tmp4++) {	v__table__Field f = ((v__table__Field*)info.fields.
		data)[tmp4];_PUSH(&fields, (f.name), tmp5, string);
		}
	} else {
		fields = it.fields;
	}
	// FOR IN
	for (int i = 0; i < fields.
	len; i++) {	string field = ((string*)fields.
	data)[i];string field_name = v__gen__c_name(field);
		_PUSH(&inited_fields, (field), tmp6, string);
		v__gen__Gen_write(g, _STR("\t.%.*s = ", field_name.len, field_name.str));
		v__gen__Gen_expr_with_cast(g, (*(v__ast__Expr*)array_get(it.exprs, i)), (*(v__table__Type*)array_get(it.expr_types, i)), (*(v__table__Type*)array_get(it.expected_types, i)));
		v__gen__Gen_writeln(g, tos3(","));
	}
	if (is_struct) {
		// FOR IN
		for (int tmp8 = 0; tmp8 < info.fields.
		len; tmp8++) {	v__table__Field field = ((v__table__Field*)info.fields.
		data)[tmp8];if (_IN(string, field.name, inited_fields)) {
				continue;
			}
			string field_name = v__gen__c_name(field.name);
			string zero = v__gen__Gen_type_default(/*rec*/*g, field.typ);
			v__gen__Gen_writeln(g, _STR("\t.%.*s = %.*s,", field_name.len, field_name.str, zero.len, zero.str));
		}
	}
	if (it.fields.len == 0 && info.fields.len == 0) {
		v__gen__Gen_write(g, tos3("0"));
	}
	v__gen__Gen_write(g, tos3("}"));
	if (is_amp) {
		v__gen__Gen_write(g, _STR(", sizeof(%.*s))", styp.len, styp.str));
	}
}

void v__gen__Gen_assoc(v__gen__Gen* g, v__ast__Assoc node) { 
	v__gen__Gen_writeln(g, tos3("// assoc"));
	if (node.typ == 0) {
		return;
	}
	string styp = v__gen__Gen_typ(g, node.typ);
	v__gen__Gen_writeln(g, _STR("(%.*s){", styp.len, styp.str));
	// FOR IN
	for (int i = 0; i < node.fields.
	len; i++) {	string field = ((string*)node.fields.
	data)[i];string field_name = v__gen__c_name(field);
		v__gen__Gen_write(g, _STR("\t.%.*s = ", field_name.len, field_name.str));
		v__gen__Gen_expr(g, (*(v__ast__Expr*)array_get(node.exprs, i)));
		v__gen__Gen_writeln(g, tos3(", "));
	}
	v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, node.typ);
	v__table__Struct info = /* as */ *(v__table__Struct*)sym->info.obj;
	// FOR IN
	for (int tmp2 = 0; tmp2 < info.fields.
	len; tmp2++) {	v__table__Field field = ((v__table__Field*)info.fields.
	data)[tmp2];if (_IN(string, field.name, node.fields)) {
			continue;
		}
		string field_name = v__gen__c_name(field.name);
		v__gen__Gen_writeln(g, _STR("\t.%.*s = %.*s.%.*s,", field_name.len, field_name.str, node.var_name.len, node.var_name.str, field_name.len, field_name.str));
	}
	v__gen__Gen_write(g, tos3("}"));
	if (g->is_amp) {
		v__gen__Gen_write(g, _STR(", sizeof(%.*s))", styp.len, styp.str));
	}
}

void v__gen__Gen_call_args(v__gen__Gen* g, array_v__ast__CallArg args, array_v__table__Type expected_types) { 
	bool is_variadic = expected_types.len > 0 && v__table__type_is((*(v__table__Type*)array_get(expected_types, expected_types.len - 1)), v__table__TypeFlag_variadic);
	int arg_no = 0;
	// FOR IN
	for (int tmp1 = 0; tmp1 < args.
	len; tmp1++) {	v__ast__CallArg arg = ((v__ast__CallArg*)args.
	data)[tmp1];if (is_variadic && arg_no == expected_types.len - 1) {
			break;
		}
		if (arg_no < expected_types.len) {
			v__gen__Gen_ref_or_deref_arg(g, arg, (*(v__table__Type*)array_get(expected_types, arg_no)));
		} else {
			v__gen__Gen_expr(g, arg.expr);
		}
		if (arg_no < args.len - 1 || is_variadic) {
			v__gen__Gen_write(g, tos3(", "));
		}
		arg_no++;
	}
	if (is_variadic) {
		v__table__Type varg_type = (*(v__table__Type*)array_get(expected_types, expected_types.len - 1));
		string struct_name = string_add(tos3("varg_"), string_replace(v__gen__Gen_typ(g, varg_type), tos3("*"), tos3("_ptr")));
		int variadic_count = args.len - arg_no;
		string varg_type_str = int_str(((int)(varg_type)));
		if (variadic_count > (*(int*)map_get3(g->variadic_args, varg_type_str, &(int[]){ 0 }))) {
			map_set(&g->variadic_args, varg_type_str, &(int[]) { variadic_count });
		}
		v__gen__Gen_write(g, _STR("(%.*s){.len=%d,.args={", struct_name.len, struct_name.str, variadic_count));
		if (variadic_count > 0) {
			for (int tmp8 = arg_no; tmp8 < args.len; tmp8++) { 
				int j = tmp8;
				v__gen__Gen_ref_or_deref_arg(g, (*(v__ast__CallArg*)array_get(args, j)), varg_type);
				if (j < args.len - 1) {
					v__gen__Gen_write(g, tos3(", "));
				}
			}
		} else {
			v__gen__Gen_write(g, tos3("0"));
		}
		v__gen__Gen_write(g, tos3("}}"));
	}
}

//[inline]
void v__gen__Gen_ref_or_deref_arg(v__gen__Gen* g, v__ast__CallArg arg, v__table__Type expected_type) { 
	bool arg_is_ptr = v__table__type_is_ptr(expected_type) || _IN(int, v__table__type_idx(expected_type), _const_v__table__pointer_type_idxs);
	bool expr_is_ptr = v__table__type_is_ptr(arg.typ) || _IN(int, v__table__type_idx(arg.typ), _const_v__table__pointer_type_idxs);
	if (arg.is_mut && !arg_is_ptr) {
		v__gen__Gen_write(g, tos3("&/*mut*/"));
	} else if (arg_is_ptr && !expr_is_ptr) {
		if (arg.is_mut) {
			v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, expected_type);
			if (sym->kind == v__table__Kind_array) {
				v__gen__Gen_write(g, tos3("&/*111*/(array[]){"));
				v__gen__Gen_expr(g, arg.expr);
				v__gen__Gen_write(g, tos3("}[0]"));
				return;
			}
		}
		v__gen__Gen_write(g, tos3("&/*qq*/"));
	} else if (!arg_is_ptr && expr_is_ptr) {
		v__gen__Gen_write(g, tos3("*/*d*/"));
	}
	v__gen__Gen_expr_with_cast(g, arg.expr, arg.typ, expected_type);
}

void v__gen__verror(string s) { 
	v__util__verror(tos3("cgen error"), s);
}

void v__gen__Gen_write_init_function(v__gen__Gen* g) { 
	v__gen__Gen_writeln(g, tos3("void _vinit() {"));
	v__gen__Gen_writeln(g, tos3("\tbuiltin_init();"));
	v__gen__Gen_writeln(g, tos3("\tvinit_string_literals();"));
	v__gen__Gen_writeln(g, strings__Builder_str(&g->inits));
	v__gen__Gen_writeln(g, tos3("}"));
	if (g->autofree) {
		v__gen__Gen_writeln(g, tos3("void _vcleanup() {"));
		if (v__gen__Gen_is_importing_os(/*rec*/*g)) {
			v__gen__Gen_writeln(g, tos3("free(_const_os__args.data);"));
			v__gen__Gen_writeln(g, tos3("string_free(_const_os__wd_at_startup);"));
		}
		v__gen__Gen_writeln(g, tos3("free(_const_strconv__ftoa__powers_of_10.data);"));
		v__gen__Gen_writeln(g, tos3("}"));
	}
}

void v__gen__Gen_write_str_definitions(v__gen__Gen* g) { 
	v__gen__Gen_writeln(g, tos3("\nstring _STR(const char *fmt, ...) {\n	va_list argptr;\n	va_start(argptr, fmt);\n	size_t len = vsnprintf(0, 0, fmt, argptr) + 1;\n	va_end(argptr);\n	byte* buf = malloc(len);\n	va_start(argptr, fmt);\n	vsprintf((char *)buf, fmt, argptr);\n	va_end(argptr);\n#ifdef DEBUG_ALLOC\n	puts(\"_STR:\");\n	puts(buf);\n#endif\n	return tos2(buf);\n}\n\nstring _STR_TMP(const char *fmt, ...) {\n	va_list argptr;\n	va_start(argptr, fmt);\n	//size_t len = vsnprintf(0, 0, fmt, argptr) + 1;\n	va_end(argptr);\n	va_start(argptr, fmt);\n	vsprintf((char *)g_str_buf, fmt, argptr);\n	va_end(argptr);\n#ifdef DEBUG_ALLOC\n	//puts(\"_STR_TMP:\");\n	//puts(g_str_buf);\n#endif\n	return tos2(g_str_buf);\n} // endof _STR_TMP\n\n"));
}

void v__gen__Gen_write_builtin_types(v__gen__Gen* g) { 
	array_v__table__TypeSymbol builtin_types = new_array(0, 0, sizeof(v__table__TypeSymbol));
	// FOR IN
	for (int tmp1 = 0; tmp1 < _const_v__gen__builtins.
	len; tmp1++) {	string builtin_name = ((string*)_const_v__gen__builtins.
	data)[tmp1];_PUSH(&builtin_types, ((*(v__table__TypeSymbol*)array_get(g->table->types, (*(int*)map_get3(g->table->type_idxs, builtin_name, &(int[]){ 0 }))))), tmp2, v__table__TypeSymbol);
	}
	v__gen__Gen_write_types(g, builtin_types);
}

void v__gen__Gen_write_sorted_types(v__gen__Gen* g) { 
	array_v__table__TypeSymbol types = new_array(0, 0, sizeof(v__table__TypeSymbol));
	// FOR IN
	for (int tmp1 = 0; tmp1 < g->table->types.
	len; tmp1++) {	v__table__TypeSymbol typ = ((v__table__TypeSymbol*)g->table->types.
	data)[tmp1];if (!(_IN(string, typ.name, _const_v__gen__builtins))) {
			_PUSH(&types, (typ), tmp3, v__table__TypeSymbol);
		}
	}
	array_v__table__TypeSymbol types_sorted = v__gen__Gen_sort_structs(/*rec*/*g, types);
	strings__Builder_writeln(&g->definitions, tos3("// builtin types:"));
	strings__Builder_writeln(&g->definitions, tos3("//------------------ #endbuiltin"));
	v__gen__Gen_write_types(g, types_sorted);
}

void v__gen__Gen_write_types(v__gen__Gen* g, array_v__table__TypeSymbol types) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < types.
	len; tmp1++) {	v__table__TypeSymbol typ = ((v__table__TypeSymbol*)types.
	data)[tmp1];if (string_starts_with(typ.name, tos3("C."))) {
			continue;
		}
		string name = string_replace(typ.name, tos3("."), tos3("__"));
		if (typ.info.typ == 101 /* v.table.Struct */) {
			v__table__Struct* it = (v__table__Struct*)typ.info.obj; // ST it
			v__table__Struct info = /* as */ *(v__table__Struct*)typ.info.obj;
			strings__Builder_writeln(&g->definitions, _STR("struct %.*s {", name.len, name.str));
			if (info.fields.len > 0) {
				// FOR IN
				for (int tmp5 = 0; tmp5 < info.fields.
				len; tmp5++) {	v__table__Field field = ((v__table__Field*)info.fields.
				data)[tmp5];string type_name = v__gen__Gen_typ(g, field.typ);
					string field_name = v__gen__c_name(field.name);
					strings__Builder_writeln(&g->definitions, _STR("\t%.*s %.*s;", type_name.len, type_name.str, field_name.len, field_name.str));
				}
			} else {
				strings__Builder_writeln(&g->definitions, tos3("EMPTY_STRUCT_DECLARATION;"));
			}
			strings__Builder_writeln(&g->definitions, tos3("};\n"));
		}
		else if (typ.info.typ == 103 /* v.table.Alias */) {
			v__table__Alias* it = (v__table__Alias*)typ.info.obj; // ST it
		}
		else if (typ.info.typ == 105 /* v.table.SumType */) {
			v__table__SumType* it = (v__table__SumType*)typ.info.obj; // ST it
			strings__Builder_writeln(&g->definitions, tos3("// Sum type"));
			strings__Builder_writeln(&g->definitions, _STR("\n				typedef struct {\nvoid* obj;\nint typ;\n} %.*s;", name.len, name.str));
		}
		else if (typ.info.typ == 99 /* v.table.ArrayFixed */) {
			v__table__ArrayFixed* it = (v__table__ArrayFixed*)typ.info.obj; // ST it
			string styp = string_replace(typ.name, tos3("."), tos3("__"));
			string fixed = string_substr(styp, 12, styp.len);
			string len = string_after(styp, tos3("_"));
			fixed = string_substr(fixed, 0, fixed.len - len.len - 1);
			strings__Builder_writeln(&g->definitions, _STR("typedef %.*s %.*s [%.*s];", fixed.len, fixed.str, styp.len, styp.str, len.len, len.str));
		}
		else {
		}
		;
	}
}

array_v__table__TypeSymbol v__gen__Gen_sort_structs(v__gen__Gen g, array_v__table__TypeSymbol typesa) { 
	v__depgraph__DepGraph* dep_graph = v__depgraph__new_dep_graph();
	array_string type_names = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < typesa.
	len; tmp1++) {	v__table__TypeSymbol typ = ((v__table__TypeSymbol*)typesa.
	data)[tmp1];_PUSH(&type_names, (typ.name), tmp2, string);
	}
	// FOR IN
	for (int tmp3 = 0; tmp3 < typesa.
	len; tmp3++) {	v__table__TypeSymbol t = ((v__table__TypeSymbol*)typesa.
	data)[tmp3];array_string field_deps = new_array(0, 0, sizeof(string));
		if (t.info.typ == 99 /* v.table.ArrayFixed */) {
			v__table__ArrayFixed* it = (v__table__ArrayFixed*)t.info.obj; // ST it
			string dep = v__table__Table_get_type_symbol(g.table, it->elem_type)->name;
			if (_IN(string, dep, type_names)) {
				_PUSH(&field_deps, (dep), tmp6, string);
			}
		}
		else if (t.info.typ == 101 /* v.table.Struct */) {
			v__table__Struct* it = (v__table__Struct*)t.info.obj; // ST it
			v__table__Struct info = /* as */ *(v__table__Struct*)t.info.obj;
			// FOR IN
			for (int tmp7 = 0; tmp7 < info.fields.
			len; tmp7++) {	v__table__Field field = ((v__table__Field*)info.fields.
			data)[tmp7];string dep = v__table__Table_get_type_symbol(g.table, field.typ)->name;
				if (!(_IN(string, dep, type_names)) || _IN(string, dep, field_deps) || v__table__type_is_ptr(field.typ)) {
					continue;
				}
				_PUSH(&field_deps, (dep), tmp9, string);
			}
		}
		else {
		}
		;
		v__depgraph__DepGraph_add(dep_graph, t.name, field_deps);
	}
	v__depgraph__DepGraph* dep_graph_sorted = v__depgraph__DepGraph_resolve(dep_graph);
	if (!dep_graph_sorted->acyclic) {
		v__gen__verror(string_add(string_add(string_add(tos3("cgen.sort_structs(): the following structs form a dependency cycle:\n"), v__depgraph__DepGraph_display_cycles(dep_graph_sorted)), tos3("\nyou can solve this by making one or both of the dependant struct fields references, eg: field &MyStruct")), tos3("\nif you feel this is an error, please create a new issue here: https://github.com/vlang/v/issues and tag @joe-conigliaro")));
	}
	array_v__table__TypeSymbol types_sorted = new_array(0, 0, sizeof(v__table__TypeSymbol));
	// FOR IN
	for (int tmp11 = 0; tmp11 < dep_graph_sorted->nodes.
	len; tmp11++) {	v__depgraph__DepGraphNode node = ((v__depgraph__DepGraphNode*)dep_graph_sorted->nodes.
	data)[tmp11];_PUSH(&types_sorted, ((*(v__table__TypeSymbol*)array_get(g.table->types, (*(int*)map_get3(g.table->type_idxs, node.name, &(int[]){ 0 }))))), tmp12, v__table__TypeSymbol);
	}
	return types_sorted;
}

void v__gen__Gen_string_inter_literal(v__gen__Gen* g, v__ast__StringInterLiteral node) { 
	v__gen__Gen_write(g, tos3("_STR(\""));
	// FOR IN
	for (int i = 0; i < node.vals.
	len; i++) {	string val = ((string*)node.vals.
	data)[i];string escaped_val = string_replace_each(val, new_array_from_c_array(6, 6, sizeof(string), (string[6]){	
		tos3("\""), tos3("\\\""), tos3("\r\n"), tos3("\\n"), tos3("\n"), tos3("\\n"), 
}));
		v__gen__Gen_write(g, escaped_val);
		if (i >= node.exprs.len) {
			continue;
		}
		string sfmt = (*(string*)array_get(node.expr_fmts, i));
		if (sfmt.len > 0) {
			byte fspec = string_at(sfmt, sfmt.len - 1);
			if (fspec == 's' && (*(v__table__Type*)array_get(node.expr_types, i)) != _const_v__table__string_type) {
				v__gen__verror(_STR("only V strings can be formatted with a %.*s format", sfmt.len, sfmt.str));
			}
			v__gen__Gen_write(g, string_add(tos3("%"), string_substr(sfmt, 1, sfmt.len)));
		} else if ((*(v__table__Type*)array_get(node.expr_types, i)) == _const_v__table__string_type) {
			v__gen__Gen_write(g, tos3("%.*s"));
		} else {
			v__gen__Gen_write(g, tos3("%d"));
		}
	}
	v__gen__Gen_write(g, tos3("\", "));
	// FOR IN
	for (int i = 0; i < node.exprs.
	len; i++) {	v__ast__Expr expr = ((v__ast__Expr*)node.exprs.
	data)[i];string sfmt = (*(string*)array_get(node.expr_fmts, i));
		if (sfmt.len > 0) {
			byte fspec = string_at(sfmt, sfmt.len - 1);
			if (fspec == 's' && (*(v__table__Type*)array_get(node.expr_types, i)) == _const_v__table__string_type) {
				v__gen__Gen_expr(g, expr);
				v__gen__Gen_write(g, tos3(".str"));
			} else {
				v__gen__Gen_expr(g, expr);
			}
		} else if ((*(v__table__Type*)array_get(node.expr_types, i)) == _const_v__table__string_type) {
			v__gen__Gen_expr(g, expr);
			v__gen__Gen_write(g, tos3(".len, "));
			v__gen__Gen_expr(g, expr);
			v__gen__Gen_write(g, tos3(".str"));
		} else {
			v__gen__Gen_expr(g, expr);
		}
		if (i < node.exprs.len - 1) {
			v__gen__Gen_write(g, tos3(", "));
		}
	}
	v__gen__Gen_write(g, tos3(")"));
}

void v__gen__Gen_gen_filter(v__gen__Gen* g, v__ast__CallExpr node) { 
	string tmp = v__gen__Gen_new_tmp_var(g);
	string s = strings__Builder_after(&g->out, g->stmt_start_pos);
	strings__Builder_go_back(&g->out, s.len);
	v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, node.return_type);
	if (sym->kind != v__table__Kind_array) {
		v__gen__verror(tos3("filter() requires an array"));
	}
	v__table__Array info = /* as */ *(v__table__Array*)sym->info.obj;
	string styp = v__gen__Gen_typ(g, node.return_type);
	string elem_type_str = v__gen__Gen_typ(g, info.elem_type);
	v__gen__Gen_write(g, _STR("\nint %.*s_len = ", tmp.len, tmp.str));
	v__gen__Gen_expr(g, node.left);
	v__gen__Gen_writeln(g, tos3(".len;"));
	v__gen__Gen_writeln(g, _STR("%.*s %.*s = new_array(0, %.*s_len, sizeof(%.*s));", styp.len, styp.str, tmp.len, tmp.str, tmp.len, tmp.str, elem_type_str.len, elem_type_str.str));
	v__gen__Gen_writeln(g, _STR("for (int i = 0; i < %.*s_len; i++) {", tmp.len, tmp.str));
	v__gen__Gen_write(g, _STR("  %.*s it = ((%.*s*) ", elem_type_str.len, elem_type_str.str, elem_type_str.len, elem_type_str.str));
	v__gen__Gen_expr(g, node.left);
	v__gen__Gen_writeln(g, tos3(".data)[i];"));
	v__gen__Gen_write(g, tos3("if ("));
	v__gen__Gen_expr(g, (*(v__ast__CallArg*)array_get(node.args, 0)).expr);
	v__gen__Gen_writeln(g, _STR(") array_push(&%.*s, &it); \n }", tmp.len, tmp.str));
	v__gen__Gen_write(g, s);
	v__gen__Gen_write(g, tos3(" "));
	v__gen__Gen_write(g, tmp);
}

void v__gen__Gen_insert_before(v__gen__Gen* g, string s) { 
	string cur_line = strings__Builder_after(&g->out, g->stmt_start_pos);
	strings__Builder_go_back(&g->out, cur_line.len);
	v__gen__Gen_writeln(g, s);
	v__gen__Gen_write(g, cur_line);
}

void v__gen__Gen_call_expr(v__gen__Gen* g, v__ast__CallExpr node) { 
	bool gen_or = !g->is_assign_rhs && node.or_block.stmts.len > 0;
	string tmp_opt = (gen_or ? v__gen__Gen_new_tmp_var(g) : tos3(""));
	if (gen_or) {
		string styp = v__gen__Gen_typ(g, node.return_type);
		v__gen__Gen_write(g, _STR("%.*s %.*s = ", styp.len, styp.str, tmp_opt.len, tmp_opt.str));
	}
	if (node.is_method) {
		v__gen__Gen_method_call(g, node);
	} else {
		v__gen__Gen_fn_call(g, node);
	}
	if (gen_or) {
		v__gen__Gen_or_block(g, tmp_opt, node.or_block.stmts, node.return_type);
	}
}

void v__gen__Gen_method_call(v__gen__Gen* g, v__ast__CallExpr node) { 
	if (node.left_type == 0) {
		v__gen__verror(tos3("method receiver type is 0, this means there are some uchecked exprs"));
	}
	v__table__TypeSymbol* typ_sym = v__table__Table_get_type_symbol(g->table, node.receiver_type);
	string receiver_name = typ_sym->name;
	if (typ_sym->kind == v__table__Kind_array && string_eq(node.name, tos3("filter"))) {
		v__gen__Gen_gen_filter(g, node);
		return;
	}
	if (typ_sym->kind == v__table__Kind_array && (string_eq(node.name, tos3("repeat")) || string_eq(node.name, tos3("sort_with_compare")) || string_eq(node.name, tos3("free")) || string_eq(node.name, tos3("push_many")) || string_eq(node.name, tos3("trim")) || string_eq(node.name, tos3("first")) || string_eq(node.name, tos3("last")) || string_eq(node.name, tos3("clone")) || string_eq(node.name, tos3("reverse")) || string_eq(node.name, tos3("slice")))) {
		receiver_name = tos3("array");
		if ((string_eq(node.name, tos3("last")) || string_eq(node.name, tos3("first")))) {
			string return_type_str = v__gen__Gen_typ(g, node.return_type);
			v__gen__Gen_write(g, _STR("*(%.*s*)", return_type_str.len, return_type_str.str));
		}
	}
	string name = string_replace(_STR("%.*s_%.*s", receiver_name.len, receiver_name.str, node.name.len, node.name.str), tos3("."), tos3("__"));
	v__gen__Gen_write(g, _STR("%.*s(", name.len, name.str));
	if (v__table__type_is_ptr(node.receiver_type) && !v__table__type_is_ptr(node.left_type)) {
		v__gen__Gen_write(g, tos3("&"));
	} else if (!v__table__type_is_ptr(node.receiver_type) && v__table__type_is_ptr(node.left_type)) {
		v__gen__Gen_write(g, tos3("/*rec*/*"));
	}
	v__gen__Gen_expr(g, node.left);
	bool is_variadic = node.expected_arg_types.len > 0 && v__table__type_is((*(v__table__Type*)array_get(node.expected_arg_types, node.expected_arg_types.len - 1)), v__table__TypeFlag_variadic);
	if (node.args.len > 0 || is_variadic) {
		v__gen__Gen_write(g, tos3(", "));
	}
	v__gen__Gen_call_args(g, node.args, node.expected_arg_types);
	v__gen__Gen_write(g, tos3(")"));
}

void v__gen__Gen_fn_call(v__gen__Gen* g, v__ast__CallExpr node) { 
	string name = node.name;
	bool is_print = string_eq(name, tos3("println")) || string_eq(name, tos3("print"));
	string print_method = (string_eq(name, tos3("println")) ? tos3("println") : tos3("print"));
	if (node.is_c) {
		g->is_c_call = true;
		name = string_replace(string_substr(name, 2, name.len), tos3("."), tos3("__"));
	} else {
		name = v__gen__c_name(name);
	}
	if (is_print && (*(v__ast__CallArg*)array_get(node.args, 0)).typ != _const_v__table__string_type_idx) {
		v__table__Type typ = (*(v__ast__CallArg*)array_get(node.args, 0)).typ;
		string styp = v__gen__Gen_typ(g, typ);
		v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g->table, typ);
		if (!v__table__TypeSymbol_has_method(sym, tos3("str")) && !(_IN(string, styp, g->str_types))) {
			if (v__table__type_is_ptr(typ)) {
				styp = string_replace(styp, tos3("*"), tos3(""));
			}
			_PUSH(&g->str_types, (styp), tmp6, string);
			v__gen__Gen_gen_str_for_type(g, */*d*/sym, styp);
		}
		if (g->autofree && !v__table__type_is(typ, v__table__TypeFlag_optional)) {
			string tmp = v__gen__Gen_new_tmp_var(g);
			v__gen__Gen_write(g, _STR("string %.*s = %.*s_str(", tmp.len, tmp.str, styp.len, styp.str));
			v__gen__Gen_expr(g, (*(v__ast__CallArg*)array_get(node.args, 0)).expr);
			v__gen__Gen_writeln(g, _STR("); %.*s(%.*s); string_free(%.*s); //MEM2 %.*s", print_method.len, print_method.str, tmp.len, tmp.str, tmp.len, tmp.str, styp.len, styp.str));
		} else if (sym->kind == v__table__Kind_enum_) {
			v__gen__Gen_write(g, _STR("%.*s(tos3(\"", print_method.len, print_method.str));
			v__gen__Gen_enum_expr(g, (*(v__ast__CallArg*)array_get(node.args, 0)).expr);
			v__gen__Gen_write(g, tos3("\"))"));
		} else {
			if (v__table__type_is_ptr(typ)) {
				styp = tos3("ptr");
			}
			v__gen__Gen_write(g, _STR("%.*s(%.*s_str(", print_method.len, print_method.str, styp.len, styp.str));
			if (v__table__type_is_ptr(typ)) {
			}
			v__gen__Gen_expr(g, (*(v__ast__CallArg*)array_get(node.args, 0)).expr);
			v__gen__Gen_write(g, tos3("))"));
		}
	} else {
		v__gen__Gen_write(g, _STR("%.*s(", name.len, name.str));
		v__gen__Gen_call_args(g, node.args, node.expected_arg_types);
		v__gen__Gen_write(g, tos3(")"));
	}
	g->is_c_call = false;
}

void v__gen__Gen_or_block(v__gen__Gen* g, string var_name, array_v__ast__Stmt stmts, v__table__Type return_type) { 
	string mr_styp = v__gen__Gen_typ(g, return_type);
	string mr_styp2 = string_substr(mr_styp, 7, mr_styp.len);
	v__gen__Gen_writeln(g, tos3(";"));
	v__gen__Gen_writeln(g, _STR("if (!%.*s.ok) {", var_name.len, var_name.str));
	v__gen__Gen_writeln(g, _STR("\tstring err = %.*s.v_error;", var_name.len, var_name.str));
	v__gen__Gen_writeln(g, _STR("\tint errcode = %.*s.ecode;", var_name.len, var_name.str));
	multi_return_string_string mr_64134 = v__gen__Gen_type_of_last_statement(g, stmts);
	string last_type = mr_64134.arg0;
	string type_of_last_expression = mr_64134.arg1;
	if (string_eq(last_type, tos3("v.ast.ExprStmt")) && string_ne(type_of_last_expression, tos3("void"))) {
		g->indent++;
		// FOR IN
		for (int i = 0; i < stmts.
		len; i++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)stmts.
		data)[i];if (i == stmts.len - 1) {
				g->indent--;
				v__gen__Gen_write(g, _STR("\t*(%.*s*) %.*s.data = ", mr_styp2.len, mr_styp2.str, var_name.len, var_name.str));
			}
			v__gen__Gen_stmt(g, stmt);
		}
	} else {
		v__gen__Gen_stmts(g, stmts);
	}
	v__gen__Gen_write(g, tos3("}"));
}

multi_return_string_string v__gen__Gen_type_of_last_statement(v__gen__Gen* g, array_v__ast__Stmt stmts) { 
	string last_type = tos3("");
	string last_expr_result_type = tos3("");
	if (stmts.len > 0) {
		v__ast__Stmt last_stmt = (*(v__ast__Stmt*)array_get(stmts, stmts.len - 1));
		last_type = tos3( /* v.ast.Stmt */ v_typeof_sumtype_123( (last_stmt).typ ));
		if (string_eq(last_type, tos3("v.ast.ExprStmt"))) {
			if (last_stmt.typ == 180 /* v.ast.ExprStmt */) {
				v__ast__ExprStmt* it = (v__ast__ExprStmt*)last_stmt.obj; // ST it
				string it_expr_type = tos3( /* v.ast.Expr */ v_typeof_sumtype_181( (it->expr).typ ));
				if (string_eq(it_expr_type, tos3("v.ast.CallExpr"))) {
					v__gen__Gen_writeln(g, _STR("\t // typeof it_expr_type: %.*s", it_expr_type.len, it_expr_type.str));
					last_expr_result_type = v__gen__Gen_type_of_call_expr(g, it->expr);
				} else {
					last_expr_result_type = it_expr_type;
				}
			}
			else {
				last_expr_result_type = last_type;
			}
			;
		}
	}
	v__gen__Gen_writeln(g, _STR("\t// last_type: %.*s", last_type.len, last_type.str));
	v__gen__Gen_writeln(g, _STR("\t// last_expr_result_type: %.*s", last_expr_result_type.len, last_expr_result_type.str));
	return (multi_return_string_string){.arg0=last_type,.arg1=last_expr_result_type};
}

string v__gen__Gen_type_of_call_expr(v__gen__Gen* g, v__ast__Expr node) { 
	if (node.typ == 156 /* v.ast.CallExpr */) {
		v__ast__CallExpr* it = (v__ast__CallExpr*)node.obj; // ST it
		return v__gen__Gen_typ(g, it->return_type);
	}
	else {
		return tos3( /* v.ast.Expr */ v_typeof_sumtype_181( (node).typ ));
	}
	;
	return tos3("");
}

void v__gen__Gen_in_optimization(v__gen__Gen* g, v__ast__Expr left, v__ast__ArrayInit right) { 
	bool is_str = right.elem_type == _const_v__table__string_type;
	// FOR IN
	for (int i = 0; i < right.exprs.
	len; i++) {	v__ast__Expr array_expr = ((v__ast__Expr*)right.exprs.
	data)[i];if (is_str) {
			v__gen__Gen_write(g, tos3("string_eq("));
		}
		v__gen__Gen_expr(g, left);
		if (is_str) {
			v__gen__Gen_write(g, tos3(", "));
		} else {
			v__gen__Gen_write(g, tos3(" == "));
		}
		v__gen__Gen_expr(g, array_expr);
		if (is_str) {
			v__gen__Gen_write(g, tos3(")"));
		}
		if (i < right.exprs.len - 1) {
			v__gen__Gen_write(g, tos3(" || "));
		}
	}
}

string v__gen__op_to_fn_name(string name) { 
	return (string_eq(name, tos3("+"))) ? tos3("_op_plus") : (string_eq(name, tos3("-"))) ? tos3("_op_minus") : (string_eq(name, tos3("*"))) ? tos3("_op_mul") : (string_eq(name, tos3("/"))) ? tos3("_op_div") : (string_eq(name, tos3("%"))) ? tos3("_op_mod") : _STR("bad op %.*s", name.len, name.str);
}

string v__gen__comp_if_to_ifdef(string name) { 
	if (string_eq(name, tos3("windows"))) {
		return tos3("_WIN32");
	}
	else if (string_eq(name, tos3("mac"))) {
		return tos3("__APPLE__");
	}
	else if (string_eq(name, tos3("macos"))) {
		return tos3("__APPLE__");
	}
	else if (string_eq(name, tos3("linux"))) {
		return tos3("__linux__");
	}
	else if (string_eq(name, tos3("freebsd"))) {
		return tos3("__FreeBSD__");
	}
	else if (string_eq(name, tos3("openbsd"))) {
		return tos3("__OpenBSD__");
	}
	else if (string_eq(name, tos3("netbsd"))) {
		return tos3("__NetBSD__");
	}
	else if (string_eq(name, tos3("dragonfly"))) {
		return tos3("__DragonFly__");
	}
	else if (string_eq(name, tos3("msvc"))) {
		return tos3("_MSC_VER");
	}
	else if (string_eq(name, tos3("android"))) {
		return tos3("__ANDROID__");
	}
	else if (string_eq(name, tos3("js"))) {
		return tos3("_VJS");
	}
	else if (string_eq(name, tos3("solaris"))) {
		return tos3("__sun");
	}
	else if (string_eq(name, tos3("haiku"))) {
		return tos3("__haiku__");
	}
	else if (string_eq(name, tos3("tinyc"))) {
		return tos3("tinyc");
	}
	else if (string_eq(name, tos3("debug"))) {
		return tos3("_VDEBUG");
	}
	else if (string_eq(name, tos3("linux_or_macos"))) {
		return tos3("");
	}
	else if (string_eq(name, tos3("mingw"))) {
		return tos3("__MINGW32__");
	}
	else if (string_eq(name, tos3("glibc"))) {
		return tos3("__GLIBC__");
	}
	else if (string_eq(name, tos3("prealloc"))) {
		return tos3("VPREALLOC");
	}
	else if (string_eq(name, tos3("no_bounds_checking"))) {
		return tos3("NO_BOUNDS_CHECK");
	}
	else if (string_eq(name, tos3("x64"))) {
		return tos3("TARGET_IS_64BIT");
	}
	else if (string_eq(name, tos3("x32"))) {
		return tos3("TARGET_IS_32BIT");
	}
	else if (string_eq(name, tos3("little_endian"))) {
		return tos3("TARGET_ORDER_IS_LITTLE");
	}
	else if (string_eq(name, tos3("big_endian"))) {
		return tos3("TARGET_ORDER_IS_BIG");
	}
	else {
		v__gen__verror(_STR("bad os ifdef name \"%.*s\"", name.len, name.str));
	}
	;
	return tos3("");
}

//[inline]
string v__gen__c_name(string name_) { 
	string name = string_replace(name_, tos3("."), tos3("__"));
	if (_IN(string, name, _const_v__gen__c_reserved)) {
		return _STR("v_%.*s", name.len, name.str);
	}
	return name;
}

string v__gen__Gen_type_default(v__gen__Gen g, v__table__Type typ) { 
	v__table__TypeSymbol* sym = v__table__Table_get_type_symbol(g.table, typ);
	if (sym->kind == v__table__Kind_array) {
		v__table__TypeSymbol* elem_sym = v__table__Table_get_type_symbol(g.table, v__table__TypeSymbol_array_info(sym).elem_type);
		string elem_type_str = string_replace(elem_sym->name, tos3("."), tos3("__"));
		return _STR("new_array(0, 1, sizeof(%.*s))", elem_type_str.len, elem_type_str.str);
	}
	if (sym->kind == v__table__Kind_map) {
		v__table__TypeSymbol* value_sym = v__table__Table_get_type_symbol(g.table, v__table__TypeSymbol_map_info(sym).value_type);
		string value_type_str = string_replace(value_sym->name, tos3("."), tos3("__"));
		return _STR("new_map(1, sizeof(%.*s))", value_type_str.len, value_type_str.str);
	}
	if (v__table__type_is_ptr(typ)) {
		return tos3("0");
	}
	if (sym->kind == v__table__Kind_struct_) {
		return tos3("{0}");
	}
	int idx = ((int)(typ));
	if (idx >= 1 && idx <= 17) {
		return tos3("0");
	}
	if (string_eq(sym->name, tos3("string"))) {
		return tos3("tos3(\"\")");
	}
	else if (string_eq(sym->name, tos3("rune"))) {
		return tos3("0");
	}
	else {
	}
	;
	return tos3("{0}");
}

void v__gen__Gen_write_tests_main(v__gen__Gen* g) { 
	strings__Builder_writeln(&g->definitions, tos3("int g_test_oks = 0;"));
	strings__Builder_writeln(&g->definitions, tos3("int g_test_fails = 0;"));
	v__gen__Gen_writeln(g, tos3("int main() {"));
	v__gen__Gen_writeln(g, tos3("\t_vinit();"));
	v__gen__Gen_writeln(g, tos3(""));
	array_string all_tfuncs = v__gen__Gen_get_all_test_function_names(/*rec*/*g);
	if (g->pref->is_stats) {
		v__gen__Gen_writeln(g, _STR("\tBenchedTests bt = start_testing(%d, tos3(\"%.*s\"));", all_tfuncs.len, g->pref->path.len, g->pref->path.str));
	}
	// FOR IN
	for (int tmp2 = 0; tmp2 < all_tfuncs.
	len; tmp2++) {	string t = ((string*)all_tfuncs.
	data)[tmp2];v__gen__Gen_writeln(g, tos3(""));
		if (g->pref->is_stats) {
			v__gen__Gen_writeln(g, _STR("\tBenchedTests_testing_step_start(&bt, tos3(\"%.*s\"));", t.len, t.str));
		}
		v__gen__Gen_writeln(g, _STR("\t%.*s();", t.len, t.str));
		if (g->pref->is_stats) {
			v__gen__Gen_writeln(g, tos3("\tBenchedTests_testing_step_end(&bt);"));
		}
	}
	v__gen__Gen_writeln(g, tos3(""));
	if (g->pref->is_stats) {
		v__gen__Gen_writeln(g, tos3("\tBenchedTests_end_testing(&bt);"));
	}
	v__gen__Gen_writeln(g, tos3(""));
	if (g->autofree) {
		v__gen__Gen_writeln(g, tos3("\t_vcleanup();"));
	}
	v__gen__Gen_writeln(g, tos3("\treturn g_test_fails > 0;"));
	v__gen__Gen_writeln(g, tos3("}"));
}

array_string v__gen__Gen_get_all_test_function_names(v__gen__Gen g) { 
	array_string tfuncs = new_array(0, 0, sizeof(string));
	string tsuite_begin = tos3("");
	string tsuite_end = tos3("");
	// FOR IN
	array_string keys_tmp1 = map_keys(&g.table->fns);
	for (int tmp2 = 0; tmp2 < keys_tmp1.len; tmp2++) {
		string _ = ((string*)keys_tmp1.data)[tmp2];
		v__table__Fn f = (*(v__table__Fn*)map_get3(g.table->fns, _, &(v__table__Fn[]){ {0} }));
		if (string_eq(f.name, tos3("testsuite_begin"))) {
			tsuite_begin = f.name;
			continue;
		}
		if (string_eq(f.name, tos3("testsuite_end"))) {
			tsuite_end = f.name;
			continue;
		}
		if (string_starts_with(f.name, tos3("test_"))) {
			_PUSH(&tfuncs, (f.name), tmp6, string);
			continue;
		}
		if (string_contains(f.name, tos3(".test_"))) {
			_PUSH(&tfuncs, (f.name), tmp8, string);
			continue;
		}
		if (string_ends_with(f.name, tos3(".testsuite_begin"))) {
			tsuite_begin = f.name;
			continue;
		}
		if (string_ends_with(f.name, tos3(".testsuite_end"))) {
			tsuite_end = f.name;
			continue;
		}
	}
	array_string all_tfuncs = new_array(0, 0, sizeof(string));
	if (tsuite_begin.len > 0) {
		_PUSH(&all_tfuncs, (tsuite_begin), tmp12, string);
	}
	_PUSH_MANY(&all_tfuncs, (tfuncs), tmp13, array_string);
	if (tsuite_end.len > 0) {
		_PUSH(&all_tfuncs, (tsuite_end), tmp15, string);
	}
	array_string all_tfuncs_c = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp16 = 0; tmp16 < all_tfuncs.
	len; tmp16++) {	string f = ((string*)all_tfuncs.
	data)[tmp16];_PUSH(&all_tfuncs_c, (string_replace(f, tos3("."), tos3("__"))), tmp17, string);
	}
	return all_tfuncs_c;
}

bool v__gen__Gen_is_importing_os(v__gen__Gen g) { 
	return _IN(string, tos3("os"), g.table->imports);
}

void v__gen__Gen_comp_if(v__gen__Gen* g, v__ast__CompIf it) { 
	string ifdef = v__gen__comp_if_to_ifdef(it.val);
	if (it.is_not) {
		v__gen__Gen_writeln(g, string_add(tos3("\n#ifndef "), ifdef));
		v__gen__Gen_writeln(g, _STR("// #if not %.*s", it.val.len, it.val.str));
	} else {
		v__gen__Gen_writeln(g, string_add(tos3("\n#ifdef "), ifdef));
		v__gen__Gen_writeln(g, _STR("// #if %.*s", it.val.len, it.val.str));
	}
	g->defer_ifdef = (it.is_not ? string_add(tos3("#ifndef "), ifdef) : string_add(tos3("#ifdef "), ifdef));
	v__gen__Gen_stmts(g, it.stmts);
	g->defer_ifdef = tos3("");
	if (it.has_else) {
		v__gen__Gen_writeln(g, tos3("#else"));
		g->defer_ifdef = (it.is_not ? string_add(tos3("#ifdef "), ifdef) : string_add(tos3("#ifndef "), ifdef));
		v__gen__Gen_stmts(g, it.else_stmts);
		g->defer_ifdef = tos3("");
	}
	v__gen__Gen_writeln(g, tos3("#endif"));
}

void v__gen__Gen_go_stmt(v__gen__Gen* g, v__ast__GoStmt node) { 
	string tmp = v__gen__Gen_new_tmp_var(g);
	if (node.call_expr.typ == 156 /* v.ast.CallExpr */) {
		v__ast__CallExpr* it = (v__ast__CallExpr*)node.call_expr.obj; // ST it
		string name = string_replace(it->name, tos3("."), tos3("__"));
		if (it->is_method) {
			v__table__TypeSymbol* receiver_sym = v__table__Table_get_type_symbol(g->table, it->receiver_type);
			name = string_add(string_add(receiver_sym->name, tos3("_")), name);
		}
		v__gen__Gen_writeln(g, tos3("// go"));
		string wrapper_struct_name = string_add(tos3("thread_arg_"), name);
		string wrapper_fn_name = string_add(name, tos3("_thread_wrapper"));
		string arg_tmp_var = string_add(tos3("arg_"), tmp);
		v__gen__Gen_writeln(g, _STR("%.*s *%.*s = malloc(sizeof(thread_arg_%.*s));", wrapper_struct_name.len, wrapper_struct_name.str, arg_tmp_var.len, arg_tmp_var.str, name.len, name.str));
		if (it->is_method) {
			v__gen__Gen_write(g, _STR("%.*s->arg0 = ", arg_tmp_var.len, arg_tmp_var.str));
			v__gen__Gen_expr(g, it->left);
			v__gen__Gen_writeln(g, tos3(";"));
		}
		// FOR IN
		for (int i = 0; i < it->args.
		len; i++) {	v__ast__CallArg arg = ((v__ast__CallArg*)it->args.
		data)[i];v__gen__Gen_write(g, _STR("%.*s->arg%d = ", arg_tmp_var.len, arg_tmp_var.str, i + 1));
			v__gen__Gen_expr(g, arg.expr);
			v__gen__Gen_writeln(g, tos3(";"));
		}
		if (g->pref->os == v__pref__OS_windows) {
			v__gen__Gen_writeln(g, _STR("CreateThread(0,0, (LPTHREAD_START_ROUTINE)%.*s, %.*s, 0,0);", wrapper_fn_name.len, wrapper_fn_name.str, arg_tmp_var.len, arg_tmp_var.str));
		} else {
			v__gen__Gen_writeln(g, _STR("pthread_t thread_%.*s;", tmp.len, tmp.str));
			v__gen__Gen_writeln(g, _STR("pthread_create(&thread_%.*s, NULL, (void*)%.*s, %.*s);", tmp.len, tmp.str, wrapper_fn_name.len, wrapper_fn_name.str, arg_tmp_var.len, arg_tmp_var.str));
		}
		v__gen__Gen_writeln(g, tos3("// endgo\n"));
		if (_IN(string, name, g->threaded_fns)) {
			return;
		}
		strings__Builder_writeln(&g->definitions, _STR("\ntypedef struct %.*s {", wrapper_struct_name.len, wrapper_struct_name.str));
		if (it->is_method) {
			string styp = v__gen__Gen_typ(g, it->receiver_type);
			strings__Builder_writeln(&g->definitions, _STR("\t%.*s arg0;", styp.len, styp.str));
		}
		// FOR IN
		for (int i = 0; i < it->args.
		len; i++) {	v__ast__CallArg arg = ((v__ast__CallArg*)it->args.
		data)[i];string styp = v__gen__Gen_typ(g, arg.typ);
			strings__Builder_writeln(&g->definitions, _STR("\t%.*s arg%d;", styp.len, styp.str, i + 1));
		}
		strings__Builder_writeln(&g->definitions, _STR("} %.*s;", wrapper_struct_name.len, wrapper_struct_name.str));
		strings__Builder_writeln(&g->definitions, _STR("void* %.*s(%.*s *arg);", wrapper_fn_name.len, wrapper_fn_name.str, wrapper_struct_name.len, wrapper_struct_name.str));
		strings__Builder_writeln(&g->gowrappers, _STR("void* %.*s(%.*s *arg) {", wrapper_fn_name.len, wrapper_fn_name.str, wrapper_struct_name.len, wrapper_struct_name.str));
		strings__Builder_write(&g->gowrappers, _STR("\t%.*s(", name.len, name.str));
		if (it->is_method) {
			strings__Builder_write(&g->gowrappers, tos3("arg->arg0"));
			if (it->args.len > 0) {
				strings__Builder_write(&g->gowrappers, tos3(", "));
			}
		}
		for (int tmp9 = 0; tmp9 < it->args.len; tmp9++) { 
			int i = tmp9;
			strings__Builder_write(&g->gowrappers, _STR("arg->arg%d", i + 1));
			if (i < it->args.len - 1) {
				strings__Builder_write(&g->gowrappers, tos3(", "));
			}
		}
		strings__Builder_writeln(&g->gowrappers, tos3(");"));
		strings__Builder_writeln(&g->gowrappers, tos3("\treturn 0;"));
		strings__Builder_writeln(&g->gowrappers, tos3("}"));
		_PUSH(&g->threaded_fns, (name), tmp11, string);
	}
	else {
	}
	;
}

void v__gen__Gen_gen_str_for_type(v__gen__Gen* g, v__table__TypeSymbol sym, string styp) { 
	string s = string_replace(styp, tos3("."), tos3("__"));
	if (sym.info.typ == 101 /* v.table.Struct */) {
		v__table__Struct* it = (v__table__Struct*)sym.info.obj; // ST it
	}
	else {
		println(_STR("str() not a struct %.*s", sym.name.len, sym.name.str));
		return;
	}
	;
	v__table__Struct info = /* as */ *(v__table__Struct*)sym.info.obj;
	strings__Builder_write(&g->definitions, _STR("string %.*s_str(%.*s a) { return _STR(\"%.*s {\\n", s.len, s.str, styp.len, styp.str, styp.len, styp.str));
	// FOR IN
	for (int tmp2 = 0; tmp2 < info.fields.
	len; tmp2++) {	v__table__Field field = ((v__table__Field*)info.fields.
	data)[tmp2];string fmt = v__gen__type_to_fmt(field.typ);
		strings__Builder_write(&g->definitions, _STR("\t%.*s: %.*s\\n", field.name.len, field.name.str, fmt.len, fmt.str));
	}
	strings__Builder_write(&g->definitions, tos3("}\""));
	if (info.fields.len > 0) {
		strings__Builder_write(&g->definitions, tos3(", "));
	}
	// FOR IN
	for (int i = 0; i < info.fields.
	len; i++) {	v__table__Field field = ((v__table__Field*)info.fields.
	data)[i];strings__Builder_write(&g->definitions, string_add(tos3("a."), field.name));
		if (field.typ == _const_v__table__string_type) {
			strings__Builder_write(&g->definitions, _STR(".len, a.%.*s.str", field.name.len, field.name.str));
		}
		if (i < info.fields.len - 1) {
			strings__Builder_write(&g->definitions, tos3(", "));
		}
	}
	strings__Builder_writeln(&g->definitions, tos3("); }"));
}

string v__gen__type_to_fmt(v__table__Type typ) { 
	int n = ((int)(typ));
	if (n == _const_v__table__string_type) {
		return tos3("%.*s");
	}
	return tos3("%d");
}

string v__gen__jsgen(v__ast__File program, v__table__Table* table) { 
	v__gen__JsGen g = (v__gen__JsGen){
		.out = strings__new_builder(100),
		.table = table,
	};
	// FOR IN
	for (int tmp1 = 0; tmp1 < program.stmts.
	len; tmp1++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)program.stmts.
	data)[tmp1];v__gen__JsGen_stmt(&g, stmt);
		v__gen__JsGen_writeln(&g, tos3(""));
	}
	return (strings__Builder_str(&g.out));
}

void v__gen__JsGen_save(v__gen__JsGen* g) { 
}

void v__gen__JsGen_write(v__gen__JsGen* g, string s) { 
	strings__Builder_write(&g->out, s);
}

void v__gen__JsGen_writeln(v__gen__JsGen* g, string s) { 
	strings__Builder_writeln(&g->out, s);
}

void v__gen__JsGen_stmts(v__gen__JsGen* g, array_v__ast__Stmt stmts) { 
	// FOR IN
	for (int tmp1 = 0; tmp1 < stmts.
	len; tmp1++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)stmts.
	data)[tmp1];v__gen__JsGen_stmt(g, stmt);
	}
}

void v__gen__JsGen_stmt(v__gen__JsGen* g, v__ast__Stmt node) { 
	if (node.typ == 126 /* v.ast.FnDecl */) {
		v__ast__FnDecl* it = (v__ast__FnDecl*)node.obj; // ST it
		v__table__TypeSymbol* type_sym = v__table__Table_get_type_symbol(g->table, it->return_type);
		v__gen__JsGen_write(g, _STR("/** @return { %.*s } **/\nfunction %.*s(", type_sym->name.len, type_sym->name.str, it->name.len, it->name.str));
		// FOR IN
		for (int tmp2 = 0; tmp2 < it->args.
		len; tmp2++) {	v__table__Arg arg = ((v__table__Arg*)it->args.
		data)[tmp2];v__table__TypeSymbol* arg_type_sym = v__table__Table_get_type_symbol(g->table, arg.typ);
			v__gen__JsGen_write(g, _STR(" /** @type { %.*s } **/ %.*s", arg_type_sym->name.len, arg_type_sym->name.str, arg.name.len, arg.name.str));
		}
		v__gen__JsGen_writeln(g, tos3(") { "));
		// FOR IN
		for (int tmp3 = 0; tmp3 < it->stmts.
		len; tmp3++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)it->stmts.
		data)[tmp3];v__gen__JsGen_stmt(g, stmt);
		}
		v__gen__JsGen_writeln(g, tos3("}"));
	}
	else if (node.typ == 222 /* v.ast.Return */) {
		v__ast__Return* it = (v__ast__Return*)node.obj; // ST it
		v__gen__JsGen_write(g, tos3("return "));
		if (it->exprs.len > 0) {
		} else {
			v__gen__JsGen_expr(g, (*(v__ast__Expr*)array_get(it->exprs, 0)));
		}
		v__gen__JsGen_writeln(g, tos3(";"));
	}
	else if (node.typ == 225 /* v.ast.AssignStmt */) {
		v__ast__AssignStmt* it = (v__ast__AssignStmt*)node.obj; // ST it
		if (it->left.len > it->right.len) {
		} else {
			// FOR IN
			for (int i = 0; i < it->left.
			len; i++) {	v__ast__Ident ident = ((v__ast__Ident*)it->left.
			data)[i];v__ast__IdentVar var_info = v__ast__Ident_var_info(&ident);
				v__table__TypeSymbol* var_type_sym = v__table__Table_get_type_symbol(g->table, var_info.typ);
				v__ast__Expr val = (*(v__ast__Expr*)array_get(it->right, i));
				v__gen__JsGen_write(g, _STR("var /* %.*s */ %.*s = ", var_type_sym->name.len, var_type_sym->name.str, ident.name.len, ident.name.str));
				v__gen__JsGen_expr(g, val);
				v__gen__JsGen_writeln(g, tos3(";"));
			}
		}
	}
	else if (node.typ == 203 /* v.ast.ForStmt */) {
		v__ast__ForStmt* it = (v__ast__ForStmt*)node.obj; // ST it
		v__gen__JsGen_write(g, tos3("while ("));
		v__gen__JsGen_expr(g, it->cond);
		v__gen__JsGen_writeln(g, tos3(") {"));
		// FOR IN
		for (int tmp6 = 0; tmp6 < it->stmts.
		len; tmp6++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)it->stmts.
		data)[tmp6];v__gen__JsGen_stmt(g, stmt);
		}
		v__gen__JsGen_writeln(g, tos3("}"));
	}
	else if (node.typ == 218 /* v.ast.StructDecl */) {
		v__ast__StructDecl* it = (v__ast__StructDecl*)node.obj; // ST it
		v__gen__JsGen_writeln(g, _STR("var %.*s = function() {};", it->name.len, it->name.str));
	}
	else if (node.typ == 180 /* v.ast.ExprStmt */) {
		v__ast__ExprStmt* it = (v__ast__ExprStmt*)node.obj; // ST it
		v__gen__JsGen_expr(g, it->expr);
	}
	else {
		v__gen__verror(tos3("jsgen.stmt(): bad node"));
	}
	;
}

void v__gen__JsGen_expr(v__gen__JsGen* g, v__ast__Expr node) { 
	if (node.typ == 214 /* v.ast.IntegerLiteral */) {
		v__ast__IntegerLiteral* it = (v__ast__IntegerLiteral*)node.obj; // ST it
		v__gen__JsGen_write(g, it->val);
	}
	else if (node.typ == 213 /* v.ast.FloatLiteral */) {
		v__ast__FloatLiteral* it = (v__ast__FloatLiteral*)node.obj; // ST it
		v__gen__JsGen_write(g, it->val);
	}
	else if (node.typ == 210 /* v.ast.StringLiteral */) {
		v__ast__StringLiteral* it = (v__ast__StringLiteral*)node.obj; // ST it
		v__gen__JsGen_write(g, _STR("tos3(\"%.*s\")", it->val.len, it->val.str));
	}
	else if (node.typ == 198 /* v.ast.InfixExpr */) {
		v__ast__InfixExpr* it = (v__ast__InfixExpr*)node.obj; // ST it
		v__gen__JsGen_expr(g, it->left);
		v__gen__JsGen_write(g, _STR(" %.*s ", v__token__Kind_str(it->op).len, v__token__Kind_str(it->op).str));
		v__gen__JsGen_expr(g, it->right);
	}
	else if (node.typ == 186 /* v.ast.StructInit */) {
		v__ast__StructInit* it = (v__ast__StructInit*)node.obj; // ST it
		v__table__TypeSymbol* type_sym = v__table__Table_get_type_symbol(g->table, it->typ);
		v__gen__JsGen_writeln(g, _STR("/*%.*s*/{", type_sym->name.len, type_sym->name.str));
		// FOR IN
		for (int i = 0; i < it->fields.
		len; i++) {	string field = ((string*)it->fields.
		data)[i];v__gen__JsGen_write(g, _STR("\t%.*s : ", field.len, field.str));
			v__gen__JsGen_expr(g, (*(v__ast__Expr*)array_get(it->exprs, i)));
			v__gen__JsGen_writeln(g, tos3(", "));
		}
		v__gen__JsGen_write(g, tos3("}"));
	}
	else if (node.typ == 156 /* v.ast.CallExpr */) {
		v__ast__CallExpr* it = (v__ast__CallExpr*)node.obj; // ST it
		v__gen__JsGen_write(g, _STR("%.*s(", it->name.len, it->name.str));
		// FOR IN
		for (int i = 0; i < it->args.
		len; i++) {	v__ast__CallArg arg = ((v__ast__CallArg*)it->args.
		data)[i];v__gen__JsGen_expr(g, arg.expr);
			if (i != it->args.len - 1) {
				v__gen__JsGen_write(g, tos3(", "));
			}
		}
		v__gen__JsGen_write(g, tos3(")"));
	}
	else if (node.typ == 185 /* v.ast.Ident */) {
		v__ast__Ident* it = (v__ast__Ident*)node.obj; // ST it
		v__gen__JsGen_write(g, _STR("%.*s", it->name.len, it->name.str));
	}
	else if (node.typ == 192 /* v.ast.BoolLiteral */) {
		v__ast__BoolLiteral* it = (v__ast__BoolLiteral*)node.obj; // ST it
		if (it->val == true) {
			v__gen__JsGen_write(g, tos3("true"));
		} else {
			v__gen__JsGen_write(g, tos3("false"));
		}
	}
	else if (node.typ == 206 /* v.ast.IfExpr */) {
		v__ast__IfExpr* it = (v__ast__IfExpr*)node.obj; // ST it
		// FOR IN
		for (int i = 0; i < it->branches.
		len; i++) {	v__ast__IfBranch branch = ((v__ast__IfBranch*)it->branches.
		data)[i];if (i == 0) {
				v__gen__JsGen_write(g, tos3("if ("));
				v__gen__JsGen_expr(g, branch.cond);
				v__gen__JsGen_writeln(g, tos3(") {"));
			} else if (i < it->branches.len - 1 || !it->has_else) {
				v__gen__JsGen_write(g, tos3("else if ("));
				v__gen__JsGen_expr(g, branch.cond);
				v__gen__JsGen_writeln(g, tos3(") {"));
			} else {
				v__gen__JsGen_write(g, tos3("else {"));
			}
			v__gen__JsGen_stmts(g, branch.stmts);
			v__gen__JsGen_writeln(g, tos3("}"));
		}
	}
	else {
		println(term__red(tos3("jsgen.expr(): bad node")));
	}
	;
}

void v__gen__x64__Gen_generate_elf_header(v__gen__x64__Gen* g) { 
	_PUSH_MANY(&g->buf, (new_array_from_c_array(4, 4, sizeof(byte), (byte[4]){	
	((byte)(_const_v__gen__x64__mag0)), _const_v__gen__x64__mag1, _const_v__gen__x64__mag2, _const_v__gen__x64__mag3, 
})), tmp1, array_byte);
	_PUSH(&g->buf, (_const_v__gen__x64__elfclass64), tmp2, byte);
	_PUSH(&g->buf, (_const_v__gen__x64__elfdata2lsb), tmp3, byte);
	_PUSH(&g->buf, (_const_v__gen__x64__ev_current), tmp4, byte);
	_PUSH(&g->buf, (1), tmp5, byte);
	v__gen__x64__Gen_write64(g, 0);
	v__gen__x64__Gen_write16(g, 2);
	v__gen__x64__Gen_write16(g, _const_v__gen__x64__e_machine);
	v__gen__x64__Gen_write32(g, _const_v__gen__x64__ev_current);
	int eh_size = 0x40;
	int phent_size = 0x38;
	v__gen__x64__Gen_write64(g, _const_v__gen__x64__segment_start + eh_size + phent_size);
	v__gen__x64__Gen_write64(g, 0x40);
	v__gen__x64__Gen_write64(g, 0);
	v__gen__x64__Gen_write32(g, 0);
	v__gen__x64__Gen_write16(g, eh_size);
	v__gen__x64__Gen_write16(g, phent_size);
	v__gen__x64__Gen_write16(g, 1);
	v__gen__x64__Gen_write16(g, 0);
	v__gen__x64__Gen_write16(g, 0);
	v__gen__x64__Gen_write16(g, 0);
	v__gen__x64__Gen_write32(g, 1);
	v__gen__x64__Gen_write32(g, 5);
	v__gen__x64__Gen_write64(g, 0);
	v__gen__x64__Gen_write64(g, _const_v__gen__x64__segment_start);
	v__gen__x64__Gen_write64(g, _const_v__gen__x64__segment_start);
	g->file_size_pos = g->buf.len;
	v__gen__x64__Gen_write64(g, 0);
	v__gen__x64__Gen_write64(g, 0);
	v__gen__x64__Gen_write64(g, 0x1000);
	g->code_start_pos = g->buf.len;
	v__gen__x64__Gen_call(g, 0);
}

void v__gen__x64__Gen_generate_elf_footer(v__gen__x64__Gen* g) { 
	v__gen__x64__Gen_mov(g, v__gen__x64__Register_edi, 0);
	v__gen__x64__Gen_mov(g, v__gen__x64__Register_eax, 60);
	v__gen__x64__Gen_syscall(g);
	// FOR IN
	for (int i = 0; i < g->strings.
	len; i++) {	string s = ((string*)g->strings.
	data)[i];v__gen__x64__Gen_write64_at(g, _const_v__gen__x64__segment_start + g->buf.len, ((int)((*(i64*)array_get(g->str_pos, i)))));
		v__gen__x64__Gen_write_string(g, s);
		v__gen__x64__Gen_write8(g, 6);
	}
	int file_size = g->buf.len;
	v__gen__x64__Gen_write64_at(g, file_size, g->file_size_pos);
	v__gen__x64__Gen_write64_at(g, file_size, g->file_size_pos + 8);
	v__gen__x64__Gen_write64_at(g, ((int)(g->main_fn_addr - g->code_start_pos)) - 5, g->code_start_pos + 1);
	Option_os__File f = os__create(g->out_name);
	if (!f.ok) {
		string err = f.v_error;
		int errcode = f.ecode;
		 // typeof it_expr_type: v.ast.CallExpr
		// last_type: v.ast.ExprStmt
		// last_expr_result_type: void
		v_panic(err);
	};
	os__chmod(g->out_name, 0775);
	os__File_write_bytes(&/*opt*/(*(os__File*)f.data), g->buf.data, g->buf.len);
	os__File_close(&/*opt*/(*(os__File*)f.data));
	println(tos3("x64 elf binary has been successfully generated"));
}

void v__gen__x64__Gen_section_header(v__gen__x64__Gen* g, v__gen__x64__SectionConfig c) { 
	v__gen__x64__Gen_write32(g, g->sect_header_name_pos);
	g->sect_header_name_pos += c.name.len + 1;
	v__gen__x64__Gen_write32(g, ((int)(c.typ)));
	v__gen__x64__Gen_write64(g, c.flags);
	v__gen__x64__Gen_write64(g, 0);
	v__gen__x64__Gen_write64(g, g->offset);
	g->offset += c.datalen + 1;
	v__gen__x64__Gen_write64(g, c.datalen);
	v__gen__x64__Gen_write32(g, c.link);
	v__gen__x64__Gen_write32(g, c.info);
	v__gen__x64__Gen_write64(g, c.align);
	v__gen__x64__Gen_write64(g, c.entsize);
}

void v__gen__x64__genobj() { 
}

void v__gen__x64__gen(array_v__ast__File files, string out_name) { 
	v__gen__x64__Gen g = (v__gen__x64__Gen){
		.sect_header_name_pos = 0,
		.out_name = out_name,
		.buf = new_array(0, 1, sizeof(byte)),
		.offset = 0,
		.str_pos = new_array(0, 1, sizeof(i64)),
		.strings = new_array(0, 1, sizeof(string)),
		.file_size_pos = 0,
		.main_fn_addr = 0,
		.code_start_pos = 0,
		.fn_addr = new_map(1, sizeof(i64)),
	};
	v__gen__x64__Gen_generate_elf_header(&g);
	// FOR IN
	for (int tmp1 = 0; tmp1 < files.
	len; tmp1++) {	v__ast__File file = ((v__ast__File*)files.
	data)[tmp1];// FOR IN
		for (int tmp2 = 0; tmp2 < file.stmts.
		len; tmp2++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)file.stmts.
		data)[tmp2];v__gen__x64__Gen_stmt(&g, stmt);
			v__gen__x64__Gen_writeln(&g, tos3(""));
		}
	}
	v__gen__x64__Gen_generate_elf_footer(&g);
}

i64 v__gen__x64__Gen_pos(v__gen__x64__Gen* g) { 
	return g->buf.len;
}

void v__gen__x64__Gen_write8(v__gen__x64__Gen* g, int n) { 
	_PUSH(&g->buf, (((byte)(n))), tmp1, byte);
}

void v__gen__x64__Gen_write16(v__gen__x64__Gen* g, int n) { 
	_PUSH(&g->buf, (((byte)(n))), tmp1, byte);
	_PUSH(&g->buf, (((byte)(n >> 8))), tmp2, byte);
}

void v__gen__x64__Gen_write32(v__gen__x64__Gen* g, int n) { 
	_PUSH(&g->buf, (((byte)(n))), tmp1, byte);
	_PUSH(&g->buf, (((byte)(n >> 8))), tmp2, byte);
	_PUSH(&g->buf, (((byte)(n >> 16))), tmp3, byte);
	_PUSH(&g->buf, (((byte)(n >> 24))), tmp4, byte);
}

void v__gen__x64__Gen_write64(v__gen__x64__Gen* g, i64 n) { 
	_PUSH(&g->buf, (((byte)(n))), tmp1, byte);
	_PUSH(&g->buf, (((byte)(n >> 8))), tmp2, byte);
	_PUSH(&g->buf, (((byte)(n >> 16))), tmp3, byte);
	_PUSH(&g->buf, (((byte)(n >> 24))), tmp4, byte);
	_PUSH(&g->buf, (((byte)(n >> 32))), tmp5, byte);
	_PUSH(&g->buf, (((byte)(n >> 40))), tmp6, byte);
	_PUSH(&g->buf, (((byte)(n >> 48))), tmp7, byte);
	_PUSH(&g->buf, (((byte)(n >> 56))), tmp8, byte);
}

void v__gen__x64__Gen_write64_at(v__gen__x64__Gen* g, i64 n, i64 at) { 
	(*(byte*)array_get(g->buf, at)) = ((byte)(n));
	(*(byte*)array_get(g->buf, at + 1)) = ((byte)(n >> 8));
	(*(byte*)array_get(g->buf, at + 2)) = ((byte)(n >> 16));
	(*(byte*)array_get(g->buf, at + 3)) = ((byte)(n >> 24));
	(*(byte*)array_get(g->buf, at + 4)) = ((byte)(n >> 32));
	(*(byte*)array_get(g->buf, at + 5)) = ((byte)(n >> 40));
	(*(byte*)array_get(g->buf, at + 6)) = ((byte)(n >> 48));
	(*(byte*)array_get(g->buf, at + 7)) = ((byte)(n >> 56));
}

void v__gen__x64__Gen_write_string(v__gen__x64__Gen* g, string s) { 
	for (int tmp1 = 0; tmp1 < s.len; tmp1++) {
	byte c = s.str[tmp1];
		v__gen__x64__Gen_write8(g, ((int)(c)));
	}
}

void v__gen__x64__Gen_inc(v__gen__x64__Gen* g, v__gen__x64__Register reg) { 
	v__gen__x64__Gen_write16(g, 0xff49);
	if (reg == v__gen__x64__Register_r12) {
		v__gen__x64__Gen_write8(g, 0xc4);
	}
	else {
		v_panic(_STR("unhandled inc %d", reg));
	}
	;
}

void v__gen__x64__Gen_cmp(v__gen__x64__Gen* g, v__gen__x64__Register reg, v__gen__x64__Size size, i64 val) { 
	v__gen__x64__Gen_write8(g, 0x49);
	if (size == v__gen__x64__Size__8) {
		v__gen__x64__Gen_write8(g, 0x83);
	}
	else if (size == v__gen__x64__Size__32) {
		v__gen__x64__Gen_write8(g, 0x81);
	}
	else {
		v_panic(tos3("unhandled cmp"));
	}
	;
	if (reg == v__gen__x64__Register_r12) {
		v__gen__x64__Gen_write8(g, 0xfc);
	}
	else {
		v_panic(tos3("unhandled cmp"));
	}
	;
	v__gen__x64__Gen_write8(g, ((int)(val)));
}

i64 v__gen__x64__abs(i64 a) { 
	return (a < 0 ? -a : a);
}

void v__gen__x64__Gen_jle(v__gen__x64__Gen* g, i64 addr) { 
	int offset = 0xff - ((int)(v__gen__x64__abs(addr - g->buf.len))) - 1;
	v__gen__x64__Gen_write8(g, 0x7e);
	v__gen__x64__Gen_write8(g, offset);
}

void v__gen__x64__Gen_jl(v__gen__x64__Gen* g, i64 addr) { 
	int offset = 0xff - ((int)(v__gen__x64__abs(addr - g->buf.len))) - 1;
	v__gen__x64__Gen_write8(g, 0x7c);
	v__gen__x64__Gen_write8(g, offset);
}

int v__gen__x64__Gen_abs_to_rel_addr(v__gen__x64__Gen* g, i64 addr) { 
	return ((int)(v__gen__x64__abs(addr - g->buf.len))) - 1;
}

void v__gen__x64__Gen_jmp(v__gen__x64__Gen* g, i64 addr) { 
	int offset = 0xff - v__gen__x64__Gen_abs_to_rel_addr(g, addr);
	v__gen__x64__Gen_write8(g, 0xe9);
	v__gen__x64__Gen_write8(g, offset);
}

void v__gen__x64__Gen_mov64(v__gen__x64__Gen* g, v__gen__x64__Register reg, i64 val) { 
	if (reg == v__gen__x64__Register_rsi) {
		v__gen__x64__Gen_write8(g, 0x48);
		v__gen__x64__Gen_write8(g, 0xbe);
	}
	else {
		println(_STR("unhandled mov %d", reg));
	}
	;
	v__gen__x64__Gen_write64(g, val);
}

void v__gen__x64__Gen_call(v__gen__x64__Gen* g, int addr) { 
	println(_STR("call addr=%d rel_addr=%d pos=%d", addr, addr, g->buf.len));
	v__gen__x64__Gen_write8(g, 0xe8);
	v__gen__x64__Gen_write32(g, addr);
}

void v__gen__x64__Gen_syscall(v__gen__x64__Gen* g) { 
	v__gen__x64__Gen_write8(g, 0x0f);
	v__gen__x64__Gen_write8(g, 0x05);
}

void v__gen__x64__Gen_ret(v__gen__x64__Gen* g) { 
	v__gen__x64__Gen_write8(g, 0xc3);
}

int v__gen__x64__Gen_gen_loop_start(v__gen__x64__Gen* g, int from) { 
	v__gen__x64__Gen_mov(g, v__gen__x64__Register_r12, from);
	int label = g->buf.len;
	v__gen__x64__Gen_inc(g, v__gen__x64__Register_r12);
	return label;
}

void v__gen__x64__Gen_gen_loop_end(v__gen__x64__Gen* g, int to, int label) { 
	v__gen__x64__Gen_cmp(g, v__gen__x64__Register_r12, v__gen__x64__Size__8, to);
	v__gen__x64__Gen_jl(g, label);
}

void v__gen__x64__Gen_save_main_fn_addr(v__gen__x64__Gen* g) { 
	g->main_fn_addr = g->buf.len;
}

void v__gen__x64__Gen_gen_print_from_expr(v__gen__x64__Gen* g, v__ast__Expr expr, bool newline) { 
	if (expr.typ == 210 /* v.ast.StringLiteral */) {
		v__ast__StringLiteral* it = (v__ast__StringLiteral*)expr.obj; // ST it
		if (newline) {
			v__gen__x64__Gen_gen_print(g, string_add(it->val, tos3("\n")));
		} else {
			v__gen__x64__Gen_gen_print(g, it->val);
		}
	}
	else {
	}
	;
}

void v__gen__x64__Gen_gen_print(v__gen__x64__Gen* g, string s) { 
	_PUSH(&g->strings, (string_add(s, tos3("\n"))), tmp1, string);
	v__gen__x64__Gen_mov(g, v__gen__x64__Register_eax, 1);
	v__gen__x64__Gen_mov(g, v__gen__x64__Register_edi, 1);
	int str_pos = g->buf.len + 2;
	_PUSH(&g->str_pos, (str_pos), tmp2, i64);
	v__gen__x64__Gen_mov64(g, v__gen__x64__Register_rsi, 0);
	v__gen__x64__Gen_mov(g, v__gen__x64__Register_edx, s.len + 1);
	v__gen__x64__Gen_syscall(g);
}

void v__gen__x64__Gen_gen_exit(v__gen__x64__Gen* g) { 
	v__gen__x64__Gen_mov(g, v__gen__x64__Register_edi, 0);
	v__gen__x64__Gen_mov(g, v__gen__x64__Register_eax, 60);
	v__gen__x64__Gen_syscall(g);
}

void v__gen__x64__Gen_mov(v__gen__x64__Gen* g, v__gen__x64__Register reg, int val) { 
	if (reg == v__gen__x64__Register_eax) {
		v__gen__x64__Gen_write8(g, 0xb8);
	}
	else if (reg == v__gen__x64__Register_edi) {
		v__gen__x64__Gen_write8(g, 0xbf);
	}
	else if (reg == v__gen__x64__Register_edx) {
		v__gen__x64__Gen_write8(g, 0xba);
	}
	else if (reg == v__gen__x64__Register_rsi) {
		v__gen__x64__Gen_write8(g, 0x48);
		v__gen__x64__Gen_write8(g, 0xbe);
	}
	else if (reg == v__gen__x64__Register_r12) {
		v__gen__x64__Gen_write8(g, 0x41);
		v__gen__x64__Gen_write8(g, 0xbc);
	}
	else {
		v_panic(_STR("unhandled mov %d", reg));
	}
	;
	v__gen__x64__Gen_write32(g, val);
}

void v__gen__x64__Gen_register_function_address(v__gen__x64__Gen* g, string name) { 
	i64 addr = v__gen__x64__Gen_pos(g);
	map_set(&g->fn_addr, name, &(i64[]) { addr });
}

void v__gen__x64__Gen_write(v__gen__x64__Gen* g, string s) { 
}

void v__gen__x64__Gen_writeln(v__gen__x64__Gen* g, string s) { 
}

void v__gen__x64__Gen_call_fn(v__gen__x64__Gen* g, string name) { 
	if (!string_contains(name, tos3("__"))) {
		return;
	}
	i64 addr = (*(i64*)map_get3(g->fn_addr, name, &(i64[]){ 0 }));
	v__gen__x64__Gen_call(g, ((int)(addr)));
	println(_STR("call %.*s %d", name.len, name.str, addr));
}

void v__gen__x64__Gen_stmt(v__gen__x64__Gen* g, v__ast__Stmt node) { 
	if (node.typ == 215 /* v.ast.ConstDecl */) {
		v__ast__ConstDecl* it = (v__ast__ConstDecl*)node.obj; // ST it
	}
	else if (node.typ == 126 /* v.ast.FnDecl */) {
		v__ast__FnDecl* it = (v__ast__FnDecl*)node.obj; // ST it
		bool is_main = string_eq(it->name, tos3("main"));
		if (is_main) {
			v__gen__x64__Gen_save_main_fn_addr(g);
		}
		// FOR IN
		for (int tmp3 = 0; tmp3 < it->args.
		len; tmp3++) {	v__table__Arg arg = ((v__table__Arg*)it->args.
		data)[tmp3];}
		// FOR IN
		for (int tmp4 = 0; tmp4 < it->stmts.
		len; tmp4++) {	v__ast__Stmt stmt = ((v__ast__Stmt*)it->stmts.
		data)[tmp4];v__gen__x64__Gen_stmt(g, stmt);
		}
		if (is_main) {
			println(tos3("end of main: gen exit"));
			v__gen__x64__Gen_gen_exit(g);
		}
		v__gen__x64__Gen_ret(g);
	}
	else if (node.typ == 222 /* v.ast.Return */) {
		v__ast__Return* it = (v__ast__Return*)node.obj; // ST it
	}
	else if (node.typ == 225 /* v.ast.AssignStmt */) {
		v__ast__AssignStmt* it = (v__ast__AssignStmt*)node.obj; // ST it
	}
	else if (node.typ == 203 /* v.ast.ForStmt */) {
		v__ast__ForStmt* it = (v__ast__ForStmt*)node.obj; // ST it
	}
	else if (node.typ == 218 /* v.ast.StructDecl */) {
		v__ast__StructDecl* it = (v__ast__StructDecl*)node.obj; // ST it
	}
	else if (node.typ == 180 /* v.ast.ExprStmt */) {
		v__ast__ExprStmt* it = (v__ast__ExprStmt*)node.obj; // ST it
		v__gen__x64__Gen_expr(g, it->expr);
	}
	else {
		v__gen__x64__verror(tos3("x64.stmt(): bad node"));
	}
	;
}

void v__gen__x64__Gen_expr(v__gen__x64__Gen* g, v__ast__Expr node) { 
	if (node.typ == 182 /* v.ast.AssignExpr */) {
		v__ast__AssignExpr* it = (v__ast__AssignExpr*)node.obj; // ST it
	}
	else if (node.typ == 214 /* v.ast.IntegerLiteral */) {
		v__ast__IntegerLiteral* it = (v__ast__IntegerLiteral*)node.obj; // ST it
	}
	else if (node.typ == 213 /* v.ast.FloatLiteral */) {
		v__ast__FloatLiteral* it = (v__ast__FloatLiteral*)node.obj; // ST it
	}
	else if (node.typ == 210 /* v.ast.StringLiteral */) {
		v__ast__StringLiteral* it = (v__ast__StringLiteral*)node.obj; // ST it
	}
	else if (node.typ == 198 /* v.ast.InfixExpr */) {
		v__ast__InfixExpr* it = (v__ast__InfixExpr*)node.obj; // ST it
	}
	else if (node.typ == 186 /* v.ast.StructInit */) {
		v__ast__StructInit* it = (v__ast__StructInit*)node.obj; // ST it
	}
	else if (node.typ == 156 /* v.ast.CallExpr */) {
		v__ast__CallExpr* it = (v__ast__CallExpr*)node.obj; // ST it
		if (string_eq(it->name, tos3("println")) || string_eq(it->name, tos3("print"))) {
			v__ast__Expr expr = (*(v__ast__CallArg*)array_get(it->args, 0)).expr;
			v__gen__x64__Gen_gen_print_from_expr(g, expr, string_eq(it->name, tos3("println")));
		}
	}
	else if (node.typ == 212 /* v.ast.ArrayInit */) {
		v__ast__ArrayInit* it = (v__ast__ArrayInit*)node.obj; // ST it
	}
	else if (node.typ == 185 /* v.ast.Ident */) {
		v__ast__Ident* it = (v__ast__Ident*)node.obj; // ST it
	}
	else if (node.typ == 192 /* v.ast.BoolLiteral */) {
		v__ast__BoolLiteral* it = (v__ast__BoolLiteral*)node.obj; // ST it
	}
	else if (node.typ == 206 /* v.ast.IfExpr */) {
		v__ast__IfExpr* it = (v__ast__IfExpr*)node.obj; // ST it
	}
	else {
	}
	;
}

void v__gen__x64__verror(string s) { 
	v__util__verror(tos3("x64 gen error"), s);
}

v__scanner__Scanner* v__scanner__new_scanner_file(string file_path, v__scanner__CommentsMode comments_mode) { 
	if (!os__exists(file_path)) {
		v__scanner__verror(_STR("%.*s doesn't exist", file_path.len, file_path.str));
	}
	Option_string raw_text = os__read_file(file_path);
	if (!raw_text.ok) {
		string err = raw_text.v_error;
		int errcode = raw_text.ecode;
		// last_type: v.ast.Return
		// last_expr_result_type: 
		v__scanner__verror(_STR("scanner: failed to open %.*s", file_path.len, file_path.str));
		return 0;
	};
	if (/*opt*/(*(string*)raw_text.data).len >= 3) {
		byteptr c_text = /*opt*/(*(string*)raw_text.data).str;
		if (c_text[0] == 0xEF && c_text[1] == 0xBB && c_text[2] == 0xBF) {
			int offset_from_begin = 3;
			/*opt*/(*(string*)raw_text.data) = tos(&/*qq*/c_text[offset_from_begin], vstrlen(c_text) - offset_from_begin);
		}
	}
	v__scanner__Scanner* s = v__scanner__new_scanner(/*opt*/(*(string*)raw_text.data), comments_mode);
	s->file_path = file_path;
	return s;
}

v__scanner__Scanner* v__scanner__new_scanner(string text, v__scanner__CommentsMode comments_mode) { 
	return (v__scanner__Scanner*)memdup(&(v__scanner__Scanner){	.text = text,
		.is_print_line_on_error = true,
		.is_print_colored_error = true,
		.is_print_rel_paths_on_error = true,
		.is_fmt = _const_v__scanner__is_fmt,
		.comments_mode = comments_mode,
		.file_path = tos3(""),
		.pos = 0,
		.line_nr = 0,
		.last_nl_pos = 0,
		.is_inside_string = 0,
		.is_inter_start = 0,
		.is_inter_end = 0,
		.is_debug = 0,
		.line_comment = tos3(""),
		.is_started = 0,
		.fn_name = tos3(""),
		.quote = 0,
		.line_ends = new_array(0, 1, sizeof(int)),
		.nr_lines = 0,
		.is_vh = 0,
	}, sizeof(v__scanner__Scanner));
}

v__token__Token v__scanner__Scanner_new_token(v__scanner__Scanner* s, v__token__Kind tok_kind, string lit) { 
	return (v__token__Token){
		.kind = tok_kind,
		.lit = lit,
		.line_nr = s->line_nr + 1,
		.pos = s->pos,
	};
}

string v__scanner__Scanner_ident_name(v__scanner__Scanner* s) { 
	int start = s->pos;
	s->pos++;
	while (s->pos < s->text.len && (v__scanner__is_name_char(string_at(s->text, s->pos)) || byte_is_digit(string_at(s->text, s->pos)))) {
		s->pos++;
	}
	string name = string_substr(s->text, start, s->pos);
	s->pos--;
	return name;
}

string v__scanner__filter_num_sep(byteptr txt, int start, int end) { 
		byteptr b = v_malloc(end - start + 1);
		int i = start;
		int i1 = 0;
		while (i < end) {
			if (txt[i] != _const_v__scanner__num_sep) {
				b[i1] = txt[i];
				i1++;
			}
			i++;
		}
		b[i1] = 0;
		return tos(b, i1);
}

string v__scanner__Scanner_ident_bin_number(v__scanner__Scanner* s) { 
	bool has_wrong_digit = false;
	byte first_wrong_digit = '\0';
	int start_pos = s->pos;
	s->pos += 2;
	while (s->pos < s->text.len) {
		byte c = string_at(s->text, s->pos);
		if (!byte_is_bin_digit(c) && c != _const_v__scanner__num_sep) {
			if ((!byte_is_digit(c) && !byte_is_letter(c)) || s->is_inside_string) {
				break;
			} else if (!has_wrong_digit) {
				has_wrong_digit = true;
				first_wrong_digit = c;
			}
		}
		s->pos++;
	}
	if (start_pos + 2 == s->pos) {
		v__scanner__Scanner_error(s, tos3("number part of this binary is not provided"));
	} else if (has_wrong_digit) {
		v__scanner__Scanner_error(s, _STR("this binary number has unsuitable digit `%.*s`", byte_str(first_wrong_digit).len, byte_str(first_wrong_digit).str));
	}
	string number = v__scanner__filter_num_sep(s->text.str, start_pos, s->pos);
	s->pos--;
	return number;
}

string v__scanner__Scanner_ident_hex_number(v__scanner__Scanner* s) { 
	bool has_wrong_digit = false;
	byte first_wrong_digit = '\0';
	int start_pos = s->pos;
	s->pos += 2;
	while (s->pos < s->text.len) {
		byte c = string_at(s->text, s->pos);
		if (!byte_is_hex_digit(c) && c != _const_v__scanner__num_sep) {
			if (!byte_is_letter(c) || s->is_inside_string) {
				break;
			} else if (!has_wrong_digit) {
				has_wrong_digit = true;
				first_wrong_digit = c;
			}
		}
		s->pos++;
	}
	if (start_pos + 2 == s->pos) {
		v__scanner__Scanner_error(s, tos3("number part of this hexadecimal is not provided"));
	} else if (has_wrong_digit) {
		v__scanner__Scanner_error(s, _STR("this hexadecimal number has unsuitable digit `%.*s`", byte_str(first_wrong_digit).len, byte_str(first_wrong_digit).str));
	}
	string number = v__scanner__filter_num_sep(s->text.str, start_pos, s->pos);
	s->pos--;
	return number;
}

string v__scanner__Scanner_ident_oct_number(v__scanner__Scanner* s) { 
	bool has_wrong_digit = false;
	byte first_wrong_digit = '\0';
	int start_pos = s->pos;
	s->pos += 2;
	while (s->pos < s->text.len) {
		byte c = string_at(s->text, s->pos);
		if (!byte_is_oct_digit(c) && c != _const_v__scanner__num_sep) {
			if ((!byte_is_digit(c) && !byte_is_letter(c)) || s->is_inside_string) {
				break;
			} else if (!has_wrong_digit) {
				has_wrong_digit = true;
				first_wrong_digit = c;
			}
		}
		s->pos++;
	}
	if (start_pos + 2 == s->pos) {
		v__scanner__Scanner_error(s, tos3("number part of this octal is not provided"));
	} else if (has_wrong_digit) {
		v__scanner__Scanner_error(s, _STR("this octal number has unsuitable digit `%.*s`", byte_str(first_wrong_digit).len, byte_str(first_wrong_digit).str));
	}
	string number = v__scanner__filter_num_sep(s->text.str, start_pos, s->pos);
	s->pos--;
	return number;
}

string v__scanner__Scanner_ident_dec_number(v__scanner__Scanner* s) { 
	bool has_wrong_digit = false;
	byte first_wrong_digit = '\0';
	bool call_method = false;
	int start_pos = s->pos;
	while (s->pos < s->text.len) {
		byte c = string_at(s->text, s->pos);
		if (!byte_is_digit(c) && c != _const_v__scanner__num_sep) {
			if (!byte_is_letter(c) || (c == 'e' || c == 'E') || s->is_inside_string) {
				break;
			} else if (!has_wrong_digit) {
				has_wrong_digit = true;
				first_wrong_digit = c;
			}
		}
		s->pos++;
	}
	if (v__scanner__Scanner_expect(s, tos3(".."), s->pos)) {
		string number = v__scanner__filter_num_sep(s->text.str, start_pos, s->pos);
		s->pos--;
		return number;
	}
	if (s->pos < s->text.len && string_at(s->text, s->pos) == '.') {
		s->pos++;
		if (s->pos < s->text.len) {
			if (byte_is_digit(string_at(s->text, s->pos))) {
				while (s->pos < s->text.len) {
					byte c = string_at(s->text, s->pos);
					if (!byte_is_digit(c)) {
						if (!byte_is_letter(c) || (c == 'e' || c == 'E') || s->is_inside_string) {
							if (c == '.' && s->pos + 1 < s->text.len && !byte_is_digit(string_at(s->text, s->pos + 1)) && string_at(s->text, s->pos + 1) != ')') {
								call_method = true;
							}
							break;
						} else if (!has_wrong_digit) {
							has_wrong_digit = true;
							first_wrong_digit = c;
						}
					}
					s->pos++;
				}
			} else if (!((string_at(s->text, s->pos) == ')' || string_at(s->text, s->pos) == 'e' || string_at(s->text, s->pos) == 'E'))) {
				call_method = true;
				s->pos--;
			}
		}
	}
	bool has_exponential_part = false;
	if (v__scanner__Scanner_expect(s, tos3("e"), s->pos) || v__scanner__Scanner_expect(s, tos3("E"), s->pos)) {
		s->pos++;
		int exp_start_pos = s->pos;
		if (s->pos < s->text.len && (string_at(s->text, s->pos) == '-' || string_at(s->text, s->pos) == '+')) {
			s->pos++;
		}
		while (s->pos < s->text.len) {
			byte c = string_at(s->text, s->pos);
			if (!byte_is_digit(c)) {
				if (!byte_is_letter(c) || s->is_inside_string) {
					if (c == '.' && s->pos + 1 < s->text.len && !byte_is_digit(string_at(s->text, s->pos + 1)) && string_at(s->text, s->pos + 1) != ')') {
						call_method = true;
					}
					break;
				} else if (!has_wrong_digit) {
					has_wrong_digit = true;
					first_wrong_digit = c;
				}
			}
			s->pos++;
		}
		if (exp_start_pos == s->pos) {
			v__scanner__Scanner_error(s, tos3("exponent has no digits"));
		}
		has_exponential_part = true;
	}
	if (s->pos < s->text.len && string_at(s->text, s->pos) == '.' && !call_method) {
		if (has_exponential_part) {
			v__scanner__Scanner_error(s, tos3("exponential part should be integer"));
		} else {
			v__scanner__Scanner_error(s, tos3("too many decimal points in number"));
		}
	}
	if (has_wrong_digit) {
		v__scanner__Scanner_error(s, _STR("this number has unsuitable digit `%.*s`", byte_str(first_wrong_digit).len, byte_str(first_wrong_digit).str));
	}
	string number = v__scanner__filter_num_sep(s->text.str, start_pos, s->pos);
	s->pos--;
	return number;
}

string v__scanner__Scanner_ident_number(v__scanner__Scanner* s) { 
	if (v__scanner__Scanner_expect(s, tos3("0b"), s->pos)) {
		return v__scanner__Scanner_ident_bin_number(s);
	} else if (v__scanner__Scanner_expect(s, tos3("0x"), s->pos)) {
		return v__scanner__Scanner_ident_hex_number(s);
	} else if (v__scanner__Scanner_expect(s, tos3("0o"), s->pos)) {
		return v__scanner__Scanner_ident_oct_number(s);
	} else {
		return v__scanner__Scanner_ident_dec_number(s);
	}
}

void v__scanner__Scanner_skip_whitespace(v__scanner__Scanner* s) { 
	while (s->pos < s->text.len && byte_is_space(string_at(s->text, s->pos))) {
		if (v__scanner__is_nl(string_at(s->text, s->pos)) && s->is_vh) {
			return;
		}
		if (v__scanner__is_nl(string_at(s->text, s->pos)) && !v__scanner__Scanner_expect(s, tos3("\r\n"), s->pos - 1)) {
			v__scanner__Scanner_inc_line_number(s);
		}
		s->pos++;
	}
}

v__token__Token v__scanner__Scanner_end_of_file(v__scanner__Scanner* s) { 
	s->pos = s->text.len;
	v__scanner__Scanner_inc_line_number(s);
	return v__scanner__Scanner_new_token(s, v__token__Kind_eof, tos3(""));
}

v__token__Token v__scanner__Scanner_scan(v__scanner__Scanner* s) { 
	if (s->is_started) {
		s->pos++;
	}
	s->is_started = true;
	if (s->pos >= s->text.len) {
		return v__scanner__Scanner_end_of_file(s);
	}
	if (!s->is_inside_string) {
		v__scanner__Scanner_skip_whitespace(s);
	}
	if (s->is_inter_end) {
		if (string_at(s->text, s->pos) == s->quote) {
			s->is_inter_end = false;
			return v__scanner__Scanner_new_token(s, v__token__Kind_string, tos3(""));
		}
		s->is_inter_end = false;
		return v__scanner__Scanner_new_token(s, v__token__Kind_string, v__scanner__Scanner_ident_string(s));
	}
	v__scanner__Scanner_skip_whitespace(s);
	if (s->pos >= s->text.len) {
		return v__scanner__Scanner_end_of_file(s);
	}
	byte c = string_at(s->text, s->pos);
	byte nextc = (s->pos + 1 < s->text.len ? string_at(s->text, s->pos + 1) : '\0');
	if (v__scanner__is_name_char(c)) {
		string name = v__scanner__Scanner_ident_name(s);
		byte next_char = (s->pos + 1 < s->text.len ? string_at(s->text, s->pos + 1) : '\0');
		if (v__token__is_key(name)) {
			return v__scanner__Scanner_new_token(s, v__token__key_to_token(name), tos3(""));
		}
		if (s->is_inside_string) {
			if (next_char == s->quote) {
				s->is_inter_end = true;
				s->is_inter_start = false;
				s->is_inside_string = false;
			}
		}
		if (s->is_inter_start && next_char != '.' && next_char != '(') {
			s->is_inter_end = true;
			s->is_inter_start = false;
		}
		if (s->pos == 0 && next_char == ' ') {
			s->pos++;
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_name, name);
	} else if (byte_is_digit(c) || (c == '.' && byte_is_digit(nextc))) {
		if (!s->is_inside_string) {
			int start_pos = s->pos;
			while (start_pos < s->text.len && string_at(s->text, start_pos) == '0') {
				start_pos++;
			}
			int prefix_zero_num = start_pos - s->pos;
			if (start_pos == s->text.len || (c == '0' && !byte_is_digit(string_at(s->text, start_pos)))) {
				prefix_zero_num--;
			}
			s->pos += prefix_zero_num;
		}
		string num = v__scanner__Scanner_ident_number(s);
		return v__scanner__Scanner_new_token(s, v__token__Kind_number, num);
	}
	if (c == ')' && s->is_inter_start) {
		s->is_inter_end = true;
		s->is_inter_start = false;
		byte next_char = (s->pos + 1 < s->text.len ? string_at(s->text, s->pos + 1) : '\0');
		if (next_char == s->quote) {
			s->is_inside_string = false;
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_rpar, tos3(""));
	}
	if (c == '+') {
		if (nextc == '+') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_inc, tos3(""));
		} else if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_plus_assign, tos3(""));
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_plus, tos3(""));
	}
	else if (c == '-') {
		if (nextc == '-') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_dec, tos3(""));
		} else if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_minus_assign, tos3(""));
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_minus, tos3(""));
	}
	else if (c == '*') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_mult_assign, tos3(""));
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_mul, tos3(""));
	}
	else if (c == '^') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_xor_assign, tos3(""));
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_xor, tos3(""));
	}
	else if (c == '%') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_mod_assign, tos3(""));
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_mod, tos3(""));
	}
	else if (c == '?') {
		return v__scanner__Scanner_new_token(s, v__token__Kind_question, tos3(""));
	}
	else if (c == _const_v__scanner__single_quote || c == _const_v__scanner__double_quote) {
		return v__scanner__Scanner_new_token(s, v__token__Kind_string, v__scanner__Scanner_ident_string(s));
	}
	else if (c == '`') {
		return v__scanner__Scanner_new_token(s, v__token__Kind_chartoken, v__scanner__Scanner_ident_char(s));
	}
	else if (c == '(') {
		return v__scanner__Scanner_new_token(s, v__token__Kind_lpar, tos3(""));
	}
	else if (c == ')') {
		return v__scanner__Scanner_new_token(s, v__token__Kind_rpar, tos3(""));
	}
	else if (c == '[') {
		return v__scanner__Scanner_new_token(s, v__token__Kind_lsbr, tos3(""));
	}
	else if (c == ']') {
		return v__scanner__Scanner_new_token(s, v__token__Kind_rsbr, tos3(""));
	}
	else if (c == '{') {
		if (s->is_inside_string) {
			return v__scanner__Scanner_scan(s);
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_lcbr, tos3(""));
	}
	else if (c == '$') {
		if (s->is_inside_string) {
			return v__scanner__Scanner_new_token(s, v__token__Kind_str_dollar, tos3(""));
		} else {
			return v__scanner__Scanner_new_token(s, v__token__Kind_dollar, tos3(""));
		}
	}
	else if (c == '}') {
		if (s->is_inside_string) {
			s->pos++;
			if (string_at(s->text, s->pos) == s->quote) {
				s->is_inside_string = false;
				return v__scanner__Scanner_new_token(s, v__token__Kind_string, tos3(""));
			}
			return v__scanner__Scanner_new_token(s, v__token__Kind_string, v__scanner__Scanner_ident_string(s));
		} else {
			return v__scanner__Scanner_new_token(s, v__token__Kind_rcbr, tos3(""));
		}
	}
	else if (c == '&') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_and_assign, tos3(""));
		}
		if (nextc == '&') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_and, tos3(""));
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_amp, tos3(""));
	}
	else if (c == '|') {
		if (nextc == '|') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_logical_or, tos3(""));
		}
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_or_assign, tos3(""));
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_pipe, tos3(""));
	}
	else if (c == ',') {
		return v__scanner__Scanner_new_token(s, v__token__Kind_comma, tos3(""));
	}
	else if (c == '@') {
		s->pos++;
		string name = v__scanner__Scanner_ident_name(s);
		if (string_eq(name, tos3("FN"))) {
			return v__scanner__Scanner_new_token(s, v__token__Kind_string, s->fn_name);
		}
		if (string_eq(name, tos3("VEXE"))) {
			string vexe = v__pref__vexe_path();
			return v__scanner__Scanner_new_token(s, v__token__Kind_string, v__scanner__cescaped_path(vexe));
		}
		if (string_eq(name, tos3("FILE"))) {
			return v__scanner__Scanner_new_token(s, v__token__Kind_string, v__scanner__cescaped_path(os__real_path(s->file_path)));
		}
		if (string_eq(name, tos3("LINE"))) {
			return v__scanner__Scanner_new_token(s, v__token__Kind_string, int_str((s->line_nr + 1)));
		}
		if (string_eq(name, tos3("COLUMN"))) {
			return v__scanner__Scanner_new_token(s, v__token__Kind_string, int_str((v__scanner__Scanner_current_column(s))));
		}
		if (string_eq(name, tos3("VHASH"))) {
			return v__scanner__Scanner_new_token(s, v__token__Kind_string, v__util__vhash());
		}
		if (!v__token__is_key(name)) {
			v__scanner__Scanner_error(s, tos3("@ must be used before keywords (e.g. `@type string`)"));
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_name, name);
	}
	else if (c == '.') {
		if (nextc == '.') {
			s->pos++;
			if (string_at(s->text, s->pos + 1) == '.') {
				s->pos++;
				return v__scanner__Scanner_new_token(s, v__token__Kind_ellipsis, tos3(""));
			}
			return v__scanner__Scanner_new_token(s, v__token__Kind_dotdot, tos3(""));
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_dot, tos3(""));
	}
	else if (c == '#') {
		int start = s->pos + 1;
		v__scanner__Scanner_ignore_line(s);
		if (nextc == '!') {
			s->line_comment = string_trim_space(string_substr(s->text, start + 1, s->pos));
			return v__scanner__Scanner_scan(s);
		}
		string hash = string_substr(s->text, start, s->pos);
		return v__scanner__Scanner_new_token(s, v__token__Kind_hash, string_trim_space(hash));
	}
	else if (c == '>') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_ge, tos3(""));
		} else if (nextc == '>') {
			if (s->pos + 2 < s->text.len && string_at(s->text, s->pos + 2) == '=') {
				s->pos += 2;
				return v__scanner__Scanner_new_token(s, v__token__Kind_right_shift_assign, tos3(""));
			}
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_right_shift, tos3(""));
		} else {
			return v__scanner__Scanner_new_token(s, v__token__Kind_gt, tos3(""));
		}
	}
	else if (c == 0xE2) {
		if (nextc == 0x89 && string_at(s->text, s->pos + 2) == 0xA0) {
			s->pos += 2;
			return v__scanner__Scanner_new_token(s, v__token__Kind_ne, tos3(""));
		} else if (nextc == 0x89 && string_at(s->text, s->pos + 2) == 0xBD) {
			s->pos += 2;
			return v__scanner__Scanner_new_token(s, v__token__Kind_le, tos3(""));
		} else if (nextc == 0xA9 && string_at(s->text, s->pos + 2) == 0xBE) {
			s->pos += 2;
			return v__scanner__Scanner_new_token(s, v__token__Kind_ge, tos3(""));
		}
	}
	else if (c == '<') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_le, tos3(""));
		} else if (nextc == '<') {
			if (s->pos + 2 < s->text.len && string_at(s->text, s->pos + 2) == '=') {
				s->pos += 2;
				return v__scanner__Scanner_new_token(s, v__token__Kind_left_shift_assign, tos3(""));
			}
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_left_shift, tos3(""));
		} else {
			return v__scanner__Scanner_new_token(s, v__token__Kind_lt, tos3(""));
		}
	}
	else if (c == '=') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_eq, tos3(""));
		} else if (nextc == '>') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_arrow, tos3(""));
		} else {
			return v__scanner__Scanner_new_token(s, v__token__Kind_assign, tos3(""));
		}
	}
	else if (c == ':') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_decl_assign, tos3(""));
		} else {
			return v__scanner__Scanner_new_token(s, v__token__Kind_colon, tos3(""));
		}
	}
	else if (c == ';') {
		return v__scanner__Scanner_new_token(s, v__token__Kind_semicolon, tos3(""));
	}
	else if (c == '!') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_ne, tos3(""));
		} else {
			return v__scanner__Scanner_new_token(s, v__token__Kind_not, tos3(""));
		}
	}
	else if (c == '~') {
		return v__scanner__Scanner_new_token(s, v__token__Kind_bit_not, tos3(""));
	}
	else if (c == '/') {
		if (nextc == '=') {
			s->pos++;
			return v__scanner__Scanner_new_token(s, v__token__Kind_div_assign, tos3(""));
		}
		if (nextc == '/') {
			int start = s->pos + 1;
			v__scanner__Scanner_ignore_line(s);
			s->line_comment = string_substr(s->text, start + 1, s->pos);
			string comment = string_trim_space(s->line_comment);
			if (s->comments_mode == v__scanner__CommentsMode_parse_comments) {
				bool is_separate_line_comment = true;
				for (int j = start - 2;
				j >= 0 && string_at(s->text, j) != '\n'; j--) {
					if (!((string_at(s->text, j) == '\t' || string_at(s->text, j) == ' '))) {
						is_separate_line_comment = false;
					}
				}
				if (is_separate_line_comment) {
					comment = string_add(tos3("|"), comment);
				}
				s->pos--;
				s->line_nr--;
				return v__scanner__Scanner_new_token(s, v__token__Kind_comment, comment);
			}
			return v__scanner__Scanner_scan(s);
		}
		if (nextc == '*') {
			int start = s->pos + 2;
			int nest_count = 1;
			while (nest_count > 0) {
				s->pos++;
				if (s->pos >= s->text.len) {
					s->line_nr--;
					v__scanner__Scanner_error(s, tos3("comment not terminated"));
				}
				if (string_at(s->text, s->pos) == '\n') {
					v__scanner__Scanner_inc_line_number(s);
					continue;
				}
				if (v__scanner__Scanner_expect(s, tos3("/*"), s->pos)) {
					nest_count++;
					continue;
				}
				if (v__scanner__Scanner_expect(s, tos3("*/"), s->pos)) {
					nest_count--;
				}
			}
			s->pos++;
			if (s->comments_mode == v__scanner__CommentsMode_parse_comments) {
				string comment = string_trim_space(string_substr(s->text, start, (s->pos - 1)));
				return v__scanner__Scanner_new_token(s, v__token__Kind_comment, comment);
			}
			return v__scanner__Scanner_scan(s);
		}
		return v__scanner__Scanner_new_token(s, v__token__Kind_div, tos3(""));
	}
	else {
	}
	;
	
#ifdef _WIN32
	// #if windows
		if (c == '\0') {
			return v__scanner__Scanner_end_of_file(s);
		}
	#endif
	v__scanner__Scanner_error(s, _STR("invalid character `%.*s`", byte_str(c).len, byte_str(c).str));
	return v__scanner__Scanner_end_of_file(s);
}

int v__scanner__Scanner_current_column(v__scanner__Scanner* s) { 
	return s->pos - s->last_nl_pos;
}

int v__scanner__Scanner_count_symbol_before(v__scanner__Scanner s, int p, byte sym) { 
	int count = 0;
	for (int i = p;
	i >= 0; i--) {
		if (string_at(s.text, i) != sym) {
			break;
		}
		count++;
	}
	return count;
}

string v__scanner__Scanner_ident_string(v__scanner__Scanner* s) { 
	byte q = string_at(s->text, s->pos);
	bool is_quote = q == _const_v__scanner__single_quote || q == _const_v__scanner__double_quote;
	bool is_raw = is_quote && string_at(s->text, s->pos - 1) == 'r';
	if (is_quote && !s->is_inside_string) {
		s->quote = q;
	}
	int start = s->pos;
	s->is_inside_string = false;
	byte slash = '\\';
	while (1) {
		s->pos++;
		if (s->pos >= s->text.len) {
			break;
		}
		byte c = string_at(s->text, s->pos);
		byte prevc = string_at(s->text, s->pos - 1);
		if (c == s->quote && (prevc != slash || (prevc == slash && string_at(s->text, s->pos - 2) == slash))) {
			break;
		}
		if (c == '\n') {
			v__scanner__Scanner_inc_line_number(s);
		}
		if (c == '0' && s->pos > 2 && string_at(s->text, s->pos - 1) == slash) {
			if (s->pos < s->text.len - 1 && byte_is_digit(string_at(s->text, s->pos + 1))) {
			} else {
				v__scanner__Scanner_error(s, tos3("0 character in a string literal"));
			}
		}
		if (c == '0' && s->pos > 5 && v__scanner__Scanner_expect(s, tos3("\\x0"), s->pos - 3)) {
			v__scanner__Scanner_error(s, tos3("0 character in a string literal"));
		}
		if (c == '{' && prevc == '$' && !is_raw && !s->is_fmt && v__scanner__Scanner_count_symbol_before(/*rec*/*s, s->pos - 2, slash) % 2 == 0) {
			s->is_inside_string = true;
			s->pos -= 2;
			break;
		}
		if (v__scanner__is_name_char(c) && prevc == '$' && !s->is_fmt && !is_raw && v__scanner__Scanner_count_symbol_before(/*rec*/*s, s->pos - 2, slash) % 2 == 0) {
			s->is_inside_string = true;
			s->is_inter_start = true;
			s->pos -= 2;
			break;
		}
	}
	string lit = tos3("");
	if (string_at(s->text, start) == s->quote) {
		start++;
	}
	int end = s->pos;
	if (s->is_inside_string) {
		end++;
	}
	if (start > s->pos) {
	} else {
		lit = string_substr(s->text, start, end);
	}
	return lit;
}

string v__scanner__Scanner_ident_char(v__scanner__Scanner* s) { 
	int start = s->pos;
	byte slash = '\\';
	int len = 0;
	while (1) {
		s->pos++;
		if (s->pos >= s->text.len) {
			break;
		}
		if (string_at(s->text, s->pos) != slash) {
			len++;
		}
		bool double_slash = v__scanner__Scanner_expect(s, tos3("\\\\"), s->pos - 2);
		if (string_at(s->text, s->pos) == '`' && (string_at(s->text, s->pos - 1) != slash || double_slash)) {
			if (double_slash) {
				len++;
			}
			break;
		}
	}
	len--;
	string c = string_substr(s->text, start + 1, s->pos);
	if (len != 1) {
		ustring u = string_ustring(c);
		if (u.len != 1) {
			v__scanner__Scanner_error(s, string_add(tos3("invalid character literal (more than one character)\n"), tos3("use quotes for strings, backticks for characters")));
		}
	}
	if (string_eq(c, tos3("\\`"))) {
		return tos3("`");
	}
	return (string_eq(c, tos3("\'")) ? string_add(tos3("\\"), c) : c);
}

bool v__scanner__Scanner_expect(v__scanner__Scanner* s, string want, int start_pos) { 
	int end_pos = start_pos + want.len;
	if (start_pos < 0 || start_pos >= s->text.len) {
		return false;
	}
	if (end_pos < 0 || end_pos > s->text.len) {
		return false;
	}
	for (int tmp3 = start_pos; tmp3 < end_pos; tmp3++) { 
		int pos = tmp3;
		if (string_at(s->text, pos) != string_at(want, pos - start_pos)) {
			return false;
		}
	}
	return true;
}

void v__scanner__Scanner_debug_tokens(v__scanner__Scanner* s) { 
	s->pos = 0;
	s->is_started = false;
	s->is_debug = true;
	string fname = string_all_after(s->file_path, _const_os__path_separator);
	println(_STR("\n===DEBUG TOKENS %.*s===", fname.len, fname.str));
	while (1) {
		v__token__Token tok = v__scanner__Scanner_scan(s);
		v__token__Kind tok_kind = tok.kind;
		string lit = tok.lit;
		print(v__token__Kind_str(tok_kind));
		if (string_ne(lit, tos3(""))) {
			println(_STR(" `%.*s`", lit.len, lit.str));
		} else {
			println(tos3(""));
		}
		if (tok_kind == v__token__Kind_eof) {
			println(tos3("============ END OF DEBUG TOKENS =================="));
			break;
		}
	}
}

void v__scanner__Scanner_ignore_line(v__scanner__Scanner* s) { 
	v__scanner__Scanner_eat_to_end_of_line(s);
	v__scanner__Scanner_inc_line_number(s);
}

void v__scanner__Scanner_eat_to_end_of_line(v__scanner__Scanner* s) { 
	while (s->pos < s->text.len && string_at(s->text, s->pos) != '\n') {
		s->pos++;
	}
}

void v__scanner__Scanner_inc_line_number(v__scanner__Scanner* s) { 
	s->last_nl_pos = s->pos;
	s->line_nr++;
	_PUSH(&s->line_ends, (s->pos), tmp1, int);
	if (s->line_nr > s->nr_lines) {
		s->nr_lines = s->line_nr;
	}
}

string v__scanner__Scanner_line(v__scanner__Scanner s, int n) { 
	string res = tos3("");
	if (n >= 0 && n < s.line_ends.len) {
		int nline_start = (n == 0 ? 0 : (*(int*)array_get(s.line_ends, n - 1)));
		int nline_end = (*(int*)array_get(s.line_ends, n));
		if (nline_start <= nline_end) {
			res = string_substr(s.text, nline_start, nline_end);
		}
	}
	return string_trim_left(string_trim_right(res, tos3("\r\n")), tos3("\r\n"));
}

//[inline]
bool v__scanner__is_name_char(byte c) { 
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_';
}

//[inline]
bool v__scanner__is_nl(byte c) { 
	return c == '\r' || c == '\n';
}

bool v__scanner__contains_capital(string s) { 
	for (int tmp1 = 0; tmp1 < s.len; tmp1++) {
	byte c = s.str[tmp1];
		if (c >= 'A' && c <= 'Z') {
			return true;
		}
	}
	return false;
}

bool v__scanner__good_type_name(string s) { 
	if (s.len < 4) {
		return true;
	}
	for (int tmp2 = 2; tmp2 < s.len; tmp2++) { 
		int i = tmp2;
		if (byte_is_capital(string_at(s, i)) && byte_is_capital(string_at(s, i - 1)) && byte_is_capital(string_at(s, i - 2))) {
			return false;
		}
	}
	return true;
}

void v__scanner__Scanner_error(v__scanner__Scanner* s, string msg) { 
	println(_STR("%d : %.*s", s->line_nr, msg.len, msg.str));
	v_exit(1);
}

void v__scanner__verror(string s) { 
	v__util__verror(tos3("scanner error"), s);
}

string v__scanner__cescaped_path(string s) { 
	return string_replace(s, tos3("\\"), tos3("\\\\"));
}

void v__depgraph__OrderedDepMap_set(v__depgraph__OrderedDepMap* o, string name, array_string deps) { 
	if (!(_IN_MAP(name, o->data))) {
		_PUSH(&o->keys, (name), tmp2, string);
	}
	map_set(&o->data, name, &(array_string[]) { deps });
}

void v__depgraph__OrderedDepMap_add(v__depgraph__OrderedDepMap* o, string name, array_string deps) { 
	array_string d = (*(array_string*)map_get3(o->data, name, &(array_string[]){ new_array(0, 1, sizeof(string)) }));
	// FOR IN
	for (int tmp1 = 0; tmp1 < deps.
	len; tmp1++) {	string dep = ((string*)deps.
	data)[tmp1];if (!(_IN(string, dep, d))) {
			_PUSH(&d, (dep), tmp3, string);
		}
	}
	v__depgraph__OrderedDepMap_set(o, name, d);
}

array_string v__depgraph__OrderedDepMap_get(v__depgraph__OrderedDepMap* o, string name) { 
	return (*(array_string*)map_get3(o->data, name, &(array_string[]){ new_array(0, 1, sizeof(string)) }));
}

void v__depgraph__OrderedDepMap_delete(v__depgraph__OrderedDepMap* o, string name) { 
	if (!(_IN_MAP(name, o->data))) {
		v_panic(_STR("delete: no such key: %.*s", name.len, name.str));
	}
	// FOR IN
	for (int i = 0; i < o->keys.
	len; i++) {	string _ = ((string*)o->keys.
	data)[i];if (string_eq((*(string*)array_get(o->keys, i)), name)) {
			array_delete(&o->keys, i);
			break;
		}
	}
	map_delete(&o->data, name);
}

void v__depgraph__OrderedDepMap_apply_diff(v__depgraph__OrderedDepMap* o, string name, array_string deps) { 
	array_string diff = new_array(0, 0, sizeof(string));
	// FOR IN
	for (int tmp1 = 0; tmp1 < (*(array_string*)map_get3(o->data, name, &(array_string[]){ new_array(0, 1, sizeof(string)) })).
	len; tmp1++) {	string dep = ((string*)(*(array_string*)map_get3(o->data, name, &(array_string[]){ new_array(0, 1, sizeof(string)) })).
	data)[tmp1];if (!(_IN(string, dep, deps))) {
			_PUSH(&diff, (dep), tmp3, string);
		}
	}
	v__depgraph__OrderedDepMap_set(o, name, diff);
}

int v__depgraph__OrderedDepMap_size(v__depgraph__OrderedDepMap* o) { 
	return o->data.size;
}

v__depgraph__DepGraph* v__depgraph__new_dep_graph() { 
	return (v__depgraph__DepGraph*)memdup(&(v__depgraph__DepGraph){	.acyclic = true,
		.nodes = new_array(0, 1, sizeof(v__depgraph__DepGraphNode)),
	}, sizeof(v__depgraph__DepGraph));
}

void v__depgraph__DepGraph_add(v__depgraph__DepGraph* graph, string mod, array_string deps) { 
	_PUSH(&graph->nodes, ((v__depgraph__DepGraphNode){
		.name = mod,
		.deps = array_clone(&deps),
	}), tmp1, v__depgraph__DepGraphNode);
}

v__depgraph__DepGraph* v__depgraph__DepGraph_resolve(v__depgraph__DepGraph* graph) { 
	v__depgraph__OrderedDepMap node_names = (v__depgraph__OrderedDepMap){
		.keys = new_array(0, 1, sizeof(string)),
		.data = new_map(1, sizeof(array_string)),
	};
	// FOR IN
	for (int tmp1 = 0; tmp1 < graph->nodes.
	len; tmp1++) {	v__depgraph__DepGraphNode node = ((v__depgraph__DepGraphNode*)graph->nodes.
	data)[tmp1];v__depgraph__OrderedDepMap_add(&node_names, node.name, node.deps);
	}
	v__depgraph__OrderedDepMap node_deps = node_names;
	v__depgraph__DepGraph* resolved = v__depgraph__new_dep_graph();
	while (v__depgraph__OrderedDepMap_size(&node_deps) != 0) {
		array_string ready_set = new_array(0, 0, sizeof(string));
		// FOR IN
		for (int tmp2 = 0; tmp2 < node_deps.keys.
		len; tmp2++) {	string name = ((string*)node_deps.keys.
		data)[tmp2];array_string deps = (*(array_string*)map_get3(node_deps.data, name, &(array_string[]){ new_array(0, 1, sizeof(string)) }));
			if (deps.len == 0) {
				_PUSH(&ready_set, (name), tmp4, string);
			}
		}
		if (ready_set.len == 0) {
			v__depgraph__DepGraph* g = v__depgraph__new_dep_graph();
			g->acyclic = false;
			// FOR IN
			for (int tmp6 = 0; tmp6 < node_deps.keys.
			len; tmp6++) {	string name = ((string*)node_deps.keys.
			data)[tmp6];v__depgraph__DepGraph_add(g, name, (*(array_string*)map_get3(node_names.data, name, &(array_string[]){ new_array(0, 1, sizeof(string)) })));
			}
			return g;
		}
		// FOR IN
		for (int tmp7 = 0; tmp7 < ready_set.
		len; tmp7++) {	string name = ((string*)ready_set.
		data)[tmp7];v__depgraph__OrderedDepMap_delete(&node_deps, name);
			v__depgraph__DepGraph_add(resolved, name, (*(array_string*)map_get3(node_names.data, name, &(array_string[]){ new_array(0, 1, sizeof(string)) })));
		}
		// FOR IN
		for (int tmp8 = 0; tmp8 < node_deps.keys.
		len; tmp8++) {	string name = ((string*)node_deps.keys.
		data)[tmp8];v__depgraph__OrderedDepMap_apply_diff(&node_deps, name, ready_set);
		}
	}
	return resolved;
}

v__depgraph__DepGraphNode v__depgraph__DepGraph_last_node(v__depgraph__DepGraph* graph) { 
	return (*(v__depgraph__DepGraphNode*)array_get(graph->nodes, graph->nodes.len - 1));
}

string v__depgraph__DepGraph_display(v__depgraph__DepGraph* graph) { 
	string out = tos3("\n");
	// FOR IN
	for (int tmp1 = 0; tmp1 < graph->nodes.
	len; tmp1++) {	v__depgraph__DepGraphNode node = ((v__depgraph__DepGraphNode*)graph->nodes.
	data)[tmp1];// FOR IN
		for (int tmp2 = 0; tmp2 < node.deps.
		len; tmp2++) {	string dep = ((string*)node.deps.
		data)[tmp2];out = string_add(out, _STR(" * %.*s -> %.*s\n", node.name.len, node.name.str, dep.len, dep.str));
		}
	}
	return out;
}

string v__depgraph__DepGraph_display_cycles(v__depgraph__DepGraph* graph) { 
	map_string_v__depgraph__DepGraphNode node_names = new_map(1, sizeof(v__depgraph__DepGraphNode));
	// FOR IN
	for (int tmp1 = 0; tmp1 < graph->nodes.
	len; tmp1++) {	v__depgraph__DepGraphNode node = ((v__depgraph__DepGraphNode*)graph->nodes.
	data)[tmp1];map_set(&node_names, node.name, &(v__depgraph__DepGraphNode[]) { node });
	}
	string out = tos3("\n");
	// FOR IN
	for (int tmp2 = 0; tmp2 < graph->nodes.
	len; tmp2++) {	v__depgraph__DepGraphNode node = ((v__depgraph__DepGraphNode*)graph->nodes.
	data)[tmp2];// FOR IN
		for (int tmp3 = 0; tmp3 < node.deps.
		len; tmp3++) {	string dep = ((string*)node.deps.
		data)[tmp3];if (!(_IN_MAP(dep, node_names))) {
				continue;
			}
			v__depgraph__DepGraphNode dn = (*(v__depgraph__DepGraphNode*)map_get3(node_names, dep, &(v__depgraph__DepGraphNode[]){ {0} }));
			if (_IN(string, node.name, dn.deps)) {
				out = string_add(out, _STR(" * %.*s -> %.*s\n", node.name.len, node.name.str, dep.len, dep.str));
			}
		}
	}
	return out;
}

void _vinit() {
	builtin_init();
	vinit_string_literals();
	_const_init_capicity = 1 << _const_init_log_capicity;
	_const_max_load_factor = 0.8;
	_const_init_cap = _const_init_capicity - 2;
	_const_hash_mask = ((u32)(0x00FFFFFF));
	_const_probe_inc = ((u32)(0x01000000));
	_const_mid_index = _const_degree - 1;
	_const_max_size = 2 * _const_degree - 1;
	_const_children_bytes = sizeof(voidptr) * (_const_max_size + 1);
	_const_list_of_flags_that_allow_duplicates = new_array_from_c_array(5, 5, sizeof(string), (string[5]){	
tos3("cc"), tos3("d"), tos3("define"), tos3("cf"), tos3("cflags"), 
});
	_const_list_of_flags_with_param = new_array_from_c_array(14, 14, sizeof(string), (string[14]){	
tos3("o"), tos3("output"), tos3("d"), tos3("define"), tos3("b"), tos3("backend"), tos3("cc"), tos3("os"), tos3("target-os"), tos3("arch"), tos3("csource"), tos3("cf"), tos3("cflags"), tos3("path"), 
});
	_const_simple_cmd = new_array_from_c_array(13, 13, sizeof(string), (string[13]){	
tos3("fmt"), tos3("up"), tos3("self"), tos3("test"), tos3("test-fmt"), tos3("test-compiler"), tos3("test-fixed"), tos3("bin2v"), tos3("repl"), tos3("build-tools"), tos3("build-examples"), tos3("build-vbinaries"), tos3("setup-freetype"), 
});
	_const_strconv__ftoa__ten_pow_table_32 = new_array_from_c_array(12, 12, sizeof(u32), (u32[12]){	
((u32)(1)), ((u32)(10)), ((u32)(100)), ((u32)(1000)), ((u32)(10000)), ((u32)(100000)), ((u32)(1000000)), ((u32)(10000000)), ((u32)(100000000)), ((u32)(1000000000)), ((u32)(10000000000)), ((u32)(100000000000)), 
});
	_const_strconv__ftoa__mantbits32 = ((u32)(23));
	_const_strconv__ftoa__expbits32 = ((u32)(8));
	_const_strconv__ftoa__bias32 = ((u32)(127));
	_const_strconv__ftoa__ten_pow_table_64 = new_array_from_c_array(20, 20, sizeof(u64), (u64[20]){	
((u64)(1)), ((u64)(10)), ((u64)(100)), ((u64)(1000)), ((u64)(10000)), ((u64)(100000)), ((u64)(1000000)), ((u64)(10000000)), ((u64)(100000000)), ((u64)(1000000000)), ((u64)(10000000000)), ((u64)(100000000000)), ((u64)(1000000000000)), ((u64)(10000000000000)), ((u64)(100000000000000)), ((u64)(1000000000000000)), ((u64)(10000000000000000)), ((u64)(100000000000000000)), ((u64)(1000000000000000000)), ((u64)(10000000000000000000)), 
});
	_const_strconv__ftoa__mantbits64 = ((u32)(52));
	_const_strconv__ftoa__expbits64 = ((u32)(11));
	_const_strconv__ftoa__bias64 = ((u32)(1023));
	_const_strconv__ftoa__powers_of_10 = new_array_from_c_array(18, 18, sizeof(u64), (u64[18]){	
((u64)(1e0)), ((u64)(1e1)), ((u64)(1e2)), ((u64)(1e3)), ((u64)(1e4)), ((u64)(1e5)), ((u64)(1e6)), ((u64)(1e7)), ((u64)(1e8)), ((u64)(1e9)), ((u64)(1e10)), ((u64)(1e11)), ((u64)(1e12)), ((u64)(1e13)), ((u64)(1e14)), ((u64)(1e15)), ((u64)(1e16)), ((u64)(1e17)), 
});
	_const_strconv__ftoa__pow5_split_32 = new_array_from_c_array(47, 47, sizeof(u64), (u64[47]){	
((u64)(1152921504606846976)), ((u64)(1441151880758558720)), ((u64)(1801439850948198400)), ((u64)(2251799813685248000)), ((u64)(1407374883553280000)), ((u64)(1759218604441600000)), ((u64)(2199023255552000000)), ((u64)(1374389534720000000)), ((u64)(1717986918400000000)), ((u64)(2147483648000000000)), ((u64)(1342177280000000000)), ((u64)(1677721600000000000)), ((u64)(2097152000000000000)), ((u64)(1310720000000000000)), ((u64)(1638400000000000000)), ((u64)(2048000000000000000)), ((u64)(1280000000000000000)), ((u64)(1600000000000000000)), ((u64)(2000000000000000000)), ((u64)(1250000000000000000)), ((u64)(1562500000000000000)), ((u64)(1953125000000000000)), ((u64)(1220703125000000000)), ((u64)(1525878906250000000)), ((u64)(1907348632812500000)), ((u64)(1192092895507812500)), ((u64)(1490116119384765625)), ((u64)(1862645149230957031)), ((u64)(1164153218269348144)), ((u64)(1455191522836685180)), ((u64)(1818989403545856475)), ((u64)(2273736754432320594)), ((u64)(1421085471520200371)), ((u64)(1776356839400250464)), ((u64)(2220446049250313080)), ((u64)(1387778780781445675)), ((u64)(1734723475976807094)), ((u64)(2168404344971008868)), ((u64)(1355252715606880542)), ((u64)(1694065894508600678)), ((u64)(2117582368135750847)), ((u64)(1323488980084844279)), ((u64)(1654361225106055349)), ((u64)(2067951531382569187)), ((u64)(1292469707114105741)), ((u64)(1615587133892632177)), ((u64)(2019483917365790221)), 
});
	_const_strconv__ftoa__pow5_inv_split_32 = new_array_from_c_array(31, 31, sizeof(u64), (u64[31]){	
((u64)(576460752303423489)), ((u64)(461168601842738791)), ((u64)(368934881474191033)), ((u64)(295147905179352826)), ((u64)(472236648286964522)), ((u64)(377789318629571618)), ((u64)(302231454903657294)), ((u64)(483570327845851670)), ((u64)(386856262276681336)), ((u64)(309485009821345069)), ((u64)(495176015714152110)), ((u64)(396140812571321688)), ((u64)(316912650057057351)), ((u64)(507060240091291761)), ((u64)(405648192073033409)), ((u64)(324518553658426727)), ((u64)(519229685853482763)), ((u64)(415383748682786211)), ((u64)(332306998946228969)), ((u64)(531691198313966350)), ((u64)(425352958651173080)), ((u64)(340282366920938464)), ((u64)(544451787073501542)), ((u64)(435561429658801234)), ((u64)(348449143727040987)), ((u64)(557518629963265579)), ((u64)(446014903970612463)), ((u64)(356811923176489971)), ((u64)(570899077082383953)), ((u64)(456719261665907162)), ((u64)(365375409332725730)), 
});
	_const_strconv__ftoa__pow5_split_64 = new_array_from_c_array(326, 326, sizeof(strconv__ftoa__Uint128), (strconv__ftoa__Uint128[326]){	
(strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x0100000000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x0140000000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x0190000000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01f4000000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x0138800000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x0186a00000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01e8480000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01312d0000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x017d784000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01dcd65000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x012a05f200000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x0174876e80000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01d1a94a20000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x012309ce54000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x016bcc41e9000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01c6bf5263400000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x011c37937e080000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x016345785d8a0000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01bc16d674ec8000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01158e460913d000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x015af1d78b58c400)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01b1ae4d6e2ef500)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x010f0cf064dd5920)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x0152d02c7e14af68)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000000)),
	.hi = ((u64)(0x01a784379d99db42)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4000000000000000)),
	.hi = ((u64)(0x0108b2a2c2802909)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9000000000000000)),
	.hi = ((u64)(0x014adf4b7320334b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7400000000000000)),
	.hi = ((u64)(0x019d971e4fe8401e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0880000000000000)),
	.hi = ((u64)(0x01027e72f1f12813)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcaa0000000000000)),
	.hi = ((u64)(0x01431e0fae6d7217)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbd48000000000000)),
	.hi = ((u64)(0x0193e5939a08ce9d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2c9a000000000000)),
	.hi = ((u64)(0x01f8def8808b0245)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3be0400000000000)),
	.hi = ((u64)(0x013b8b5b5056e16b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0ad8500000000000)),
	.hi = ((u64)(0x018a6e32246c99c6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8d8e640000000000)),
	.hi = ((u64)(0x01ed09bead87c037)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb878fe8000000000)),
	.hi = ((u64)(0x013426172c74d822)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x66973e2000000000)),
	.hi = ((u64)(0x01812f9cf7920e2b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x403d0da800000000)),
	.hi = ((u64)(0x01e17b84357691b6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe826288900000000)),
	.hi = ((u64)(0x012ced32a16a1b11)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x622fb2ab40000000)),
	.hi = ((u64)(0x0178287f49c4a1d6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfabb9f5610000000)),
	.hi = ((u64)(0x01d6329f1c35ca4b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7cb54395ca000000)),
	.hi = ((u64)(0x0125dfa371a19e6f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5be2947b3c800000)),
	.hi = ((u64)(0x016f578c4e0a060b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x32db399a0ba00000)),
	.hi = ((u64)(0x01cb2d6f618c878e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdfc9040047440000)),
	.hi = ((u64)(0x011efc659cf7d4b8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x17bb450059150000)),
	.hi = ((u64)(0x0166bb7f0435c9e7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xddaa16406f5a4000)),
	.hi = ((u64)(0x01c06a5ec5433c60)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8a8a4de845986800)),
	.hi = ((u64)(0x0118427b3b4a05bc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xad2ce16256fe8200)),
	.hi = ((u64)(0x015e531a0a1c872b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x987819baecbe2280)),
	.hi = ((u64)(0x01b5e7e08ca3a8f6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1f4b1014d3f6d590)),
	.hi = ((u64)(0x0111b0ec57e6499a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa71dd41a08f48af4)),
	.hi = ((u64)(0x01561d276ddfdc00)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd0e549208b31adb1)),
	.hi = ((u64)(0x01aba4714957d300)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x828f4db456ff0c8e)),
	.hi = ((u64)(0x010b46c6cdd6e3e0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa33321216cbecfb2)),
	.hi = ((u64)(0x014e1878814c9cd8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcbffe969c7ee839e)),
	.hi = ((u64)(0x01a19e96a19fc40e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3f7ff1e21cf51243)),
	.hi = ((u64)(0x0105031e2503da89)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8f5fee5aa43256d4)),
	.hi = ((u64)(0x014643e5ae44d12b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7337e9f14d3eec89)),
	.hi = ((u64)(0x0197d4df19d60576)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1005e46da08ea7ab)),
	.hi = ((u64)(0x01fdca16e04b86d4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8a03aec4845928cb)),
	.hi = ((u64)(0x013e9e4e4c2f3444)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xac849a75a56f72fd)),
	.hi = ((u64)(0x018e45e1df3b0155)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x17a5c1130ecb4fbd)),
	.hi = ((u64)(0x01f1d75a5709c1ab)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xeec798abe93f11d6)),
	.hi = ((u64)(0x013726987666190a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaa797ed6e38ed64b)),
	.hi = ((u64)(0x0184f03e93ff9f4d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1517de8c9c728bde)),
	.hi = ((u64)(0x01e62c4e38ff8721)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xad2eeb17e1c7976b)),
	.hi = ((u64)(0x012fdbb0e39fb474)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd87aa5ddda397d46)),
	.hi = ((u64)(0x017bd29d1c87a191)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4e994f5550c7dc97)),
	.hi = ((u64)(0x01dac74463a989f6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf11fd195527ce9de)),
	.hi = ((u64)(0x0128bc8abe49f639)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6d67c5faa71c2456)),
	.hi = ((u64)(0x0172ebad6ddc73c8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x88c1b77950e32d6c)),
	.hi = ((u64)(0x01cfa698c95390ba)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x957912abd28dfc63)),
	.hi = ((u64)(0x0121c81f7dd43a74)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbad75756c7317b7c)),
	.hi = ((u64)(0x016a3a275d494911)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x298d2d2c78fdda5b)),
	.hi = ((u64)(0x01c4c8b1349b9b56)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd9f83c3bcb9ea879)),
	.hi = ((u64)(0x011afd6ec0e14115)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x50764b4abe865297)),
	.hi = ((u64)(0x0161bcca7119915b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2493de1d6e27e73d)),
	.hi = ((u64)(0x01ba2bfd0d5ff5b2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x56dc6ad264d8f086)),
	.hi = ((u64)(0x01145b7e285bf98f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2c938586fe0f2ca8)),
	.hi = ((u64)(0x0159725db272f7f3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf7b866e8bd92f7d2)),
	.hi = ((u64)(0x01afcef51f0fb5ef)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfad34051767bdae3)),
	.hi = ((u64)(0x010de1593369d1b5)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x79881065d41ad19c)),
	.hi = ((u64)(0x015159af80444623)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x57ea147f49218603)),
	.hi = ((u64)(0x01a5b01b605557ac)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb6f24ccf8db4f3c1)),
	.hi = ((u64)(0x01078e111c3556cb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa4aee003712230b2)),
	.hi = ((u64)(0x014971956342ac7e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4dda98044d6abcdf)),
	.hi = ((u64)(0x019bcdfabc13579e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf0a89f02b062b60b)),
	.hi = ((u64)(0x010160bcb58c16c2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xacd2c6c35c7b638e)),
	.hi = ((u64)(0x0141b8ebe2ef1c73)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x98077874339a3c71)),
	.hi = ((u64)(0x01922726dbaae390)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbe0956914080cb8e)),
	.hi = ((u64)(0x01f6b0f092959c74)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf6c5d61ac8507f38)),
	.hi = ((u64)(0x013a2e965b9d81c8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x34774ba17a649f07)),
	.hi = ((u64)(0x0188ba3bf284e23b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x01951e89d8fdc6c8)),
	.hi = ((u64)(0x01eae8caef261aca)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x40fd3316279e9c3d)),
	.hi = ((u64)(0x0132d17ed577d0be)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd13c7fdbb186434c)),
	.hi = ((u64)(0x017f85de8ad5c4ed)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x458b9fd29de7d420)),
	.hi = ((u64)(0x01df67562d8b3629)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcb7743e3a2b0e494)),
	.hi = ((u64)(0x012ba095dc7701d9)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3e5514dc8b5d1db9)),
	.hi = ((u64)(0x017688bb5394c250)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4dea5a13ae346527)),
	.hi = ((u64)(0x01d42aea2879f2e4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb0b2784c4ce0bf38)),
	.hi = ((u64)(0x01249ad2594c37ce)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5cdf165f6018ef06)),
	.hi = ((u64)(0x016dc186ef9f45c2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf416dbf7381f2ac8)),
	.hi = ((u64)(0x01c931e8ab871732)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd88e497a83137abd)),
	.hi = ((u64)(0x011dbf316b346e7f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xceb1dbd923d8596c)),
	.hi = ((u64)(0x01652efdc6018a1f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc25e52cf6cce6fc7)),
	.hi = ((u64)(0x01be7abd3781eca7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd97af3c1a40105dc)),
	.hi = ((u64)(0x01170cb642b133e8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0fd9b0b20d014754)),
	.hi = ((u64)(0x015ccfe3d35d80e3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd3d01cde90419929)),
	.hi = ((u64)(0x01b403dcc834e11b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6462120b1a28ffb9)),
	.hi = ((u64)(0x01108269fd210cb1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbd7a968de0b33fa8)),
	.hi = ((u64)(0x0154a3047c694fdd)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2cd93c3158e00f92)),
	.hi = ((u64)(0x01a9cbc59b83a3d5)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3c07c59ed78c09bb)),
	.hi = ((u64)(0x010a1f5b81324665)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8b09b7068d6f0c2a)),
	.hi = ((u64)(0x014ca732617ed7fe)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2dcc24c830cacf34)),
	.hi = ((u64)(0x019fd0fef9de8dfe)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdc9f96fd1e7ec180)),
	.hi = ((u64)(0x0103e29f5c2b18be)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x93c77cbc661e71e1)),
	.hi = ((u64)(0x0144db473335deee)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x38b95beb7fa60e59)),
	.hi = ((u64)(0x01961219000356aa)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc6e7b2e65f8f91ef)),
	.hi = ((u64)(0x01fb969f40042c54)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfc50cfcffbb9bb35)),
	.hi = ((u64)(0x013d3e2388029bb4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3b6503c3faa82a03)),
	.hi = ((u64)(0x018c8dac6a0342a2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xca3e44b4f9523484)),
	.hi = ((u64)(0x01efb1178484134a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbe66eaf11bd360d2)),
	.hi = ((u64)(0x0135ceaeb2d28c0e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6e00a5ad62c83907)),
	.hi = ((u64)(0x0183425a5f872f12)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0980cf18bb7a4749)),
	.hi = ((u64)(0x01e412f0f768fad7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x65f0816f752c6c8d)),
	.hi = ((u64)(0x012e8bd69aa19cc6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xff6ca1cb527787b1)),
	.hi = ((u64)(0x017a2ecc414a03f7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xff47ca3e2715699d)),
	.hi = ((u64)(0x01d8ba7f519c84f5)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbf8cde66d86d6202)),
	.hi = ((u64)(0x0127748f9301d319)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2f7016008e88ba83)),
	.hi = ((u64)(0x017151b377c247e0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3b4c1b80b22ae923)),
	.hi = ((u64)(0x01cda62055b2d9d8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x250f91306f5ad1b6)),
	.hi = ((u64)(0x012087d4358fc827)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xee53757c8b318623)),
	.hi = ((u64)(0x0168a9c942f3ba30)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x29e852dbadfde7ac)),
	.hi = ((u64)(0x01c2d43b93b0a8bd)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3a3133c94cbeb0cc)),
	.hi = ((u64)(0x0119c4a53c4e6976)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc8bd80bb9fee5cff)),
	.hi = ((u64)(0x016035ce8b6203d3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbaece0ea87e9f43e)),
	.hi = ((u64)(0x01b843422e3a84c8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x74d40c9294f238a7)),
	.hi = ((u64)(0x01132a095ce492fd)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd2090fb73a2ec6d1)),
	.hi = ((u64)(0x0157f48bb41db7bc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x068b53a508ba7885)),
	.hi = ((u64)(0x01adf1aea12525ac)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8417144725748b53)),
	.hi = ((u64)(0x010cb70d24b7378b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x651cd958eed1ae28)),
	.hi = ((u64)(0x014fe4d06de5056e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfe640faf2a8619b2)),
	.hi = ((u64)(0x01a3de04895e46c9)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3efe89cd7a93d00f)),
	.hi = ((u64)(0x01066ac2d5daec3e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcebe2c40d938c413)),
	.hi = ((u64)(0x014805738b51a74d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x426db7510f86f518)),
	.hi = ((u64)(0x019a06d06e261121)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc9849292a9b4592f)),
	.hi = ((u64)(0x0100444244d7cab4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfbe5b73754216f7a)),
	.hi = ((u64)(0x01405552d60dbd61)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7adf25052929cb59)),
	.hi = ((u64)(0x01906aa78b912cba)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1996ee4673743e2f)),
	.hi = ((u64)(0x01f485516e7577e9)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaffe54ec0828a6dd)),
	.hi = ((u64)(0x0138d352e5096af1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1bfdea270a32d095)),
	.hi = ((u64)(0x018708279e4bc5ae)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa2fd64b0ccbf84ba)),
	.hi = ((u64)(0x01e8ca3185deb719)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x05de5eee7ff7b2f4)),
	.hi = ((u64)(0x01317e5ef3ab3270)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0755f6aa1ff59fb1)),
	.hi = ((u64)(0x017dddf6b095ff0c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x092b7454a7f3079e)),
	.hi = ((u64)(0x01dd55745cbb7ecf)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x65bb28b4e8f7e4c3)),
	.hi = ((u64)(0x012a5568b9f52f41)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbf29f2e22335ddf3)),
	.hi = ((u64)(0x0174eac2e8727b11)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2ef46f9aac035570)),
	.hi = ((u64)(0x01d22573a28f19d6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdd58c5c0ab821566)),
	.hi = ((u64)(0x0123576845997025)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x54aef730d6629ac0)),
	.hi = ((u64)(0x016c2d4256ffcc2f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x29dab4fd0bfb4170)),
	.hi = ((u64)(0x01c73892ecbfbf3b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfa28b11e277d08e6)),
	.hi = ((u64)(0x011c835bd3f7d784)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x38b2dd65b15c4b1f)),
	.hi = ((u64)(0x0163a432c8f5cd66)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc6df94bf1db35de7)),
	.hi = ((u64)(0x01bc8d3f7b3340bf)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdc4bbcf772901ab0)),
	.hi = ((u64)(0x0115d847ad000877)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd35eac354f34215c)),
	.hi = ((u64)(0x015b4e5998400a95)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x48365742a30129b4)),
	.hi = ((u64)(0x01b221effe500d3b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0d21f689a5e0ba10)),
	.hi = ((u64)(0x010f5535fef20845)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x506a742c0f58e894)),
	.hi = ((u64)(0x01532a837eae8a56)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe4851137132f22b9)),
	.hi = ((u64)(0x01a7f5245e5a2ceb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6ed32ac26bfd75b4)),
	.hi = ((u64)(0x0108f936baf85c13)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4a87f57306fcd321)),
	.hi = ((u64)(0x014b378469b67318)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5d29f2cfc8bc07e9)),
	.hi = ((u64)(0x019e056584240fde)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfa3a37c1dd7584f1)),
	.hi = ((u64)(0x0102c35f729689ea)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb8c8c5b254d2e62e)),
	.hi = ((u64)(0x014374374f3c2c65)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x26faf71eea079fb9)),
	.hi = ((u64)(0x01945145230b377f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf0b9b4e6a48987a8)),
	.hi = ((u64)(0x01f965966bce055e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5674111026d5f4c9)),
	.hi = ((u64)(0x013bdf7e0360c35b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2c111554308b71fb)),
	.hi = ((u64)(0x018ad75d8438f432)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb7155aa93cae4e7a)),
	.hi = ((u64)(0x01ed8d34e547313e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x326d58a9c5ecf10c)),
	.hi = ((u64)(0x013478410f4c7ec7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xff08aed437682d4f)),
	.hi = ((u64)(0x01819651531f9e78)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3ecada89454238a3)),
	.hi = ((u64)(0x01e1fbe5a7e78617)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x873ec895cb496366)),
	.hi = ((u64)(0x012d3d6f88f0b3ce)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x290e7abb3e1bbc3f)),
	.hi = ((u64)(0x01788ccb6b2ce0c2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb352196a0da2ab4f)),
	.hi = ((u64)(0x01d6affe45f818f2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb0134fe24885ab11)),
	.hi = ((u64)(0x01262dfeebbb0f97)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9c1823dadaa715d6)),
	.hi = ((u64)(0x016fb97ea6a9d37d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x031e2cd19150db4b)),
	.hi = ((u64)(0x01cba7de5054485d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x21f2dc02fad2890f)),
	.hi = ((u64)(0x011f48eaf234ad3a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaa6f9303b9872b53)),
	.hi = ((u64)(0x01671b25aec1d888)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd50b77c4a7e8f628)),
	.hi = ((u64)(0x01c0e1ef1a724eaa)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc5272adae8f199d9)),
	.hi = ((u64)(0x01188d357087712a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7670f591a32e004f)),
	.hi = ((u64)(0x015eb082cca94d75)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd40d32f60bf98063)),
	.hi = ((u64)(0x01b65ca37fd3a0d2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc4883fd9c77bf03e)),
	.hi = ((u64)(0x0111f9e62fe44483)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb5aa4fd0395aec4d)),
	.hi = ((u64)(0x0156785fbbdd55a4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe314e3c447b1a760)),
	.hi = ((u64)(0x01ac1677aad4ab0d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaded0e5aaccf089c)),
	.hi = ((u64)(0x010b8e0acac4eae8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd96851f15802cac3)),
	.hi = ((u64)(0x014e718d7d7625a2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8fc2666dae037d74)),
	.hi = ((u64)(0x01a20df0dcd3af0b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x39d980048cc22e68)),
	.hi = ((u64)(0x010548b68a044d67)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x084fe005aff2ba03)),
	.hi = ((u64)(0x01469ae42c8560c1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4a63d8071bef6883)),
	.hi = ((u64)(0x0198419d37a6b8f1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9cfcce08e2eb42a4)),
	.hi = ((u64)(0x01fe52048590672d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x821e00c58dd309a7)),
	.hi = ((u64)(0x013ef342d37a407c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa2a580f6f147cc10)),
	.hi = ((u64)(0x018eb0138858d09b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8b4ee134ad99bf15)),
	.hi = ((u64)(0x01f25c186a6f04c2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x97114cc0ec80176d)),
	.hi = ((u64)(0x0137798f428562f9)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfcd59ff127a01d48)),
	.hi = ((u64)(0x018557f31326bbb7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfc0b07ed7188249a)),
	.hi = ((u64)(0x01e6adefd7f06aa5)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbd86e4f466f516e0)),
	.hi = ((u64)(0x01302cb5e6f642a7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xace89e3180b25c98)),
	.hi = ((u64)(0x017c37e360b3d351)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1822c5bde0def3be)),
	.hi = ((u64)(0x01db45dc38e0c826)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcf15bb96ac8b5857)),
	.hi = ((u64)(0x01290ba9a38c7d17)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc2db2a7c57ae2e6d)),
	.hi = ((u64)(0x01734e940c6f9c5d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3391f51b6d99ba08)),
	.hi = ((u64)(0x01d022390f8b8375)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x403b393124801445)),
	.hi = ((u64)(0x01221563a9b73229)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x904a077d6da01956)),
	.hi = ((u64)(0x016a9abc9424feb3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x745c895cc9081fac)),
	.hi = ((u64)(0x01c5416bb92e3e60)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x48b9d5d9fda513cb)),
	.hi = ((u64)(0x011b48e353bce6fc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5ae84b507d0e58be)),
	.hi = ((u64)(0x01621b1c28ac20bb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x31a25e249c51eeee)),
	.hi = ((u64)(0x01baa1e332d728ea)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5f057ad6e1b33554)),
	.hi = ((u64)(0x0114a52dffc67992)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf6c6d98c9a2002aa)),
	.hi = ((u64)(0x0159ce797fb817f6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb4788fefc0a80354)),
	.hi = ((u64)(0x01b04217dfa61df4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf0cb59f5d8690214)),
	.hi = ((u64)(0x010e294eebc7d2b8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2cfe30734e83429a)),
	.hi = ((u64)(0x0151b3a2a6b9c767)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf83dbc9022241340)),
	.hi = ((u64)(0x01a6208b50683940)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9b2695da15568c08)),
	.hi = ((u64)(0x0107d457124123c8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc1f03b509aac2f0a)),
	.hi = ((u64)(0x0149c96cd6d16cba)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x726c4a24c1573acd)),
	.hi = ((u64)(0x019c3bc80c85c7e9)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe783ae56f8d684c0)),
	.hi = ((u64)(0x0101a55d07d39cf1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x616499ecb70c25f0)),
	.hi = ((u64)(0x01420eb449c8842e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf9bdc067e4cf2f6c)),
	.hi = ((u64)(0x019292615c3aa539)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x782d3081de02fb47)),
	.hi = ((u64)(0x01f736f9b3494e88)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4b1c3e512ac1dd0c)),
	.hi = ((u64)(0x013a825c100dd115)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9de34de57572544f)),
	.hi = ((u64)(0x018922f31411455a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x455c215ed2cee963)),
	.hi = ((u64)(0x01eb6bafd91596b1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcb5994db43c151de)),
	.hi = ((u64)(0x0133234de7ad7e2e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7e2ffa1214b1a655)),
	.hi = ((u64)(0x017fec216198ddba)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1dbbf89699de0feb)),
	.hi = ((u64)(0x01dfe729b9ff1529)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb2957b5e202ac9f3)),
	.hi = ((u64)(0x012bf07a143f6d39)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1f3ada35a8357c6f)),
	.hi = ((u64)(0x0176ec98994f4888)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x270990c31242db8b)),
	.hi = ((u64)(0x01d4a7bebfa31aaa)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5865fa79eb69c937)),
	.hi = ((u64)(0x0124e8d737c5f0aa)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xee7f791866443b85)),
	.hi = ((u64)(0x016e230d05b76cd4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2a1f575e7fd54a66)),
	.hi = ((u64)(0x01c9abd04725480a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5a53969b0fe54e80)),
	.hi = ((u64)(0x011e0b622c774d06)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf0e87c41d3dea220)),
	.hi = ((u64)(0x01658e3ab7952047)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xed229b5248d64aa8)),
	.hi = ((u64)(0x01bef1c9657a6859)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3435a1136d85eea9)),
	.hi = ((u64)(0x0117571ddf6c8138)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4143095848e76a53)),
	.hi = ((u64)(0x015d2ce55747a186)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd193cbae5b2144e8)),
	.hi = ((u64)(0x01b4781ead1989e7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe2fc5f4cf8f4cb11)),
	.hi = ((u64)(0x0110cb132c2ff630)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1bbb77203731fdd5)),
	.hi = ((u64)(0x0154fdd7f73bf3bd)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x62aa54e844fe7d4a)),
	.hi = ((u64)(0x01aa3d4df50af0ac)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbdaa75112b1f0e4e)),
	.hi = ((u64)(0x010a6650b926d66b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xad15125575e6d1e2)),
	.hi = ((u64)(0x014cffe4e7708c06)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x585a56ead360865b)),
	.hi = ((u64)(0x01a03fde214caf08)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x37387652c41c53f8)),
	.hi = ((u64)(0x010427ead4cfed65)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x850693e7752368f7)),
	.hi = ((u64)(0x014531e58a03e8be)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x264838e1526c4334)),
	.hi = ((u64)(0x01967e5eec84e2ee)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xafda4719a7075402)),
	.hi = ((u64)(0x01fc1df6a7a61ba9)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0de86c7008649481)),
	.hi = ((u64)(0x013d92ba28c7d14a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9162878c0a7db9a1)),
	.hi = ((u64)(0x018cf768b2f9c59c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb5bb296f0d1d280a)),
	.hi = ((u64)(0x01f03542dfb83703)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5194f9e568323906)),
	.hi = ((u64)(0x01362149cbd32262)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe5fa385ec23ec747)),
	.hi = ((u64)(0x0183a99c3ec7eafa)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9f78c67672ce7919)),
	.hi = ((u64)(0x01e494034e79e5b9)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x03ab7c0a07c10bb0)),
	.hi = ((u64)(0x012edc82110c2f94)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x04965b0c89b14e9c)),
	.hi = ((u64)(0x017a93a2954f3b79)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x45bbf1cfac1da243)),
	.hi = ((u64)(0x01d9388b3aa30a57)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8b957721cb92856a)),
	.hi = ((u64)(0x0127c35704a5e676)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2e7ad4ea3e7726c4)),
	.hi = ((u64)(0x0171b42cc5cf6014)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3a198a24ce14f075)),
	.hi = ((u64)(0x01ce2137f7433819)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc44ff65700cd1649)),
	.hi = ((u64)(0x0120d4c2fa8a030f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb563f3ecc1005bdb)),
	.hi = ((u64)(0x016909f3b92c83d3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa2bcf0e7f14072d2)),
	.hi = ((u64)(0x01c34c70a777a4c8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x65b61690f6c847c3)),
	.hi = ((u64)(0x011a0fc668aac6fd)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbf239c35347a59b4)),
	.hi = ((u64)(0x016093b802d578bc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xeeec83428198f021)),
	.hi = ((u64)(0x01b8b8a6038ad6eb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7553d20990ff9615)),
	.hi = ((u64)(0x01137367c236c653)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x52a8c68bf53f7b9a)),
	.hi = ((u64)(0x01585041b2c477e8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6752f82ef28f5a81)),
	.hi = ((u64)(0x01ae64521f7595e2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8093db1d57999890)),
	.hi = ((u64)(0x010cfeb353a97dad)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe0b8d1e4ad7ffeb4)),
	.hi = ((u64)(0x01503e602893dd18)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x18e7065dd8dffe62)),
	.hi = ((u64)(0x01a44df832b8d45f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6f9063faa78bfefd)),
	.hi = ((u64)(0x0106b0bb1fb384bb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4b747cf9516efebc)),
	.hi = ((u64)(0x01485ce9e7a065ea)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xde519c37a5cabe6b)),
	.hi = ((u64)(0x019a742461887f64)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0af301a2c79eb703)),
	.hi = ((u64)(0x01008896bcf54f9f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcdafc20b798664c4)),
	.hi = ((u64)(0x0140aabc6c32a386)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x811bb28e57e7fdf5)),
	.hi = ((u64)(0x0190d56b873f4c68)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa1629f31ede1fd72)),
	.hi = ((u64)(0x01f50ac6690f1f82)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa4dda37f34ad3e67)),
	.hi = ((u64)(0x013926bc01a973b1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0e150c5f01d88e01)),
	.hi = ((u64)(0x0187706b0213d09e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x919a4f76c24eb181)),
	.hi = ((u64)(0x01e94c85c298c4c5)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7b0071aa39712ef1)),
	.hi = ((u64)(0x0131cfd3999f7afb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x59c08e14c7cd7aad)),
	.hi = ((u64)(0x017e43c8800759ba)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf030b199f9c0d958)),
	.hi = ((u64)(0x01ddd4baa0093028)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x961e6f003c1887d7)),
	.hi = ((u64)(0x012aa4f4a405be19)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfba60ac04b1ea9cd)),
	.hi = ((u64)(0x01754e31cd072d9f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfa8f8d705de65440)),
	.hi = ((u64)(0x01d2a1be4048f907)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfc99b8663aaff4a8)),
	.hi = ((u64)(0x0123a516e82d9ba4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3bc0267fc95bf1d2)),
	.hi = ((u64)(0x016c8e5ca239028e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcab0301fbbb2ee47)),
	.hi = ((u64)(0x01c7b1f3cac74331)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1eae1e13d54fd4ec)),
	.hi = ((u64)(0x011ccf385ebc89ff)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe659a598caa3ca27)),
	.hi = ((u64)(0x01640306766bac7e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9ff00efefd4cbcb1)),
	.hi = ((u64)(0x01bd03c81406979e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x23f6095f5e4ff5ef)),
	.hi = ((u64)(0x0116225d0c841ec3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xecf38bb735e3f36a)),
	.hi = ((u64)(0x015baaf44fa52673)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe8306ea5035cf045)),
	.hi = ((u64)(0x01b295b1638e7010)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x911e4527221a162b)),
	.hi = ((u64)(0x010f9d8ede39060a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3565d670eaa09bb6)),
	.hi = ((u64)(0x015384f295c7478d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x82bf4c0d2548c2a3)),
	.hi = ((u64)(0x01a8662f3b391970)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x51b78f88374d79a6)),
	.hi = ((u64)(0x01093fdd8503afe6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe625736a4520d810)),
	.hi = ((u64)(0x014b8fd4e6449bdf)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdfaed044d6690e14)),
	.hi = ((u64)(0x019e73ca1fd5c2d7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xebcd422b0601a8cc)),
	.hi = ((u64)(0x0103085e53e599c6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa6c092b5c78212ff)),
	.hi = ((u64)(0x0143ca75e8df0038)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd070b763396297bf)),
	.hi = ((u64)(0x0194bd136316c046)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x848ce53c07bb3daf)),
	.hi = ((u64)(0x01f9ec583bdc7058)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x52d80f4584d5068d)),
	.hi = ((u64)(0x013c33b72569c637)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x278e1316e60a4831)),
	.hi = ((u64)(0x018b40a4eec437c5)),
}, 
});
	_const_strconv__ftoa__pow5_inv_split_64 = new_array_from_c_array(292, 292, sizeof(strconv__ftoa__Uint128), (strconv__ftoa__Uint128[292]){	
(strconv__ftoa__Uint128){
	.lo = ((u64)(0x0000000000000001)),
	.hi = ((u64)(0x0400000000000000)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3333333333333334)),
	.hi = ((u64)(0x0333333333333333)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x28f5c28f5c28f5c3)),
	.hi = ((u64)(0x028f5c28f5c28f5c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xed916872b020c49c)),
	.hi = ((u64)(0x020c49ba5e353f7c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaf4f0d844d013a93)),
	.hi = ((u64)(0x0346dc5d63886594)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8c3f3e0370cdc876)),
	.hi = ((u64)(0x029f16b11c6d1e10)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd698fe69270b06c5)),
	.hi = ((u64)(0x0218def416bdb1a6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf0f4ca41d811a46e)),
	.hi = ((u64)(0x035afe535795e90a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf3f70834acdae9f1)),
	.hi = ((u64)(0x02af31dc4611873b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5cc5a02a23e254c1)),
	.hi = ((u64)(0x0225c17d04dad296)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfad5cd10396a2135)),
	.hi = ((u64)(0x036f9bfb3af7b756)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfbde3da69454e75e)),
	.hi = ((u64)(0x02bfaffc2f2c92ab)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2fe4fe1edd10b918)),
	.hi = ((u64)(0x0232f33025bd4223)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4ca19697c81ac1bf)),
	.hi = ((u64)(0x0384b84d092ed038)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3d4e1213067bce33)),
	.hi = ((u64)(0x02d09370d4257360)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x643e74dc052fd829)),
	.hi = ((u64)(0x024075f3dceac2b3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6d30baf9a1e626a7)),
	.hi = ((u64)(0x039a5652fb113785)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2426fbfae7eb5220)),
	.hi = ((u64)(0x02e1dea8c8da92d1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1cebfcc8b9890e80)),
	.hi = ((u64)(0x024e4bba3a487574)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x94acc7a78f41b0cc)),
	.hi = ((u64)(0x03b07929f6da5586)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaa23d2ec729af3d7)),
	.hi = ((u64)(0x02f394219248446b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbb4fdbf05baf2979)),
	.hi = ((u64)(0x025c768141d369ef)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc54c931a2c4b758d)),
	.hi = ((u64)(0x03c7240202ebdcb2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9dd6dc14f03c5e0b)),
	.hi = ((u64)(0x0305b66802564a28)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4b1249aa59c9e4d6)),
	.hi = ((u64)(0x026af8533511d4ed)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x44ea0f76f60fd489)),
	.hi = ((u64)(0x03de5a1ebb4fbb15)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6a54d92bf80caa07)),
	.hi = ((u64)(0x0318481895d96277)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x21dd7a89933d54d2)),
	.hi = ((u64)(0x0279d346de4781f9)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x362f2a75b8622150)),
	.hi = ((u64)(0x03f61ed7ca0c0328)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf825bb91604e810d)),
	.hi = ((u64)(0x032b4bdfd4d668ec)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc684960de6a5340b)),
	.hi = ((u64)(0x0289097fdd7853f0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd203ab3e521dc33c)),
	.hi = ((u64)(0x02073accb12d0ff3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe99f7863b696052c)),
	.hi = ((u64)(0x033ec47ab514e652)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x87b2c6b62bab3757)),
	.hi = ((u64)(0x02989d2ef743eb75)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd2f56bc4efbc2c45)),
	.hi = ((u64)(0x0213b0f25f69892a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1e55793b192d13a2)),
	.hi = ((u64)(0x0352b4b6ff0f41de)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4b77942f475742e8)),
	.hi = ((u64)(0x02a8909265a5ce4b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd5f9435905df68ba)),
	.hi = ((u64)(0x022073a8515171d5)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x565b9ef4d6324129)),
	.hi = ((u64)(0x03671f73b54f1c89)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdeafb25d78283421)),
	.hi = ((u64)(0x02b8e5f62aa5b06d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x188c8eb12cecf681)),
	.hi = ((u64)(0x022d84c4eeeaf38b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8dadb11b7b14bd9b)),
	.hi = ((u64)(0x037c07a17e44b8de)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7157c0e2c8dd647c)),
	.hi = ((u64)(0x02c99fb46503c718)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8ddfcd823a4ab6ca)),
	.hi = ((u64)(0x023ae629ea696c13)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1632e269f6ddf142)),
	.hi = ((u64)(0x0391704310a8acec)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x44f581ee5f17f435)),
	.hi = ((u64)(0x02dac035a6ed5723)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x372ace584c1329c4)),
	.hi = ((u64)(0x024899c4858aac1c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbeaae3c079b842d3)),
	.hi = ((u64)(0x03a75c6da27779c6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6555830061603576)),
	.hi = ((u64)(0x02ec49f14ec5fb05)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb7779c004de6912b)),
	.hi = ((u64)(0x0256a18dd89e626a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf258f99a163db512)),
	.hi = ((u64)(0x03bdcf495a9703dd)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5b7a614811caf741)),
	.hi = ((u64)(0x02fe3f6de212697e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaf951aa00e3bf901)),
	.hi = ((u64)(0x0264ff8b1b41edfe)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7f54f7667d2cc19b)),
	.hi = ((u64)(0x03d4cc11c5364997)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x32aa5f8530f09ae3)),
	.hi = ((u64)(0x0310a3416a91d479)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf55519375a5a1582)),
	.hi = ((u64)(0x0273b5cdeedb1060)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbbbb5b8bc3c3559d)),
	.hi = ((u64)(0x03ec56164af81a34)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2fc916096969114a)),
	.hi = ((u64)(0x03237811d593482a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x596dab3ababa743c)),
	.hi = ((u64)(0x0282c674aadc39bb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x478aef622efb9030)),
	.hi = ((u64)(0x0202385d557cfafc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd8de4bd04b2c19e6)),
	.hi = ((u64)(0x0336c0955594c4c6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xad7ea30d08f014b8)),
	.hi = ((u64)(0x029233aaaadd6a38)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x24654f3da0c01093)),
	.hi = ((u64)(0x020e8fbbbbe454fa)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3a3bb1fc346680eb)),
	.hi = ((u64)(0x034a7f92c63a2190)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x94fc8e635d1ecd89)),
	.hi = ((u64)(0x02a1ffa89e94e7a6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaa63a51c4a7f0ad4)),
	.hi = ((u64)(0x021b32ed4baa52eb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdd6c3b607731aaed)),
	.hi = ((u64)(0x035eb7e212aa1e45)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1789c919f8f488bd)),
	.hi = ((u64)(0x02b22cb4dbbb4b6b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xac6e3a7b2d906d64)),
	.hi = ((u64)(0x022823c3e2fc3c55)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x13e390c515b3e23a)),
	.hi = ((u64)(0x03736c6c9e606089)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdcb60d6a77c31b62)),
	.hi = ((u64)(0x02c2bd23b1e6b3a0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7d5e7121f968e2b5)),
	.hi = ((u64)(0x0235641c8e52294d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc8971b698f0e3787)),
	.hi = ((u64)(0x0388a02db0837548)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa078e2bad8d82c6c)),
	.hi = ((u64)(0x02d3b357c0692aa0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe6c71bc8ad79bd24)),
	.hi = ((u64)(0x0242f5dfcd20eee6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0ad82c7448c2c839)),
	.hi = ((u64)(0x039e5632e1ce4b0b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3be023903a356cfa)),
	.hi = ((u64)(0x02e511c24e3ea26f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2fe682d9c82abd95)),
	.hi = ((u64)(0x0250db01d8321b8c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4ca4048fa6aac8ee)),
	.hi = ((u64)(0x03b4919c8d1cf8e0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3d5003a61eef0725)),
	.hi = ((u64)(0x02f6dae3a4172d80)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9773361e7f259f51)),
	.hi = ((u64)(0x025f1582e9ac2466)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8beb89ca6508fee8)),
	.hi = ((u64)(0x03cb559e42ad070a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6fefa16eb73a6586)),
	.hi = ((u64)(0x0309114b688a6c08)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf3261abef8fb846b)),
	.hi = ((u64)(0x026da76f86d52339)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x51d691318e5f3a45)),
	.hi = ((u64)(0x03e2a57f3e21d1f6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0e4540f471e5c837)),
	.hi = ((u64)(0x031bb798fe8174c5)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd8376729f4b7d360)),
	.hi = ((u64)(0x027c92e0cb9ac3d0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf38bd84321261eff)),
	.hi = ((u64)(0x03fa849adf5e061a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x293cad0280eb4bff)),
	.hi = ((u64)(0x032ed07be5e4d1af)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xedca240200bc3ccc)),
	.hi = ((u64)(0x028bd9fcb7ea4158)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbe3b50019a3030a4)),
	.hi = ((u64)(0x02097b309321cde0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc9f88002904d1a9f)),
	.hi = ((u64)(0x03425eb41e9c7c9a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3b2d3335403daee6)),
	.hi = ((u64)(0x029b7ef67ee396e2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x95bdc291003158b8)),
	.hi = ((u64)(0x0215ff2b98b6124e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x892f9db4cd1bc126)),
	.hi = ((u64)(0x035665128df01d4a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x07594af70a7c9a85)),
	.hi = ((u64)(0x02ab840ed7f34aa2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6c476f2c0863aed1)),
	.hi = ((u64)(0x0222d00bdff5d54e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x13a57eacda3917b4)),
	.hi = ((u64)(0x036ae67966562217)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0fb7988a482dac90)),
	.hi = ((u64)(0x02bbeb9451de81ac)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd95fad3b6cf156da)),
	.hi = ((u64)(0x022fefa9db1867bc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf565e1f8ae4ef15c)),
	.hi = ((u64)(0x037fe5dc91c0a5fa)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x911e4e608b725ab0)),
	.hi = ((u64)(0x02ccb7e3a7cd5195)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xda7ea51a0928488d)),
	.hi = ((u64)(0x023d5fe9530aa7aa)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf7310829a8407415)),
	.hi = ((u64)(0x039566421e7772aa)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2c2739baed005cde)),
	.hi = ((u64)(0x02ddeb68185f8eef)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbcec2e2f24004a4b)),
	.hi = ((u64)(0x024b22b9ad193f25)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x94ad16b1d333aa11)),
	.hi = ((u64)(0x03ab6ac2ae8ecb6f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaa241227dc2954db)),
	.hi = ((u64)(0x02ef889bbed8a2bf)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x54e9a81fe35443e2)),
	.hi = ((u64)(0x02593a163246e899)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2175d9cc9eed396a)),
	.hi = ((u64)(0x03c1f689ea0b0dc2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe7917b0a18bdc788)),
	.hi = ((u64)(0x03019207ee6f3e34)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb9412f3b46fe393a)),
	.hi = ((u64)(0x0267a8065858fe90)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf535185ed7fd285c)),
	.hi = ((u64)(0x03d90cd6f3c1974d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc42a79e57997537d)),
	.hi = ((u64)(0x03140a458fce12a4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x03552e512e12a931)),
	.hi = ((u64)(0x02766e9e0ca4dbb7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9eeeb081e3510eb4)),
	.hi = ((u64)(0x03f0b0fce107c5f1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4bf226ce4f740bc3)),
	.hi = ((u64)(0x0326f3fd80d304c1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa3281f0b72c33c9c)),
	.hi = ((u64)(0x02858ffe00a8d09a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1c2018d5f568fd4a)),
	.hi = ((u64)(0x020473319a20a6e2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf9ccf48988a7fba9)),
	.hi = ((u64)(0x033a51e8f69aa49c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfb0a5d3ad3b99621)),
	.hi = ((u64)(0x02950e53f87bb6e3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2f3b7dc8a96144e7)),
	.hi = ((u64)(0x0210d8432d2fc583)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe52bfc7442353b0c)),
	.hi = ((u64)(0x034e26d1e1e608d1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb756639034f76270)),
	.hi = ((u64)(0x02a4ebdb1b1e6d74)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2c451c735d92b526)),
	.hi = ((u64)(0x021d897c15b1f12a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x13a1c71efc1deea3)),
	.hi = ((u64)(0x0362759355e981dd)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x761b05b2634b2550)),
	.hi = ((u64)(0x02b52adc44bace4a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x91af37c1e908eaa6)),
	.hi = ((u64)(0x022a88b036fbd83b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x82b1f2cfdb417770)),
	.hi = ((u64)(0x03774119f192f392)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcef4c23fe29ac5f3)),
	.hi = ((u64)(0x02c5cdae5adbf60e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3f2a34ffe87bd190)),
	.hi = ((u64)(0x0237d7beaf165e72)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x984387ffda5fb5b2)),
	.hi = ((u64)(0x038c8c644b56fd83)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe0360666484c915b)),
	.hi = ((u64)(0x02d6d6b6a2abfe02)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x802b3851d3707449)),
	.hi = ((u64)(0x024578921bbccb35)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x99dec082ebe72075)),
	.hi = ((u64)(0x03a25a835f947855)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xae4bcd358985b391)),
	.hi = ((u64)(0x02e8486919439377)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbea30a913ad15c74)),
	.hi = ((u64)(0x02536d20e102dc5f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfdd1aa81f7b560b9)),
	.hi = ((u64)(0x03b8ae9b019e2d65)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x97daeece5fc44d61)),
	.hi = ((u64)(0x02fa2548ce182451)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdfe258a51969d781)),
	.hi = ((u64)(0x0261b76d71ace9da)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x996a276e8f0fbf34)),
	.hi = ((u64)(0x03cf8be24f7b0fc4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe121b9253f3fcc2a)),
	.hi = ((u64)(0x030c6fe83f95a636)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb41afa8432997022)),
	.hi = ((u64)(0x02705986994484f8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xecf7f739ea8f19cf)),
	.hi = ((u64)(0x03e6f5a4286da18d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x23f99294bba5ae40)),
	.hi = ((u64)(0x031f2ae9b9f14e0b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4ffadbaa2fb7be99)),
	.hi = ((u64)(0x027f5587c7f43e6f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7ff7c5dd1925fdc2)),
	.hi = ((u64)(0x03feef3fa6539718)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xccc637e4141e649b)),
	.hi = ((u64)(0x033258ffb842df46)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd704f983434b83af)),
	.hi = ((u64)(0x028ead9960357f6b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x126a6135cf6f9c8c)),
	.hi = ((u64)(0x020bbe144cf79923)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x83dd685618b29414)),
	.hi = ((u64)(0x0345fced47f28e9e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9cb12044e08edcdd)),
	.hi = ((u64)(0x029e63f1065ba54b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x16f419d0b3a57d7d)),
	.hi = ((u64)(0x02184ff405161dd6)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8b20294dec3bfbfb)),
	.hi = ((u64)(0x035a19866e89c956)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3c19baa4bcfcc996)),
	.hi = ((u64)(0x02ae7ad1f207d445)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc9ae2eea30ca3adf)),
	.hi = ((u64)(0x02252f0e5b39769d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0f7d17dd1add2afd)),
	.hi = ((u64)(0x036eb1b091f58a96)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3f97464a7be42264)),
	.hi = ((u64)(0x02bef48d41913bab)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xcc790508631ce850)),
	.hi = ((u64)(0x02325d3dce0dc955)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe0c1a1a704fb0d4d)),
	.hi = ((u64)(0x0383c862e3494222)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4d67b4859d95a43e)),
	.hi = ((u64)(0x02cfd3824f6dce82)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x711fc39e17aae9cb)),
	.hi = ((u64)(0x023fdc683f8b0b9b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe832d2968c44a945)),
	.hi = ((u64)(0x039960a6cc11ac2b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xecf575453d03ba9e)),
	.hi = ((u64)(0x02e11a1f09a7bcef)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x572ac4376402fbb1)),
	.hi = ((u64)(0x024dae7f3aec9726)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x58446d256cd192b5)),
	.hi = ((u64)(0x03af7d985e47583d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x79d0575123dadbc4)),
	.hi = ((u64)(0x02f2cae04b6c4697)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x94a6ac40e97be303)),
	.hi = ((u64)(0x025bd5803c569edf)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8771139b0f2c9e6c)),
	.hi = ((u64)(0x03c62266c6f0fe32)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9f8da948d8f07ebd)),
	.hi = ((u64)(0x0304e85238c0cb5b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe60aedd3e0c06564)),
	.hi = ((u64)(0x026a5374fa33d5e2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa344afb9679a3bd2)),
	.hi = ((u64)(0x03dd5254c3862304)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe903bfc78614fca8)),
	.hi = ((u64)(0x031775109c6b4f36)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xba6966393810ca20)),
	.hi = ((u64)(0x02792a73b055d8f8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2a423d2859b4769a)),
	.hi = ((u64)(0x03f510b91a22f4c1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xee9b642047c39215)),
	.hi = ((u64)(0x032a73c7481bf700)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbee2b680396941aa)),
	.hi = ((u64)(0x02885c9f6ce32c00)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xff1bc53361210155)),
	.hi = ((u64)(0x0206b07f8a4f5666)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x31c6085235019bbb)),
	.hi = ((u64)(0x033de73276e5570b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x27d1a041c4014963)),
	.hi = ((u64)(0x0297ec285f1ddf3c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xeca7b367d0010782)),
	.hi = ((u64)(0x021323537f4b18fc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xadd91f0c8001a59d)),
	.hi = ((u64)(0x0351d21f3211c194)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf17a7f3d3334847e)),
	.hi = ((u64)(0x02a7db4c280e3476)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x279532975c2a0398)),
	.hi = ((u64)(0x021fe2a3533e905f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd8eeb75893766c26)),
	.hi = ((u64)(0x0366376bb8641a31)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7a5892ad42c52352)),
	.hi = ((u64)(0x02b82c562d1ce1c1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xfb7a0ef102374f75)),
	.hi = ((u64)(0x022cf044f0e3e7cd)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc59017e8038bb254)),
	.hi = ((u64)(0x037b1a07e7d30c7c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x37a67986693c8eaa)),
	.hi = ((u64)(0x02c8e19feca8d6ca)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf951fad1edca0bbb)),
	.hi = ((u64)(0x023a4e198a20abd4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x28832ae97c76792b)),
	.hi = ((u64)(0x03907cf5a9cddfbb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2068ef21305ec756)),
	.hi = ((u64)(0x02d9fd9154a4b2fc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x19ed8c1a8d189f78)),
	.hi = ((u64)(0x0247fe0ddd508f30)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5caf4690e1c0ff26)),
	.hi = ((u64)(0x03a66349621a7eb3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4a25d20d81673285)),
	.hi = ((u64)(0x02eb82a11b48655c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3b5174d79ab8f537)),
	.hi = ((u64)(0x0256021a7c39eab0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x921bee25c45b21f1)),
	.hi = ((u64)(0x03bcd02a605caab3)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdb498b5169e2818e)),
	.hi = ((u64)(0x02fd735519e3bbc2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x15d46f7454b53472)),
	.hi = ((u64)(0x02645c4414b62fcf)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xefba4bed545520b6)),
	.hi = ((u64)(0x03d3c6d35456b2e4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf2fb6ff110441a2b)),
	.hi = ((u64)(0x030fd242a9def583)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8f2f8cc0d9d014ef)),
	.hi = ((u64)(0x02730e9bbb18c469)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb1e5ae015c80217f)),
	.hi = ((u64)(0x03eb4a92c4f46d75)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc1848b344a001acc)),
	.hi = ((u64)(0x0322a20f03f6bdf7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xce03a2903b3348a3)),
	.hi = ((u64)(0x02821b3f365efe5f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd802e873628f6d4f)),
	.hi = ((u64)(0x0201af65c518cb7f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x599e40b89db2487f)),
	.hi = ((u64)(0x0335e56fa1c14599)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe14b66fa17c1d399)),
	.hi = ((u64)(0x029184594e3437ad)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x81091f2e7967dc7a)),
	.hi = ((u64)(0x020e037aa4f692f1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9b41cb7d8f0c93f6)),
	.hi = ((u64)(0x03499f2aa18a84b5)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xaf67d5fe0c0a0ff8)),
	.hi = ((u64)(0x02a14c221ad536f7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf2b977fe70080cc7)),
	.hi = ((u64)(0x021aa34e7bddc592)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1df58cca4cd9ae0b)),
	.hi = ((u64)(0x035dd2172c9608eb)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe4c470a1d7148b3c)),
	.hi = ((u64)(0x02b174df56de6d88)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x83d05a1b1276d5ca)),
	.hi = ((u64)(0x022790b2abe5246d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9fb3c35e83f1560f)),
	.hi = ((u64)(0x0372811ddfd50715)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb2f635e5365aab3f)),
	.hi = ((u64)(0x02c200e4b310d277)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf591c4b75eaeef66)),
	.hi = ((u64)(0x0234cd83c273db92)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xef4fa125644b18a3)),
	.hi = ((u64)(0x0387af39371fc5b7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8c3fb41de9d5ad4f)),
	.hi = ((u64)(0x02d2f2942c196af9)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3cffc34b2177bdd9)),
	.hi = ((u64)(0x02425ba9bce12261)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x94cc6bab68bf9628)),
	.hi = ((u64)(0x039d5f75fb01d09b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x10a38955ed6611b9)),
	.hi = ((u64)(0x02e44c5e6267da16)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xda1c6dde5784dafb)),
	.hi = ((u64)(0x02503d184eb97b44)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf693e2fd58d49191)),
	.hi = ((u64)(0x03b394f3b128c53a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc5431bfde0aa0e0e)),
	.hi = ((u64)(0x02f610c2f4209dc8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x6a9c1664b3bb3e72)),
	.hi = ((u64)(0x025e73cf29b3b16d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x10f9bd6dec5eca4f)),
	.hi = ((u64)(0x03ca52e50f85e8af)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xda616457f04bd50c)),
	.hi = ((u64)(0x03084250d937ed58)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe1e783798d09773d)),
	.hi = ((u64)(0x026d01da475ff113)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x030c058f480f252e)),
	.hi = ((u64)(0x03e19c9072331b53)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x68d66ad906728425)),
	.hi = ((u64)(0x031ae3a6c1c27c42)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8711ef14052869b7)),
	.hi = ((u64)(0x027be952349b969b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0b4fe4ecd50d75f2)),
	.hi = ((u64)(0x03f97550542c242c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa2a650bd773df7f5)),
	.hi = ((u64)(0x032df7737689b689)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb551da312c31932a)),
	.hi = ((u64)(0x028b2c5c5ed49207)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5ddb14f4235adc22)),
	.hi = ((u64)(0x0208f049e576db39)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2fc4ee536bc49369)),
	.hi = ((u64)(0x034180763bf15ec2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xbfd0bea92303a921)),
	.hi = ((u64)(0x029acd2b63277f01)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9973cbba8269541a)),
	.hi = ((u64)(0x021570ef8285ff34)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5bec792a6a42202a)),
	.hi = ((u64)(0x0355817f373ccb87)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe3239421ee9b4cef)),
	.hi = ((u64)(0x02aacdff5f63d605)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb5b6101b25490a59)),
	.hi = ((u64)(0x02223e65e5e97804)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x22bce691d541aa27)),
	.hi = ((u64)(0x0369fd6fd64259a1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb563eba7ddce21b9)),
	.hi = ((u64)(0x02bb31264501e14d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf78322ecb171b494)),
	.hi = ((u64)(0x022f5a850401810a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x259e9e47824f8753)),
	.hi = ((u64)(0x037ef73b399c01ab)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1e187e9f9b72d2a9)),
	.hi = ((u64)(0x02cbf8fc2e1667bc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4b46cbb2e2c24221)),
	.hi = ((u64)(0x023cc73024deb963)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x120adf849e039d01)),
	.hi = ((u64)(0x039471e6a1645bd2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdb3be603b19c7d9a)),
	.hi = ((u64)(0x02dd27ebb4504974)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x7c2feb3627b0647c)),
	.hi = ((u64)(0x024a865629d9d45d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2d197856a5e7072c)),
	.hi = ((u64)(0x03aa7089dc8fba2f)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8a7ac6abb7ec05bd)),
	.hi = ((u64)(0x02eec06e4a0c94f2)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd52f05562cbcd164)),
	.hi = ((u64)(0x025899f1d4d6dd8e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x21e4d556adfae8a0)),
	.hi = ((u64)(0x03c0f64fbaf1627e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe7ea444557fbed4d)),
	.hi = ((u64)(0x0300c50c958de864)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xecbb69d1132ff10a)),
	.hi = ((u64)(0x0267040a113e5383)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xadf8a94e851981aa)),
	.hi = ((u64)(0x03d8067681fd526c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8b2d543ed0e13488)),
	.hi = ((u64)(0x0313385ece6441f0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd5bddcff0d80f6d3)),
	.hi = ((u64)(0x0275c6b23eb69b26)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x892fc7fe7c018aeb)),
	.hi = ((u64)(0x03efa45064575ea4)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3a8c9ffec99ad589)),
	.hi = ((u64)(0x03261d0d1d12b21d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc8707fff07af113b)),
	.hi = ((u64)(0x0284e40a7da88e7d)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x39f39998d2f2742f)),
	.hi = ((u64)(0x0203e9a1fe2071fe)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x8fec28f484b7204b)),
	.hi = ((u64)(0x033975cffd00b663)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xd989ba5d36f8e6a2)),
	.hi = ((u64)(0x02945e3ffd9a2b82)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x47a161e42bfa521c)),
	.hi = ((u64)(0x02104b66647b5602)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0c35696d132a1cf9)),
	.hi = ((u64)(0x034d4570a0c5566a)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x09c454574288172d)),
	.hi = ((u64)(0x02a4378d4d6aab88)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xa169dd129ba0128b)),
	.hi = ((u64)(0x021cf93dd7888939)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x0242fb50f9001dab)),
	.hi = ((u64)(0x03618ec958da7529)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x9b68c90d940017bc)),
	.hi = ((u64)(0x02b4723aad7b90ed)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x4920a0d7a999ac96)),
	.hi = ((u64)(0x0229f4fbbdfc73f1)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x750101590f5c4757)),
	.hi = ((u64)(0x037654c5fcc71fe8)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2a6734473f7d05df)),
	.hi = ((u64)(0x02c5109e63d27fed)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xeeb8f69f65fd9e4c)),
	.hi = ((u64)(0x0237407eb641fff0)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe45b24323cc8fd46)),
	.hi = ((u64)(0x038b9a6456cfffe7)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xb6af502830a0ca9f)),
	.hi = ((u64)(0x02d6151d123fffec)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xf88c402026e7087f)),
	.hi = ((u64)(0x0244ddb0db666656)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x2746cd003e3e73fe)),
	.hi = ((u64)(0x03a162b4923d708b)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x1f6bd73364fec332)),
	.hi = ((u64)(0x02e7822a0e978d3c)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xe5efdf5c50cbcf5b)),
	.hi = ((u64)(0x0252ce880bac70fc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x3cb2fefa1adfb22b)),
	.hi = ((u64)(0x03b7b0d9ac471b2e)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x308f3261af195b56)),
	.hi = ((u64)(0x02f95a47bd05af58)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x5a0c284e25ade2ab)),
	.hi = ((u64)(0x0261150630d15913)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x29ad0d49d5e30445)),
	.hi = ((u64)(0x03ce8809e7b55b52)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x548a7107de4f369d)),
	.hi = ((u64)(0x030ba007ec9115db)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xdd3b8d9fe50c2bb1)),
	.hi = ((u64)(0x026fb3398a0dab15)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x952c15cca1ad12b5)),
	.hi = ((u64)(0x03e5eb8f434911bc)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0x775677d6e7bda891)),
	.hi = ((u64)(0x031e560c35d40e30)),
}, (strconv__ftoa__Uint128){
	.lo = ((u64)(0xc5dec645863153a7)),
	.hi = ((u64)(0x027eab3cf7dcd826)),
}, 
});
	_const_hash__wyhash__wyp0 = ((u64)(0xa0761d6478bd642f));
	_const_hash__wyhash__wyp1 = ((u64)(0xe7037ed1a0b428db));
	_const_hash__wyhash__wyp2 = ((u64)(0x8ebc6af09c88c6e3));
	_const_hash__wyhash__wyp3 = ((u64)(0x589965cc75374cc3));
	_const_hash__wyhash__wyp4 = ((u64)(0x1d8e4e27c47d124f));
	_const_strconv__DOUBLE_PLUS_ZERO = ((u64)(0x0000000000000000));
	_const_strconv__DOUBLE_MINUS_ZERO = ((u64)(0x8000000000000000));
	_const_strconv__DOUBLE_PLUS_INFINITY = ((u64)(0x7FF0000000000000));
	_const_strconv__DOUBLE_MINUS_INFINITY = ((u64)(0xFFF0000000000000));
	_const_strconv__TEN = ((u32)(10));
	_const_strconv__max_u64 = ((u64)(UINT64_MAX));
	_const_internal__flag__truthy = new_array_from_c_array(6, 6, sizeof(string), (string[6]){	
tos3("1"), tos3("t"), tos3("T"), tos3("true"), tos3("TRUE"), tos3("True"), 
});
	_const_internal__flag__falsey = new_array_from_c_array(6, 6, sizeof(string), (string[6]){	
tos3("0"), tos3("f"), tos3("F"), tos3("false"), tos3("FALSE"), tos3("False"), 
});
	_const_os__STD_INPUT_HANDLE = -10;
	_const_os__STD_OUTPUT_HANDLE = -11;
	_const_os__STD_ERROR_HANDLE = -12;
	_const_os__args = new_array(0, 0, sizeof(string));
	_const_os__wd_at_startup = os__getwd();
	_const_internal__compile__HKEY_LOCAL_MACHINE = ((internal__compile__RegKey)(0x80000002));
	_const_internal__compile__KEY_QUERY_VALUE = (0x0001);
	_const_internal__compile__KEY_WOW64_32KEY = (0x0200);
	_const_internal__compile__KEY_ENUMERATE_SUB_KEYS = (0x0008);
	_const_v__table__number_type_idxs = new_array_from_c_array(10, 10, sizeof(int), (int[10]){	
_const_v__table__i8_type_idx, _const_v__table__i16_type_idx, _const_v__table__int_type_idx, _const_v__table__i64_type_idx, _const_v__table__byte_type_idx, _const_v__table__u16_type_idx, _const_v__table__u32_type_idx, _const_v__table__u64_type_idx, _const_v__table__f32_type_idx, _const_v__table__f64_type_idx, 
});
	_const_v__table__pointer_type_idxs = new_array_from_c_array(3, 3, sizeof(int), (int[3]){	
_const_v__table__voidptr_type_idx, _const_v__table__byteptr_type_idx, _const_v__table__charptr_type_idx, 
});
	_const_v__table__void_type = v__table__new_type(_const_v__table__void_type_idx);
	_const_v__table__voidptr_type = v__table__new_type(_const_v__table__voidptr_type_idx);
	_const_v__table__byteptr_type = v__table__new_type(_const_v__table__byteptr_type_idx);
	_const_v__table__charptr_type = v__table__new_type(_const_v__table__charptr_type_idx);
	_const_v__table__i8_type = v__table__new_type(_const_v__table__i8_type_idx);
	_const_v__table__int_type = v__table__new_type(_const_v__table__int_type_idx);
	_const_v__table__i16_type = v__table__new_type(_const_v__table__i16_type_idx);
	_const_v__table__i64_type = v__table__new_type(_const_v__table__i64_type_idx);
	_const_v__table__byte_type = v__table__new_type(_const_v__table__byte_type_idx);
	_const_v__table__u16_type = v__table__new_type(_const_v__table__u16_type_idx);
	_const_v__table__u32_type = v__table__new_type(_const_v__table__u32_type_idx);
	_const_v__table__u64_type = v__table__new_type(_const_v__table__u64_type_idx);
	_const_v__table__f32_type = v__table__new_type(_const_v__table__f32_type_idx);
	_const_v__table__f64_type = v__table__new_type(_const_v__table__f64_type_idx);
	_const_v__table__char_type = v__table__new_type(_const_v__table__char_type_idx);
	_const_v__table__bool_type = v__table__new_type(_const_v__table__bool_type_idx);
	_const_v__table__none_type = v__table__new_type(_const_v__table__none_type_idx);
	_const_v__table__string_type = v__table__new_type(_const_v__table__string_type_idx);
	_const_v__table__array_type = v__table__new_type(_const_v__table__array_type_idx);
	_const_v__table__map_type = v__table__new_type(_const_v__table__map_type_idx);
	_const_v__table__builtin_type_names = new_array_from_c_array(25, 25, sizeof(string), (string[25]){	
tos3("void"), tos3("voidptr"), tos3("charptr"), tos3("byteptr"), tos3("i8"), tos3("i16"), tos3("int"), tos3("i64"), tos3("u16"), tos3("u32"), tos3("u64"), tos3("f32"), tos3("f64"), tos3("string"), tos3("char"), tos3("byte"), tos3("bool"), tos3("none"), tos3("array"), tos3("array_fixed"), tos3("map"), tos3("struct"), tos3("mapnode"), tos3("ustring"), tos3("size_t"), 
});
	_const_v__pref__default_module_path = v__pref__mpath();
	_const_v__util__emanager = v__util__new_error_manager();
	_const_math__bits__de_bruijn32 = ((u32)(0x077CB531));
	_const_math__bits__de_bruijn32tab = new_array_from_c_array(32, 32, sizeof(byte), (byte[32]){	
((byte)(0)), 1, 28, 2, 29, 14, 24, 3, 30, 22, 20, 15, 25, 17, 4, 8, 31, 27, 13, 23, 21, 19, 16, 7, 26, 12, 18, 6, 11, 5, 10, 9, 
});
	_const_math__bits__de_bruijn64 = ((u64)(0x03f79d71b4ca8b09));
	_const_math__bits__de_bruijn64tab = new_array_from_c_array(64, 64, sizeof(byte), (byte[64]){	
((byte)(0)), 1, 56, 2, 57, 49, 28, 3, 61, 58, 42, 50, 38, 29, 17, 4, 62, 47, 59, 36, 45, 43, 51, 22, 53, 39, 33, 30, 24, 18, 12, 5, 63, 55, 48, 27, 60, 41, 37, 16, 46, 35, 44, 21, 52, 32, 23, 11, 54, 26, 40, 15, 34, 20, 31, 10, 25, 14, 19, 9, 13, 8, 7, 6, 
});
	_const_math__bits__m0 = ((u64)(0x5555555555555555));
	_const_math__bits__m1 = ((u64)(0x3333333333333333));
	_const_math__bits__m2 = ((u64)(0x0f0f0f0f0f0f0f0f));
	_const_math__bits__m3 = ((u64)(0x00ff00ff00ff00ff));
	_const_math__bits__m4 = ((u64)(0x0000ffff0000ffff));
	_const_math__bits__max_u32 = ((u32)(4294967295));
	_const_math__bits__max_u64 = ((u64)(18446744073709551615));
	_const_math__bits__two32 = ((u64)(0x100000000));
	_const_math__bits__mask32 = _const_math__bits__two32 - 1;
	_const_math__bits__ntz_8_tab = new_array_from_c_array(256, 256, sizeof(byte), (byte[256]){	
((byte)(0x08)), 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x07, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x05, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 
});
	_const_math__bits__pop_8_tab = new_array_from_c_array(256, 256, sizeof(byte), (byte[256]){	
((byte)(0x00)), 0x01, 0x01, 0x02, 0x01, 0x02, 0x02, 0x03, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x01, 0x02, 0x02, 0x03, 0x02, 0x03, 0x03, 0x04, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x02, 0x03, 0x03, 0x04, 0x03, 0x04, 0x04, 0x05, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x05, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x07, 0x05, 0x06, 0x06, 0x07, 0x06, 0x07, 0x07, 0x08, 
});
	_const_math__bits__rev_8_tab = new_array_from_c_array(256, 256, sizeof(byte), (byte[256]){	
((byte)(0x00)), 0x80, 0x40, 0xc0, 0x20, 0xa0, 0x60, 0xe0, 0x10, 0x90, 0x50, 0xd0, 0x30, 0xb0, 0x70, 0xf0, 0x08, 0x88, 0x48, 0xc8, 0x28, 0xa8, 0x68, 0xe8, 0x18, 0x98, 0x58, 0xd8, 0x38, 0xb8, 0x78, 0xf8, 0x04, 0x84, 0x44, 0xc4, 0x24, 0xa4, 0x64, 0xe4, 0x14, 0x94, 0x54, 0xd4, 0x34, 0xb4, 0x74, 0xf4, 0x0c, 0x8c, 0x4c, 0xcc, 0x2c, 0xac, 0x6c, 0xec, 0x1c, 0x9c, 0x5c, 0xdc, 0x3c, 0xbc, 0x7c, 0xfc, 0x02, 0x82, 0x42, 0xc2, 0x22, 0xa2, 0x62, 0xe2, 0x12, 0x92, 0x52, 0xd2, 0x32, 0xb2, 0x72, 0xf2, 0x0a, 0x8a, 0x4a, 0xca, 0x2a, 0xaa, 0x6a, 0xea, 0x1a, 0x9a, 0x5a, 0xda, 0x3a, 0xba, 0x7a, 0xfa, 0x06, 0x86, 0x46, 0xc6, 0x26, 0xa6, 0x66, 0xe6, 0x16, 0x96, 0x56, 0xd6, 0x36, 0xb6, 0x76, 0xf6, 0x0e, 0x8e, 0x4e, 0xce, 0x2e, 0xae, 0x6e, 0xee, 0x1e, 0x9e, 0x5e, 0xde, 0x3e, 0xbe, 0x7e, 0xfe, 0x01, 0x81, 0x41, 0xc1, 0x21, 0xa1, 0x61, 0xe1, 0x11, 0x91, 0x51, 0xd1, 0x31, 0xb1, 0x71, 0xf1, 0x09, 0x89, 0x49, 0xc9, 0x29, 0xa9, 0x69, 0xe9, 0x19, 0x99, 0x59, 0xd9, 0x39, 0xb9, 0x79, 0xf9, 0x05, 0x85, 0x45, 0xc5, 0x25, 0xa5, 0x65, 0xe5, 0x15, 0x95, 0x55, 0xd5, 0x35, 0xb5, 0x75, 0xf5, 0x0d, 0x8d, 0x4d, 0xcd, 0x2d, 0xad, 0x6d, 0xed, 0x1d, 0x9d, 0x5d, 0xdd, 0x3d, 0xbd, 0x7d, 0xfd, 0x03, 0x83, 0x43, 0xc3, 0x23, 0xa3, 0x63, 0xe3, 0x13, 0x93, 0x53, 0xd3, 0x33, 0xb3, 0x73, 0xf3, 0x0b, 0x8b, 0x4b, 0xcb, 0x2b, 0xab, 0x6b, 0xeb, 0x1b, 0x9b, 0x5b, 0xdb, 0x3b, 0xbb, 0x7b, 0xfb, 0x07, 0x87, 0x47, 0xc7, 0x27, 0xa7, 0x67, 0xe7, 0x17, 0x97, 0x57, 0xd7, 0x37, 0xb7, 0x77, 0xf7, 0x0f, 0x8f, 0x4f, 0xcf, 0x2f, 0xaf, 0x6f, 0xef, 0x1f, 0x9f, 0x5f, 0xdf, 0x3f, 0xbf, 0x7f, 0xff, 
});
	_const_math__bits__len_8_tab = new_array_from_c_array(256, 256, sizeof(byte), (byte[256]){	
((byte)(0x00)), 0x01, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
});
	_const_time__month_days = new_array_from_c_array(12, 12, sizeof(int), (int[12]){	
31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 
});
	_const_time__absolute_zero_year = ((i64)(-292277022399));
	_const_time__seconds_per_hour = 60 * _const_time__seconds_per_minute;
	_const_time__seconds_per_day = 24 * _const_time__seconds_per_hour;
	_const_time__seconds_per_week = 7 * _const_time__seconds_per_day;
	_const_time__days_per_400_years = 365 * 400 + 97;
	_const_time__days_per_100_years = 365 * 100 + 24;
	_const_time__days_per_4_years = 365 * 4 + 1;
	_const_time__days_before = new_array_from_c_array(13, 13, sizeof(int), (int[13]){	
0, 31, 31 + 28, 31 + 28 + 31, 31 + 28 + 31 + 30, 31 + 28 + 31 + 30 + 31, 31 + 28 + 31 + 30 + 31 + 30, 31 + 28 + 31 + 30 + 31 + 30 + 31, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31, 
});
	_const_benchmark__BOK = term__ok_message(tos3("OK  "));
	_const_benchmark__BFAIL = term__fail_message(tos3("FAIL"));
	_const_benchmark__BSKIP = term__fail_message(tos3("SKIP"));
	_const_benchmark__BSPENT = term__ok_message(tos3("SPENT"));
	_const_v__builder__MOD_FILE_STOP_PATHS = new_array_from_c_array(4, 4, sizeof(string), (string[4]){	
tos3(".git"), tos3(".hg"), tos3(".svn"), tos3(".v.mod.stop"), 
});
	_const_v__parser__supported_platforms = new_array_from_c_array(13, 13, sizeof(string), (string[13]){	
tos3("windows"), tos3("mac"), tos3("macos"), tos3("linux"), tos3("freebsd"), tos3("openbsd"), tos3("netbsd"), tos3("dragonfly"), tos3("android"), tos3("js"), tos3("solaris"), tos3("haiku"), tos3("linux_or_macos"), 
});
	_const_v__parser__todo_delete_me = v__pref__OS_linux;
	_const_v__token__assign_tokens = new_array_from_c_array(11, 11, sizeof(v__token__Kind), (v__token__Kind[11]){	
v__token__Kind_assign, v__token__Kind_plus_assign, v__token__Kind_minus_assign, v__token__Kind_mult_assign, v__token__Kind_div_assign, v__token__Kind_xor_assign, v__token__Kind_mod_assign, v__token__Kind_or_assign, v__token__Kind_and_assign, v__token__Kind_right_shift_assign, v__token__Kind_left_shift_assign, 
});
	_const_v__token__nr_tokens = ((int)(v__token__Kind__end_));
	_const_v__token__token_str = v__token__build_token_str();
	_const_v__token__keywords = v__token__build_keys();
	_const_v__token__precedences = v__token__build_precedences();
	_const_v__gen__c_reserved = new_array_from_c_array(31, 31, sizeof(string), (string[31]){	
tos3("delete"), tos3("exit"), tos3("unix"), tos3("error"), tos3("calloc"), tos3("malloc"), tos3("free"), tos3("panic"), tos3("auto"), tos3("char"), tos3("default"), tos3("do"), tos3("double"), tos3("extern"), tos3("float"), tos3("inline"), tos3("int"), tos3("long"), tos3("register"), tos3("restrict"), tos3("short"), tos3("signed"), tos3("sizeof"), tos3("static"), tos3("switch"), tos3("typedef"), tos3("union"), tos3("unsigned"), tos3("void"), tos3("volatile"), tos3("while"), 
});
	_const_v__gen__tabs = new_array_from_c_array(9, 9, sizeof(string), (string[9]){	
tos3(""), tos3("\t"), tos3("\t\t"), tos3("\t\t\t"), tos3("\t\t\t\t"), tos3("\t\t\t\t\t"), tos3("\t\t\t\t\t\t"), tos3("\t\t\t\t\t\t\t"), tos3("\t\t\t\t\t\t\t\t"), 
});
	_const_v__gen__builtins = new_array_from_c_array(6, 6, sizeof(string), (string[6]){	
tos3("string"), tos3("array"), tos3("KeyValue"), tos3("DenseArray"), tos3("map"), tos3("Option"), 
});
	_const_v__gen__c_headers = _STR("\n\n// c_headers\n#include <stdio.h>  // TODO remove all these includes, define all function signatures and types manually\n#include <stdlib.h>\n#include <float.h>\n\n//#include \"fns.h\"\n#include <signal.h>\n#include <stdarg.h> // for va_list\n#include <string.h> // memcpy\n\n#if INTPTR_MAX == INT32_MAX\n    #define TARGET_IS_32BIT 1\n#elif INTPTR_MAX == INT64_MAX\n    #define TARGET_IS_64BIT 1\n#else\n    #error \"The environment is not 32 or 64-bit.\"\n#endif\n\n#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || defined(__BIG_ENDIAN__) || defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIBSEB) || defined(__MIBSEB) || defined(__MIBSEB__)\n    #define TARGET_ORDER_IS_BIG\n#elif defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __LITTLE_ENDIAN || defined(__LITTLE_ENDIAN__) || defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__) || defined(_M_AMD64) || defined(_M_X64) || defined(_M_IX86)\n    #define TARGET_ORDER_IS_LITTLE\n#else\n    #error \"Unknown architecture endianness\"\n#endif\n\n#ifndef _WIN32\n#include <ctype.h>\n#include <locale.h> // tolower\n#include <sys/time.h>\n#include <unistd.h> // sleep\nextern char **environ;\n#endif\n\n#if defined(__CYGWIN__) && !defined(_WIN32)\n#error Cygwin is not supported, please use MinGW or Visual Studio.\n#endif\n\n\n#ifdef __linux__\n#include <sys/types.h>\n#include <sys/wait.h> // os__wait uses wait on nix\n#endif\n\n#ifdef __FreeBSD__\n#include <sys/types.h>\n#include <sys/wait.h> // os__wait uses wait on nix\n#endif\n\n#ifdef __DragonFly__\n#include <sys/types.h>\n#include <sys/wait.h> // os__wait uses wait on nix\n#endif\n\n#ifdef __OpenBSD__\n#include <sys/types.h>\n#include <sys/resource.h>\n#include <sys/wait.h> // os__wait uses wait on nix\n#endif\n\n#ifdef __NetBSD__\n#include <sys/wait.h> // os__wait uses wait on nix\n#endif\n\n#ifdef __sun\n#include <sys/types.h>\n#include <sys/wait.h> // os__wait uses wait on nix\n#endif\n\n%.*s\n\n#ifdef _WIN32\n#define WINVER 0x0600\n#ifdef _WIN32_WINNT\n#undef _WIN32_WINNT\n#endif\n#define _WIN32_WINNT 0x0600\n#define WIN32_LEAN_AND_MEAN\n#define _UNICODE\n#define UNICODE\n#include <windows.h>\n\n#include <io.h> // _waccess\n#include <direct.h> // _wgetcwd\n//#include <WinSock2.h>\n#ifdef _MSC_VER\n\n// On MSVC these are the same (as long as /volatile:ms is passed)\n#define _Atomic volatile\n\n// MSVC cannot parse some things properly\n#undef EMPTY_STRUCT_DECLARATION\n#undef OPTION_CAST\n\n#define EMPTY_STRUCT_DECLARATION int ____dummy_variable\n#define OPTION_CAST(x)\n\n#include <dbghelp.h>\n#pragma comment(lib, \"Dbghelp.lib\")\n\nextern wchar_t **_wenviron;\n\n#endif\n\n#else\n#include <pthread.h>\n#endif\n\n\n//============================== HELPER C MACROS =============================*/\n#define _PUSH(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push(arr, &tmp);}\n#define _PUSH_MANY(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many(arr, tmp.data, tmp.len);}\n#define _IN(typ, val, arr) array_##typ##_contains(arr, val)\n#define _IN_MAP(val, m) map_exists(m, val)\n#define DEFAULT_EQUAL(a, b) (a == b)\n#define DEFAULT_NOT_EQUAL(a, b) (a != b)\n#define DEFAULT_LT(a, b) (a < b)\n#define DEFAULT_LE(a, b) (a <= b)\n#define DEFAULT_GT(a, b) (a > b)\n#define DEFAULT_GE(a, b) (a >= b)\n\n// NB: macro_fXX_eq and macro_fXX_ne are NOT used\n// in the generated C code. They are here just for\n// completeness/testing.\n\n#define macro_f64_eq(a, b) (a == b)\n#define macro_f64_ne(a, b) (a != b)\n#define macro_f64_lt(a, b) (a <  b)\n#define macro_f64_le(a, b) (a <= b)\n#define macro_f64_gt(a, b) (a >  b)\n#define macro_f64_ge(a, b) (a >= b)\n\n#define macro_f32_eq(a, b) (a == b)\n#define macro_f32_ne(a, b) (a != b)\n#define macro_f32_lt(a, b) (a <  b)\n#define macro_f32_le(a, b) (a <= b)\n#define macro_f32_gt(a, b) (a >  b)\n#define macro_f32_ge(a, b) (a >= b)\n\n//================================== GLOBALS =================================*/\nbyte g_str_buf[1024];\nint load_so(byteptr);\nvoid reload_so();\nvoid _vinit();\nvoid _vcleanup();\n#define sigaction_size sizeof(sigaction);\n#define _ARR_LEN(a) ( (sizeof(a)) / (sizeof(a[0])) )\n\n// ============== wyhash ==============\n//	Author: Wang Yi\n#ifndef wyhash_version_4\n#define wyhash_version_4\n#include	<stdint.h>\n#include	<string.h>\n#if defined(_MSC_VER) && defined(_M_X64)\n#include <intrin.h>\n#pragma	intrinsic(_umul128)\n#endif\nconst	uint64_t	_wyp0=0xa0761d6478bd642full,	_wyp1=0xe7037ed1a0b428dbull,	_wyp2=0x8ebc6af09c88c6e3ull,	_wyp3=0x589965cc75374cc3ull,	_wyp4=0x1d8e4e27c47d124full;\nstatic	inline	uint64_t	_wyrotr(uint64_t v, unsigned k) {	return	(v>>k)|(v<<(64-k));	}\nstatic	inline	uint64_t	_wymum(uint64_t	A,	uint64_t	B) {\n#ifdef	WYHASH32\n	uint64_t    hh=(A>>32)*(B>>32), hl=(A>>32)*(unsigned)B, lh=(unsigned)A*(B>>32), ll=(uint64_t)(unsigned)A*(unsigned)B;\n	return  _wyrotr(hl,32)^_wyrotr(lh,32)^hh^ll;\n#else\n	#ifdef __SIZEOF_INT128__\n		__uint128_t	r=A;	r*=B;	return	(r>>64)^r;\n	#elif	defined(_MSC_VER) && defined(_M_X64)\n		A=_umul128(A, B, &B);	return	A^B;\n	#else\n		uint64_t	ha=A>>32,	hb=B>>32,	la=(uint32_t)A,	lb=(uint32_t)B,	hi, lo;\n		uint64_t	rh=ha*hb,	rm0=ha*lb,	rm1=hb*la,	rl=la*lb,	t=rl+(rm0<<32),	c=t<rl;\n		lo=t+(rm1<<32);	c+=lo<t;hi=rh+(rm0>>32)+(rm1>>32)+c;	return hi^lo;\n	#endif\n#endif\n}\n#ifndef WYHASH_LITTLE_ENDIAN\n	#if	defined(_WIN32) || defined(__LITTLE_ENDIAN__) || (defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)\n		#define WYHASH_LITTLE_ENDIAN 1\n	#elif	defined(__BIG_ENDIAN__) || (defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)\n		#define WYHASH_LITTLE_ENDIAN 0\n	#endif\n#endif\n#if(WYHASH_LITTLE_ENDIAN) || defined(__TINYC__)\nstatic	inline	uint64_t	_wyr8(const	uint8_t	*p)	{	uint64_t	v;	memcpy(&v,  p,  8);	return  v;	}\nstatic	inline	uint64_t	_wyr4(const	uint8_t	*p)	{	unsigned	v;	memcpy(&v,  p,  4);	return  v;	}\n#else\n	#if defined(__GNUC__) || defined(__INTEL_COMPILER)\nstatic	inline	uint64_t	_wyr8(const	uint8_t	*p)	{	uint64_t	v;	memcpy(&v,  p,  8);	return   __builtin_bswap64(v);	}\nstatic	inline	uint64_t	_wyr4(const	uint8_t	*p)	{	unsigned	v;	memcpy(&v,  p,  4);	return   __builtin_bswap32(v);	}\n	#elif	defined(_MSC_VER)\nstatic	inline	uint64_t	_wyr8(const	uint8_t	*p)	{	uint64_t	v;	memcpy(&v,  p,  8);	return  _byteswap_uint64(v);}\nstatic	inline	uint64_t	_wyr4(const	uint8_t	*p)	{	unsigned	v;	memcpy(&v,  p,  4);	return  _byteswap_ulong(v);	}\n	#endif\n#endif\nstatic	inline	uint64_t	_wyr3(const	uint8_t	*p,	unsigned	k) {	return	(((uint64_t)p[0])<<16)|(((uint64_t)p[k>>1])<<8)|p[k-1];	}\nstatic	inline	uint64_t	wyhash(const void* key,	uint64_t	len,	uint64_t	seed) {\n	const	uint8_t	*p=(const	uint8_t*)key;	uint64_t	i=len&63;\n	#if defined(__GNUC__) || defined(__INTEL_COMPILER)\n		#define	_like_(x)	__builtin_expect(x,1)\n		#define	_unlike_(x)	__builtin_expect(x,0)\n	#else\n		#define _like_(x)  (x)\n		#define _unlike_(x)  (x)\n	#endif\n	if(_unlike_(!i)) {	}\n	else	if(_unlike_(i<4))	seed=_wymum(_wyr3(p,i)^seed^_wyp0,seed^_wyp1);\n	else	if(_like_(i<=8))	seed=_wymum(_wyr4(p)^seed^_wyp0,_wyr4(p+i-4)^seed^_wyp1);\n	else	if(_like_(i<=16))	seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+i-8)^seed^_wyp1);\n	else	if(_like_(i<=24))	seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+8)^seed^_wyp1)^_wymum(_wyr8(p+i-8)^seed^_wyp2,seed^_wyp3);\n	else	if(_like_(i<=32))	seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+8)^seed^_wyp1)^_wymum(_wyr8(p+16)^seed^_wyp2,_wyr8(p+i-8)^seed^_wyp3);\n	else{	seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+8)^seed^_wyp1)^_wymum(_wyr8(p+16)^seed^_wyp2,_wyr8(p+24)^seed^_wyp3)^_wymum(_wyr8(p+i-32)^seed^_wyp1,_wyr8(p+i-24)^seed^_wyp2)^_wymum(_wyr8(p+i-16)^seed^_wyp3,_wyr8(p+i-8)^seed^_wyp0);	}\n	if(_like_(i==len))	return	_wymum(seed,len^_wyp4);\n	uint64_t	see1=seed,	see2=seed,	see3=seed;\n	for(p+=i,i=len-i;	_like_(i>=64); i-=64,p+=64) {\n		seed=_wymum(_wyr8(p)^seed^_wyp0,_wyr8(p+8)^seed^_wyp1);		see1=_wymum(_wyr8(p+16)^see1^_wyp2,_wyr8(p+24)^see1^_wyp3);\n		see2=_wymum(_wyr8(p+32)^see2^_wyp1,_wyr8(p+40)^see2^_wyp2);	see3=_wymum(_wyr8(p+48)^see3^_wyp3,_wyr8(p+56)^see3^_wyp0);\n	}\n	return	_wymum(seed^see1^see2,see3^len^_wyp4);\n}\nstatic	inline	uint64_t	wyhash64(uint64_t	A, uint64_t	B) {	return	_wymum(_wymum(A^_wyp0,	B^_wyp1),	_wyp2);	}\nstatic	inline	uint64_t	wyrand(uint64_t	*seed) {	*seed+=_wyp0;	return	_wymum(*seed^_wyp1,*seed);	}\nstatic	inline	double	wy2u01(uint64_t	r) {	const	double	_wynorm=1.0/(1ull<<52);	return	(r>>11)*_wynorm;	}\nstatic	inline	double	wy2gau(uint64_t	r) {	const	double	_wynorm=1.0/(1ull<<20);	return	((r&0x1fffff)+((r>>21)&0x1fffff)+((r>>42)&0x1fffff))*_wynorm-3.0;	}\nstatic inline uint64_t fastest_hash(const void *key, size_t len, uint64_t seed) {\n  const uint8_t *p = (const uint8_t *)key;\n  return _like_(len >= 4) ? (_wyr4(p) + _wyr4(p + len - 4)) * (_wyr4(p + (len >> 1) - 2) ^ seed) : (_like_(len) ? _wyr3(p, len) * (_wyp0 ^ seed) : seed);\n}\n#endif\n\n", _const_v__gen__c_common_macros.len, _const_v__gen__c_common_macros.str);
	_const_v__gen__bare_c_headers = _STR("\n\n%.*s\n\n#ifndef exit\n#define exit(rc) sys_exit(rc)\nvoid sys_exit (int);\n#endif\n\n", _const_v__gen__c_common_macros.len, _const_v__gen__c_common_macros.str);
	_const_v__scanner__is_fmt = string_contains(os__executable(), tos3("vfmt"));

}

