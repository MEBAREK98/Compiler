
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxique.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct qdr qdr;
struct qdr{

    char oper[100]; 
    char op1[100];   
    char op2[100];   
    char res[100];  
    qdr *svt;
  };
  

extern int cpt;
int nbligne=0;
int nbcolonne;
int qc=0;
char* s;
int nb_res_max=0,nb_res_maxp=0;
int r,b;
int res [20],resp[20];
char tmp[20],tmp3[20],tmp4[20],tmp5[20];
char* tmp1,tmp2;
qdr *tete=NULL;




/* Line 189 of yacc.c  */
#line 106 "syntaxique.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_prg = 258,
     id = 259,
     bib_tab = 260,
     bib_boucle = 261,
     bib_calcul = 262,
     mc_reel = 263,
     pt = 264,
     mc_cst = 265,
     mc_wh = 266,
     crf = 267,
     dps = 268,
     nbr = 269,
     affct = 270,
     inf = 271,
     aco_f = 272,
     aco_o = 273,
     sup = 274,
     def = 275,
     egal = 276,
     et_l = 277,
     mc_exe = 278,
     mc_if = 279,
     cro = 280,
     mc_integer = 281,
     PAR_f = 282,
     PAR_o = 283,
     sp_2b = 284,
     plus = 285,
     diiv = 286,
     moins = 287,
     fois = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 32 "syntaxique.y"

	int num;
	char* str;
struct s{
	int val;
	char* chaine;
}s;



/* Line 214 of yacc.c  */
#line 186 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "syntaxique.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     5,     2,     6,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    14,    17,    20,    21,    24,    25,
      30,    36,    41,    43,    45,    49,    51,    55,    57,    61,
      65,    67,    71,    76,    80,    82,    86,    90,    94,    98,
     102,   106,   110,   114,   118,   122,   126,   130,   134,   138,
     141,   144,   147,   150,   153,   156,   161,   165,   169,   171,
     175,   179,   181,   185,   189,   193,   197,   201,   202,   205,
     214,   215,   218,   221,   224,   225,   229,   232,   233,   236,
     241,   246,   251,   256,   262,   268,   274,   280,   286,   292,
     298,   304,   307,   312,   320
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      38,     0,    -1,    39,     3,     4,     5,    40,    60,     6,
      -1,     7,    39,    -1,     8,    39,    -1,     9,    39,    -1,
      -1,    41,    40,    -1,    -1,    42,    15,    43,    36,    -1,
      12,    42,    15,    44,    36,    -1,    42,    15,    48,    36,
      -1,    28,    -1,    10,    -1,     4,    31,    43,    -1,     4,
      -1,    45,    31,    44,    -1,    45,    -1,     4,    17,     4,
      -1,     4,    17,    46,    -1,    16,    -1,    16,    11,    16,
      -1,     4,    27,    16,    14,    -1,    47,    31,    48,    -1,
      47,    -1,     4,    17,    54,    -1,     4,    17,    46,    -1,
       4,    17,    53,    -1,     4,    17,    50,    -1,    53,    17,
       4,    -1,    53,    17,    50,    -1,    53,    17,    53,    -1,
      53,    17,    47,    -1,    47,    17,    50,    -1,    47,    17,
       4,    -1,    47,    17,    53,    -1,    47,    17,    47,    -1,
      30,    52,    29,    -1,    30,    51,    29,    -1,    32,    46,
      -1,    34,    46,    -1,     4,    56,    -1,    46,    56,    -1,
      47,    56,    -1,    53,    56,    -1,     4,    27,     4,    14,
      -1,    54,    32,    55,    -1,    54,    34,    55,    -1,    55,
      -1,    55,    35,    46,    -1,    55,    33,    46,    -1,    46,
      -1,    54,    46,    56,    -1,    54,     4,    56,    -1,    54,
      47,    56,    -1,    54,    53,    56,    -1,    54,    50,    56,
      -1,    -1,    49,    36,    -1,    13,    30,    59,    62,    29,
       5,    60,     6,    -1,    -1,    57,    60,    -1,    58,    60,
      -1,    63,    60,    -1,    -1,    24,    24,    62,    -1,    31,
      62,    -1,    -1,    46,    61,    -1,     4,    21,     4,    61,
      -1,     4,    21,    46,    61,    -1,     4,    18,     4,    61,
      -1,     4,    18,    46,    61,    -1,     4,    21,    23,    46,
      61,    -1,     4,    21,    23,     4,    61,    -1,     4,    18,
      23,     4,    61,    -1,     4,    18,    23,    46,    61,    -1,
       4,    23,    23,     4,    61,    -1,     4,    23,    23,    46,
      61,    -1,     4,    22,    23,     4,    61,    -1,     4,    22,
      23,    46,    61,    -1,    22,    62,    -1,    30,    62,    29,
      61,    -1,    25,    64,    60,    26,    30,    62,    29,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    55,    56,    57,    58,    60,    61,    63,
      64,    65,    69,    70,    72,    73,    75,    76,    78,    79,
      82,    83,    85,    87,    88,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   129,   130,   132,
     133,   136,   137,   138,   139,   143,   145,   207,   257,   259,
     297,   335,   337,   338,   339,   340,   341,   342,   344,   346,
     349,   351,   352,   353,   354,   357,   358,   359,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   380,   382
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_prg", "id", "'{'", "'}'", "bib_tab",
  "bib_boucle", "bib_calcul", "mc_reel", "pt", "mc_cst", "mc_wh", "crf",
  "dps", "nbr", "affct", "inf", "aco_f", "aco_o", "sup", "def", "egal",
  "et_l", "mc_exe", "mc_if", "cro", "mc_integer", "PAR_f", "PAR_o",
  "sp_2b", "plus", "diiv", "moins", "fois", "';'", "$accept", "S", "Bibl",
  "DEC", "DEC_Var", "TYPE", "LISTE_Var", "LISTE_cst", "AFF", "FLT", "TAB",
  "LISTE_tab", "INST", "PAR", "NBRS", "INS", "TABi", "OPP", "OPER", "IN",
  "AFFACTATION", "BOUCLE", "B", "INSTR", "CON", "COND", "CONDITION", "A", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   123,   125,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    39,    39,    40,    40,    41,
      41,    41,    42,    42,    43,    43,    44,    44,    45,    45,
      46,    46,    47,    48,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    50,    50,    51,
      51,    52,    52,    52,    52,    53,    54,    54,    54,    55,
      55,    55,    56,    56,    56,    56,    56,    56,    57,    58,
      59,    60,    60,    60,    60,    61,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    63,    64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     2,     2,     0,     2,     0,     4,
       5,     4,     1,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     4,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     4,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     0,     2,     8,
       0,     2,     2,     2,     0,     3,     2,     0,     2,     4,
       4,     4,     4,     5,     5,     5,     5,     5,     5,     5,
       5,     2,     4,     7,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     6,     6,     6,     0,     0,     3,     4,     5,     1,
       0,     0,     8,    13,     0,    12,    64,     8,     0,     0,
       0,     0,    84,     0,     0,     0,    64,    64,     0,    64,
       7,     0,     0,     0,     0,    60,    64,     0,    58,     0,
      61,    62,     2,    63,    15,     0,    24,     0,     0,     0,
      17,     0,    20,     0,    51,    28,    27,    25,    48,     0,
       0,     0,     0,    34,    36,    33,    35,    29,    32,    30,
      31,     0,     0,     9,     0,    11,     0,    10,     0,     0,
       0,    57,     0,     0,    57,    57,     0,     0,    57,     0,
       0,     0,     0,    45,    22,     0,     0,     0,    67,     0,
       0,    15,    14,     0,    23,    18,    19,    16,    21,    51,
       0,    41,    39,    40,    42,    43,    38,    37,    44,    46,
      47,    50,    49,     0,     0,     0,     0,    81,     0,     0,
       0,    68,     0,     0,    57,    57,    57,    57,    57,    67,
       0,    67,    67,     0,    67,     0,     0,    67,     0,    66,
      64,     0,    53,    52,    54,    56,    55,    71,    67,    67,
      72,    69,    67,    67,    70,    67,    67,    67,    67,    82,
      65,     0,    83,    75,    76,    74,    73,    79,    80,    77,
      78,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    16,    17,    18,    45,    49,    50,   109,
      23,    47,    24,    55,    86,    87,    25,   110,    58,   111,
      26,    27,    61,    28,   131,    99,    29,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -90
static const yytype_int16 yypact[] =
{
     129,   129,   129,   129,     4,    37,   -90,   -90,   -90,   -90,
      30,    52,    63,   -90,     9,   -90,    59,    63,    66,    79,
      70,    88,   -90,    87,    89,   126,    59,    59,   139,    59,
     -90,   142,   143,    23,    19,   -90,    59,    12,   -90,    25,
     -90,   -90,   -90,   -90,    69,   112,   118,   114,   134,   116,
     122,   127,   144,    22,   120,   -90,   -90,    -1,   109,   145,
     146,    58,   131,   135,   -90,   -90,   -90,   135,   -90,   -90,
     -90,   147,   154,   -90,   157,   -90,    73,   -90,   143,   160,
     149,    31,   150,   150,   150,   150,   140,   141,   150,   150,
     150,   150,   150,   -90,   -90,    98,    58,    58,   104,   148,
     137,   151,   -90,   152,   -90,   -90,   -90,   -90,   -90,   -90,
      16,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   109,
     109,   -90,   -90,    20,    60,   153,   155,   -90,   156,   159,
      58,   -90,   163,    58,    31,   150,   150,   150,   150,   104,
      74,   104,   104,    91,   104,    94,    97,   104,    58,   -90,
      59,   158,   -90,   -90,   -90,   -90,   -90,   -90,   104,   104,
     -90,   -90,   104,   104,   -90,   104,   104,   104,   104,   -90,
     -90,   165,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   138,   164,   -90,   161,   100,    95,   -90,   -31,
     -25,   106,   -90,   -24,   -90,   -90,   -28,   162,    44,   -67,
     -90,   -90,   -90,   -26,   -36,   -89,   -90,   -90
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -27
static const yytype_int16 yytable[] =
{
      40,    41,    54,    43,     9,    56,    46,   127,   128,    66,
      62,    70,    64,    65,    68,    69,    63,   114,   115,    13,
     134,   118,    84,    59,   139,    88,    81,    51,    85,    67,
      98,    89,    52,    90,    11,    60,    52,    15,    52,    52,
      10,   149,    53,   140,   151,   106,    53,    52,    89,    46,
      90,   112,   113,    53,    82,    53,    83,    12,    34,   170,
     121,   122,    95,    20,   142,    98,    98,   152,   153,   154,
     155,   156,    21,    13,    52,    14,    52,   105,   158,   135,
      96,    31,   138,   143,    22,   136,   137,    33,    97,    52,
      52,    15,   141,   144,    32,   162,    71,    34,   165,    98,
      72,   167,    98,   157,    37,   160,   161,    52,   164,   159,
      52,   169,   163,    52,   166,   168,   123,    98,    35,   124,
     125,   126,   173,   174,   171,    38,   175,   176,   129,   177,
     178,   179,   180,   119,   120,   130,     1,     2,     3,     6,
       7,     8,    91,    39,    92,    42,    44,    48,    73,    74,
      75,    76,    77,    78,    79,    80,   -26,   100,   101,    93,
      94,   103,    34,    60,    59,   108,    52,   133,   150,   116,
     117,   181,   102,   107,     0,    19,   145,   132,   146,    71,
     104,    30,    72,   148,     0,   147,     0,   172,     0,     0,
       0,     0,     0,     0,     0,    57
};

static const yytype_int16 yycheck[] =
{
      26,    27,    33,    29,     0,    33,    31,    96,    97,    37,
      36,    39,    37,    37,    39,    39,     4,    84,    85,    10,
       4,    88,    53,     4,     4,    53,     4,     4,    53,     4,
      61,    32,    16,    34,     4,    16,    16,    28,    16,    16,
       3,   130,    30,    23,   133,    76,    30,    16,    32,    74,
      34,    82,    83,    30,    32,    30,    34,     5,    27,   148,
      91,    92,     4,     4,     4,    96,    97,   134,   135,   136,
     137,   138,    13,    10,    16,    12,    16,     4,     4,   110,
      22,    15,   110,    23,    25,   110,   110,    17,    30,    16,
      16,    28,   123,   124,    15,     4,    27,    27,     4,   130,
      31,     4,   133,   139,    17,   141,   142,    16,   144,   140,
      16,   147,   143,    16,   145,   146,    18,   148,    30,    21,
      22,    23,   158,   159,   150,    36,   162,   163,    24,   165,
     166,   167,   168,    89,    90,    31,     7,     8,     9,     1,
       2,     3,    33,    17,    35,     6,     4,     4,    36,    31,
      36,    17,    36,    31,    27,    11,    36,    26,     4,    14,
      14,     4,    27,    16,     4,    16,    16,    30,     5,    29,
      29,     6,    72,    78,    -1,    14,    23,    29,    23,    27,
      74,    17,    31,    24,    -1,    29,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    38,    39,    39,    39,    39,     0,
       3,     4,     5,    10,    12,    28,    40,    41,    42,    42,
       4,    13,    25,    47,    49,    53,    57,    58,    60,    63,
      40,    15,    15,    17,    27,    30,    64,    17,    36,    17,
      60,    60,     6,    60,     4,    43,    47,    48,     4,    44,
      45,     4,    16,    30,    46,    50,    53,    54,    55,     4,
      16,    59,    60,     4,    47,    50,    53,     4,    47,    50,
      53,    27,    31,    36,    31,    36,    17,    36,    31,    27,
      11,     4,    32,    34,    46,    47,    51,    52,    53,    32,
      34,    33,    35,    14,    14,     4,    22,    30,    46,    62,
      26,     4,    43,     4,    48,     4,    46,    44,    16,    46,
      54,    56,    46,    46,    56,    56,    29,    29,    56,    55,
      55,    46,    46,    18,    21,    22,    23,    62,    62,    24,
      31,    61,    29,    30,     4,    46,    47,    50,    53,     4,
      23,    46,     4,    23,    46,    23,    23,    29,    24,    62,
       5,    62,    56,    56,    56,    56,    56,    61,     4,    46,
      61,    61,     4,    46,    61,     4,    46,     4,    46,    61,
      62,    60,    29,    61,    61,    61,    61,    61,    61,    61,
      61,     6
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 53 "syntaxique.y"
    {printf("Programme correct \n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 82 "syntaxique.y"
    { sprintf(tmp,"%s%d","",(yyvsp[(1) - (1)].num));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 110 "syntaxique.y"
    {if(tete!=NULL){quadr(":=",tete->res,"",(yyvsp[(1) - (3)].str));};}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 111 "syntaxique.y"
    {quadr(":=",tmp,"",(yyvsp[(1) - (3)].str));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 112 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].s).chaine,"",(yyvsp[(1) - (3)].str));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 113 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].s).chaine,"",(yyvsp[(1) - (3)].str));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 114 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].s).chaine);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 115 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].s).chaine,"",(yyvsp[(1) - (3)].s).chaine);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 116 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].s).chaine,"",(yyvsp[(1) - (3)].s).chaine);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 117 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].s).chaine,"",(yyvsp[(1) - (3)].s).chaine);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 118 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].s).chaine,"",(yyvsp[(1) - (3)].s).chaine);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 119 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].s).chaine);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 120 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].s).chaine,"",(yyvsp[(1) - (3)].s).chaine);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 121 "syntaxique.y"
    {quadr(":=",(yyvsp[(3) - (3)].s).chaine,"",(yyvsp[(1) - (3)].s).chaine);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 145 "syntaxique.y"
    {
									
									
									sprintf(tmp,"%s%d","",(yyvsp[(1) - (3)].s).val);
								  sprintf(tmp3,"%s%d","",(yyvsp[(3) - (3)].s).val);
								  if(nb_res_maxp==0){
								  if(nb_res_max==0){
									
									  r=operation(tmp,tmp3,"+");
									  nb_res_max++;
									
									  res[nb_res_max]=r;
									
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
								  
										//printf("je suis la %d",res[nb_res_max]);
								      quadr("+",tmp,tmp3,tmp4);
									  
								  }else{
									  
									  sprintf(tmp5,"%s%d","",res[nb_res_max]);
									  nb_res_max--;
									  r=operation(tmp5,tmp3,"+");
									  nb_res_max++;
									  res[nb_res_max]=r;
									  
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
									  
									  //printf("je suis la %d",res[nb_res_max]);
									  
									  quadr("+",tmp5,tmp3,tmp4);
									  
									  
								  }}else{
									  
									  
									//if(nb_res_max!=0){
									  sprintf(tmp5,"%s%d","",resp[nb_res_maxp]);
									  //sprintf(tmp3,"%s%d","",res[nb_res_max]);
									  nb_res_maxp--;
									  r=operation(tmp5,tmp3,"+");
									  
									  nb_res_max++;
									  res[nb_res_max]=r;
									  
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
									  printf("je suis la %s",tmp4);
									  
									  quadr("+",tmp5,tmp3,tmp4);
									  
									  
									
									
									}
									  
									  
									  
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 207 "syntaxique.y"
    {sprintf(tmp,"%s%d","",(yyvsp[(1) - (3)].s).val);
								  sprintf(tmp3,"%s%d","",(yyvsp[(3) - (3)].s).val);
								  if(nb_res_maxp==0){
								  if(nb_res_max==0){
									printf("je suis la %d");
									  r=operation(tmp,tmp3,"-");
									  nb_res_max++;
									
									  res[nb_res_max]=r;
									 // printf("\n\t%d",r);
									
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
								  
								  
								      quadr("-",tmp,tmp3,tmp4);
									  
								  }else{
									  
									  sprintf(tmp5,"%s%d","",res[nb_res_max]);
									  r=operation(tmp5,tmp3,"-");
									  nb_res_max++;
									  res[nb_res_max]=r;
									//  printf("\n\t%d",r);
									  
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
									  
									  quadr("-",tmp5,tmp3,tmp4);
									  
									  
								  }}else{
									  
									  
									if(nb_res_max!=0){
									  sprintf(tmp5,"%s%d","",resp[nb_res_maxp]);
									  sprintf(tmp3,"%s%d","",res[nb_res_max]);
									  r=operation(tmp3,tmp5,"-");
									 // printf("\n\t%d",r);
									  nb_res_max++;
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
									  
									  quadr("-",tmp3,tmp5,tmp4);
									  
									  
									}}
								   
								  
								  ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 259 "syntaxique.y"
    {
	
									
								  sprintf(tmp,"%s%d","",(yyvsp[(1) - (3)].s).val);
								  sprintf(tmp3,"%s%d","",(yyvsp[(3) - (3)].s).val);
								  
								  
								  
								  if(nb_res_maxp==0){
									  
									  
									  //if(nb_res_max!=0){
									  r=operation(tmp,tmp3,"*");
									  
									  nb_res_maxp++;
									  
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
								  
								  
								      quadr("*",tmp,tmp3,tmp4);
									  
								 }else{
									  
									  sprintf(tmp5,"%s%d","",resp[nb_res_maxp]);
									  r=operation(tmp5,tmp3,"*");
									  nb_res_maxp++;
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
									  quadr("*",tmp5,tmp3,tmp4);
									  
									  
								  }
								  
								  
								  ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 297 "syntaxique.y"
    {
								  sprintf(tmp,"%s%d","",(yyvsp[(1) - (3)].s).val);
								  sprintf(tmp3,"%s%d","",(yyvsp[(3) - (3)].s).val);
								  
								  
								  
								  if(nb_res_maxp==0){
									  
									  
									  //if(nb_res_max!=0){
									  r=operation(tmp,tmp3,"/");
									  
									  nb_res_maxp++;
									  
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
								  
								  
								      quadr("/",tmp,tmp3,tmp4);
									  
								 }else{
									  
									  sprintf(tmp5,"%s%d","",resp[nb_res_maxp]);
									  nb_res_maxp--;
									  r=operation(tmp5,tmp3,"/");
									  nb_res_maxp++;
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
									  quadr("/",tmp5,tmp3,tmp4);
									  
									  
								  }
								  
								  
								  
								  ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 337 "syntaxique.y"
    { ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 346 "syntaxique.y"
    {b=0;printf("%dC\t\n",b);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 349 "syntaxique.y"
    {b=1;printf("%dB\t\n",b);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 352 "syntaxique.y"
    {printf("WHILE\n");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 372 "syntaxique.y"
    {printf("%dA\n",b);if(b==0){quadr("BE",(yyvsp[(1) - (5)].str),tmp,"2");int p=qc;p--;sprintf(tmp,"%s%d","",qc);ajour_quad(p, 1 , tmp);}else{quadr("BNE",(yyvsp[(1) - (5)].str),tmp,"2");quadr("BR","","","");};}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 382 "syntaxique.y"
    {quadr("BR","","","");;}
    break;



/* Line 1455 of yacc.c  */
#line 1894 "syntaxique.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 385 "syntaxique.y"

int yyerror(char*msg)
{
printf("\nErreur syntaxique à la ligne %d\n", nbligne);
return 1;}

int main()
{

yyparse();
//afficher();
afficher_qdr();

return 0;

}





