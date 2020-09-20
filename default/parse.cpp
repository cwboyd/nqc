/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parse.y"

/*
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 * License for the specific language governing rights and limitations
 * under the License.
 *
 * The Initial Developer of this code is David Baum.
 * Portions created by David Baum are Copyright (C) 1998 David Baum.
 * All Rights Reserved.
 *
 * Portions created by John Hansen are Copyright (C) 2005 John Hansen.
 * All Rights Reserved.
 *
 */
#line 23 "parse.y"

// prevent redefinition of YYSTYPE in parser.h
#define __PARSE_TAB_H

// these classes must be defined prior to YYSTYPE
#include "Fragment.h"
#include "Resource.h"
#include "BlockStmt.h"
#include "Symbol.h"
#include "Expr.h"
#include "FunctionDef.h"
#include "CallStmt.h"
#include "AsmStmt.h"
#include "CaseStmt.h"
#include "DeclareStmt.h"
#include "Fragment.h"

#if __MWERKS__
#include <alloca.h>
#endif

class Clause;
class LocationNode;


#line 117 "parse.tab.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OR = 258,
    AND = 259,
    REL_EQ = 260,
    REL_NE = 261,
    REL_LE = 262,
    REL_GE = 263,
    LEFT = 264,
    RIGHT = 265,
    UMINUS = 266,
    INDIRECT = 267,
    INCDEC = 268,
    ABS = 269,
    SIGN = 270,
    TYPE = 271,
    EVENT_SRC = 272,
    LOWER_THAN_ELSE = 273,
    ELSE = 274,
    LOWER_THAN_EXPR_SHIFT = 275,
    ID = 276,
    NUMBER = 277,
    ASSIGN = 278,
    ASSIGN2 = 279,
    TASKOP = 280,
    JUMP = 281,
    TASK = 282,
    SUB = 283,
    STRING = 284,
    PP_DEFINE = 285,
    PP_INCLUDE = 286,
    NL = 287,
    WS = 288,
    PP_ARG = 289,
    PP_UNKNOWN = 290,
    PP_IFDEF = 291,
    PP_IF = 292,
    PP_ELSE = 293,
    PP_ELIF = 294,
    PP_ENDIF = 295,
    PP_UNDEF = 296,
    PP_PRAGMA = 297,
    PP_GLOM = 298,
    PP_ERROR = 299,
    PP_WARNING = 300,
    IF = 301,
    WHILE = 302,
    DO = 303,
    FOR = 304,
    REPEAT = 305,
    SWITCH = 306,
    CASE = 307,
    DEFAULT = 308,
    MONITOR = 309,
    CATCH = 310,
    ACQUIRE = 311,
    GOTO = 312,
    ASM = 313,
    INTEGER = 314,
    T_VOID = 315,
    T_CONST = 316,
    SENSOR = 317,
    TASKID = 318,
    NOLIST = 319,
    RES = 320,
    CTRUE = 321,
    CFALSE = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 49 "parse.y"

	int			fInt;
	bool		fBool;
	Resource*	fResource;
	Fragment*	fFragment;
	Stmt*		fStmt;
	BlockStmt*	fBlock;
	Symbol*		fSymbol;
	char*		fString;
	Expr*		fExpr;
	FunctionDef*	fFunction;
	CallStmt*	fCall;
	AsmStmt*	fAsmStmt;
	Field*		fField;
	CaseStmt*	fCaseStmt;
	DeclareStmt*	fDeclareStmt;
	LocationNode*	fLocation;

#line 247 "parse.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Second part of user prologue.  */
#line 69 "parse.y"

#include <stdlib.h>
#include "IfStmt.h"
#include "WhileStmt.h"
#include "AsmStmt.h"
#include "DoStmt.h"
#include "RepeatStmt.h"
#include "AssignStmt.h"
#include "TaskStmt.h"
#include "JumpStmt.h"
#include "SwitchStmt.h"
#include "ExprStmt.h"
#include "RCX_Constants.h"
#include "PreProc.h"
#include "parser.h"
#include "Program.h"
#include "parse_util.h"
#include "Program.h"
#include "IncDecExpr.h"
#include "AtomExpr.h"
#include "TypeExpr.h"
#include "Error.h"
#include "MonitorStmt.h"
#include "EventSrcExpr.h"
#include "SensorExpr.h"
#include "AssignMathStmt.h"
#include "ForStmt.h"
#include "RelExpr.h"
#include "NegateExpr.h"
#include "LogicalExpr.h"
#include "TernaryExpr.h"
#include "LabelStmt.h"
#include "GotoStmt.h"
#include "AddrOfExpr.h"
#include "DerefExpr.h"

#define yylex()		(gPreProc->Get(yylval))

static LexLocation sSavedLoc;

#line 159 "parse.y"

static void yyerror(const char *msg);


#line 309 "parse.tab.c"


#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1702

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  328

#define YYUNDEFTOK  2
#define YYMAXUTOK   322

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,     2,    92,    22,     9,     2,
      86,    35,    20,    19,    87,    18,     2,    21,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,    83,
      12,    88,    13,     4,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,    90,     8,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,     7,    85,    24,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
      10,    11,    14,    15,    16,    17,    23,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   167,   167,   171,   172,   175,   176,   177,   178,   179,
     180,   184,   187,   190,   191,   194,   201,   204,   205,   208,
     209,   210,   213,   214,   217,   218,   219,   220,   221,   222,
     223,   227,   228,   231,   232,   235,   236,   237,   240,   240,
     243,   244,   248,   249,   250,   251,   252,   253,   254,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   272,
     273,   274,   275,   276,   277,   281,   282,   283,   284,   288,
     289,   292,   293,   297,   298,   302,   303,   306,   307,   311,
     314,   315,   318,   319,   322,   323,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   349,   350,
     352,   353,   355,   356,   357,   358,   360,   361,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   374,   377,   380,
     381,   382,   386,   387,   388,   392,   395,   396,   397,   400
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "':'", "'?'", "OR", "AND", "'|'", "'^'",
  "'&'", "REL_EQ", "REL_NE", "'<'", "'>'", "REL_LE", "REL_GE", "LEFT",
  "RIGHT", "'-'", "'+'", "'*'", "'/'", "'%'", "UMINUS", "'~'", "INDIRECT",
  "'!'", "INCDEC", "ABS", "SIGN", "TYPE", "EVENT_SRC", "LOWER_THAN_ELSE",
  "ELSE", "LOWER_THAN_EXPR_SHIFT", "')'", "ID", "NUMBER", "ASSIGN",
  "ASSIGN2", "TASKOP", "JUMP", "TASK", "SUB", "STRING", "PP_DEFINE",
  "PP_INCLUDE", "NL", "WS", "PP_ARG", "PP_UNKNOWN", "PP_IFDEF", "PP_IF",
  "PP_ELSE", "PP_ELIF", "PP_ENDIF", "PP_UNDEF", "PP_PRAGMA", "PP_GLOM",
  "PP_ERROR", "PP_WARNING", "IF", "WHILE", "DO", "FOR", "REPEAT", "SWITCH",
  "CASE", "DEFAULT", "MONITOR", "CATCH", "ACQUIRE", "GOTO", "ASM",
  "INTEGER", "T_VOID", "T_CONST", "SENSOR", "TASKID", "NOLIST", "RES",
  "CTRUE", "CFALSE", "';'", "'{'", "'}'", "'('", "','", "'='", "'['",
  "']'", "'@'", "'$'", "$accept", "S", "unit_list", "unit",
  "function_head", "sub_head", "nolist_opt", "fragment", "subfragment",
  "sarg_list", "args", "arg_list", "arg_type", "var_list", "var_item",
  "var_decl", "block", "$@1", "stmt_list", "stmt", "control_stmt",
  "misc_stmt", "expr_stmt", "opt_expr_stmt", "opt_expr", "opt_handler",
  "handler_list", "evt_handler", "handler", "case", "params", "param_list",
  "expr", "saveloc", "loc", "asm_list", "asm_item", "resource", "res_data",
  "res_byte", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    58,    63,   258,   259,   124,    94,    38,
     260,   261,    60,    62,   262,   263,   264,   265,    45,    43,
      42,    47,    37,   266,   126,   267,    33,   268,   269,   270,
     271,   272,   273,   274,   275,    41,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,    59,   123,   125,    40,    44,    61,    91,
      93,    64,    36
};
# endif

#define YYPACT_NINF -195

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-195)))

#define YYTABLE_NINF -139

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-139)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -195,    33,    16,  -195,    -1,   912,  -195,   -25,   -45,     7,
    -195,   -53,  -195,   -44,   912,   912,   -34,   912,   912,    -7,
      -2,     5,    26,  -195,    28,  -195,  -195,   912,   912,  1000,
      17,    73,    82,  -195,    35,    39,    55,  -195,  -195,  -195,
    -195,    42,  -195,    -1,   912,   105,   105,   912,   105,   105,
     912,   912,   912,   912,  -195,   912,  -195,  -195,  1033,   105,
     912,   912,   912,   912,   912,   912,   912,   912,   912,   912,
     912,   912,   912,   912,   912,   912,   912,   912,   912,  -195,
      54,    99,   103,    52,  -195,    56,    58,  -195,  -195,   104,
    -195,  -195,  -195,   912,  -195,  1588,  1065,  1097,  1129,  1161,
    1193,  1225,  -195,  1514,  1634,  1655,  1675,   468,   545,   621,
     621,   133,   133,   133,   133,    86,    86,    60,    60,   105,
     105,   105,   772,    57,  -195,   912,   110,     1,   357,   435,
      61,   284,    67,  -195,  -195,  -195,  -195,  -195,   912,  1588,
     -60,  -195,   912,   679,    75,    75,    11,    87,  -195,   -11,
     126,    80,  -195,    78,    79,  -195,    81,    83,    90,  -195,
    -195,   130,    88,    -1,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,    85,   591,   767,   -27,    65,  -195,    51,  -195,   912,
    1612,  -195,   912,   703,  -195,  -195,  -195,  -195,  -195,    12,
    -195,    23,  -195,  -195,   134,   912,   912,   591,   802,   912,
     912,    92,    93,  -195,   193,    15,  -195,  -195,  -195,  -195,
    -195,   912,   912,   912,    97,   912,   170,     3,  -195,  -195,
     146,    95,   148,   727,  -195,  -195,  -195,  -195,   150,   106,
    1257,  1289,   125,  -195,   109,  1321,  1353,   912,   912,   113,
     912,  1588,   -36,  -195,  -195,   513,  1588,  1588,  1588,  -195,
    1539,  -195,   591,   843,  -195,    23,  -195,  -195,  -195,  -195,
    -195,  -195,   102,   871,  -195,  -195,  1385,  1417,  -195,  1564,
     114,   733,  -195,  -195,  -195,   158,   111,  1588,   164,   591,
     591,   912,   118,  1588,   591,   591,  -195,  -195,   912,  -195,
    -195,   119,   912,  -195,   171,  -195,  1449,   886,  -195,  -195,
      75,    75,  1588,  -195,  1588,   591,   120,   174,  -195,   135,
    -195,  -195,  -195,   144,    75,  -195,  -195,   591,    75,  -195,
    -195,  -195,  -195,   129,   912,  1481,    75,  -195
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,   128,     1,     0,   128,     3,    14,     0,     0,
     128,     0,    32,    33,   128,   128,     0,   128,   128,     0,
       0,     0,     0,   127,     0,   127,   127,   128,   128,     0,
       0,     0,     0,    13,     0,     0,     0,   128,   128,    10,
     128,    35,     5,     0,   128,   108,   109,   128,   105,   117,
     128,   128,   128,   128,    86,   128,   103,   104,     0,   115,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   116,
       0,     0,     0,   113,   121,     0,     0,    41,    41,     0,
       6,     7,    37,   128,    31,    34,     0,     0,     0,     0,
       0,     0,   112,     0,   107,   106,    92,    96,    91,    97,
     100,   101,   102,    98,    99,    94,    95,    88,    87,    89,
      90,    93,   128,   124,   126,   128,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   119,   120,   118,   128,   139,
       0,   137,   128,     0,     0,     0,    24,     0,    28,     0,
       0,     0,   127,     0,     0,   128,     0,     0,     0,   128,
     128,     0,     0,     0,    42,    38,   128,    43,    40,    47,
     128,     0,     0,    65,     0,     0,   128,    21,    36,   128,
     123,   135,   128,     0,   114,    15,    16,    26,    29,    25,
      12,     0,    18,    46,     0,   128,   128,     0,   128,   128,
     128,     0,     0,   127,   128,     0,    41,     9,    48,    64,
      44,   128,   128,   128,     0,   128,     0,   113,     8,    20,
       0,    19,     0,     0,   136,   125,    27,    30,     0,     0,
       0,     0,     0,    69,     0,     0,     0,   128,   128,     0,
     128,   132,     0,   130,    63,     0,    66,    67,    68,    60,
       0,    81,     0,   128,    11,     0,    23,   122,    17,    61,
     128,   128,     0,   128,   128,   128,     0,     0,    58,   133,
       0,   128,    39,    80,    45,     0,    82,    85,     0,     0,
       0,   128,     0,    71,     0,     0,   128,   128,   128,    59,
     129,     0,   128,    22,    53,    49,     0,   128,    51,    52,
       0,     0,   134,    62,    84,     0,     0,     0,    76,    74,
      54,    50,   128,    55,     0,    56,    73,     0,   128,    75,
      79,    57,    77,     0,   128,     0,     0,    78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -162,    53,   182,  -195,  -143,  -195,   -77,  -169,
    -195,  -195,  -194,   -71,  -195,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,    -5,   -18,    84,  -195,   -43,  -195,  -195,    45
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    34,    35,    36,    37,    38,   149,
     220,   221,   150,    11,    12,    13,   167,   206,   128,   168,
     169,   170,   171,   234,   282,   315,   313,   319,   316,   172,
     275,   276,   173,   174,    30,   242,   243,     8,   140,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,   185,   186,   210,   233,    54,   252,    56,    57,    45,
      46,   129,    48,    49,   214,   222,    -2,    31,    32,     9,
     187,   226,    58,    59,   190,   181,    81,   182,   232,   228,
      42,   188,   227,     3,    43,    10,   145,    82,    39,    95,
     215,   216,    96,    40,    44,    97,    98,    99,   100,   270,
     101,   271,    47,    83,    33,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    81,   146,   191,   147,   148,    50,
      76,    77,    78,   274,    51,    82,     7,    79,   131,   253,
       4,    52,   125,   278,    41,    84,     5,   146,   244,   147,
     148,   217,    43,   233,    74,    75,    76,    77,    78,    85,
     294,   295,    53,    79,    55,   298,   299,   139,    86,    87,
     143,    90,    91,    88,    92,   146,   219,   147,   148,   245,
      89,    93,    79,   180,   194,   123,   310,   183,   122,   124,
     130,   125,   126,    84,   127,   144,   142,   177,   321,    72,
      73,    74,    75,    76,    77,    78,   179,   308,   309,   165,
      79,   189,   192,   193,   195,   196,   203,   198,   209,   199,
     229,   320,   204,   251,   223,   322,   200,   139,   237,   238,
     249,   254,   255,   327,   256,   239,   258,   262,   281,   259,
     230,   231,   263,   291,   235,   236,   268,   289,   292,   241,
     293,   297,   303,   311,   305,   314,   246,   247,   248,   312,
     250,    14,   175,   175,   318,   324,   205,    15,    16,    17,
      18,    19,    20,    21,    22,    94,   307,   224,   290,     0,
      23,     0,   266,   267,     0,   269,     0,     0,     0,   197,
       0,     0,     0,   201,   202,     0,     0,     0,   277,     0,
     207,     0,     0,     0,   208,     0,   175,     0,   283,     0,
     218,     0,     0,     0,     0,     0,   241,     0,     0,     0,
      24,     0,     0,     0,    25,    26,   296,     0,  -131,    27,
    -131,   175,     0,   302,    28,   240,     0,   304,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,   325,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,     0,     0,   175,     0,     0,     0,
       0,     0,     0,     0,   279,   280,     0,     0,   284,   285,
       0,     0,     0,     0,     0,     0,     0,     0,   151,     0,
       0,     0,     0,   175,   175,     0,  -128,     0,   175,   175,
     300,   301,     0,     0,   178,    14,     0,  -128,     0,     0,
       0,    15,    16,    17,    18,    19,    20,    21,    22,   175,
       0,     0,     0,  -128,    23,     0,   317,   152,  -127,     0,
       0,   175,   323,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   154,
     155,   156,   157,   158,  -127,  -127,   159,     0,   160,   161,
     162,   163,     0,     0,    24,  -128,   151,     0,    25,    26,
     164,   165,   166,    27,  -128,     0,     0,     0,    28,     0,
       0,     0,     0,    14,     0,  -128,     0,     0,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,  -128,    23,     0,     0,   152,  -127,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,     0,     0,     0,     0,    79,   153,   154,   155,   156,
     157,   158,  -127,  -127,   159,     0,   160,   161,   162,   163,
       0,     0,    24,  -128,   151,     0,    25,    26,   164,   165,
     176,    27,  -128,     0,     0,     0,    28,     0,     0,     0,
       0,    14,     0,  -128,     0,     0,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,  -128,
      23,     0,     0,   152,  -127,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,    79,     0,   153,   154,   155,   156,   157,   158,
    -127,  -127,   159,     0,   160,   161,   162,   163,     0,     0,
      24,  -128,   151,     0,    25,    26,   164,   165,   272,    27,
    -128,     0,     0,     0,    28,     0,     0,     0,     0,    14,
       0,  -128,     0,     0,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,  -128,    23,     0,
       0,   152,  -127,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     0,     0,     0,     0,    79,     0,
       0,     0,   153,   154,   155,   156,   157,   158,  -127,  -127,
     159,     0,   160,   161,   162,   163,     0,     0,    24,  -128,
       0,     0,    25,    26,   164,   165,     0,    27,     0,     0,
       0,     0,    28,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,    79,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     0,     0,     0,     0,
      79,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       0,    14,     0,     0,    79,     0,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,   184,
      23,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      14,     0,     0,   225,    79,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,   211,   212,     0,     0,    23,
      24,     0,     0,     0,    25,    26,     0,   257,     0,    27,
      14,     0,     0,     0,    28,   240,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,    25,    26,   213,     0,  -138,    27,  -138,
       0,    14,     0,    28,     0,     0,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,   -83,    24,
      23,     0,     0,    25,    26,   -70,     0,     0,    27,    14,
       0,     0,     0,    28,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    14,     0,     0,     0,    23,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
      24,   -70,     0,    23,    25,    26,     0,     0,     0,    27,
      14,     0,     0,     0,    28,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,    24,    23,
       0,     0,    25,    26,   -72,     0,     0,    27,     0,     0,
       0,     0,    28,    24,     0,     0,     0,    25,    26,     0,
       0,     0,    27,     0,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,    25,    26,     0,     0,     0,    27,     0,
       0,     0,     0,    28,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,   102,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
     132,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,   133,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,   134,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,   135,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,   136,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
     137,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,   260,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,   261,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,   264,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,   265,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
     286,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,   287,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,   306,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,   326,   138,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,    79,   273,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,    79,   288,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,    79,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,     0,     0,     0,     0,    79,  -139,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,     0,     0,     0,    79,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,    79,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,    79,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,    79
};

static const yytype_int16 yycheck[] =
{
       5,   144,   145,   172,   198,    23,     3,    25,    26,    14,
      15,    88,    17,    18,    41,   177,     0,    42,    43,    20,
       9,     9,    27,    28,    35,    85,     9,    87,   197,   191,
      83,    20,    20,     0,    87,    36,    35,    20,    83,    44,
      67,    68,    47,    36,    88,    50,    51,    52,    53,    85,
      55,    87,    86,    36,    79,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     9,    74,    87,    76,    77,    86,
      20,    21,    22,   252,    86,    20,     2,    27,    93,    86,
      74,    86,    89,   255,    10,    78,    80,    74,    83,    76,
      77,    36,    87,   297,    18,    19,    20,    21,    22,    36,
     279,   280,    86,    27,    86,   284,   285,   122,    36,    84,
     125,    37,    38,    84,    40,    74,    75,    76,    77,   206,
      75,    89,    27,   138,   152,    36,   305,   142,    84,    36,
      36,    89,    86,    78,    86,    35,    89,    86,   317,    16,
      17,    18,    19,    20,    21,    22,    89,   300,   301,    84,
      27,    74,    36,    83,    86,    86,    36,    86,    83,    86,
      36,   314,    84,     3,   179,   318,    86,   182,    86,    86,
      83,    35,    87,   326,    36,   203,    36,    62,    86,    83,
     195,   196,    83,    35,   199,   200,    83,    83,    87,   204,
      36,    83,    83,    83,    33,    70,   211,   212,   213,    35,
     215,    18,   128,   129,    70,    86,   163,    24,    25,    26,
      27,    28,    29,    30,    31,    43,   297,   182,   271,    -1,
      37,    -1,   237,   238,    -1,   240,    -1,    -1,    -1,   155,
      -1,    -1,    -1,   159,   160,    -1,    -1,    -1,   253,    -1,
     166,    -1,    -1,    -1,   170,    -1,   172,    -1,   263,    -1,
     176,    -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    82,   281,    -1,    85,    86,
      87,   197,    -1,   288,    91,    92,    -1,   292,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   260,   261,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,   279,   280,    -1,     9,    -1,   284,   285,
     286,   287,    -1,    -1,    90,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,   305,
      -1,    -1,    -1,    36,    37,    -1,   312,    40,    41,    -1,
      -1,   317,   318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    -1,    -1,    77,    78,     1,    -1,    81,    82,
      83,    84,    85,    86,     9,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    40,    41,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      -1,    -1,    77,    78,     1,    -1,    81,    82,    83,    84,
      85,    86,     9,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    40,    41,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    -1,    -1,
      77,    78,     1,    -1,    81,    82,    83,    84,    85,    86,
       9,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    40,    41,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    81,    82,    83,    84,    -1,    86,    -1,    -1,
      -1,    -1,    91,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    18,    -1,    -1,    27,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    90,
      37,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      18,    -1,    -1,    90,    27,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    38,    39,    -1,    -1,    37,
      77,    -1,    -1,    -1,    81,    82,    -1,    90,    -1,    86,
      18,    -1,    -1,    -1,    91,    92,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    82,    88,    -1,    85,    86,    87,
      -1,    18,    -1,    91,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,    77,
      37,    -1,    -1,    81,    82,    83,    -1,    -1,    86,    18,
      -1,    -1,    -1,    91,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    18,    -1,    -1,    -1,    37,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      77,    35,    -1,    37,    81,    82,    -1,    -1,    -1,    86,
      18,    -1,    -1,    -1,    91,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    77,    37,
      -1,    -1,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    77,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,    95,     0,    74,    80,    96,   127,   130,    20,
      36,   106,   107,   108,    18,    24,    25,    26,    27,    28,
      29,    30,    31,    37,    77,    81,    82,    86,    91,   125,
     127,    42,    43,    79,    97,    98,    99,   100,   101,    83,
      36,   127,    83,    87,    88,   125,   125,    86,   125,   125,
      86,    86,    86,    86,   126,    86,   126,   126,   125,   125,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    27,
      36,     9,    20,    36,    78,    36,    36,    84,    84,    75,
     127,   127,   127,    89,   107,   125,   125,   125,   125,   125,
     125,   125,    35,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,    84,    36,    36,    89,    86,    86,   111,   111,
      36,   125,    35,    35,    35,    35,    35,    35,     3,   125,
     131,   132,    89,   125,    35,    35,    74,    76,    77,   102,
     105,     1,    40,    61,    62,    63,    64,    65,    66,    69,
      71,    72,    73,    74,    83,    84,    85,   109,   112,   113,
     114,   115,   122,   125,   126,   127,    85,    86,    90,    89,
     125,    85,    87,   125,    90,   109,   109,     9,    20,    74,
      35,    87,    36,    83,   126,    86,    86,   127,    86,    86,
      86,   127,   127,    36,    84,   106,   110,   127,   127,    83,
     112,    38,    39,    88,    41,    67,    68,    36,   127,    75,
     103,   104,   105,   125,   132,    90,     9,    20,   105,    36,
     125,   125,   112,   115,   116,   125,   125,    86,    86,   126,
      92,   125,   128,   129,    83,   111,   125,   125,   125,    83,
     125,     3,     3,    86,    35,    87,    36,    90,    36,    83,
      35,    35,    62,    83,    35,    35,   125,   125,    83,   125,
      85,    87,    85,     3,   112,   123,   124,   125,   105,   127,
     127,    86,   117,   125,   127,   127,    35,    35,     3,    83,
     129,    35,    87,    36,   112,   112,   125,    83,   112,   112,
     127,   127,   125,    83,   125,    33,    35,   116,   109,   109,
     112,    83,    35,   119,    70,   118,   121,   127,    70,   120,
     109,   112,   109,   127,    86,   125,    35,   109
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    96,    96,    96,    96,    96,
      96,    97,    98,    99,    99,   100,   101,   102,   102,   103,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   107,   107,   108,   108,   108,   110,   109,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   127,   128,
     128,   128,   129,   129,   129,   130,   131,   131,   131,   132
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     3,     6,     6,
       2,     6,     5,     1,     0,     5,     5,     4,     2,     1,
       1,     0,     4,     2,     1,     2,     2,     3,     1,     2,
       3,     3,     1,     1,     3,     2,     5,     3,     0,     4,
       2,     0,     1,     1,     2,     4,     2,     1,     2,     6,
       8,     6,     6,     6,     8,     8,     8,    10,     4,     5,
       3,     4,     6,     3,     2,     1,     3,     3,     3,     1,
       0,     1,     0,     1,     0,     2,     0,     2,     6,     2,
       4,     3,     1,     0,     3,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     3,     3,     2,     2,
       4,     4,     3,     2,     5,     2,     2,     2,     4,     4,
       4,     2,     7,     5,     3,     6,     3,     0,     0,     3,
       1,     0,     1,     2,     4,     6,     3,     1,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 167 "parse.y"
    { (yyval.fInt) = 0; }
#line 1893 "parse.tab.c"
    break;

  case 5:
#line 175 "parse.y"
    { gProgram->AddGlobalDecls((yyvsp[-1].fBlock)); }
#line 1899 "parse.tab.c"
    break;

  case 6:
#line 176 "parse.y"
    { (yyvsp[-1].fFragment)->SetLocations((yyvsp[-2].fLocation), (yyvsp[0].fLocation)); }
#line 1905 "parse.tab.c"
    break;

  case 7:
#line 177 "parse.y"
    { (yyvsp[-1].fFragment)->SetLocations((yyvsp[-2].fLocation), (yyvsp[0].fLocation)); }
#line 1911 "parse.tab.c"
    break;

  case 8:
#line 178 "parse.y"
    { EndSubWithParams((yyvsp[-4].fFragment), (yyvsp[-2].fBlock), (yyvsp[-5].fLocation), (yyvsp[0].fLocation)); }
#line 1917 "parse.tab.c"
    break;

  case 9:
#line 179 "parse.y"
    { EndFunction((yyvsp[-4].fFunction), (yyvsp[-2].fBlock), (yyvsp[-5].fLocation), (yyvsp[0].fLocation)); }
#line 1923 "parse.tab.c"
    break;

  case 10:
#line 180 "parse.y"
    { gProgram->AddResource((yyvsp[-1].fResource)); }
#line 1929 "parse.tab.c"
    break;

  case 11:
#line 184 "parse.y"
    { (yyval.fFunction) = BeginFunction((yyvsp[-1].fFunction), (yyvsp[-3].fSymbol), (yyvsp[-5].fBool)); }
#line 1935 "parse.tab.c"
    break;

  case 12:
#line 187 "parse.y"
    { (yyval.fFragment) = BeginSubWithParams((yyvsp[-1].fFragment), (yyvsp[-3].fSymbol)); }
#line 1941 "parse.tab.c"
    break;

  case 13:
#line 190 "parse.y"
    { (yyval.fBool) = 0; }
#line 1947 "parse.tab.c"
    break;

  case 14:
#line 191 "parse.y"
    { (yyval.fBool) = 1; }
#line 1953 "parse.tab.c"
    break;

  case 15:
#line 194 "parse.y"
    { (yyval.fFragment) = new Fragment(true, (yyvsp[-3].fSymbol), (yyvsp[0].fStmt)); }
#line 1959 "parse.tab.c"
    break;

  case 16:
#line 201 "parse.y"
    { (yyval.fFragment) = new Fragment(false, (yyvsp[-3].fSymbol), (yyvsp[0].fStmt)); }
#line 1965 "parse.tab.c"
    break;

  case 17:
#line 204 "parse.y"
    { (yyval.fFragment) = (yyvsp[-3].fFragment); 	DefineSubArg((yyval.fFragment), (yyvsp[0].fSymbol), (yyvsp[-1].fInt)); }
#line 1971 "parse.tab.c"
    break;

  case 18:
#line 205 "parse.y"
    { (yyval.fFragment) = new Fragment(false); DefineSubArg((yyval.fFragment),(yyvsp[0].fSymbol),(yyvsp[-1].fInt)); }
#line 1977 "parse.tab.c"
    break;

  case 20:
#line 209 "parse.y"
    { (yyval.fFunction) = new FunctionDef(); }
#line 1983 "parse.tab.c"
    break;

  case 21:
#line 210 "parse.y"
    { (yyval.fFunction) = new FunctionDef(); }
#line 1989 "parse.tab.c"
    break;

  case 22:
#line 213 "parse.y"
    { (yyval.fFunction) = (yyvsp[-3].fFunction); 	DefineArg((yyval.fFunction), (yyvsp[0].fSymbol), (yyvsp[-1].fInt)); }
#line 1995 "parse.tab.c"
    break;

  case 23:
#line 214 "parse.y"
    { (yyval.fFunction) = new FunctionDef(); DefineArg((yyval.fFunction),(yyvsp[0].fSymbol),(yyvsp[-1].fInt)); }
#line 2001 "parse.tab.c"
    break;

  case 24:
#line 217 "parse.y"
    { (yyval.fInt) = FunctionDef::kIntegerArg; }
#line 2007 "parse.tab.c"
    break;

  case 25:
#line 218 "parse.y"
    { (yyval.fInt) = FunctionDef::kConstantArg; }
#line 2013 "parse.tab.c"
    break;

  case 26:
#line 219 "parse.y"
    { (yyval.fInt) = FunctionDef::kReferenceArg; }
#line 2019 "parse.tab.c"
    break;

  case 27:
#line 220 "parse.y"
    { (yyval.fInt) = FunctionDef::kConstRefArg; }
#line 2025 "parse.tab.c"
    break;

  case 28:
#line 221 "parse.y"
    { (yyval.fInt) = FunctionDef::kSensorArg; }
#line 2031 "parse.tab.c"
    break;

  case 29:
#line 222 "parse.y"
    { (yyval.fInt) = FunctionDef::kPointerArg; }
#line 2037 "parse.tab.c"
    break;

  case 30:
#line 223 "parse.y"
    { (yyval.fInt) = FunctionDef::kConstPtrArg; }
#line 2043 "parse.tab.c"
    break;

  case 31:
#line 227 "parse.y"
    { (yyvsp[-2].fBlock)->Add((yyvsp[0].fStmt)); (yyval.fBlock) = (yyvsp[-2].fBlock); }
#line 2049 "parse.tab.c"
    break;

  case 32:
#line 228 "parse.y"
    { (yyval.fBlock) = new BlockStmt(); (yyval.fBlock)->Add((yyvsp[0].fStmt)); }
#line 2055 "parse.tab.c"
    break;

  case 33:
#line 231 "parse.y"
    { (yyval.fStmt) = (yyvsp[0].fDeclareStmt); }
#line 2061 "parse.tab.c"
    break;

  case 34:
#line 232 "parse.y"
    { (yyval.fStmt) = (yyvsp[-2].fDeclareStmt); (yyvsp[-2].fDeclareStmt)->SetInitialValue((yyvsp[0].fExpr)); }
#line 2067 "parse.tab.c"
    break;

  case 35:
#line 235 "parse.y"
    { (yyval.fDeclareStmt) = MakeDeclareStmt((yyvsp[-1].fSymbol), (yyvsp[0].fLocation), 0, false, false); }
#line 2073 "parse.tab.c"
    break;

  case 36:
#line 236 "parse.y"
    { (yyval.fDeclareStmt) = MakeDeclareStmt((yyvsp[-4].fSymbol), (yyvsp[-3].fLocation), (yyvsp[-1].fExpr), false, false); }
#line 2079 "parse.tab.c"
    break;

  case 37:
#line 237 "parse.y"
    { (yyval.fDeclareStmt) = MakeDeclareStmt((yyvsp[-1].fSymbol), (yyvsp[0].fLocation), 0, true, false); }
#line 2085 "parse.tab.c"
    break;

  case 38:
#line 240 "parse.y"
    { BeginScope(); }
#line 2091 "parse.tab.c"
    break;

  case 39:
#line 240 "parse.y"
    { (yyval.fStmt) = EndScope((yyvsp[-1].fBlock)); }
#line 2097 "parse.tab.c"
    break;

  case 40:
#line 243 "parse.y"
    { (yyvsp[-1].fBlock)->Add((yyvsp[0].fStmt)); (yyval.fBlock) = (yyvsp[-1].fBlock); }
#line 2103 "parse.tab.c"
    break;

  case 41:
#line 244 "parse.y"
    { (yyval.fBlock) = new BlockStmt(); }
#line 2109 "parse.tab.c"
    break;

  case 42:
#line 248 "parse.y"
    { (yyval.fStmt) = new BlockStmt(); }
#line 2115 "parse.tab.c"
    break;

  case 44:
#line 250 "parse.y"
    { (yyval.fStmt) = (yyvsp[-1].fCaseStmt); (yyvsp[-1].fCaseStmt)->SetStmt((yyvsp[0].fStmt)); }
#line 2121 "parse.tab.c"
    break;

  case 45:
#line 251 "parse.y"
    { (yyval.fStmt) = new LabelStmt((yyvsp[-2].fSymbol), (yyvsp[-3].fLocation)->GetLoc(), (yyvsp[0].fStmt)); delete (yyvsp[-3].fLocation); }
#line 2127 "parse.tab.c"
    break;

  case 46:
#line 252 "parse.y"
    {  yyerrok; (yyval.fStmt) = new BlockStmt(); }
#line 2133 "parse.tab.c"
    break;

  case 48:
#line 254 "parse.y"
    { (yyvsp[-1].fStmt)->SetLocation((yyvsp[0].fLocation)); }
#line 2139 "parse.tab.c"
    break;

  case 49:
#line 259 "parse.y"
    { (yyval.fStmt) = new WhileStmt((yyvsp[-3].fExpr), (yyvsp[0].fStmt)); (yyval.fStmt)->SetLocation((yyvsp[-1].fLocation)); }
#line 2145 "parse.tab.c"
    break;

  case 50:
#line 260 "parse.y"
    { (yyval.fStmt) = new DoStmt((yyvsp[-2].fExpr), (yyvsp[-5].fStmt)); (yyval.fStmt)->SetLocation((yyvsp[-6].fLocation)); }
#line 2151 "parse.tab.c"
    break;

  case 51:
#line 261 "parse.y"
    { (yyval.fStmt) = new RepeatStmt((yyvsp[-3].fExpr), (yyvsp[0].fStmt)); (yyval.fStmt)->SetLocation((yyvsp[-1].fLocation)); }
#line 2157 "parse.tab.c"
    break;

  case 52:
#line 262 "parse.y"
    { (yyval.fStmt) = new SwitchStmt((yyvsp[-3].fExpr), (yyvsp[0].fStmt)); (yyval.fStmt)->SetLocation((yyvsp[-1].fLocation)); }
#line 2163 "parse.tab.c"
    break;

  case 53:
#line 263 "parse.y"
    { (yyval.fStmt) = new IfStmt((yyvsp[-3].fExpr), (yyvsp[0].fStmt)); (yyval.fStmt)->SetLocation((yyvsp[-1].fLocation)); }
#line 2169 "parse.tab.c"
    break;

  case 54:
#line 264 "parse.y"
    { (yyval.fStmt) = new IfStmt((yyvsp[-5].fExpr), (yyvsp[-2].fStmt), (yyvsp[0].fStmt)); (yyval.fStmt)->SetLocation((yyvsp[-3].fLocation)); }
#line 2175 "parse.tab.c"
    break;

  case 55:
#line 265 "parse.y"
    { (yyval.fStmt) = new MonitorStmt((yyvsp[-4].fExpr), (yyvsp[-1].fStmt), (yyvsp[0].fBlock), (yyvsp[-6].fLocation)->GetLoc()); delete (yyvsp[-6].fLocation); (yyval.fStmt)->SetLocation((yyvsp[-2].fLocation)); }
#line 2181 "parse.tab.c"
    break;

  case 56:
#line 266 "parse.y"
    { (yyval.fStmt) = MakeAcquireStmt((yyvsp[-4].fExpr), (yyvsp[-1].fStmt), (yyvsp[0].fStmt), (yyvsp[-6].fLocation)); (yyval.fStmt)->SetLocation((yyvsp[-2].fLocation)); }
#line 2187 "parse.tab.c"
    break;

  case 57:
#line 267 "parse.y"
    { (yyval.fStmt) = new ForStmt((yyvsp[-7].fStmt), (yyvsp[-5].fExpr), (yyvsp[-3].fStmt), (yyvsp[0].fStmt)); (yyval.fStmt)->SetLocation((yyvsp[-1].fLocation)); }
#line 2193 "parse.tab.c"
    break;

  case 58:
#line 268 "parse.y"
    { (yyval.fStmt) = new GotoStmt((yyvsp[-2].fSymbol), sSavedLoc); }
#line 2199 "parse.tab.c"
    break;

  case 59:
#line 272 "parse.y"
    { (yyval.fStmt) = (yyvsp[-2].fAsmStmt); }
#line 2205 "parse.tab.c"
    break;

  case 60:
#line 273 "parse.y"
    { (yyval.fStmt) = new JumpStmt((yyvsp[-1].fInt), sSavedLoc); }
#line 2211 "parse.tab.c"
    break;

  case 61:
#line 274 "parse.y"
    { (yyval.fStmt) = new TaskStmt((UByte)(yyvsp[-3].fInt), (yyvsp[-1].fSymbol), sSavedLoc); }
#line 2217 "parse.tab.c"
    break;

  case 62:
#line 275 "parse.y"
    { (yyval.fStmt) = (yyvsp[-2].fCall); (yyvsp[-2].fCall)->SetName((yyvsp[-4].fSymbol)); (yyvsp[-2].fCall)->SetLocation((yyvsp[-5].fLocation)->GetLoc()); delete (yyvsp[-5].fLocation); }
#line 2223 "parse.tab.c"
    break;

  case 63:
#line 276 "parse.y"
    { (yyval.fStmt) = (yyvsp[-1].fBlock); }
#line 2229 "parse.tab.c"
    break;

  case 65:
#line 281 "parse.y"
    { (yyval.fStmt) = new ExprStmt((yyvsp[0].fExpr)); }
#line 2235 "parse.tab.c"
    break;

  case 66:
#line 282 "parse.y"
    { CheckLValue((yyvsp[-2].fExpr)); (yyval.fStmt) = MakeAssignStmt((yyvsp[-2].fExpr), (yyvsp[-1].fInt), (yyvsp[0].fExpr)); }
#line 2241 "parse.tab.c"
    break;

  case 67:
#line 283 "parse.y"
    { CheckLValue((yyvsp[-2].fExpr)); (yyval.fStmt) = MakeAssign2Stmt((yyvsp[-2].fExpr), (yyvsp[-1].fInt), (yyvsp[0].fExpr)); }
#line 2247 "parse.tab.c"
    break;

  case 68:
#line 284 "parse.y"
    { CheckLValue((yyvsp[-2].fExpr)); (yyval.fStmt) = new AssignStmt((yyvsp[-2].fExpr), (yyvsp[0].fExpr)); }
#line 2253 "parse.tab.c"
    break;

  case 70:
#line 289 "parse.y"
    { (yyval.fStmt) = 0; }
#line 2259 "parse.tab.c"
    break;

  case 72:
#line 293 "parse.y"
    { (yyval.fExpr) = 0; }
#line 2265 "parse.tab.c"
    break;

  case 74:
#line 298 "parse.y"
    { (yyval.fStmt) = 0; }
#line 2271 "parse.tab.c"
    break;

  case 75:
#line 302 "parse.y"
    { (yyvsp[-1].fBlock)->Add((yyvsp[0].fStmt)); (yyval.fBlock) = (yyvsp[-1].fBlock); }
#line 2277 "parse.tab.c"
    break;

  case 76:
#line 303 "parse.y"
    { (yyval.fBlock) =  new BlockStmt(); }
#line 2283 "parse.tab.c"
    break;

  case 77:
#line 306 "parse.y"
    { (yyval.fStmt) = (yyvsp[0].fStmt); }
#line 2289 "parse.tab.c"
    break;

  case 78:
#line 307 "parse.y"
    { (yyval.fStmt) = MakeCatchStmt((yyvsp[-2].fExpr), (yyvsp[0].fStmt), (yyvsp[-4].fLocation)); }
#line 2295 "parse.tab.c"
    break;

  case 79:
#line 311 "parse.y"
    { (yyval.fStmt) = (yyvsp[0].fStmt); }
#line 2301 "parse.tab.c"
    break;

  case 80:
#line 314 "parse.y"
    { (yyval.fCaseStmt) = MakeCaseStmt((yyvsp[-1].fExpr), sSavedLoc); }
#line 2307 "parse.tab.c"
    break;

  case 81:
#line 315 "parse.y"
    { (yyval.fCaseStmt) = new CaseStmt(CaseStmt::kDefaultValue, sSavedLoc); }
#line 2313 "parse.tab.c"
    break;

  case 83:
#line 319 "parse.y"
    { (yyval.fCall) = new CallStmt(); }
#line 2319 "parse.tab.c"
    break;

  case 84:
#line 322 "parse.y"
    { (yyval.fCall) = (yyvsp[-2].fCall); (yyval.fCall)->AddParam((yyvsp[0].fExpr)); }
#line 2325 "parse.tab.c"
    break;

  case 85:
#line 323 "parse.y"
    { (yyval.fCall) = new CallStmt(); (yyval.fCall)->AddParam((yyvsp[0].fExpr)); }
#line 2331 "parse.tab.c"
    break;

  case 86:
#line 326 "parse.y"
    { (yyval.fExpr) = new AtomExpr(kRCX_ConstantType, (yyvsp[-1].fInt), sSavedLoc); }
#line 2337 "parse.tab.c"
    break;

  case 87:
#line 327 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), '+', (yyvsp[0].fExpr)); }
#line 2343 "parse.tab.c"
    break;

  case 88:
#line 328 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), '-', (yyvsp[0].fExpr)); }
#line 2349 "parse.tab.c"
    break;

  case 89:
#line 329 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), '*', (yyvsp[0].fExpr)); }
#line 2355 "parse.tab.c"
    break;

  case 90:
#line 330 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), '/', (yyvsp[0].fExpr)); }
#line 2361 "parse.tab.c"
    break;

  case 91:
#line 331 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), '&', (yyvsp[0].fExpr)); }
#line 2367 "parse.tab.c"
    break;

  case 92:
#line 332 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), '|', (yyvsp[0].fExpr)); }
#line 2373 "parse.tab.c"
    break;

  case 93:
#line 333 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), '%', (yyvsp[0].fExpr)); }
#line 2379 "parse.tab.c"
    break;

  case 94:
#line 334 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), LEFT, (yyvsp[0].fExpr)); }
#line 2385 "parse.tab.c"
    break;

  case 95:
#line 335 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), RIGHT, (yyvsp[0].fExpr)); }
#line 2391 "parse.tab.c"
    break;

  case 96:
#line 336 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr((yyvsp[-2].fExpr), '^', (yyvsp[0].fExpr)); }
#line 2397 "parse.tab.c"
    break;

  case 97:
#line 337 "parse.y"
    { (yyval.fExpr) = new RelExpr((yyvsp[-2].fExpr), RelExpr::kEqualTo, (yyvsp[0].fExpr)); }
#line 2403 "parse.tab.c"
    break;

  case 98:
#line 338 "parse.y"
    { (yyval.fExpr) = new RelExpr((yyvsp[-2].fExpr), RelExpr::kLessOrEqual, (yyvsp[0].fExpr)); }
#line 2409 "parse.tab.c"
    break;

  case 99:
#line 339 "parse.y"
    { (yyval.fExpr) = new RelExpr((yyvsp[-2].fExpr), RelExpr::kGreaterOrEqual, (yyvsp[0].fExpr)); }
#line 2415 "parse.tab.c"
    break;

  case 100:
#line 340 "parse.y"
    { (yyval.fExpr) = new RelExpr((yyvsp[-2].fExpr), RelExpr::kNotEqualTo, (yyvsp[0].fExpr)); }
#line 2421 "parse.tab.c"
    break;

  case 101:
#line 341 "parse.y"
    { (yyval.fExpr) = new RelExpr((yyvsp[-2].fExpr), RelExpr::kLessThan, (yyvsp[0].fExpr)); }
#line 2427 "parse.tab.c"
    break;

  case 102:
#line 342 "parse.y"
    { (yyval.fExpr) = new RelExpr((yyvsp[-2].fExpr), RelExpr::kGreaterThan, (yyvsp[0].fExpr)); }
#line 2433 "parse.tab.c"
    break;

  case 103:
#line 343 "parse.y"
    { (yyval.fExpr) = new AtomExpr(kRCX_ConstantType, 1, sSavedLoc); }
#line 2439 "parse.tab.c"
    break;

  case 104:
#line 344 "parse.y"
    { (yyval.fExpr) = new AtomExpr(kRCX_ConstantType, 0, sSavedLoc); }
#line 2445 "parse.tab.c"
    break;

  case 105:
#line 345 "parse.y"
    { (yyval.fExpr) = new NegateExpr((yyvsp[0].fExpr)); }
#line 2451 "parse.tab.c"
    break;

  case 106:
#line 346 "parse.y"
    { (yyval.fExpr) = new LogicalExpr((yyvsp[-2].fExpr), LogicalExpr::kLogicalAnd, (yyvsp[0].fExpr)); }
#line 2457 "parse.tab.c"
    break;

  case 107:
#line 347 "parse.y"
    { (yyval.fExpr) = new LogicalExpr((yyvsp[-2].fExpr), LogicalExpr::kLogicalOr, (yyvsp[0].fExpr)); }
#line 2463 "parse.tab.c"
    break;

  case 108:
#line 349 "parse.y"
    { (yyval.fExpr) = MakeBinaryExpr(new AtomExpr(kRCX_ConstantType, 0, (yyvsp[0].fExpr)->GetLoc()), '-', (yyvsp[0].fExpr)); }
#line 2469 "parse.tab.c"
    break;

  case 109:
#line 350 "parse.y"
    { (yyval.fExpr) = MakeUnaryExpr('~', (yyvsp[0].fExpr)); }
#line 2475 "parse.tab.c"
    break;

  case 110:
#line 352 "parse.y"
    { (yyval.fExpr) = MakeUnaryExpr(ABS, (yyvsp[-1].fExpr)); }
#line 2481 "parse.tab.c"
    break;

  case 111:
#line 353 "parse.y"
    { (yyval.fExpr) = MakeUnaryExpr(SIGN, (yyvsp[-1].fExpr)); }
#line 2487 "parse.tab.c"
    break;

  case 112:
#line 355 "parse.y"
    { (yyval.fExpr) = (yyvsp[-1].fExpr); }
#line 2493 "parse.tab.c"
    break;

  case 113:
#line 356 "parse.y"
    { (yyval.fExpr) = MakeVarExpr((yyvsp[0].fSymbol), (yyvsp[-1].fLocation)); }
#line 2499 "parse.tab.c"
    break;

  case 114:
#line 357 "parse.y"
    { (yyval.fExpr) = MakeArrayExpr((yyvsp[-3].fSymbol), (yyvsp[-4].fLocation), (yyvsp[-1].fExpr)); }
#line 2505 "parse.tab.c"
    break;

  case 115:
#line 358 "parse.y"
    { (yyval.fExpr) = MakeValueExpr((yyvsp[0].fExpr)); }
#line 2511 "parse.tab.c"
    break;

  case 116:
#line 360 "parse.y"
    { (yyval.fExpr) = MakeIncDecExpr((yyvsp[-1].fExpr), (yyvsp[0].fInt), false, (yyvsp[-1].fExpr)->GetLoc()); }
#line 2517 "parse.tab.c"
    break;

  case 117:
#line 361 "parse.y"
    { (yyval.fExpr) = MakeIncDecExpr((yyvsp[0].fExpr), (yyvsp[-1].fInt), true, (yyvsp[0].fExpr)->GetLoc()); }
#line 2523 "parse.tab.c"
    break;

  case 118:
#line 363 "parse.y"
    { (yyval.fExpr) = new SensorExpr((yyvsp[-1].fExpr)); }
#line 2529 "parse.tab.c"
    break;

  case 119:
#line 364 "parse.y"
    { (yyval.fExpr) = new TypeExpr((yyvsp[-1].fExpr)); }
#line 2535 "parse.tab.c"
    break;

  case 120:
#line 365 "parse.y"
    { (yyval.fExpr) = new EventSrcExpr((yyvsp[-1].fExpr), gProgram->GetTarget()->fType); }
#line 2541 "parse.tab.c"
    break;

  case 121:
#line 366 "parse.y"
    { (yyval.fExpr) = MakeTaskIdExpr((yyvsp[-1].fLocation)); }
#line 2547 "parse.tab.c"
    break;

  case 122:
#line 367 "parse.y"
    { (yyval.fExpr) = MakeIndirectExpr((yyvsp[-4].fExpr), (yyvsp[-1].fExpr)); }
#line 2553 "parse.tab.c"
    break;

  case 123:
#line 368 "parse.y"
    { (yyval.fExpr) = new TernaryExpr((yyvsp[-4].fExpr), (yyvsp[-2].fExpr), (yyvsp[0].fExpr)); }
#line 2559 "parse.tab.c"
    break;

  case 124:
#line 369 "parse.y"
    { (yyval.fExpr) = MakeAddrOfExpr((yyvsp[0].fSymbol), (yyvsp[-2].fLocation), (Expr *)0); }
#line 2565 "parse.tab.c"
    break;

  case 125:
#line 370 "parse.y"
    { (yyval.fExpr) = MakeAddrOfExpr((yyvsp[-3].fSymbol), (yyvsp[-5].fLocation), (yyvsp[-1].fExpr)); }
#line 2571 "parse.tab.c"
    break;

  case 126:
#line 371 "parse.y"
    { (yyval.fExpr) = MakeDerefExpr((yyvsp[0].fSymbol), (yyvsp[-2].fLocation)); }
#line 2577 "parse.tab.c"
    break;

  case 127:
#line 374 "parse.y"
    { LexCurrentLocation(sSavedLoc); }
#line 2583 "parse.tab.c"
    break;

  case 128:
#line 377 "parse.y"
    { (yyval.fLocation) = new LocationNode(); }
#line 2589 "parse.tab.c"
    break;

  case 129:
#line 380 "parse.y"
    { (yyval.fAsmStmt) = (yyvsp[-2].fAsmStmt); (yyvsp[-2].fAsmStmt)->Add((yyvsp[0].fField)); }
#line 2595 "parse.tab.c"
    break;

  case 130:
#line 381 "parse.y"
    { (yyval.fAsmStmt) = new AsmStmt(); (yyval.fAsmStmt)->Add((yyvsp[0].fField)); }
#line 2601 "parse.tab.c"
    break;

  case 131:
#line 382 "parse.y"
    { (yyval.fAsmStmt) = new AsmStmt(); }
#line 2607 "parse.tab.c"
    break;

  case 132:
#line 386 "parse.y"
    { (yyval.fField) = MakeConstField((yyvsp[0].fExpr)); }
#line 2613 "parse.tab.c"
    break;

  case 133:
#line 387 "parse.y"
    { (yyval.fField) = new EAField((yyvsp[0].fExpr)); }
#line 2619 "parse.tab.c"
    break;

  case 134:
#line 388 "parse.y"
    { (yyval.fField) = new EAField((yyvsp[-2].fExpr), GetConstantValue((yyvsp[0].fExpr))); }
#line 2625 "parse.tab.c"
    break;

  case 135:
#line 392 "parse.y"
    { (yyval.fResource)=(yyvsp[-1].fResource); (yyvsp[-1].fResource)->SetInfo((RCX_ChunkType)GetConstantValue((yyvsp[-4].fExpr)), (yyvsp[-3].fSymbol)); }
#line 2631 "parse.tab.c"
    break;

  case 136:
#line 395 "parse.y"
    { (yyval.fResource) = (yyvsp[-2].fResource); (yyvsp[-2].fResource)->Add((yyvsp[0].fInt)); }
#line 2637 "parse.tab.c"
    break;

  case 137:
#line 396 "parse.y"
    { (yyval.fResource) = new Resource(); (yyval.fResource)->Add((yyvsp[0].fInt)); }
#line 2643 "parse.tab.c"
    break;

  case 138:
#line 397 "parse.y"
    { (yyval.fResource) = new Resource(); }
#line 2649 "parse.tab.c"
    break;

  case 139:
#line 400 "parse.y"
    { (yyval.fInt) = GetConstantValue((yyvsp[0].fExpr)); }
#line 2655 "parse.tab.c"
    break;


#line 2659 "parse.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 404 "parse.y"



void yyerror(const char *msg)
{
	Error(kErr_Parser, msg).RaiseLex();
}

