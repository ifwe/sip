/* A Bison parser, made by GNU Bison 1.875d.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_OPTIONS = 258,
     TK_NOEMITTERS = 259,
     TK_DOC = 260,
     TK_EXPORTEDDOC = 261,
     TK_MAKEFILE = 262,
     TK_ACCESSCODE = 263,
     TK_GETCODE = 264,
     TK_SETCODE = 265,
     TK_PREINITCODE = 266,
     TK_POSTINITCODE = 267,
     TK_UNITCODE = 268,
     TK_MODCODE = 269,
     TK_TYPECODE = 270,
     TK_PREPYCODE = 271,
     TK_COPYING = 272,
     TK_MAPPEDTYPE = 273,
     TK_CODELINE = 274,
     TK_IF = 275,
     TK_END = 276,
     TK_NAME = 277,
     TK_PATHNAME = 278,
     TK_STRING = 279,
     TK_VIRTUALCATCHERCODE = 280,
     TK_TRAVERSECODE = 281,
     TK_CLEARCODE = 282,
     TK_READBUFFERCODE = 283,
     TK_WRITEBUFFERCODE = 284,
     TK_SEGCOUNTCODE = 285,
     TK_CHARBUFFERCODE = 286,
     TK_PICKLECODE = 287,
     TK_METHODCODE = 288,
     TK_FROMTYPE = 289,
     TK_TOTYPE = 290,
     TK_TOSUBCLASS = 291,
     TK_INCLUDE = 292,
     TK_OPTINCLUDE = 293,
     TK_IMPORT = 294,
     TK_EXPHEADERCODE = 295,
     TK_MODHEADERCODE = 296,
     TK_TYPEHEADERCODE = 297,
     TK_MODULE = 298,
     TK_CMODULE = 299,
     TK_CONSMODULE = 300,
     TK_COMPOMODULE = 301,
     TK_CLASS = 302,
     TK_STRUCT = 303,
     TK_PUBLIC = 304,
     TK_PROTECTED = 305,
     TK_PRIVATE = 306,
     TK_SIGNALS = 307,
     TK_SLOTS = 308,
     TK_BOOL = 309,
     TK_SHORT = 310,
     TK_INT = 311,
     TK_LONG = 312,
     TK_FLOAT = 313,
     TK_DOUBLE = 314,
     TK_CHAR = 315,
     TK_WCHAR_T = 316,
     TK_VOID = 317,
     TK_PYOBJECT = 318,
     TK_PYTUPLE = 319,
     TK_PYLIST = 320,
     TK_PYDICT = 321,
     TK_PYCALLABLE = 322,
     TK_PYSLICE = 323,
     TK_PYTYPE = 324,
     TK_VIRTUAL = 325,
     TK_ENUM = 326,
     TK_SIGNED = 327,
     TK_UNSIGNED = 328,
     TK_SCOPE = 329,
     TK_LOGICAL_OR = 330,
     TK_CONST = 331,
     TK_STATIC = 332,
     TK_SIPSIGNAL = 333,
     TK_SIPSLOT = 334,
     TK_SIPANYSLOT = 335,
     TK_SIPRXCON = 336,
     TK_SIPRXDIS = 337,
     TK_SIPSLOTCON = 338,
     TK_SIPSLOTDIS = 339,
     TK_NUMBER = 340,
     TK_REAL = 341,
     TK_TYPEDEF = 342,
     TK_NAMESPACE = 343,
     TK_TIMELINE = 344,
     TK_PLATFORMS = 345,
     TK_FEATURE = 346,
     TK_LICENSE = 347,
     TK_QCHAR = 348,
     TK_TRUE = 349,
     TK_FALSE = 350,
     TK_NULL = 351,
     TK_OPERATOR = 352,
     TK_THROW = 353,
     TK_QOBJECT = 354,
     TK_EXCEPTION = 355,
     TK_RAISECODE = 356,
     TK_EXPLICIT = 357,
     TK_TEMPLATE = 358,
     TK_ELLIPSIS = 359
   };
#endif
#define TK_OPTIONS 258
#define TK_NOEMITTERS 259
#define TK_DOC 260
#define TK_EXPORTEDDOC 261
#define TK_MAKEFILE 262
#define TK_ACCESSCODE 263
#define TK_GETCODE 264
#define TK_SETCODE 265
#define TK_PREINITCODE 266
#define TK_POSTINITCODE 267
#define TK_UNITCODE 268
#define TK_MODCODE 269
#define TK_TYPECODE 270
#define TK_PREPYCODE 271
#define TK_COPYING 272
#define TK_MAPPEDTYPE 273
#define TK_CODELINE 274
#define TK_IF 275
#define TK_END 276
#define TK_NAME 277
#define TK_PATHNAME 278
#define TK_STRING 279
#define TK_VIRTUALCATCHERCODE 280
#define TK_TRAVERSECODE 281
#define TK_CLEARCODE 282
#define TK_READBUFFERCODE 283
#define TK_WRITEBUFFERCODE 284
#define TK_SEGCOUNTCODE 285
#define TK_CHARBUFFERCODE 286
#define TK_PICKLECODE 287
#define TK_METHODCODE 288
#define TK_FROMTYPE 289
#define TK_TOTYPE 290
#define TK_TOSUBCLASS 291
#define TK_INCLUDE 292
#define TK_OPTINCLUDE 293
#define TK_IMPORT 294
#define TK_EXPHEADERCODE 295
#define TK_MODHEADERCODE 296
#define TK_TYPEHEADERCODE 297
#define TK_MODULE 298
#define TK_CMODULE 299
#define TK_CONSMODULE 300
#define TK_COMPOMODULE 301
#define TK_CLASS 302
#define TK_STRUCT 303
#define TK_PUBLIC 304
#define TK_PROTECTED 305
#define TK_PRIVATE 306
#define TK_SIGNALS 307
#define TK_SLOTS 308
#define TK_BOOL 309
#define TK_SHORT 310
#define TK_INT 311
#define TK_LONG 312
#define TK_FLOAT 313
#define TK_DOUBLE 314
#define TK_CHAR 315
#define TK_WCHAR_T 316
#define TK_VOID 317
#define TK_PYOBJECT 318
#define TK_PYTUPLE 319
#define TK_PYLIST 320
#define TK_PYDICT 321
#define TK_PYCALLABLE 322
#define TK_PYSLICE 323
#define TK_PYTYPE 324
#define TK_VIRTUAL 325
#define TK_ENUM 326
#define TK_SIGNED 327
#define TK_UNSIGNED 328
#define TK_SCOPE 329
#define TK_LOGICAL_OR 330
#define TK_CONST 331
#define TK_STATIC 332
#define TK_SIPSIGNAL 333
#define TK_SIPSLOT 334
#define TK_SIPANYSLOT 335
#define TK_SIPRXCON 336
#define TK_SIPRXDIS 337
#define TK_SIPSLOTCON 338
#define TK_SIPSLOTDIS 339
#define TK_NUMBER 340
#define TK_REAL 341
#define TK_TYPEDEF 342
#define TK_NAMESPACE 343
#define TK_TIMELINE 344
#define TK_PLATFORMS 345
#define TK_FEATURE 346
#define TK_LICENSE 347
#define TK_QCHAR 348
#define TK_TRUE 349
#define TK_FALSE 350
#define TK_NULL 351
#define TK_OPERATOR 352
#define TK_THROW 353
#define TK_QOBJECT 354
#define TK_EXCEPTION 355
#define TK_RAISECODE 356
#define TK_EXPLICIT 357
#define TK_TEMPLATE 358
#define TK_ELLIPSIS 359




/* Copy the first part of user declarations.  */
#line 15 "parser.y"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "sip.h"


#define MAX_NESTED_IF       10
#define MAX_NESTED_SCOPE    10

#define inMainModule()      (currentSpec->module == currentModule || currentModule->container != NULL)


static sipSpec *currentSpec;            /* The current spec being parsed. */
static stringList *neededQualifiers;    /* The list of required qualifiers. */
static stringList *excludedQualifiers;  /* The list of excluded qualifiers. */
static moduleDef *currentModule;        /* The current module being parsed. */
static mappedTypeDef *currentMappedType;    /* The current mapped type. */
static enumDef *currentEnum;            /* The current enum being parsed. */
static int sectionFlags;                /* The current section flags. */
static int currentOverIsVirt;           /* Set if the overload is virtual. */
static int currentCtorIsExplicit;       /* Set if the ctor is explicit. */
static int currentIsStatic;             /* Set if the current is static. */
static int currentIsTemplate;           /* Set if the current is a template. */
static char *previousFile;              /* The file just parsed. */
static parserContext currentContext;    /* The current context. */
static int skipStackPtr;                /* The skip stack pointer. */
static int skipStack[MAX_NESTED_IF];    /* Stack of skip flags. */
static classDef *scopeStack[MAX_NESTED_SCOPE];  /* The scope stack. */
static int sectFlagsStack[MAX_NESTED_SCOPE];    /* The section flags stack. */
static int currentScopeIdx;             /* The scope stack index. */
static int currentTimelineOrder;        /* The current timeline order. */


static const char *getPythonName(optFlags *optflgs, const char *cname);
static classDef *findClass(sipSpec *,ifaceFileType,scopedNameDef *);
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff);
static classDef *newClass(sipSpec *,ifaceFileType,scopedNameDef *);
static void finishClass(sipSpec *,moduleDef *,classDef *,optFlags *);
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new);
static mappedTypeDef *newMappedType(sipSpec *,argDef *, optFlags *);
static enumDef *newEnum(sipSpec *,moduleDef *,char *,optFlags *,int);
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod, classDef *scope, scopedNameDef *fqname, classTmplDef *tcd, templateDef *td);
static void newTypedef(sipSpec *,moduleDef *,char *,argDef *);
static void newVar(sipSpec *, moduleDef *, char *, int, argDef *, optFlags *,
        codeBlock *, codeBlock *, codeBlock *);
static void newCtor(char *, int, signatureDef *, optFlags *, codeBlock *,
        throwArgs *, signatureDef *, int);
static void newFunction(sipSpec *, moduleDef *, int, int, int, char *,
        signatureDef *, int, int, optFlags *, codeBlock *, codeBlock *,
        throwArgs *, signatureDef *);
static optFlag *findOptFlag(optFlags *,char *,flagType);
static memberDef *findFunction(sipSpec *, moduleDef *, classDef *,
        const char *, int, int, int);
static void checkAttributes(sipSpec *, moduleDef *, classDef *, const char *,
        int);
static void newModule(FILE *fp, char *filename);
static moduleDef *allocModule();
static void parseFile(FILE *fp, char *name, moduleDef *prevmod, int optional);
static void handleEOF(void);
static void handleEOM(void);
static qualDef *findQualifier(char *);
static scopedNameDef *text2scopedName(char *);
static scopedNameDef *scopeScopedName(scopedNameDef *name);
static void pushScope(classDef *);
static void popScope(void);
static classDef *currentScope(void);
static void newQualifier(moduleDef *,int,int,char *,qualType);
static void newImport(char *filename);
static int timePeriod(char *,char *);
static int platOrFeature(char *,int);
static int isNeeded(qualDef *);
static int notSkipping(void);
static void getHooks(optFlags *,char **,char **);
static int getTransfer(optFlags *);
static int getReleaseGIL(optFlags *);
static int getHoldGIL(optFlags *);
static void templateSignature(signatureDef *sd, int result, classTmplDef *tcd, templateDef *td, classDef *ncd);
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td, classDef *ncd);
static int search_back(const char *end, const char *start, const char *target);
static char *getType(scopedNameDef *ename, argDef *ad);
static char *scopedNameToString(scopedNameDef *name);
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname);
static int sameName(scopedNameDef *snd, const char *sname);
static int optFind(sipSpec *pt, const char *opt);
static void setModuleName(moduleDef *mod, const char *fullname);
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name);


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 105 "parser.y"
typedef union YYSTYPE {
    char            qchar;
    char            *text;
    long            number;
    double          real;
    argDef          memArg;
    signatureDef    signature;
    signatureDef    *optsignature;
    throwArgs       *throwlist;
    codeBlock       *codeb;
    valueDef        value;
    valueDef        *valp;
    optFlags        optflags;
    optFlag         flag;
    scopedNameDef   *scpvalp;
    fcallDef        fcall;
    int             boolean;
    exceptionDef    exceptionbase;
    classDef        *klass;
} YYSTYPE;
/* Line 186 of yacc.c.  */
#line 395 "parser.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 407 "parser.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1113

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  138
/* YYNRULES -- Number of rules. */
#define YYNRULES  346
/* YYNRULES -- Number of states. */
#define YYNSTATES  581

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   359

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,     2,     2,     2,   125,   117,     2,
     105,   106,   115,   114,   107,   112,     2,   116,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   122,   110,
     120,   113,   121,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   123,     2,   124,   126,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,   118,   109,   119,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    93,    95,    99,   101,   111,
     112,   116,   119,   120,   126,   127,   133,   138,   140,   143,
     145,   148,   151,   152,   160,   162,   165,   166,   172,   174,
     177,   179,   182,   183,   189,   191,   194,   196,   201,   203,
     206,   210,   215,   217,   221,   223,   226,   229,   232,   236,
     238,   240,   242,   244,   245,   247,   250,   253,   256,   257,
     260,   261,   264,   265,   268,   271,   274,   277,   280,   281,
     283,   286,   289,   292,   295,   298,   301,   304,   307,   310,
     313,   316,   319,   322,   325,   328,   333,   336,   338,   341,
     342,   351,   352,   354,   355,   357,   358,   360,   362,   365,
     367,   369,   374,   375,   377,   378,   381,   382,   385,   387,
     391,   393,   395,   397,   399,   401,   403,   404,   406,   408,
     410,   412,   415,   417,   421,   423,   425,   430,   432,   434,
     436,   438,   440,   442,   444,   445,   447,   451,   456,   467,
     468,   477,   478,   482,   487,   488,   496,   497,   500,   502,
     506,   508,   509,   513,   515,   518,   520,   522,   524,   526,
     528,   530,   532,   534,   536,   538,   540,   542,   544,   546,
     548,   550,   552,   554,   556,   558,   561,   564,   568,   572,
     576,   579,   580,   582,   594,   595,   599,   601,   611,   612,
     618,   619,   626,   627,   629,   643,   658,   672,   674,   676,
     678,   680,   682,   684,   686,   688,   691,   694,   697,   700,
     703,   706,   709,   712,   715,   718,   722,   726,   728,   731,
     734,   736,   739,   742,   745,   747,   750,   751,   753,   754,
     757,   758,   762,   764,   768,   770,   774,   776,   778,   780,
     781,   784,   785,   788,   790,   791,   793,   797,   802,   807,
     812,   816,   820,   827,   834,   838,   841,   842,   846,   848,
     850,   852,   853,   857,   859,   867,   872,   876,   880,   881,
     883,   884,   887,   889,   894,   897,   900,   902,   904,   907,
     909,   911,   914,   917,   921,   923,   925,   927,   930,   933,
     935,   937,   939,   941,   943,   945,   947,   949,   951,   953,
     955,   957,   961,   962,   967,   968,   970
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     128,     0,    -1,   129,    -1,   128,   129,    -1,    -1,   130,
     131,    -1,   165,    -1,   163,    -1,   164,    -1,   133,    -1,
     135,    -1,   175,    -1,   169,    -1,   170,    -1,   171,    -1,
     154,    -1,   149,    -1,   153,    -1,   162,    -1,   176,    -1,
     177,    -1,   187,    -1,   189,    -1,   190,    -1,   191,    -1,
     192,    -1,   193,    -1,   194,    -1,   195,    -1,   139,    -1,
     141,    -1,   132,    -1,   158,    -1,   161,    -1,   146,    -1,
     217,    -1,   222,    -1,   219,    -1,   136,    -1,   216,    -1,
     198,    -1,   238,    -1,   256,    -1,   178,    -1,     3,   105,
     134,   106,    -1,    22,    -1,   134,   107,    22,    -1,     4,
      -1,   100,   212,   137,   242,   108,   179,   138,   109,   110,
      -1,    -1,   105,   212,   106,    -1,   101,   196,    -1,    -1,
      18,   261,   242,   140,   143,    -1,    -1,   221,    18,   261,
     142,   143,    -1,   108,   144,   109,   110,    -1,   145,    -1,
     144,   145,    -1,   178,    -1,    34,   196,    -1,    35,   196,
      -1,    -1,    88,    22,   147,   108,   148,   109,   110,    -1,
     132,    -1,   148,   132,    -1,    -1,    90,   150,   108,   151,
     109,    -1,   152,    -1,   151,   152,    -1,    22,    -1,    91,
      22,    -1,    -1,    89,   155,   108,   156,   109,    -1,   157,
      -1,   156,   157,    -1,    22,    -1,    20,   105,   160,   106,
      -1,    22,    -1,   111,    22,    -1,   159,    75,    22,    -1,
     159,    75,   111,    22,    -1,   159,    -1,   201,   112,   201,
      -1,    21,    -1,    92,   242,    -1,    45,   167,    -1,    46,
     167,    -1,   166,   167,   168,    -1,    43,    -1,    44,    -1,
      22,    -1,    23,    -1,    -1,    85,    -1,    37,    23,    -1,
      38,    23,    -1,    39,    23,    -1,    -1,     8,   196,    -1,
      -1,     9,   196,    -1,    -1,    10,   196,    -1,    17,   196,
      -1,    40,   196,    -1,    41,   196,    -1,    42,   196,    -1,
      -1,   178,    -1,    26,   196,    -1,    27,   196,    -1,    28,
     196,    -1,    29,   196,    -1,    30,   196,    -1,    31,   196,
      -1,    32,   196,    -1,    14,   196,    -1,    15,   196,    -1,
      11,   196,    -1,    12,   196,    -1,    13,   196,    -1,    16,
     196,    -1,     5,   196,    -1,     6,   196,    -1,     7,    23,
     200,   196,    -1,   197,    21,    -1,    19,    -1,   197,    19,
      -1,    -1,    71,   201,   242,   199,   108,   202,   109,   110,
      -1,    -1,    23,    -1,    -1,    22,    -1,    -1,   203,    -1,
     204,    -1,   203,   204,    -1,   158,    -1,   161,    -1,    22,
     206,   242,   205,    -1,    -1,   107,    -1,    -1,   113,   211,
      -1,    -1,   113,   208,    -1,   211,    -1,   208,   209,   211,
      -1,   112,    -1,   114,    -1,   115,    -1,   116,    -1,   117,
      -1,   118,    -1,    -1,   111,    -1,   119,    -1,   112,    -1,
     114,    -1,   210,   214,    -1,   213,    -1,   212,    74,   213,
      -1,    22,    -1,   212,    -1,   261,   105,   215,   106,    -1,
      86,    -1,    85,    -1,    94,    -1,    95,    -1,    96,    -1,
      24,    -1,    93,    -1,    -1,   208,    -1,   215,   107,   208,
      -1,    87,   257,    22,   110,    -1,    87,   257,   105,   260,
      22,   106,   105,   262,   106,   110,    -1,    -1,    48,    22,
     218,   242,   108,   228,   109,   110,    -1,    -1,   221,   220,
     222,    -1,   103,   120,   262,   121,    -1,    -1,    47,   212,
     223,   224,   242,   227,   110,    -1,    -1,   122,   225,    -1,
     226,    -1,   225,   107,   226,    -1,   212,    -1,    -1,   108,
     228,   109,    -1,   229,    -1,   228,   229,    -1,   158,    -1,
     161,    -1,   146,    -1,   217,    -1,   222,    -1,   136,    -1,
     216,    -1,   198,    -1,   188,    -1,   178,    -1,   180,    -1,
     181,    -1,   182,    -1,   183,    -1,   184,    -1,   185,    -1,
     186,    -1,   232,    -1,   231,    -1,   251,    -1,    36,   196,
      -1,    35,   196,    -1,    49,   230,   122,    -1,    50,   230,
     122,    -1,    51,   230,   122,    -1,    52,   122,    -1,    -1,
      53,    -1,   237,   119,    22,   105,   106,   263,   241,   242,
     110,   246,   247,    -1,    -1,   102,   233,   234,    -1,   234,
      -1,    22,   105,   248,   106,   263,   242,   235,   110,   246,
      -1,    -1,   123,   105,   248,   106,   124,    -1,    -1,   123,
     257,   105,   248,   106,   124,    -1,    -1,    70,    -1,   257,
      22,   105,   248,   106,   240,   263,   241,   242,   236,   110,
     246,   247,    -1,   257,    97,   239,   105,   248,   106,   240,
     263,   241,   242,   236,   110,   246,   247,    -1,    97,   257,
     105,   248,   106,   240,   263,   241,   242,   236,   110,   246,
     247,    -1,   114,    -1,   112,    -1,   115,    -1,   116,    -1,
     125,    -1,   117,    -1,   118,    -1,   126,    -1,   120,   120,
      -1,   121,   121,    -1,   114,   113,    -1,   112,   113,    -1,
     115,   113,    -1,   116,   113,    -1,   125,   113,    -1,   117,
     113,    -1,   118,   113,    -1,   126,   113,    -1,   120,   120,
     113,    -1,   121,   121,   113,    -1,   119,    -1,   105,   106,
      -1,   123,   124,    -1,   120,    -1,   120,   113,    -1,   113,
     113,    -1,   111,   113,    -1,   121,    -1,   121,   113,    -1,
      -1,    76,    -1,    -1,   113,    85,    -1,    -1,   116,   243,
     116,    -1,   244,    -1,   243,   107,   244,    -1,    22,    -1,
      22,   113,   245,    -1,    22,    -1,    24,    -1,    85,    -1,
      -1,    33,   196,    -1,    -1,    25,   196,    -1,   249,    -1,
      -1,   250,    -1,   249,   107,   250,    -1,    78,   201,   242,
     207,    -1,    79,   201,   242,   207,    -1,    80,   201,   242,
     207,    -1,    81,   201,   242,    -1,    82,   201,   242,    -1,
      83,   105,   248,   106,   201,   242,    -1,    84,   105,   248,
     106,   201,   242,    -1,    99,   201,   242,    -1,   258,   207,
      -1,    -1,    77,   252,   253,    -1,   253,    -1,   254,    -1,
     256,    -1,    -1,    70,   255,   238,    -1,   238,    -1,   257,
      22,   242,   110,   172,   173,   174,    -1,    76,   261,   260,
     259,    -1,   261,   260,   259,    -1,   257,   201,   242,    -1,
      -1,   117,    -1,    -1,   260,   115,    -1,   212,    -1,   212,
     120,   262,   121,    -1,    48,   212,    -1,    73,    55,    -1,
      55,    -1,    73,    -1,    73,    56,    -1,    56,    -1,    57,
      -1,    73,    57,    -1,    57,    57,    -1,    73,    57,    57,
      -1,    58,    -1,    59,    -1,    54,    -1,    72,    60,    -1,
      73,    60,    -1,    60,    -1,    61,    -1,    62,    -1,    63,
      -1,    64,    -1,    65,    -1,    66,    -1,    67,    -1,    68,
      -1,    69,    -1,   104,    -1,   257,    -1,   262,   107,   257,
      -1,    -1,    98,   105,   264,   106,    -1,    -1,   212,    -1,
     264,   107,   212,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   295,   295,   296,   299,   299,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     335,   339,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   379,   382,   385,   390,   399,   434,
     438,   512,   517,   517,   523,   523,   568,   582,   583,   586,
     590,   599,   610,   610,   649,   650,   653,   653,   680,   681,
     684,   689,   694,   694,   719,   720,   723,   728,   741,   744,
     747,   750,   755,   756,   761,   767,   794,   807,   820,   853,
     856,   861,   862,   878,   881,   884,   889,   894,   899,   902,
     907,   910,   915,   918,   923,   928,   933,   938,   943,   946,
     949,   954,   959,   964,   969,   974,   979,   984,   989,   994,
    1000,  1006,  1012,  1021,  1027,  1032,  1038,  1041,  1042,  1053,
    1053,  1064,  1067,  1072,  1075,  1080,  1081,  1084,  1085,  1088,
    1089,  1090,  1123,  1124,  1127,  1128,  1131,  1134,  1139,  1140,
    1158,  1161,  1164,  1167,  1170,  1173,  1178,  1181,  1184,  1187,
    1190,  1195,  1213,  1214,  1222,  1227,  1237,  1247,  1251,  1255,
    1259,  1263,  1267,  1271,  1277,  1282,  1288,  1306,  1310,  1333,
    1333,  1353,  1353,  1380,  1385,  1385,  1434,  1435,  1438,  1439,
    1442,  1480,  1483,  1488,  1489,  1492,  1493,  1494,  1495,  1496,
    1497,  1498,  1499,  1500,  1504,  1508,  1519,  1530,  1541,  1552,
    1563,  1574,  1585,  1586,  1587,  1588,  1599,  1610,  1617,  1624,
    1631,  1640,  1643,  1648,  1697,  1697,  1698,  1701,  1727,  1730,
    1737,  1740,  1748,  1751,  1756,  1773,  1798,  1874,  1875,  1876,
    1877,  1878,  1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,
    1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,  1895,  1896,
    1897,  1898,  1899,  1900,  1901,  1902,  1905,  1908,  1913,  1916,
    1924,  1927,  1933,  1937,  1949,  1953,  1959,  1963,  1967,  1973,
    1976,  1981,  1984,  1989,  2037,  2042,  2048,  2075,  2084,  2093,
    2102,  2113,  2121,  2136,  2151,  2157,  2163,  2163,  2164,  2167,
    2168,  2171,  2171,  2172,  2175,  2208,  2214,  2222,  2282,  2285,
    2293,  2296,  2301,  2305,  2315,  2328,  2331,  2334,  2337,  2340,
    2343,  2346,  2349,  2352,  2355,  2358,  2361,  2364,  2367,  2370,
    2373,  2376,  2379,  2382,  2385,  2388,  2391,  2394,  2397,  2400,
    2405,  2411,  2427,  2430,  2438,  2444,  2451
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_OPTIONS", "TK_NOEMITTERS", "TK_DOC",
  "TK_EXPORTEDDOC", "TK_MAKEFILE", "TK_ACCESSCODE", "TK_GETCODE",
  "TK_SETCODE", "TK_PREINITCODE", "TK_POSTINITCODE", "TK_UNITCODE",
  "TK_MODCODE", "TK_TYPECODE", "TK_PREPYCODE", "TK_COPYING",
  "TK_MAPPEDTYPE", "TK_CODELINE", "TK_IF", "TK_END", "TK_NAME",
  "TK_PATHNAME", "TK_STRING", "TK_VIRTUALCATCHERCODE", "TK_TRAVERSECODE",
  "TK_CLEARCODE", "TK_READBUFFERCODE", "TK_WRITEBUFFERCODE",
  "TK_SEGCOUNTCODE", "TK_CHARBUFFERCODE", "TK_PICKLECODE", "TK_METHODCODE",
  "TK_FROMTYPE", "TK_TOTYPE", "TK_TOSUBCLASS", "TK_INCLUDE",
  "TK_OPTINCLUDE", "TK_IMPORT", "TK_EXPHEADERCODE", "TK_MODHEADERCODE",
  "TK_TYPEHEADERCODE", "TK_MODULE", "TK_CMODULE", "TK_CONSMODULE",
  "TK_COMPOMODULE", "TK_CLASS", "TK_STRUCT", "TK_PUBLIC", "TK_PROTECTED",
  "TK_PRIVATE", "TK_SIGNALS", "TK_SLOTS", "TK_BOOL", "TK_SHORT", "TK_INT",
  "TK_LONG", "TK_FLOAT", "TK_DOUBLE", "TK_CHAR", "TK_WCHAR_T", "TK_VOID",
  "TK_PYOBJECT", "TK_PYTUPLE", "TK_PYLIST", "TK_PYDICT", "TK_PYCALLABLE",
  "TK_PYSLICE", "TK_PYTYPE", "TK_VIRTUAL", "TK_ENUM", "TK_SIGNED",
  "TK_UNSIGNED", "TK_SCOPE", "TK_LOGICAL_OR", "TK_CONST", "TK_STATIC",
  "TK_SIPSIGNAL", "TK_SIPSLOT", "TK_SIPANYSLOT", "TK_SIPRXCON",
  "TK_SIPRXDIS", "TK_SIPSLOTCON", "TK_SIPSLOTDIS", "TK_NUMBER", "TK_REAL",
  "TK_TYPEDEF", "TK_NAMESPACE", "TK_TIMELINE", "TK_PLATFORMS",
  "TK_FEATURE", "TK_LICENSE", "TK_QCHAR", "TK_TRUE", "TK_FALSE", "TK_NULL",
  "TK_OPERATOR", "TK_THROW", "TK_QOBJECT", "TK_EXCEPTION", "TK_RAISECODE",
  "TK_EXPLICIT", "TK_TEMPLATE", "TK_ELLIPSIS", "'('", "')'", "','", "'{'",
  "'}'", "';'", "'!'", "'-'", "'='", "'+'", "'*'", "'/'", "'&'", "'|'",
  "'~'", "'<'", "'>'", "':'", "'['", "']'", "'%'", "'^'", "$accept",
  "specification", "statement", "@1", "modstatement", "nsstatement",
  "options", "optionlist", "noemitters", "exception", "baseexception",
  "raisecode", "mappedtype", "@2", "mappedtypetmpl", "@3", "mtdefinition",
  "mtbody", "mtline", "namespace", "@4", "nsbody", "platforms", "@5",
  "platformlist", "platform", "feature", "timeline", "@6", "qualifierlist",
  "qualifiername", "ifstart", "oredqualifiers", "qualifiers", "ifend",
  "license", "consmodule", "compmodule", "module", "modlang", "modname",
  "optnumber", "include", "optinclude", "import", "optaccesscode",
  "optgetcode", "optsetcode", "copying", "exphdrcode", "modhdrcode",
  "typehdrcode", "opttypehdrcode", "travcode", "clearcode", "readbufcode",
  "writebufcode", "segcountcode", "charbufcode", "picklecode", "modcode",
  "typecode", "preinitcode", "postinitcode", "unitcode", "prepycode",
  "doc", "exporteddoc", "makefile", "codeblock", "codelines", "enum", "@7",
  "optfilename", "optname", "optenumbody", "enumbody", "enumline",
  "optcomma", "optenumassign", "optassign", "expr", "binop", "optunop",
  "value", "scopedname", "scopepart", "simplevalue", "exprlist", "typedef",
  "struct", "@8", "classtmpl", "@9", "template", "class", "@10",
  "superclasses", "superlist", "superclass", "optclassbody", "classbody",
  "classline", "optslot", "dtor", "ctor", "@11", "simplector",
  "optctorsig", "optsig", "optvirtual", "function", "operatorname",
  "optconst", "optabstract", "optflags", "flaglist", "flag", "flagvalue",
  "methodcode", "virtualcatchercode", "arglist", "rawarglist", "argvalue",
  "varmember", "@12", "varmem", "member", "@13", "variable", "cpptype",
  "argtype", "optref", "deref", "basetype", "cpptypelist", "optexceptions",
  "exceptionlist", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,    40,    41,    44,   123,   125,
      59,    33,    45,    61,    43,    42,    47,    38,   124,   126,
      60,    62,    58,    91,    93,    37,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   127,   128,   128,   130,   129,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   133,   134,   134,   135,   136,   137,
     137,   138,   140,   139,   142,   141,   143,   144,   144,   145,
     145,   145,   147,   146,   148,   148,   150,   149,   151,   151,
     152,   153,   155,   154,   156,   156,   157,   158,   159,   159,
     159,   159,   160,   160,   161,   162,   163,   164,   165,   166,
     166,   167,   167,   168,   168,   169,   170,   171,   172,   172,
     173,   173,   174,   174,   175,   176,   177,   178,   179,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   197,   199,
     198,   200,   200,   201,   201,   202,   202,   203,   203,   204,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   209,   209,   209,   209,   210,   210,   210,   210,
     210,   211,   212,   212,   213,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   215,   215,   215,   216,   216,   218,
     217,   220,   219,   221,   223,   222,   224,   224,   225,   225,
     226,   227,   227,   228,   228,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   230,   230,   231,   233,   232,   232,   234,   235,   235,
     236,   236,   237,   237,   238,   238,   238,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   240,   240,   241,   241,
     242,   242,   243,   243,   244,   244,   245,   245,   245,   246,
     246,   247,   247,   248,   249,   249,   249,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   252,   251,   251,   253,
     253,   255,   254,   254,   256,   257,   257,   258,   259,   259,
     260,   260,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     262,   262,   263,   263,   264,   264,   264
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     1,     9,     0,
       3,     2,     0,     5,     0,     5,     4,     1,     2,     1,
       2,     2,     0,     7,     1,     2,     0,     5,     1,     2,
       1,     2,     0,     5,     1,     2,     1,     4,     1,     2,
       3,     4,     1,     3,     1,     2,     2,     2,     3,     1,
       1,     1,     1,     0,     1,     2,     2,     2,     0,     2,
       0,     2,     0,     2,     2,     2,     2,     2,     0,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     2,     1,     2,     0,
       8,     0,     1,     0,     1,     0,     1,     1,     2,     1,
       1,     4,     0,     1,     0,     2,     0,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     2,     1,     3,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     3,     4,    10,     0,
       8,     0,     3,     4,     0,     7,     0,     2,     1,     3,
       1,     0,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     3,
       2,     0,     1,    11,     0,     3,     1,     9,     0,     5,
       0,     6,     0,     1,    13,    14,    13,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     1,     2,     2,
       1,     2,     2,     2,     1,     2,     0,     1,     0,     2,
       0,     3,     1,     3,     1,     3,     1,     1,     1,     0,
       2,     0,     2,     1,     0,     1,     3,     4,     4,     4,
       3,     3,     6,     6,     3,     2,     0,     3,     1,     1,
       1,     0,     3,     1,     7,     4,     3,     3,     0,     1,
       0,     2,     1,     4,     2,     2,     1,     1,     2,     1,
       1,     2,     2,     3,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     4,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
     164,     0,     0,     0,     0,     0,     0,    89,    90,     0,
       0,     0,     0,   326,   316,   319,   320,   324,   325,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   133,
       0,   317,     0,     0,     0,    72,    66,     0,   270,     0,
       0,     0,   339,     5,    31,     9,    10,    38,    29,    30,
      34,    16,    17,    15,    32,    33,    18,     7,     8,     6,
       0,    12,    13,    14,    11,    19,    20,    43,    21,    22,
      23,    24,    25,    26,    27,    28,    40,   312,   162,    39,
      35,    37,   181,    36,    41,    42,     0,   310,     0,   127,
     123,     0,   124,   131,   119,   120,   121,   117,   122,   104,
       0,   270,   133,    95,    96,    97,   105,   106,   107,    91,
      92,    86,    87,   184,   164,   314,   322,   134,   270,   327,
     315,   318,   321,   328,   310,     0,    62,     0,     0,    71,
       0,    85,     0,    49,     0,    93,     0,     0,     0,     0,
     270,     0,   308,    45,     0,   128,   126,   132,     0,    52,
      78,     0,    82,     0,     0,   186,   270,   129,   323,   308,
       0,   310,     0,     0,     0,   274,     0,   272,   284,     0,
     270,   340,     0,    94,    88,   163,     0,    54,   182,   284,
       0,     0,     0,   238,     0,   237,   239,   240,   242,   243,
     257,   260,   264,     0,   241,   244,     0,   311,   309,   306,
      44,     0,   125,     0,    79,     0,    77,   133,     0,   270,
       0,     0,   305,   177,     0,     0,    76,     0,    74,    70,
       0,    68,     0,     0,   271,   133,   133,   133,   133,   133,
       0,     0,   133,     0,   283,   285,   133,   146,     0,     0,
       0,   183,   313,     0,     0,    98,   258,   263,   248,   262,
     247,   249,   250,   252,   253,   261,   245,   265,   246,   259,
     251,   254,   284,    46,     0,    53,    80,     0,    83,   190,
     187,   188,   191,   232,   135,     0,    64,     0,   181,    73,
      75,    67,    69,   276,   277,   278,   275,   273,   270,   270,
     270,   270,   270,   284,   284,   270,   266,     0,   270,   156,
     295,    50,   108,   341,    55,   266,     0,   100,   255,   256,
       0,     0,     0,     0,    57,    59,    81,     0,   232,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,   221,   221,     0,   301,   296,   224,   200,   197,
     195,   196,   204,   205,   206,   207,   208,   209,   210,   211,
     203,   202,   201,   198,   199,   232,   193,   213,   212,   226,
       0,   303,   214,   298,   299,   300,   144,   139,   140,     0,
     136,   137,     0,     0,    65,   146,   146,   146,   290,   291,
       0,     0,   294,   267,   342,   286,   307,   157,   159,   160,
     158,   147,     0,   148,   109,     0,   342,    99,     0,   102,
     266,    60,    61,     0,    58,   189,   232,   185,   118,   284,
     110,   111,   112,   113,   114,   115,   116,   216,   215,   222,
       0,     0,     0,   220,     0,     0,     0,     0,   194,     0,
     156,   270,     0,   138,     0,    63,   287,   288,   289,   133,
     133,     0,   268,   150,   151,   152,   153,   154,   155,   156,
     172,   168,   167,   173,   169,   170,   171,   165,   161,     0,
       0,     0,   268,   101,     0,   304,   342,    56,   192,     0,
     217,   218,   219,   302,     0,   301,   297,     0,   225,   180,
       0,   145,   142,   130,     0,   270,   270,   344,     0,   270,
     149,   156,    51,     0,   270,   103,   268,   342,     0,     0,
     143,   141,     0,   292,   293,   345,     0,   269,   230,   175,
       0,    48,   230,   270,   270,   342,   178,   343,     0,     0,
       0,   166,   156,     0,   230,   228,   268,   346,     0,   279,
     176,   279,     0,     0,     0,   270,   284,     0,   281,   281,
     279,   284,   279,     0,     0,   280,     0,   236,   234,   281,
       0,   227,   279,     0,   282,   235,     0,   281,   231,   229,
     223
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,     2,     3,    63,    64,    65,   164,    66,   358,
     190,   481,    68,   223,    69,   263,   285,   333,   334,   359,
     182,   297,    71,   148,   240,   241,    72,    73,   147,   237,
     238,   360,   172,   173,   361,    76,    77,    78,    79,    80,
     131,   194,    81,    82,    83,   327,   419,   485,    84,    85,
      86,   362,   415,   363,   364,   365,   366,   367,   368,   369,
      88,   370,    89,    90,    91,    92,    93,    94,    95,   110,
     111,   371,   231,   168,   138,   389,   390,   391,   521,   451,
     320,   411,   469,   412,   413,    97,    98,   478,   530,   372,
     373,   176,   101,   159,   298,   374,   175,   229,   290,   291,
     339,   375,   376,   440,   377,   378,   446,   379,   554,   540,
     380,   381,   216,   404,   509,   151,   186,   187,   306,   558,
     567,   253,   254,   255,   382,   445,   383,   384,   444,   385,
     256,   257,   219,   162,   107,   192,   462,   526
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -491
static const short int yypact[] =
{
    -491,    74,  -491,   521,  -491,  -491,    48,  -491,   100,   100,
     115,   100,   100,   100,   100,   100,   100,  1009,    51,  -491,
    -491,   141,   154,   167,   100,   100,   100,  -491,  -491,    46,
      46,   121,   150,  -491,  -491,  -491,   135,  -491,  -491,  -491,
    -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,   176,
     145,    80,  1009,   225,   186,  -491,  -491,   205,   114,   225,
     121,   111,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,
    -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,
      46,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,
    -491,  -491,  -491,  -491,  -491,  -491,  -491,   -24,  -491,  -491,
    -491,  -491,   216,  -491,  -491,  -491,    33,  -491,   213,  -491,
    -491,   120,  -491,   214,  -491,  -491,  -491,  -491,  -491,  -491,
     121,   114,    14,  -491,  -491,  -491,  -491,  -491,  -491,  -491,
    -491,  -491,  -491,   162,    -8,   162,  -491,  -491,   114,  -491,
    -491,  -491,   182,  -491,  -491,    13,  -491,   132,   134,  -491,
     221,  -491,   139,   -20,   225,   160,   121,   225,  1009,   201,
     -29,    68,   -27,  -491,     9,  -491,  -491,  -491,   100,  -491,
     137,   228,   179,   155,   143,   152,   114,  -491,  -491,   -27,
     165,  -491,   164,   254,   255,   183,   -43,  -491,   904,   121,
     114,  -491,   -50,  -491,  -491,  -491,   -41,  -491,  -491,   904,
     168,   194,   189,   191,   193,   196,   198,   199,   215,   217,
    -491,    45,     0,   203,   219,   230,   241,  -491,  -491,  -491,
    -491,   325,  -491,   240,  -491,    18,  -491,   176,   121,   114,
     242,   243,  -491,  -491,    12,   851,  -491,    19,  -491,  -491,
      25,  -491,    20,   221,  -491,   176,   176,   176,   176,   176,
     244,   247,   176,   248,   246,  -491,   176,   249,   -28,   252,
     225,  -491,  -491,   240,   251,   347,  -491,  -491,  -491,  -491,
    -491,  -491,  -491,  -491,  -491,  -491,   250,  -491,   253,  -491,
    -491,  -491,   904,  -491,    69,  -491,  -491,   339,  -491,   162,
     257,  -491,   259,   733,   149,   262,  -491,   792,  -491,  -491,
    -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,   114,   114,
     114,   114,   114,   904,   904,   114,   293,   904,   114,    38,
    -491,  -491,   329,  -491,  -491,   293,   100,   363,  -491,  -491,
     267,   100,   100,     3,  -491,  -491,  -491,   121,   733,   264,
     100,   270,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   323,   323,   323,   256,   258,  -491,  -491,  -491,  -491,
    -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,
    -491,  -491,  -491,  -491,  -491,   607,  -491,  -491,  -491,  -491,
     260,  -491,  -491,  -491,  -491,  -491,   269,  -491,  -491,   271,
     149,  -491,   278,   274,  -491,   249,   249,   249,  -491,  -491,
     279,   280,  -491,  -491,   289,  -491,  -491,  -491,  -491,  -491,
    -491,   153,   957,  -491,  -491,   287,   289,  -491,   100,   379,
     293,  -491,  -491,   282,  -491,  -491,   670,  -491,  -491,   904,
    -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,
     268,   272,   273,  -491,   443,   156,   371,   288,  -491,   377,
      38,   114,   292,  -491,   225,  -491,  -491,  -491,  -491,   176,
     176,   298,   291,  -491,  -491,  -491,  -491,  -491,  -491,    38,
    -491,  -491,  -491,  -491,  -491,  -491,  -491,   -22,  -491,   302,
     100,   301,   291,  -491,   100,  -491,   289,  -491,  -491,   305,
    -491,  -491,  -491,  -491,    34,  -491,  -491,   270,  -491,  -491,
     307,  -491,   306,  -491,    26,   114,   114,   121,   330,   114,
    -491,    -5,  -491,   304,   114,  -491,   291,   289,   311,   312,
    -491,  -491,   309,  -491,  -491,   162,    55,  -491,   294,   153,
      60,  -491,   294,   114,   114,   289,  -491,  -491,   121,   225,
     310,  -491,    38,   313,   294,   299,   291,   162,   316,   393,
     153,   393,   317,   324,   318,   114,   904,   100,   405,   405,
     393,   904,   393,   321,   327,  -491,   100,  -491,  -491,   405,
     328,  -491,   393,   314,  -491,  -491,   315,   405,  -491,  -491,
    -491
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -491,  -491,   434,  -491,  -491,  -202,  -491,  -491,  -491,    21,
    -491,  -491,  -491,  -491,  -491,  -491,   173,  -491,   104,    22,
    -491,  -491,  -491,  -491,  -491,   200,  -491,  -491,  -491,  -491,
     204,    11,  -491,  -491,    16,  -491,  -491,  -491,  -491,  -491,
      30,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,
    -491,    23,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,
    -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,  -491,    -9,
    -491,    24,  -491,  -491,  -101,  -491,  -491,    53,  -491,  -491,
    -200,  -458,  -491,  -491,  -392,   -21,   296,  -491,  -491,    27,
      28,  -491,  -491,  -491,   441,    17,  -491,  -491,  -491,   108,
    -491,   109,  -332,  -178,  -491,  -491,  -491,     2,  -491,  -469,
    -491,    -2,  -491,  -303,  -454,  -109,  -491,   206,  -491,  -490,
    -480,  -191,  -491,   136,  -491,  -491,    10,  -491,  -491,    29,
       6,  -491,   275,   -95,    -4,  -139,  -393,  -491
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -313
static const short int yytable[] =
{
     112,   104,   114,   115,   116,   117,   118,   119,   264,   106,
     133,   135,   169,   121,    74,   126,   127,   128,   196,    75,
     103,   174,   416,   482,    67,    70,    87,    96,   514,   177,
      99,   100,   105,   296,   295,   180,   170,   331,   332,   153,
     286,   236,   303,   448,   304,    26,   156,   239,   144,   179,
     156,   200,   156,   529,   156,   160,   518,   260,   501,   145,
     132,   559,   533,   543,   243,   152,   260,   230,   129,   130,
     569,   261,   571,   244,     4,   552,   199,   510,   321,   568,
     262,   259,   577,  -312,   550,   189,   234,   150,   217,   575,
     218,   330,   555,   516,   448,   394,   157,   580,   157,   135,
    -179,  -174,  -174,   331,   332,   305,   407,   408,  -179,   409,
     155,    26,   423,   277,   410,   220,   221,   486,   181,   109,
     292,   278,   400,   401,   534,   171,   288,   217,   299,   287,
     161,   161,   522,   260,   301,   140,   141,   142,   113,   165,
     143,   166,   546,    20,   308,   309,   310,   311,   312,   407,
     408,   315,   409,   108,   197,   318,   122,   410,   275,   222,
     191,   537,   538,   191,   123,   276,   541,   542,   258,    18,
      19,   386,   134,   201,   441,   442,   198,   124,    20,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     125,   213,   136,   214,   215,   456,   457,   458,   137,   395,
     396,   397,   398,   399,   120,   139,   402,   289,   146,   406,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   495,   149,    50,    51,
     150,   154,    52,   104,   158,   163,   156,   167,   489,   178,
     183,   106,   184,   185,   188,   193,    74,    20,    31,  -134,
     224,    75,   103,    59,   225,   227,    67,    70,    87,    96,
      62,   226,    99,   100,   105,   463,   323,   464,   465,   466,
     467,   468,   235,   120,   228,   233,   236,   239,   265,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   104,   242,    50,    51,   106,
     266,    52,   267,   106,   268,   387,   269,   335,    74,   270,
     388,   271,   272,    75,   103,   504,   289,   417,    67,    70,
      87,    96,   421,   422,    99,   100,   105,   279,   273,    62,
     274,   428,   280,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   502,   281,   106,   414,   282,   283,   284,   313,
     293,   294,   314,   317,   316,   326,   335,   325,   505,   506,
     322,   336,   319,   328,   337,   564,   329,   338,   392,   403,
     570,    26,   418,   420,   427,   429,   439,  -233,   443,   449,
     452,   106,   450,   454,   455,   459,   460,   461,   480,   484,
     490,   477,   487,   497,   491,   492,   523,   524,   499,   500,
     528,   387,   503,   507,   508,   532,   388,   511,   479,   483,
     513,   517,   519,   520,   531,   527,   199,   539,   535,   536,
     549,   556,   553,   551,   544,   545,   557,   560,   562,   561,
     566,   572,   106,   573,   576,     5,   324,   424,   578,   579,
     302,   300,   493,   453,   102,   425,   563,   426,   498,   307,
     494,   106,   195,   405,   232,   496,     0,     0,     0,     0,
     191,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,   512,     0,     0,     0,   515,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   525,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,     0,    50,    51,   547,     0,    52,
       0,     0,     0,     0,     6,     7,     8,     9,    10,     0,
       0,     0,    11,    12,    13,    14,     0,    15,    16,    17,
      59,    18,    19,    20,     0,   548,     0,    62,   565,     0,
       0,     0,     0,     0,     0,     0,     0,   574,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,    56,    57,    58,     0,     0,     0,     0,    59,     0,
       0,    60,   340,     0,    61,    62,     0,    18,    19,   341,
       0,     0,     0,   342,   343,   344,   345,   346,   347,   348,
       0,     0,   349,   350,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,    31,    32,   351,   352,   353,   354,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,   355,    49,    50,
      51,     0,     0,    52,   356,   340,     0,     0,     0,     0,
      18,    19,   341,     0,    53,    54,   342,   343,   344,   345,
     346,   347,   348,     0,    59,   349,   350,    60,     0,   357,
       0,    62,    26,     0,     0,     0,   447,    31,    32,   351,
     352,   353,   354,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
     355,    49,    50,    51,     0,     0,    52,   356,   340,     0,
       0,     0,     0,    18,    19,   341,     0,    53,    54,   342,
     343,   344,   345,   346,   347,   348,     0,    59,   349,   350,
      60,     0,   357,     0,    62,    26,     0,     0,     0,   488,
      31,    32,   351,   352,   353,   354,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,   355,    49,    50,    51,     0,     0,    52,
     356,     0,    18,    19,    20,     0,     0,     0,     0,     0,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,     0,    60,    26,   357,     0,    62,     0,    31,
      32,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,     0,     0,    52,     0,
       0,    18,    19,    20,     0,     0,     0,     0,     0,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,    60,    26,     0,    61,    62,     0,    31,    32,
       0,   393,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,     0,    20,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,    59,     0,
       0,    60,   120,     0,    61,    62,     0,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,     0,    50,    51,     0,    20,
      52,   470,   245,   246,   247,   248,   249,   250,   251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,   120,     0,     0,    62,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,     0,    50,
      51,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   471,   472,     0,     0,     0,     0,     0,     0,
     473,   474,   475,   476,     0,     0,     0,   120,     0,     0,
       0,    62,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62
};

static const short int yycheck[] =
{
       9,     3,    11,    12,    13,    14,    15,    16,   199,     3,
      31,    32,   121,    17,     3,    24,    25,    26,   157,     3,
       3,   122,   325,   416,     3,     3,     3,     3,   482,   138,
       3,     3,     3,   235,    22,    22,    22,    34,    35,    60,
      22,    22,    22,   375,    24,    42,    74,    22,    52,   144,
      74,   160,    74,   511,    74,    22,    22,   107,   450,    53,
      30,   551,   516,   532,   107,    59,   107,   176,    22,    23,
     560,   121,   562,   116,     0,   544,   105,   469,   106,   559,
     121,   190,   572,   105,   542,   105,   181,   116,   115,   569,
     117,   282,   546,   486,   426,   297,   120,   577,   120,   120,
     108,   106,   107,    34,    35,    85,   111,   112,   116,   114,
      80,    42,   109,   113,   119,   106,   107,   420,   105,    19,
     229,   121,   313,   314,   517,   111,   227,   115,   109,   111,
      97,    97,   106,   107,   109,    55,    56,    57,    23,    19,
      60,    21,   535,    22,   245,   246,   247,   248,   249,   111,
     112,   252,   114,   105,   158,   256,   105,   119,   113,   168,
     154,   106,   107,   157,    23,   120,   106,   107,   189,    20,
      21,    22,    22,   105,   352,   353,   159,    23,    22,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      23,   123,    57,   125,   126,   395,   396,   397,    22,   308,
     309,   310,   311,   312,    48,    60,   315,   228,    22,   318,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    72,    73,
     116,   120,    76,   235,    18,    22,    74,    23,   429,    57,
     108,   235,   108,    22,   105,    85,   235,    22,    47,   112,
      22,   235,   235,    97,    75,   112,   235,   235,   235,   235,
     104,   106,   235,   235,   235,   112,   260,   114,   115,   116,
     117,   118,   108,    48,   122,   110,    22,    22,   110,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,   297,   113,    72,    73,   293,
     106,    76,   113,   297,   113,   294,   113,   284,   297,   113,
     294,   113,   113,   297,   297,   454,   337,   326,   297,   297,
     297,   297,   331,   332,   297,   297,   297,   124,   113,   104,
     113,   340,   113,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   451,   113,   338,   322,   105,    22,   108,   105,
     108,   108,   105,   107,   106,     8,   333,   106,   459,   460,
     108,    22,   113,   113,   107,   556,   113,   108,   106,    76,
     561,    42,     9,   106,   110,   105,    53,   119,   122,   119,
     109,   375,   113,   105,   110,   106,   106,    98,   101,    10,
     122,   412,   110,    22,   122,   122,   505,   506,   110,    22,
     509,   390,   110,   105,   113,   514,   390,   105,   412,   418,
     109,   106,   105,   107,   110,    85,   105,   123,   106,   110,
     110,   105,   123,   110,   533,   534,    33,   110,   110,   105,
      25,   110,   426,   106,   106,     1,   263,   333,   124,   124,
     240,   237,   444,   390,     3,   337,   555,   338,   446,   243,
     444,   445,   156,   317,   179,   445,    -1,    -1,    -1,    -1,
     454,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,   484,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    73,   538,    -1,    76,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    18,
      97,    20,    21,    22,    -1,   539,    -1,   104,   557,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   566,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    97,    -1,
      -1,   100,    15,    -1,   103,   104,    -1,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    -1,    -1,    76,    77,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    87,    88,    26,    27,    28,    29,
      30,    31,    32,    -1,    97,    35,    36,   100,    -1,   102,
      -1,   104,    42,    -1,    -1,    -1,   109,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    76,    77,    15,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    87,    88,    26,
      27,    28,    29,    30,    31,    32,    -1,    97,    35,    36,
     100,    -1,   102,    -1,   104,    42,    -1,    -1,    -1,   109,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    -1,    76,
      77,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   100,    42,   102,    -1,   104,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,   100,    42,    -1,   103,   104,    -1,    47,    48,
      -1,   109,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    72,    73,    -1,    22,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,   100,    48,    -1,   103,   104,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    73,    -1,    22,
      76,    24,    78,    79,    80,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    48,    -1,    -1,   104,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      73,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    -1,    -1,    -1,    48,    -1,    -1,
      -1,   104,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   128,   129,   130,     0,   129,     3,     4,     5,     6,
       7,    11,    12,    13,    14,    16,    17,    18,    20,    21,
      22,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    71,
      72,    73,    76,    87,    88,    89,    90,    91,    92,    97,
     100,   103,   104,   131,   132,   133,   135,   136,   139,   141,
     146,   149,   153,   154,   158,   161,   162,   163,   164,   165,
     166,   169,   170,   171,   175,   176,   177,   178,   187,   189,
     190,   191,   192,   193,   194,   195,   198,   212,   213,   216,
     217,   219,   221,   222,   238,   256,   257,   261,   105,    19,
     196,   197,   196,    23,   196,   196,   196,   196,   196,   196,
      48,   261,   105,    23,    23,    23,   196,   196,   196,    22,
      23,   167,   167,   212,    22,   212,    57,    22,   201,    60,
      55,    56,    57,    60,   261,   257,    22,   155,   150,    22,
     116,   242,   257,   212,   120,   167,    74,   120,    18,   220,
      22,    97,   260,    22,   134,    19,    21,    23,   200,   242,
      22,   111,   159,   160,   201,   223,   218,   242,    57,   260,
      22,   105,   147,   108,   108,    22,   243,   244,   105,   105,
     137,   257,   262,    85,   168,   213,   262,   261,   222,   105,
     242,   105,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   123,   125,   126,   239,   115,   117,   259,
     106,   107,   196,   140,    22,    75,   106,   112,   122,   224,
     242,   199,   259,   110,   260,   108,    22,   156,   157,    22,
     151,   152,   113,   107,   116,    78,    79,    80,    81,    82,
      83,    84,    99,   248,   249,   250,   257,   258,   212,   242,
     107,   121,   121,   142,   248,   110,   106,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   120,   113,   121,   124,
     113,   113,   105,    22,   108,   143,    22,   111,   201,   212,
     225,   226,   242,   108,   108,    22,   132,   148,   221,   109,
     157,   109,   152,    22,    24,    85,   245,   244,   201,   201,
     201,   201,   201,   105,   105,   201,   106,   107,   201,   113,
     207,   106,   108,   257,   143,   106,     8,   172,   113,   113,
     248,    34,    35,   144,   145,   178,    22,   107,   108,   227,
      15,    22,    26,    27,    28,    29,    30,    31,    32,    35,
      36,    49,    50,    51,    52,    70,    77,   102,   136,   146,
     158,   161,   178,   180,   181,   182,   183,   184,   185,   186,
     188,   198,   216,   217,   222,   228,   229,   231,   232,   234,
     237,   238,   251,   253,   254,   256,    22,   158,   161,   202,
     203,   204,   106,   109,   132,   242,   242,   242,   242,   242,
     248,   248,   242,    76,   240,   250,   242,   111,   112,   114,
     119,   208,   210,   211,   178,   179,   240,   196,     9,   173,
     106,   196,   196,   109,   145,   226,   228,   110,   196,   105,
     196,   196,   196,   196,   196,   196,   196,   196,   196,    53,
     230,   230,   230,   122,   255,   252,   233,   109,   229,   119,
     113,   206,   109,   204,   105,   110,   207,   207,   207,   106,
     106,    98,   263,   112,   114,   115,   116,   117,   118,   209,
      24,    85,    86,    93,    94,    95,    96,   212,   214,   261,
     101,   138,   263,   196,    10,   174,   240,   110,   109,   248,
     122,   122,   122,   238,   257,    70,   253,    22,   234,   110,
      22,   211,   242,   110,   262,   201,   201,   105,   113,   241,
     211,   105,   196,   109,   241,   196,   263,   106,    22,   105,
     107,   205,   106,   242,   242,   212,   264,    85,   242,   208,
     215,   110,   242,   241,   263,   106,   110,   106,   107,   123,
     236,   106,   107,   236,   242,   242,   263,   212,   257,   110,
     208,   110,   236,   123,   235,   241,   105,    33,   246,   246,
     110,   105,   110,   242,   248,   196,    25,   247,   247,   246,
     248,   246,   110,   106,   196,   247,   106,   246,   124,   124,
     247
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 4:
#line 299 "parser.y"
    {
            /*
             * We don't do these in parserEOF() because the parser is reading
             * ahead and that would be too early.
             */

            if (previousFile != NULL)
            {
                handleEOF();

                if (currentContext.prevmod != NULL)
                    handleEOM();

                free(previousFile);
                previousFile = NULL;
            }
    }
    break;

  case 19:
#line 331 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->exphdrcode, yyvsp[0].codeb);
        }
    break;

  case 20:
#line 335 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->hdrcode, yyvsp[0].codeb);
        }
    break;

  case 21:
#line 339 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->cppcode, yyvsp[0].codeb);
        }
    break;

  case 43:
#line 366 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope == NULL)
                    yyerror("%TypeHeaderCode can only be used in a namespace, class or mapped type");

                appendCodeBlock(&scope->iff->hdrcode, yyvsp[0].codeb);
            }
        }
    break;

  case 45:
#line 382 "parser.y"
    {
            appendString(&currentSpec->options, yyvsp[0].text);
        }
    break;

  case 46:
#line 385 "parser.y"
    {
            appendString(&currentSpec->options, yyvsp[0].text);
        }
    break;

  case 47:
#line 390 "parser.y"
    {
            if (notSkipping())
            {
                yywarning("%SIPNoEmitters is deprecated, please use %SIPOptions instead");
                appendString(&currentSpec->options, "QtNoEmitters");
            }
        }
    break;

  case 48:
#line 399 "parser.y"
    {
            if (notSkipping())
            {
                exceptionDef *xd;
                char *pyname;

                if (currentSpec->genc)
                    yyerror("%Exception not allowed in a C module");

                pyname = getPythonName(&yyvsp[-5].optflags, scopedNameTail(yyvsp[-7].scpvalp));

                checkAttributes(currentSpec, currentModule, NULL, pyname, FALSE);

                xd = findException(currentSpec, yyvsp[-7].scpvalp, TRUE);

                if (xd->cd != NULL)
                    yyerror("%Exception name has already been seen as a class name - it must be defined before being used");

                if (xd->iff->module != NULL)
                    yyerror("The %Exception has already been defined");

                /* Complete the definition. */
                xd->iff->module = currentModule;
                xd->iff->hdrcode = yyvsp[-3].codeb;
                xd->pyname = pyname;
                xd->bibase = yyvsp[-6].exceptionbase.bibase;
                xd->base = yyvsp[-6].exceptionbase.base;
                xd->raisecode = yyvsp[-2].codeb;

                if (xd->bibase != NULL || xd->base != NULL)
                    xd->exceptionnr = currentModule->nrexceptions++;
            }
        }
    break;

  case 49:
#line 434 "parser.y"
    {
            yyval.exceptionbase.bibase = NULL;
            yyval.exceptionbase.base = NULL;
        }
    break;

  case 50:
#line 438 "parser.y"
    {
            exceptionDef *xd;

            yyval.exceptionbase.bibase = NULL;
            yyval.exceptionbase.base = NULL;

            /* See if it is a defined exception. */
            for (xd = currentSpec->exceptions; xd != NULL; xd = xd->next)
                if (sameScopedName(xd->iff->fqcname, yyvsp[-1].scpvalp))
                {
                    yyval.exceptionbase.base = xd;
                    break;
                }

            if (xd == NULL && yyvsp[-1].scpvalp->next == NULL && strncmp(yyvsp[-1].scpvalp->name, "SIP_", 4) == 0)
            {
                /* See if it is a builtin exception. */

                static char *builtins[] = {
                    "Exception",
                    "StopIteration",
                    "StandardError",
                    "ArithmeticError",
                    "LookupError",
                    "AssertionError",
                    "AttributeError",
                    "EOFError",
                    "FloatingPointError",
                    "EnvironmentError",
                    "IOError",
                    "OSError",
                    "ImportError",
                    "IndexError",
                    "KeyError",
                    "KeyboardInterrupt",
                    "MemoryError",
                    "NameError",
                    "OverflowError",
                    "RuntimeError",
                    "NotImplementedError",
                    "SyntaxError",
                    "IndentationError",
                    "TabError",
                    "ReferenceError",
                    "SystemError",
                    "SystemExit",
                    "TypeError",
                    "UnboundLocalError",
                    "UnicodeError",
                    "UnicodeEncodeError",
                    "UnicodeDecodeError",
                    "UnicodeTranslateError",
                    "ValueError",
                    "ZeroDivisionError",
                    "WindowsError",
                    "VMSError",
                    NULL
                };

                char **cp;

                for (cp = builtins; *cp != NULL; ++cp)
                    if (strcmp(yyvsp[-1].scpvalp->name + 4, *cp) == 0)
                    {
                        yyval.exceptionbase.bibase = *cp;
                        break;
                    }
            }

            if (yyval.exceptionbase.bibase == NULL && yyval.exceptionbase.base == NULL)
                yyerror("Unknown exception base type");
        }
    break;

  case 51:
#line 512 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 52:
#line 517 "parser.y"
    {
            if (notSkipping())
                currentMappedType = newMappedType(currentSpec, &yyvsp[-1].memArg, &yyvsp[0].optflags);
        }
    break;

  case 54:
#line 523 "parser.y"
    {
            int a;

            if (currentSpec->genc)
                yyerror("%MappedType templates not allowed in a C module");

            /* Check the template arguments are basic types or simple names. */
            for (a = 0; a < yyvsp[-2].signature.nrArgs; ++a)
                if (yyvsp[-2].signature.args[a].atype == defined_type && yyvsp[-2].signature.args[a].u.snd->next != NULL)
                    yyerror("%MappedType template arguments must be simple names");

            if (yyvsp[0].memArg.atype != template_type)
                yyerror("%MappedType template must map a template type");

            if (notSkipping())
            {
                mappedTypeTmplDef *mtt;
                ifaceFileDef *iff;

                /* Check a template hasn't already been provided. */
                for (mtt = currentSpec->mappedtypetemplates; mtt != NULL; mtt = mtt->next)
                    if (sameScopedName(mtt->mt->type.u.td->fqname, yyvsp[0].memArg.u.td->fqname) && sameTemplateSignature(&mtt->mt->type.u.td->types, &yyvsp[0].memArg.u.td->types, TRUE))
                        yyerror("%MappedType template for this type has already been defined");

                yyvsp[0].memArg.nrderefs = 0;
                yyvsp[0].memArg.argflags = 0;

                mtt = sipMalloc(sizeof (mappedTypeTmplDef));

                mtt->sig = yyvsp[-2].signature;
                mtt->mt = allocMappedType(&yyvsp[0].memArg);
                mtt->next = currentSpec->mappedtypetemplates;

                currentSpec->mappedtypetemplates = mtt;

                currentMappedType = mtt->mt;

                /* Create a dummy interface file. */
                iff = sipMalloc(sizeof (ifaceFileDef));
                iff->hdrcode = NULL;
                mtt->mt->iff = iff;
            }
        }
    break;

  case 56:
#line 568 "parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convfromcode == NULL)
                    yyerror("%MappedType must have a %ConvertFromTypeCode directive");

                if (currentMappedType->convtocode == NULL)
                    yyerror("%MappedType must have a %ConvertToTypeCode directive");

                currentMappedType = NULL;
            }
        }
    break;

  case 59:
#line 586 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->iff->hdrcode, yyvsp[0].codeb);
        }
    break;

  case 60:
#line 590 "parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType -> convfromcode != NULL)
                    yyerror("%MappedType has more than one %ConvertFromTypeCode directive");

                currentMappedType -> convfromcode = yyvsp[0].codeb;
            }
        }
    break;

  case 61:
#line 599 "parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType -> convtocode != NULL)
                    yyerror("%MappedType has more than one %ConvertToTypeCode directive");

                currentMappedType -> convtocode = yyvsp[0].codeb;
            }
        }
    break;

  case 62:
#line 610 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("namespace definition not allowed in a C module");

            if (notSkipping())
            {
                classDef *ns;

                ns = newClass(currentSpec,namespace_iface,text2scopedName(yyvsp[0].text));

                pushScope(ns);

                sectionFlags = 0;
            }
        }
    break;

  case 63:
#line 624 "parser.y"
    {
            if (notSkipping())
            {
                if (inMainModule())
                {
                    classDef *ns = currentScope();

                    if (!isUsedName(ns->iff->name))
                    {
                        varDef *vd;

                        for (vd = currentSpec->vars; vd != NULL; vd = vd->next)
                            if (vd->ecd == ns)
                            {
                                setIsUsedName(ns->iff->name);
                                break;
                            }
                    }
                }

                popScope();
            }
        }
    break;

  case 66:
#line 653 "parser.y"
    {
            qualDef *qd;

            for (qd = currentModule -> qualifiers; qd != NULL; qd = qd -> next)
                if (qd -> qtype == platform_qualifier)
                    yyerror("%Platforms has already been defined for this module");
        }
    break;

  case 67:
#line 660 "parser.y"
    {
            qualDef *qd;
            int nrneeded;

            /*
             * Check that exactly one platform in the set was
             * requested.
             */

            nrneeded = 0;

            for (qd = currentModule -> qualifiers; qd != NULL; qd = qd -> next)
                if (qd -> qtype == platform_qualifier && isNeeded(qd))
                    ++nrneeded;

            if (nrneeded > 1)
                yyerror("No more than one of these %Platforms must be specified with the -t flag");
        }
    break;

  case 70:
#line 684 "parser.y"
    {
            newQualifier(currentModule,-1,-1,yyvsp[0].text,platform_qualifier);
        }
    break;

  case 71:
#line 689 "parser.y"
    {
            newQualifier(currentModule,-1,-1,yyvsp[0].text,feature_qualifier);
        }
    break;

  case 72:
#line 694 "parser.y"
    {
            currentTimelineOrder = 0;
        }
    break;

  case 73:
#line 697 "parser.y"
    {
            qualDef *qd;
            int nrneeded;

            /*
             * Check that exactly one time slot in the set was
             * requested.
             */

            nrneeded = 0;

            for (qd = currentModule -> qualifiers; qd != NULL; qd = qd -> next)
                if (qd -> qtype == time_qualifier && isNeeded(qd))
                    ++nrneeded;

            if (nrneeded > 1)
                yyerror("At most one of this %Timeline must be specified with the -t flag");

            currentModule -> nrtimelines++;
        }
    break;

  case 76:
#line 723 "parser.y"
    {
            newQualifier(currentModule,currentModule -> nrtimelines,currentTimelineOrder++,yyvsp[0].text,time_qualifier);
        }
    break;

  case 77:
#line 728 "parser.y"
    {
            if (skipStackPtr >= MAX_NESTED_IF)
                yyerror("Internal error: increase the value of MAX_NESTED_IF");

            /* Nested %Ifs are implicit logical ands. */

            if (skipStackPtr > 0)
                yyvsp[-1].boolean = (yyvsp[-1].boolean && skipStack[skipStackPtr - 1]);

            skipStack[skipStackPtr++] = yyvsp[-1].boolean;
        }
    break;

  case 78:
#line 741 "parser.y"
    {
            yyval.boolean = platOrFeature(yyvsp[0].text,FALSE);
        }
    break;

  case 79:
#line 744 "parser.y"
    {
            yyval.boolean = platOrFeature(yyvsp[0].text,TRUE);
        }
    break;

  case 80:
#line 747 "parser.y"
    {
            yyval.boolean = (platOrFeature(yyvsp[0].text,FALSE) || yyvsp[-2].boolean);
        }
    break;

  case 81:
#line 750 "parser.y"
    {
            yyval.boolean = (platOrFeature(yyvsp[0].text,TRUE) || yyvsp[-3].boolean);
        }
    break;

  case 83:
#line 756 "parser.y"
    {
            yyval.boolean = timePeriod(yyvsp[-2].text,yyvsp[0].text);
        }
    break;

  case 84:
#line 761 "parser.y"
    {
            if (skipStackPtr-- <= 0)
                yyerror("Too many %End directives");
        }
    break;

  case 85:
#line 767 "parser.y"
    {
            optFlag *of;

            if (yyvsp[0].optflags.nrFlags == 0)
                yyerror("%License details not specified");

            if ((of = findOptFlag(&yyvsp[0].optflags,"Type",string_flag)) == NULL)
                yyerror("%License type not specified");

            currentModule -> license = sipMalloc(sizeof (licenseDef));

            currentModule -> license -> type = of -> fvalue.sval;

            currentModule -> license -> licensee = 
                ((of = findOptFlag(&yyvsp[0].optflags,"Licensee",string_flag)) != NULL)
                    ? of -> fvalue.sval : NULL;

            currentModule -> license -> timestamp = 
                ((of = findOptFlag(&yyvsp[0].optflags,"Timestamp",string_flag)) != NULL)
                    ? of -> fvalue.sval : NULL;

            currentModule -> license -> sig = 
                ((of = findOptFlag(&yyvsp[0].optflags,"Signature",string_flag)) != NULL)
                    ? of -> fvalue.sval : NULL;
        }
    break;

  case 86:
#line 794 "parser.y"
    {
            /* Make sure this is the first mention of a module. */
            if (currentSpec->module != currentModule)
                yyerror("A %ConsolidatedModule cannot be %Imported");

            if (currentModule->fullname != NULL)
                yyerror("%ConsolidatedModule must appear before any %Module or %CModule directive");

            setModuleName(currentModule, yyvsp[0].text);
            setIsConsolidated(currentModule);
        }
    break;

  case 87:
#line 807 "parser.y"
    {
            /* Make sure this is the first mention of a module. */
            if (currentSpec->module != currentModule)
                yyerror("A %CompositeModule cannot be %Imported");

            if (currentModule->fullname != NULL)
                yyerror("%CompositeModule must appear before any %Module or %CModule directive");

            setModuleName(currentModule, yyvsp[0].text);
            setIsComposite(currentModule);
        }
    break;

  case 88:
#line 820 "parser.y"
    {
            /* Check the module hasn't already been defined. */

            moduleDef *mod;

            for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
                if (mod->fullname != NULL && strcmp(mod->fullname, yyvsp[-1].text) == 0)
                    yyerror("Module is already defined");

            /*
             * If we are in a container module then create a component module
             * and make it current.
             */
            if (isContainer(currentModule) || currentModule->container != NULL)
            {
                mod = allocModule();

                mod->file = currentContext.filename;
                mod->container = (isContainer(currentModule) ? currentModule : currentModule->container);

                currentModule = mod;
            }

            setModuleName(currentModule, yyvsp[-1].text);
            currentModule->version = yyvsp[0].number;

            if (currentSpec->genc < 0)
                currentSpec->genc = yyvsp[-2].boolean;
            else if (currentSpec->genc != yyvsp[-2].boolean)
                yyerror("Cannot mix C and C++ modules");
        }
    break;

  case 89:
#line 853 "parser.y"
    {
            yyval.boolean = FALSE;
        }
    break;

  case 90:
#line 856 "parser.y"
    {
            yyval.boolean = TRUE;
        }
    break;

  case 92:
#line 862 "parser.y"
    {
            /*
             * The grammar design is a bit broken and this is the
             * easiest way to allow periods in module names.
             */

            char *cp;

            for (cp = yyvsp[0].text; *cp != '\0'; ++cp)
                if (*cp != '.' && *cp != '_' && !isalnum(*cp))
                    yyerror("Invalid character in module name");

            yyval.text = yyvsp[0].text;
        }
    break;

  case 93:
#line 878 "parser.y"
    {
            yyval.number = -1;
        }
    break;

  case 95:
#line 884 "parser.y"
    {
            parseFile(NULL, yyvsp[0].text, NULL, FALSE);
        }
    break;

  case 96:
#line 889 "parser.y"
    {
            parseFile(NULL, yyvsp[0].text, NULL, TRUE);
        }
    break;

  case 97:
#line 894 "parser.y"
    {
            newImport(yyvsp[0].text);
        }
    break;

  case 98:
#line 899 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 99:
#line 902 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 100:
#line 907 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 101:
#line 910 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 102:
#line 915 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 103:
#line 918 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 104:
#line 923 "parser.y"
    {
            appendCodeBlock(&currentModule->copying, yyvsp[0].codeb);
        }
    break;

  case 105:
#line 928 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 106:
#line 933 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 107:
#line 938 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 108:
#line 943 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 110:
#line 949 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 111:
#line 954 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 112:
#line 959 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 113:
#line 964 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 114:
#line 969 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 115:
#line 974 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 116:
#line 979 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 117:
#line 984 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 118:
#line 989 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 119:
#line 994 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->preinitcode, yyvsp[0].codeb);
        }
    break;

  case 120:
#line 1000 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->postinitcode, yyvsp[0].codeb);
        }
    break;

  case 121:
#line 1006 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitcode, yyvsp[0].codeb);
        }
    break;

  case 122:
#line 1012 "parser.y"
    {
            /*
             * This is a no-op and is retained for compatibility
             * until the last use of it (by SIP v3) can be removed
             * from PyQt.
             */
        }
    break;

  case 123:
#line 1021 "parser.y"
    {
            if (inMainModule())
                appendCodeBlock(&currentSpec -> docs,yyvsp[0].codeb);
        }
    break;

  case 124:
#line 1027 "parser.y"
    {
            appendCodeBlock(&currentSpec -> docs,yyvsp[0].codeb);
        }
    break;

  case 125:
#line 1032 "parser.y"
    {
            if (inMainModule())
                yywarning("%Makefile is ignored, please use the -b flag instead");
        }
    break;

  case 128:
#line 1042 "parser.y"
    {
            yyval.codeb = yyvsp[-1].codeb;

            append(&yyval.codeb->frag, yyvsp[0].codeb->frag);

            free(yyvsp[0].codeb->frag);
            free((char *)yyvsp[0].codeb->filename);
            free(yyvsp[0].codeb);
        }
    break;

  case 129:
#line 1053 "parser.y"
    {
            if (notSkipping())
            {
                if (sectionFlags != 0 && (sectionFlags & ~(SECT_IS_PUBLIC | SECT_IS_PROT)) != 0)
                    yyerror("Class enums must be in the public or protected sections");

                currentEnum = newEnum(currentSpec,currentModule,yyvsp[-1].text,&yyvsp[0].optflags,sectionFlags);
            }
        }
    break;

  case 131:
#line 1064 "parser.y"
    {
            yyval.text = NULL;
        }
    break;

  case 132:
#line 1067 "parser.y"
    {
            yyval.text = yyvsp[0].text;
        }
    break;

  case 133:
#line 1072 "parser.y"
    {
            yyval.text = NULL;
        }
    break;

  case 134:
#line 1075 "parser.y"
    {
            yyval.text = yyvsp[0].text;
        }
    break;

  case 141:
#line 1090 "parser.y"
    {
            if (notSkipping())
            {
                /*
                 * Note that we don't use the assigned value.
                 * This is a hangover from when enums where
                 * generated in Python.  We can remove it when
                 * we have got around to updating all the .sip
                 * files.
                 */
                enumMemberDef *emd, **tail;

                emd = sipMalloc(sizeof (enumMemberDef));

                emd -> pyname = cacheName(currentSpec, getPythonName(&yyvsp[-1].optflags, yyvsp[-3].text));
                emd -> cname = yyvsp[-3].text;
                emd -> ed = currentEnum;
                emd -> next = NULL;

                checkAttributes(currentSpec, currentModule, emd->ed->ecd, emd->pyname->text, FALSE);

                /* Append to preserve the order. */
                for (tail = &currentEnum->members; *tail != NULL; tail = &(*tail)->next)
                    ;

                *tail = emd;

                if (inMainModule())
                    setIsUsedName(emd -> pyname);
            }
        }
    break;

  case 146:
#line 1131 "parser.y"
    {
            yyval.valp = NULL;
        }
    break;

  case 147:
#line 1134 "parser.y"
    {
            yyval.valp = yyvsp[0].valp;
        }
    break;

  case 149:
#line 1140 "parser.y"
    {
            valueDef *vd;
 
            if (yyvsp[-2].valp -> vtype == string_value || yyvsp[0].valp -> vtype == string_value)
                yyerror("Invalid binary operator for string");
 
            /* Find the last value in the existing expression. */
 
            for (vd = yyvsp[-2].valp; vd -> next != NULL; vd = vd -> next)
                ;
 
            vd -> vbinop = yyvsp[-1].qchar;
            vd -> next = yyvsp[0].valp;

            yyval.valp = yyvsp[-2].valp;
        }
    break;

  case 150:
#line 1158 "parser.y"
    {
            yyval.qchar = '-';
        }
    break;

  case 151:
#line 1161 "parser.y"
    {
            yyval.qchar = '+';
        }
    break;

  case 152:
#line 1164 "parser.y"
    {
            yyval.qchar = '*';
        }
    break;

  case 153:
#line 1167 "parser.y"
    {
            yyval.qchar = '/';
        }
    break;

  case 154:
#line 1170 "parser.y"
    {
            yyval.qchar = '&';
        }
    break;

  case 155:
#line 1173 "parser.y"
    {
            yyval.qchar = '|';
        }
    break;

  case 156:
#line 1178 "parser.y"
    {
            yyval.qchar = '\0';
        }
    break;

  case 157:
#line 1181 "parser.y"
    {
            yyval.qchar = '!';
        }
    break;

  case 158:
#line 1184 "parser.y"
    {
            yyval.qchar = '~';
        }
    break;

  case 159:
#line 1187 "parser.y"
    {
            yyval.qchar = '-';
        }
    break;

  case 160:
#line 1190 "parser.y"
    {
            yyval.qchar = '+';
        }
    break;

  case 161:
#line 1195 "parser.y"
    {
            if (yyvsp[-1].qchar != '\0' && yyvsp[0].value.vtype == string_value)
                yyerror("Invalid unary operator for string");
 
            /*
             * Convert the value to a simple expression on the
             * heap.
             */
 
            yyval.valp = sipMalloc(sizeof (valueDef));
 
            *yyval.valp = yyvsp[0].value;
            yyval.valp -> vunop = yyvsp[-1].qchar;
            yyval.valp -> vbinop = '\0';
            yyval.valp -> next = NULL;
        }
    break;

  case 163:
#line 1214 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("Scoped names are not allowed in a C module");

            appendScopedName(&yyvsp[-2].scpvalp,yyvsp[0].scpvalp);
        }
    break;

  case 164:
#line 1222 "parser.y"
    {
            yyval.scpvalp = text2scopePart(yyvsp[0].text);
        }
    break;

  case 165:
#line 1227 "parser.y"
    {
            /*
             * We let the C++ compiler decide if the value is a
             * valid one - no point in building a full C++ parser
             * here.
             */

            yyval.value.vtype = scoped_value;
            yyval.value.u.vscp = yyvsp[0].scpvalp;
        }
    break;

  case 166:
#line 1237 "parser.y"
    {
            fcallDef *fcd;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = yyvsp[-1].fcall;
            fcd -> type = yyvsp[-3].memArg;

            yyval.value.vtype = fcall_value;
            yyval.value.u.fcd = fcd;
        }
    break;

  case 167:
#line 1247 "parser.y"
    {
            yyval.value.vtype = real_value;
            yyval.value.u.vreal = yyvsp[0].real;
        }
    break;

  case 168:
#line 1251 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = yyvsp[0].number;
        }
    break;

  case 169:
#line 1255 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = 1;
        }
    break;

  case 170:
#line 1259 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = 0;
        }
    break;

  case 171:
#line 1263 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = 0;
        }
    break;

  case 172:
#line 1267 "parser.y"
    {
            yyval.value.vtype = string_value;
            yyval.value.u.vstr = yyvsp[0].text;
        }
    break;

  case 173:
#line 1271 "parser.y"
    {
            yyval.value.vtype = qchar_value;
            yyval.value.u.vqchar = yyvsp[0].qchar;
        }
    break;

  case 174:
#line 1277 "parser.y"
    {
            /* No values. */

            yyval.fcall.nrArgs = 0;
        }
    break;

  case 175:
#line 1282 "parser.y"
    {
            /* The single or first expression. */

            yyval.fcall.args[0] = yyvsp[0].valp;
            yyval.fcall.nrArgs = 1;
        }
    break;

  case 176:
#line 1288 "parser.y"
    {
            /* Check that it wasn't ...(,expression...). */

            if (yyval.fcall.nrArgs == 0)
                yyerror("First argument to function call is missing");

            /* Check there is room. */

            if (yyvsp[-2].fcall.nrArgs == MAX_NR_ARGS)
                yyerror("Too many arguments to function call");

            yyval.fcall = yyvsp[-2].fcall;

            yyval.fcall.args[yyval.fcall.nrArgs] = yyvsp[0].valp;
            yyval.fcall.nrArgs++;
        }
    break;

  case 177:
#line 1306 "parser.y"
    {
            if (notSkipping())
                newTypedef(currentSpec,currentModule,yyvsp[-1].text,&yyvsp[-2].memArg);
        }
    break;

  case 178:
#line 1310 "parser.y"
    {
            if (notSkipping())
            {
                argDef ftype;
                signatureDef *sig;

                /* Create the full signature on the heap. */
                sig = sipMalloc(sizeof (signatureDef));
                *sig = yyvsp[-2].signature;
                sig -> result = yyvsp[-8].memArg;

                /* Create the full type. */
                ftype.atype = function_type;
                ftype.argflags = 0;
                ftype.nrderefs = yyvsp[-6].number;
                ftype.defval = NULL;
                ftype.u.sa = sig;

                newTypedef(currentSpec,currentModule,yyvsp[-5].text,&ftype);
            }
        }
    break;

  case 179:
#line 1333 "parser.y"
    {
            if (notSkipping())
            {
                classDef *cd;

                cd = newClass(currentSpec,class_iface,text2scopedName(yyvsp[0].text));

                pushScope(cd);

                sectionFlags = SECT_IS_PUBLIC;
            }
        }
    break;

  case 180:
#line 1344 "parser.y"
    {
            if (notSkipping())
            {
                finishClass(currentSpec, currentModule, currentScope(), &yyvsp[-4].optflags);
                popScope();
            }
        }
    break;

  case 181:
#line 1353 "parser.y"
    {currentIsTemplate = TRUE;}
    break;

  case 182:
#line 1353 "parser.y"
    {
            if (currentSpec->genc)
                yyerror("Class templates not allowed in a C module");

            if (notSkipping())
            {
                classTmplDef *tcd;

                /*
                 * Make sure there is room for the extra class
                 * name argument.
                 */
                if (yyvsp[-2].signature.nrArgs == MAX_NR_ARGS)
                    yyerror("Internal error - increase the value of MAX_NR_ARGS");

                tcd = sipMalloc(sizeof (classTmplDef));
                tcd->sig = yyvsp[-2].signature;
                tcd->cd = yyvsp[0].klass;
                tcd->next = currentSpec->classtemplates;

                currentSpec->classtemplates = tcd;
            }

            currentIsTemplate = FALSE;
        }
    break;

  case 183:
#line 1380 "parser.y"
    {
            yyval.signature = yyvsp[-1].signature;
        }
    break;

  case 184:
#line 1385 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("Class definition not allowed in a C module");

            if (notSkipping())
            {
                classDef *cd;

                cd = newClass(currentSpec, class_iface, scopeScopedName(yyvsp[0].scpvalp));

                pushScope(cd);

                sectionFlags = SECT_IS_PRIVATE;
            }
        }
    break;

  case 185:
#line 1399 "parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = currentScope();

                /*
                 * See if the class was defined or just
                 * declared.
                 */
                if (yyvsp[-1].boolean)
                {
                    if (yyvsp[-5].scpvalp->next != NULL)
                        yyerror("A scoped name cannot be given in a class definition");

                }
                else if (cd->supers != NULL)
                    yyerror("Class has super-classes but no definition");
                else
                    setIsOpaque(cd);

                finishClass(currentSpec, currentModule, cd, &yyvsp[-2].optflags);
                popScope();

                /*
                 * Check that external classes have only been
                 * declared at the global scope.
                 */
                if (isExternal(cd) && currentScope() != NULL)
                    yyerror("External classes can only be declared in the global scope");

                yyval.klass = cd;
            }
        }
    break;

  case 190:
#line 1442 "parser.y"
    {
            if (notSkipping())
            {
                argDef ad;
                classDef *super;
                scopedNameDef *snd = yyvsp[0].scpvalp;

                /*
                 * This is a hack to allow typedef'ed classes to be used before
                 * we have resolved the typedef definitions.  Unlike elsewhere,
                 * we require that the typedef is defined before being used.
                 */
                for (;;)
                {
                    ad.atype = no_type;
                    ad.argflags = 0;
                    ad.nrderefs = 0;

                    searchTypedefs(currentSpec, snd, &ad);

                    if (ad.atype != defined_type)
                        break;

                    if (ad.nrderefs != 0 || isConstArg(&ad) || isReference(&ad))
                        break;

                    snd = ad.u.snd;
                }

                if (ad.atype != no_type)
                    yyerror("Super-class list contains an invalid type");

                super = findClass(currentSpec, class_iface, snd);
                appendToClassList(&currentScope()->supers, super);
            }
        }
    break;

  case 191:
#line 1480 "parser.y"
    {
            yyval.boolean = FALSE;
        }
    break;

  case 192:
#line 1483 "parser.y"
    {
            yyval.boolean = TRUE;
        }
    break;

  case 203:
#line 1500 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->cppcode, yyvsp[0].codeb);
        }
    break;

  case 204:
#line 1504 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->iff->hdrcode, yyvsp[0].codeb);
        }
    break;

  case 205:
#line 1508 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->travcode != NULL)
                    yyerror("%GCTraverseCode already given for class");

                scope->travcode = yyvsp[0].codeb;
            }
        }
    break;

  case 206:
#line 1519 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->clearcode != NULL)
                    yyerror("%GCClearCode already given for class");

                scope->clearcode = yyvsp[0].codeb;
            }
        }
    break;

  case 207:
#line 1530 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->readbufcode != NULL)
                    yyerror("%BIGetReadBufferCode already given for class");

                scope->readbufcode = yyvsp[0].codeb;
            }
        }
    break;

  case 208:
#line 1541 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->writebufcode != NULL)
                    yyerror("%BIGetWriteBufferCode already given for class");

                scope->writebufcode = yyvsp[0].codeb;
            }
        }
    break;

  case 209:
#line 1552 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->segcountcode != NULL)
                    yyerror("%BIGetSegCountCode already given for class");

                scope->segcountcode = yyvsp[0].codeb;
            }
        }
    break;

  case 210:
#line 1563 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->charbufcode != NULL)
                    yyerror("%BIGetCharBufferCode already given for class");

                scope->charbufcode = yyvsp[0].codeb;
            }
        }
    break;

  case 211:
#line 1574 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->picklecode != NULL)
                    yyerror("%PickleCode already given for class");

                scope->picklecode = yyvsp[0].codeb;
            }
        }
    break;

  case 215:
#line 1588 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtosubcode != NULL)
                    yyerror("Class has more than one %ConvertToSubClassCode directive");

                scope->convtosubcode = yyvsp[0].codeb;
            }
        }
    break;

  case 216:
#line 1599 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtocode != NULL)
                    yyerror("Class has more than one %ConvertToTypeCode directive");

                scope->convtocode = yyvsp[0].codeb;
            }
        }
    break;

  case 217:
#line 1610 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("public section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PUBLIC | yyvsp[-1].number;
        }
    break;

  case 218:
#line 1617 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("protected section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PROT | yyvsp[-1].number;
        }
    break;

  case 219:
#line 1624 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("private section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PRIVATE | yyvsp[-1].number;
        }
    break;

  case 220:
#line 1631 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("signals section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_SIGNAL;
        }
    break;

  case 221:
#line 1640 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 222:
#line 1643 "parser.y"
    {
            yyval.number = SECT_IS_SLOT;
        }
    break;

  case 223:
#line 1648 "parser.y"
    {
            /* Note that we allow non-virtual dtors in C modules. */

            if (notSkipping())
            {
                classDef *cd = currentScope();

                if (strcmp(classBaseName(cd),yyvsp[-8].text) != 0)
                    yyerror("Destructor doesn't have the same name as its class");

                if (isDtor(cd))
                    yyerror("Destructor has already been defined");

                if (currentSpec -> genc && yyvsp[-1].codeb == NULL)
                    yyerror("Destructor in C modules must include %MethodCode");

                cd -> dealloccode = yyvsp[-1].codeb;
                cd -> dtorcode = yyvsp[0].codeb;
                cd -> dtorexceptions = yyvsp[-5].throwlist;
                cd -> classflags |= sectionFlags;

                if (yyvsp[-4].number)
                {
                    if (!yyvsp[-10].number)
                        yyerror("Abstract destructor must be virtual");

                    setIsAbstractClass(cd);
                }

                /*
                 * The class has a shadow if we have a virtual dtor or some
                 * dtor code.
                 */
                if (yyvsp[-10].number || yyvsp[0].codeb != NULL)
                {
                    if (currentSpec -> genc)
                        yyerror("Virtual destructor or %VirtualCatcherCode not allowed in a C module");

                    setHasShadow(cd);
                }

                if (getReleaseGIL(&yyvsp[-3].optflags))
                    setIsReleaseGILDtor(cd);
                else if (getHoldGIL(&yyvsp[-3].optflags))
                    setIsHoldGILDtor(cd);
            }
        }
    break;

  case 224:
#line 1697 "parser.y"
    {currentCtorIsExplicit = TRUE;}
    break;

  case 227:
#line 1701 "parser.y"
    {
            /* Note that we allow ctors in C modules. */

            if (notSkipping())
            {
                if (currentSpec -> genc)
                {
                    if (yyvsp[0].codeb == NULL && yyvsp[-6].signature.nrArgs != 0)
                        yyerror("Constructors with arguments in C modules must include %MethodCode");

                    if (currentCtorIsExplicit)
                        yyerror("Explicit constructors not allowed in a C module");
                }

                if ((sectionFlags & (SECT_IS_PUBLIC | SECT_IS_PROT | SECT_IS_PRIVATE)) == 0)
                    yyerror("Constructor must be in the public, private or protected sections");

                newCtor(yyvsp[-8].text,sectionFlags,&yyvsp[-6].signature,&yyvsp[-3].optflags,yyvsp[0].codeb,yyvsp[-4].throwlist,yyvsp[-2].optsignature,currentCtorIsExplicit);
            }

            free(yyvsp[-8].text);

            currentCtorIsExplicit = FALSE;
        }
    break;

  case 228:
#line 1727 "parser.y"
    {
            yyval.optsignature = NULL;
        }
    break;

  case 229:
#line 1730 "parser.y"
    {
            yyval.optsignature = sipMalloc(sizeof (signatureDef));

            *yyval.optsignature = yyvsp[-2].signature;
        }
    break;

  case 230:
#line 1737 "parser.y"
    {
            yyval.optsignature = NULL;
        }
    break;

  case 231:
#line 1740 "parser.y"
    {
            yyval.optsignature = sipMalloc(sizeof (signatureDef));

            *yyval.optsignature = yyvsp[-2].signature;
            yyval.optsignature -> result = yyvsp[-4].memArg;
        }
    break;

  case 232:
#line 1748 "parser.y"
    {
            yyval.number = FALSE;
        }
    break;

  case 233:
#line 1751 "parser.y"
    {
            yyval.number = TRUE;
        }
    break;

  case 234:
#line 1756 "parser.y"
    {
            if (notSkipping())
            {
                if (sectionFlags != 0 && (sectionFlags & (SECT_IS_PUBLIC | SECT_IS_PROT | SECT_IS_PRIVATE | SECT_IS_SLOT | SECT_IS_SIGNAL)) == 0)
                    yyerror("Class function must be in the public, private, protected, slot or signal sections");

                yyvsp[-9].signature.result = yyvsp[-12].memArg;

                newFunction(currentSpec,currentModule,
                        sectionFlags,currentIsStatic,
                        currentOverIsVirt,
                        yyvsp[-11].text,&yyvsp[-9].signature,yyvsp[-7].number,yyvsp[-5].number,&yyvsp[-4].optflags,yyvsp[-1].codeb,yyvsp[0].codeb,yyvsp[-6].throwlist,yyvsp[-3].optsignature);
            }

            currentIsStatic = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 235:
#line 1773 "parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = currentScope();

                /* Handle the unary '+' and '-' operators. */
                if ((cd != NULL && yyvsp[-9].signature.nrArgs == 0) || (cd == NULL && yyvsp[-9].signature.nrArgs == 1))
                {
                    if (strcmp(yyvsp[-11].text, "__add__") == 0)
                        yyvsp[-11].text = "__pos__";
                    else if (strcmp(yyvsp[-11].text, "__sub__") == 0)
                        yyvsp[-11].text = "__neg__";
                }

                yyvsp[-9].signature.result = yyvsp[-13].memArg;

                newFunction(currentSpec,currentModule,
                        sectionFlags,currentIsStatic,
                        currentOverIsVirt,
                        yyvsp[-11].text,&yyvsp[-9].signature,yyvsp[-7].number,yyvsp[-5].number,&yyvsp[-4].optflags,yyvsp[-1].codeb,yyvsp[0].codeb,yyvsp[-6].throwlist,yyvsp[-3].optsignature);
            }

            currentIsStatic = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 236:
#line 1798 "parser.y"
    {
            if (notSkipping())
            {
                char *sname;
                classDef *scope = currentScope();

                if (scope == NULL || yyvsp[-9].signature.nrArgs != 0)
                    yyerror("Operator casts must be specified in a class and have no arguments");

                switch (yyvsp[-11].memArg.atype)
                {
                case defined_type:
                    sname = NULL;
                    break;

                case bool_type:
                case cbool_type:
                case short_type:
                case ushort_type:
                case int_type:
                case cint_type:
                case uint_type:
                    sname = "__int__";
                    break;

                case long_type:
                case ulong_type:
                case longlong_type:
                case ulonglong_type:
                    sname = "__long__";
                    break;

                case float_type:
                case cfloat_type:
                case double_type:
                case cdouble_type:
                    sname = "__float__";
                    break;

                default:
                    yyerror("Unsupported operator cast");
                }

                if (sname != NULL)
                {
                    yyvsp[-9].signature.result = yyvsp[-11].memArg;

                    newFunction(currentSpec, currentModule,
                            sectionFlags,
                            currentIsStatic,
                            currentOverIsVirt, sname,
                            &yyvsp[-9].signature, yyvsp[-7].number, yyvsp[-5].number, &yyvsp[-4].optflags, yyvsp[-1].codeb, yyvsp[0].codeb,
                            yyvsp[-6].throwlist, yyvsp[-3].optsignature);
                }
                else
                {
                    argList *al;

                    /* Check it doesn't already exist. */
                    for (al = scope->casts; al != NULL; al = al->next)
                        if (sameScopedName(yyvsp[-11].memArg.u.snd, al->arg.u.snd))
                            yyerror("This operator cast has already been specified in this class");

                    al = sipMalloc(sizeof (argList));
                    al->arg = yyvsp[-11].memArg;
                    al->next = scope->casts;

                    scope->casts = al;
                }
            }

            currentIsStatic = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 237:
#line 1874 "parser.y"
    {yyval.text = "__add__";}
    break;

  case 238:
#line 1875 "parser.y"
    {yyval.text = "__sub__";}
    break;

  case 239:
#line 1876 "parser.y"
    {yyval.text = "__mul__";}
    break;

  case 240:
#line 1877 "parser.y"
    {yyval.text = "__div__";}
    break;

  case 241:
#line 1878 "parser.y"
    {yyval.text = "__mod__";}
    break;

  case 242:
#line 1879 "parser.y"
    {yyval.text = "__and__";}
    break;

  case 243:
#line 1880 "parser.y"
    {yyval.text = "__or__";}
    break;

  case 244:
#line 1881 "parser.y"
    {yyval.text = "__xor__";}
    break;

  case 245:
#line 1882 "parser.y"
    {yyval.text = "__lshift__";}
    break;

  case 246:
#line 1883 "parser.y"
    {yyval.text = "__rshift__";}
    break;

  case 247:
#line 1884 "parser.y"
    {yyval.text = "__iadd__";}
    break;

  case 248:
#line 1885 "parser.y"
    {yyval.text = "__isub__";}
    break;

  case 249:
#line 1886 "parser.y"
    {yyval.text = "__imul__";}
    break;

  case 250:
#line 1887 "parser.y"
    {yyval.text = "__idiv__";}
    break;

  case 251:
#line 1888 "parser.y"
    {yyval.text = "__imod__";}
    break;

  case 252:
#line 1889 "parser.y"
    {yyval.text = "__iand__";}
    break;

  case 253:
#line 1890 "parser.y"
    {yyval.text = "__ior__";}
    break;

  case 254:
#line 1891 "parser.y"
    {yyval.text = "__ixor__";}
    break;

  case 255:
#line 1892 "parser.y"
    {yyval.text = "__ilshift__";}
    break;

  case 256:
#line 1893 "parser.y"
    {yyval.text = "__irshift__";}
    break;

  case 257:
#line 1894 "parser.y"
    {yyval.text = "__invert__";}
    break;

  case 258:
#line 1895 "parser.y"
    {yyval.text = "__call__";}
    break;

  case 259:
#line 1896 "parser.y"
    {yyval.text = "__getitem__";}
    break;

  case 260:
#line 1897 "parser.y"
    {yyval.text = "__lt__";}
    break;

  case 261:
#line 1898 "parser.y"
    {yyval.text = "__le__";}
    break;

  case 262:
#line 1899 "parser.y"
    {yyval.text = "__eq__";}
    break;

  case 263:
#line 1900 "parser.y"
    {yyval.text = "__ne__";}
    break;

  case 264:
#line 1901 "parser.y"
    {yyval.text = "__gt__";}
    break;

  case 265:
#line 1902 "parser.y"
    {yyval.text = "__ge__";}
    break;

  case 266:
#line 1905 "parser.y"
    {
            yyval.number = FALSE;
        }
    break;

  case 267:
#line 1908 "parser.y"
    {
            yyval.number = TRUE;
        }
    break;

  case 268:
#line 1913 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 269:
#line 1916 "parser.y"
    {
            if (yyvsp[0].number != 0)
                yyerror("Abstract virtual function '= 0' expected");

            yyval.number = TRUE;
        }
    break;

  case 270:
#line 1924 "parser.y"
    {
            yyval.optflags.nrFlags = 0;
        }
    break;

  case 271:
#line 1927 "parser.y"
    {
            yyval.optflags = yyvsp[-1].optflags;
        }
    break;

  case 272:
#line 1933 "parser.y"
    {
            yyval.optflags.flags[0] = yyvsp[0].flag;
            yyval.optflags.nrFlags = 1;
        }
    break;

  case 273:
#line 1937 "parser.y"
    {
            /* Check there is room. */

            if (yyvsp[-2].optflags.nrFlags == MAX_NR_FLAGS)
                yyerror("Too many optional flags");

            yyval.optflags = yyvsp[-2].optflags;

            yyval.optflags.flags[yyval.optflags.nrFlags++] = yyvsp[0].flag;
        }
    break;

  case 274:
#line 1949 "parser.y"
    {
            yyval.flag.ftype = bool_flag;
            yyval.flag.fname = yyvsp[0].text;
        }
    break;

  case 275:
#line 1953 "parser.y"
    {
            yyval.flag = yyvsp[0].flag;
            yyval.flag.fname = yyvsp[-2].text;
        }
    break;

  case 276:
#line 1959 "parser.y"
    {
            yyval.flag.ftype = name_flag;
            yyval.flag.fvalue.sval = yyvsp[0].text;
        }
    break;

  case 277:
#line 1963 "parser.y"
    {
            yyval.flag.ftype = string_flag;
            yyval.flag.fvalue.sval = yyvsp[0].text;
        }
    break;

  case 278:
#line 1967 "parser.y"
    {
            yyval.flag.ftype = integer_flag;
            yyval.flag.fvalue.ival = yyvsp[0].number;
        }
    break;

  case 279:
#line 1973 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 280:
#line 1976 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 281:
#line 1981 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 282:
#line 1984 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 283:
#line 1989 "parser.y"
    {
            int a, nrrxcon, nrrxdis, nrslotcon, nrslotdis, nrarray, nrarraysize;

            nrrxcon = nrrxdis = nrslotcon = nrslotdis = nrarray = nrarraysize = 0;

            for (a = 0; a < yyvsp[0].signature.nrArgs; ++a)
            {
                argDef *ad = &yyvsp[0].signature.args[a];

                switch (ad -> atype)
                {
                case rxcon_type:
                    ++nrrxcon;
                    break;

                case rxdis_type:
                    ++nrrxdis;
                    break;

                case slotcon_type:
                    ++nrslotcon;
                    break;

                case slotdis_type:
                    ++nrslotdis;
                    break;
                }

                if (isArray(ad))
                    ++nrarray;

                if (isArraySize(ad))
                    ++nrarraysize;
            }

            if (nrrxcon != nrslotcon || nrrxcon > 1)
                yyerror("SIP_RXOBJ_CON and SIP_SLOT_CON must both be given and at most once");

            if (nrrxdis != nrslotdis || nrrxdis > 1)
                yyerror("SIP_RXOBJ_DIS and SIP_SLOT_DIS must both be given and at most once");

            if (nrarray != nrarraysize || nrarray > 1)
                yyerror("/Array/ and /ArraySize/ must both be given and at most once");

            yyval.signature = yyvsp[0].signature;
        }
    break;

  case 284:
#line 2037 "parser.y"
    {
            /* No arguments. */

            yyval.signature.nrArgs = 0;
        }
    break;

  case 285:
#line 2042 "parser.y"
    {
            /* The single or first argument. */

            yyval.signature.args[0] = yyvsp[0].memArg;
            yyval.signature.nrArgs = 1;
        }
    break;

  case 286:
#line 2048 "parser.y"
    {
            /* Check that it wasn't ...(,arg...). */
            if (yyvsp[-2].signature.nrArgs == 0)
                yyerror("First argument of the list is missing");

            /* Check there is nothing after an ellipsis. */
            if (yyvsp[-2].signature.args[yyvsp[-2].signature.nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /*
             * If this argument has no default value, then the
             * previous one mustn't either.
             */
            if (yyvsp[0].memArg.defval == NULL && yyvsp[-2].signature.args[yyvsp[-2].signature.nrArgs - 1].defval != NULL)
                yyerror("Compulsory argument given after optional argument");

            /* Check there is room. */
            if (yyvsp[-2].signature.nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            yyval.signature = yyvsp[-2].signature;

            yyval.signature.args[yyval.signature.nrArgs] = yyvsp[0].memArg;
            yyval.signature.nrArgs++;
        }
    break;

  case 287:
#line 2075 "parser.y"
    {
            yyval.memArg.atype = signal_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-2].text;
            yyval.memArg.defval = yyvsp[0].valp;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 288:
#line 2084 "parser.y"
    {
            yyval.memArg.atype = slot_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-2].text;
            yyval.memArg.defval = yyvsp[0].valp;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 289:
#line 2093 "parser.y"
    {
            yyval.memArg.atype = anyslot_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-2].text;
            yyval.memArg.defval = yyvsp[0].valp;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 290:
#line 2102 "parser.y"
    {
            yyval.memArg.atype = rxcon_type;
            yyval.memArg.argflags = 0;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-1].text;

            if (findOptFlag(&yyvsp[0].optflags, "SingleShot", bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_SINGLE_SHOT;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 291:
#line 2113 "parser.y"
    {
            yyval.memArg.atype = rxdis_type;
            yyval.memArg.argflags = 0;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-1].text;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 292:
#line 2121 "parser.y"
    {
            yyval.memArg.atype = slotcon_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-1].text;

            yyvsp[-3].signature.result.atype = void_type;
            yyvsp[-3].signature.result.argflags = 0;
            yyvsp[-3].signature.result.nrderefs = 0;

            yyval.memArg.u.sa = sipMalloc(sizeof (signatureDef));
            *yyval.memArg.u.sa = yyvsp[-3].signature;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 293:
#line 2136 "parser.y"
    {
            yyval.memArg.atype = slotdis_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-1].text;

            yyvsp[-3].signature.result.atype = void_type;
            yyvsp[-3].signature.result.argflags = 0;
            yyvsp[-3].signature.result.nrderefs = 0;

            yyval.memArg.u.sa = sipMalloc(sizeof (signatureDef));
            *yyval.memArg.u.sa = yyvsp[-3].signature;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 294:
#line 2151 "parser.y"
    {
            yyval.memArg.atype = qobject_type;
            yyval.memArg.argflags = 0;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-1].text;
        }
    break;

  case 295:
#line 2157 "parser.y"
    {
            yyval.memArg = yyvsp[-1].memArg;
            yyval.memArg.defval = yyvsp[0].valp;
        }
    break;

  case 296:
#line 2163 "parser.y"
    {currentIsStatic = TRUE;}
    break;

  case 301:
#line 2171 "parser.y"
    {currentOverIsVirt = TRUE;}
    break;

  case 304:
#line 2175 "parser.y"
    {
            if (notSkipping())
            {
                /* Check the section. */

                if (sectionFlags != 0)
                {
                    if ((sectionFlags & SECT_IS_PUBLIC) == 0)
                        yyerror("Class variables must be in the public section");

                    if (!currentIsStatic && yyvsp[-2].codeb != NULL)
                        yyerror("%AccessCode cannot be specified for non-static class variables");
                }

                if (currentIsStatic && currentSpec -> genc)
                    yyerror("Cannot have static members in a C structure");

                if (yyvsp[-1].codeb != NULL || yyvsp[0].codeb != NULL)
                {
                    if (yyvsp[-2].codeb != NULL)
                        yyerror("Cannot mix %AccessCode and %GetCode or %SetCode");

                    if (currentScope() == NULL)
                        yyerror("Cannot specify %GetCode or %SetCode for global variables");
                }

                newVar(currentSpec,currentModule,yyvsp[-5].text,currentIsStatic,&yyvsp[-6].memArg,&yyvsp[-4].optflags,yyvsp[-2].codeb,yyvsp[-1].codeb,yyvsp[0].codeb);
            }

            currentIsStatic = FALSE;
        }
    break;

  case 305:
#line 2208 "parser.y"
    {
            yyval.memArg = yyvsp[-2].memArg;
            yyval.memArg.nrderefs = yyvsp[-1].number;
            yyval.memArg.argflags = ARG_IS_CONST | yyvsp[0].number;
            yyval.memArg.name = NULL;
        }
    break;

  case 306:
#line 2214 "parser.y"
    {
            yyval.memArg = yyvsp[-2].memArg;
            yyval.memArg.nrderefs = yyvsp[-1].number;
            yyval.memArg.argflags = yyvsp[0].number;
            yyval.memArg.name = NULL;
        }
    break;

  case 307:
#line 2222 "parser.y"
    {
            yyval.memArg = yyvsp[-2].memArg;
            yyval.memArg.name = yyvsp[-1].text;

            if (findOptFlag(&yyvsp[0].optflags,"AllowNone",bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_ALLOW_NONE;

            if (findOptFlag(&yyvsp[0].optflags,"GetWrapper",bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_GET_WRAPPER;

            if (findOptFlag(&yyvsp[0].optflags,"Array",bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_ARRAY;

            if (findOptFlag(&yyvsp[0].optflags,"ArraySize",bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_ARRAY_SIZE;

            if (getTransfer(&yyvsp[0].optflags))
                yyval.memArg.argflags |= ARG_XFERRED;

            if (findOptFlag(&yyvsp[0].optflags,"TransferThis",bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_THIS_XFERRED;

            if (findOptFlag(&yyvsp[0].optflags,"TransferBack",bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_XFERRED_BACK;

            if (findOptFlag(&yyvsp[0].optflags,"In",bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_IN;

            if (findOptFlag(&yyvsp[0].optflags,"Out",bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_OUT;

            if (findOptFlag(&yyvsp[0].optflags, "ResultSize", bool_flag) != NULL)
                yyval.memArg.argflags |= ARG_RESULT_SIZE;

            if (findOptFlag(&yyvsp[0].optflags,"Constrained",bool_flag) != NULL)
            {
                yyval.memArg.argflags |= ARG_CONSTRAINED;

                switch (yyval.memArg.atype)
                {
                case bool_type:
                    yyval.memArg.atype = cbool_type;
                    break;

                case int_type:
                    yyval.memArg.atype = cint_type;
                    break;

                case float_type:
                    yyval.memArg.atype = cfloat_type;
                    break;

                case double_type:
                    yyval.memArg.atype = cdouble_type;
                    break;
                }
            }
        }
    break;

  case 308:
#line 2282 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 309:
#line 2285 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("References not allowed in a C module");

            yyval.number = ARG_IS_REF;
        }
    break;

  case 310:
#line 2293 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 311:
#line 2296 "parser.y"
    {
            yyval.number = yyvsp[-1].number + 1;
        }
    break;

  case 312:
#line 2301 "parser.y"
    {
            yyval.memArg.atype = defined_type;
            yyval.memArg.u.snd = yyvsp[0].scpvalp;
        }
    break;

  case 313:
#line 2305 "parser.y"
    {
            templateDef *td;

            td = sipMalloc(sizeof(templateDef));
            td -> fqname = yyvsp[-3].scpvalp;
            td -> types = yyvsp[-1].signature;

            yyval.memArg.atype = template_type;
            yyval.memArg.u.td = td;
        }
    break;

  case 314:
#line 2315 "parser.y"
    {
            /* In a C module all structures must be defined. */
            if (currentSpec -> genc)
            {
                yyval.memArg.atype = defined_type;
                yyval.memArg.u.snd = yyvsp[0].scpvalp;
            }
            else
            {
                yyval.memArg.atype = struct_type;
                yyval.memArg.u.sname = yyvsp[0].scpvalp;
            }
        }
    break;

  case 315:
#line 2328 "parser.y"
    {
            yyval.memArg.atype = ushort_type;
        }
    break;

  case 316:
#line 2331 "parser.y"
    {
            yyval.memArg.atype = short_type;
        }
    break;

  case 317:
#line 2334 "parser.y"
    {
            yyval.memArg.atype = uint_type;
        }
    break;

  case 318:
#line 2337 "parser.y"
    {
            yyval.memArg.atype = uint_type;
        }
    break;

  case 319:
#line 2340 "parser.y"
    {
            yyval.memArg.atype = int_type;
        }
    break;

  case 320:
#line 2343 "parser.y"
    {
            yyval.memArg.atype = long_type;
        }
    break;

  case 321:
#line 2346 "parser.y"
    {
            yyval.memArg.atype = ulong_type;
        }
    break;

  case 322:
#line 2349 "parser.y"
    {
            yyval.memArg.atype = longlong_type;
        }
    break;

  case 323:
#line 2352 "parser.y"
    {
            yyval.memArg.atype = ulonglong_type;
        }
    break;

  case 324:
#line 2355 "parser.y"
    {
            yyval.memArg.atype = float_type;
        }
    break;

  case 325:
#line 2358 "parser.y"
    {
            yyval.memArg.atype = double_type;
        }
    break;

  case 326:
#line 2361 "parser.y"
    {
            yyval.memArg.atype = bool_type;
        }
    break;

  case 327:
#line 2364 "parser.y"
    {
            yyval.memArg.atype = sstring_type;
        }
    break;

  case 328:
#line 2367 "parser.y"
    {
            yyval.memArg.atype = ustring_type;
        }
    break;

  case 329:
#line 2370 "parser.y"
    {
            yyval.memArg.atype = string_type;
        }
    break;

  case 330:
#line 2373 "parser.y"
    {
            yyval.memArg.atype = wstring_type;
        }
    break;

  case 331:
#line 2376 "parser.y"
    {
            yyval.memArg.atype = void_type;
        }
    break;

  case 332:
#line 2379 "parser.y"
    {
            yyval.memArg.atype = pyobject_type;
        }
    break;

  case 333:
#line 2382 "parser.y"
    {
            yyval.memArg.atype = pytuple_type;
        }
    break;

  case 334:
#line 2385 "parser.y"
    {
            yyval.memArg.atype = pylist_type;
        }
    break;

  case 335:
#line 2388 "parser.y"
    {
            yyval.memArg.atype = pydict_type;
        }
    break;

  case 336:
#line 2391 "parser.y"
    {
            yyval.memArg.atype = pycallable_type;
        }
    break;

  case 337:
#line 2394 "parser.y"
    {
            yyval.memArg.atype = pyslice_type;
        }
    break;

  case 338:
#line 2397 "parser.y"
    {
            yyval.memArg.atype = pytype_type;
        }
    break;

  case 339:
#line 2400 "parser.y"
    {
            yyval.memArg.atype = ellipsis_type;
        }
    break;

  case 340:
#line 2405 "parser.y"
    {
            /* The single or first type. */

            yyval.signature.args[0] = yyvsp[0].memArg;
            yyval.signature.nrArgs = 1;
        }
    break;

  case 341:
#line 2411 "parser.y"
    {
            /* Check there is nothing after an ellipsis. */
            if (yyvsp[-2].signature.args[yyvsp[-2].signature.nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /* Check there is room. */
            if (yyvsp[-2].signature.nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            yyval.signature = yyvsp[-2].signature;

            yyval.signature.args[yyval.signature.nrArgs] = yyvsp[0].memArg;
            yyval.signature.nrArgs++;
        }
    break;

  case 342:
#line 2427 "parser.y"
    {
            yyval.throwlist = NULL;
        }
    break;

  case 343:
#line 2430 "parser.y"
    {
            if (currentSpec->genc)
                yyerror("Exceptions not allowed in a C module");

            yyval.throwlist = yyvsp[-1].throwlist;
        }
    break;

  case 344:
#line 2438 "parser.y"
    {
            /* Empty list so use a blank. */

            yyval.throwlist = sipMalloc(sizeof (throwArgs));
            yyval.throwlist -> nrArgs = 0;
        }
    break;

  case 345:
#line 2444 "parser.y"
    {
            /* The only or first exception. */

            yyval.throwlist = sipMalloc(sizeof (throwArgs));
            yyval.throwlist -> nrArgs = 1;
            yyval.throwlist -> args[0] = findException(currentSpec, yyvsp[0].scpvalp, FALSE);
        }
    break;

  case 346:
#line 2451 "parser.y"
    {
            /* Check that it wasn't ...(,arg...). */

            if (yyvsp[-2].throwlist -> nrArgs == 0)
                yyerror("First exception of throw specifier is missing");

            /* Check there is room. */

            if (yyvsp[-2].throwlist -> nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            yyval.throwlist = yyvsp[-2].throwlist;
            yyval.throwlist -> args[yyval.throwlist -> nrArgs++] = findException(currentSpec, yyvsp[0].scpvalp, FALSE);
        }
    break;


    }

/* Line 1010 of yacc.c.  */
#line 4855 "parser.c"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
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

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 2467 "parser.y"



/*
 * Parse the specification.
 */
void parse(sipSpec *spec, FILE *fp, char *filename, stringList *tsl,
        stringList *xfl)
{
    classTmplDef *tcd;

        /* Initialise the spec. */
 
    spec -> modules = NULL;
    spec -> namecache = NULL;
    spec -> ifacefiles = NULL;
    spec -> classes = NULL;
    spec -> classtemplates = NULL;
    spec -> exceptions = NULL;
    spec -> mappedtypes = NULL;
    spec -> mappedtypetemplates = NULL;
    spec -> enums = NULL;
    spec -> vars = NULL;
    spec -> typedefs = NULL;
    spec -> exphdrcode = NULL;
    spec -> docs = NULL;
    spec -> sigslots = FALSE;
    spec -> genc = -1;
    spec -> options = NULL;

    currentSpec = spec;
    neededQualifiers = tsl;
    excludedQualifiers = xfl;
    currentModule = NULL;
    currentMappedType = NULL;
    currentOverIsVirt = FALSE;
    currentCtorIsExplicit = FALSE;
    currentIsStatic = FALSE;
    currentIsTemplate = FALSE;
    previousFile = NULL;
    skipStackPtr = 0;
    currentScopeIdx = 0;
    sectionFlags = 0;

    newModule(fp, filename);
    spec -> module = currentModule;

    yyparse();

    handleEOF();
    handleEOM();

    /*
     * Go through each template class and remove it from the list of
     * classes.
     */
    for (tcd = spec->classtemplates; tcd != NULL; tcd = tcd->next)
    {
        classDef **cdp;

        for (cdp = &spec->classes; *cdp != NULL; cdp = &(*cdp)->next)
            if (*cdp == tcd->cd)
            {
                ifaceFileDef **ifdp;

                /* Remove the interface file as well. */
                for (ifdp = &spec->ifacefiles; *ifdp != NULL; ifdp = &(*ifdp)->next)
                    if (*ifdp == tcd->cd->iff)
                    {
                        *ifdp = (*ifdp)->next;
                        break;
                    }

                *cdp = (*cdp)->next;
                break;
            }
    }
}


/*
 * Tell the parser that a complete file has now been read.
 */
void parserEOF(char *name, parserContext *pc)
{
    previousFile = sipStrdup(name);
    currentContext = *pc;
}


/*
 * Append a class definition to a class list if it doesn't already appear.
 * Append is needed specifically for the list of super-classes because the
 * order is important to Python.
 */
void appendToClassList(classList **clp,classDef *cd)
{
    classList *new;

    /* Find the end of the list. */

    while (*clp != NULL)
    {
        if ((*clp) -> cd == cd)
            return;

        clp = &(*clp) -> next;
    }

    new = sipMalloc(sizeof (classList));

    new -> cd = cd;
    new -> next = NULL;

    *clp = new;
}


/*
 * Create a new module for the current specification and make it current.
 */
static void newModule(FILE *fp, char *filename)
{
    parseFile(fp, filename, currentModule, FALSE);
    currentModule = allocModule();
    currentModule->file = filename;
}


/*
 * Allocate and initialise the memory for a new module.
 */
static moduleDef *allocModule()
{
    moduleDef *newmod, **tailp;

    newmod = sipMalloc(sizeof (moduleDef));
    newmod->fullname = NULL;
    newmod->name = NULL;
    newmod->version = -1;
    newmod->modflags = 0;
    newmod->qobjclass = -1;
    newmod->othfuncs = NULL;
    newmod->overs = NULL;
    newmod->hdrcode = NULL;
    newmod->cppcode = NULL;
    newmod->copying = NULL;
    newmod->preinitcode = NULL;
    newmod->postinitcode = NULL;
    newmod->unitcode = NULL;
    newmod->modulenr = -1;
    newmod->file = NULL;
    newmod->qualifiers = NULL;
    newmod->root.cd = NULL;
    newmod->root.child = NULL;
    newmod->nrtimelines = 0;
    newmod->nrclasses = 0;
    newmod->nrexceptions = 0;
    newmod->nrmappedtypes = 0;
    newmod->nrenums = 0;
    newmod->nrtypedefs = 0;
    newmod->nrvirthandlers = -1;
    newmod->virthandlers = NULL;
    newmod->license = NULL;
    newmod->proxies = NULL;
    newmod->container = NULL;
    newmod->used = NULL;
    newmod->allimports = NULL;
    newmod->imports = NULL;
    newmod->next = NULL;

    /*
     * The consolidated module support needs these to be in order that they
     * appeared.
     */
    for (tailp = &currentSpec->modules; *tailp != NULL; tailp = &(*tailp)->next)
        ;

    *tailp = newmod;

    return newmod;
}


/*
 * Switch to parsing a new file.
 */
static void parseFile(FILE *fp, char *name, moduleDef *prevmod, int optional)
{
    parserContext pc;

    pc.filename = name;
    pc.ifdepth = skipStackPtr;
    pc.prevmod = prevmod;

    if (setInputFile(fp, &pc, optional))
        currentContext = pc;
}


/*
 * Find an interface file, or create a new one.
 */
ifaceFileDef *findIfaceFile(sipSpec *pt, moduleDef *mod, scopedNameDef *fqname,
        ifaceFileType iftype, argDef *ad)
{
    ifaceFileDef *iff;

    /* See if the name is already used. */

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (!sameScopedName(iff->fqcname, fqname))
            continue;

        /*
         * They must be the same type except that we allow a class if if we
         * want an exception.  This is because we allow classes to be used
         * before they are defined.
         */
        if (iff->type != iftype)
            if (iftype != exception_iface || iff->type != class_iface)
                yyerror("A class, exception, namespace or mapped type has already been defined with the same name");

        /* Ignore an external class declared in another module. */
        if (iftype == class_iface && iff->module != mod)
        {
            classDef *cd;

            for (cd = pt->classes; cd != NULL; cd = cd->next)
                if (cd->iff == iff)
                    break;

            if (cd != NULL && iff->module != NULL && isExternal(cd))
                continue;
        }

        /*
         * If this is a mapped type with the same name defined in a different
         * module, then check that this type isn't the same as any of the
         * mapped types defined in that module.
         */
        if (iftype == mappedtype_iface && iff->module != mod)
        {
            mappedTypeDef *mtd;

            for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
            {
                if (mtd->iff != iff)
                    continue;

                if (ad->atype != template_type ||
                    mtd->type.atype != template_type ||
                    sameBaseType(ad, &mtd->type))
                    yyerror("Mapped type has already been defined in another module");
            }

            /*
             * If we got here then we have a mapped type based on an existing
             * template, but with unique parameters.  We don't want to use
             * interface files from other modules, so skip this one.
             */

            continue;
        }

        /* Ignore a namespace defined in another module. */
        if (iftype == namespace_iface && iff->module != mod)
            continue;

        return iff;
    }

    iff = sipMalloc(sizeof (ifaceFileDef));

    iff->name = cacheName(pt, scopedNameTail(fqname));
    iff->type = iftype;
    iff->fqcname = fqname;
    iff->module = NULL;
    iff->hdrcode = NULL;
    iff->used = NULL;
    iff->next = pt->ifacefiles;

    pt->ifacefiles = iff;

    return iff;
}


/*
 * Find a class definition in a parse tree.
 */
static classDef *findClass(sipSpec *pt,ifaceFileType iftype,
               scopedNameDef *fqname)
{
    return findClassWithInterface(pt, findIfaceFile(pt, currentModule, fqname, iftype, NULL));
}


/*
 * Find a class definition given an existing interface file.
 */
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff)
{
    classDef *cd;

    for (cd = pt -> classes; cd != NULL; cd = cd -> next)
        if (cd -> iff == iff)
            return cd;

    /* Create a new one. */
    cd = sipMalloc(sizeof (classDef));

    cd -> iff = iff;
    cd -> pyname = classBaseName(cd);
    cd -> classnr = -1;
    cd -> classflags = 0;
    cd -> userflags = 0;
    cd -> ecd = NULL;
    cd -> dtorexceptions = NULL;
    cd -> real = NULL;
    cd -> node = NULL;
    cd -> supers = NULL;
    cd -> mro = NULL;
    cd -> td = NULL;
    cd -> ctors = NULL;
    cd -> defctor = NULL;
    cd -> dealloccode = NULL;
    cd -> dtorcode = NULL;
    cd -> members = NULL;
    cd -> overs = NULL;
    cd -> casts = NULL;
    cd -> vmembers = NULL;
    cd -> visible = NULL;
    cd -> cppcode = NULL;
    cd -> convtosubcode = NULL;
    cd -> subbase = NULL;
    cd -> convtocode = NULL;
    cd -> travcode = NULL;
    cd -> clearcode = NULL;
    cd -> readbufcode = NULL;
    cd -> writebufcode = NULL;
    cd -> segcountcode = NULL;
    cd -> charbufcode = NULL;
    cd -> picklecode = NULL;
    cd -> next = pt -> classes;

    pt -> classes = cd;

    return cd;
}


/*
 * Add an interface file to an interface file list if it isn't already there.
 */
void addToUsedList(ifaceFileList **ifflp, ifaceFileDef *iff)
{
    /* Make sure we don't try to add an interface file to its own list. */
    if (&iff->used != ifflp)
    {
        ifaceFileList *iffl;

        while ((iffl = *ifflp) != NULL)
        {
            /* Don't bother if it is already there. */
            if (iffl->iff == iff)
                return;

            ifflp = &iffl -> next;
        }

        iffl = sipMalloc(sizeof (ifaceFileList));

        iffl->iff = iff;
        iffl->next = NULL;

        *ifflp = iffl;
    }
}


/*
 * Find an undefined (or create a new) exception definition in a parse tree.
 */
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new)
{
    exceptionDef *xd, **tail;
    ifaceFileDef *iff;
    classDef *cd;

    iff = findIfaceFile(pt, currentModule, fqname, exception_iface, NULL);

    /* See if it is an existing one. */
    for (xd = pt->exceptions; xd != NULL; xd = xd->next)
        if (xd->iff == iff)
            return xd;

    /*
     * If it is an exception interface file then we have never seen this
     * name before.  We require that exceptions are defined before being
     * used, but don't make the same requirement of classes (for reasons of
     * backwards compatibility).  Therefore the name must be reinterpreted
     * as a (as yet undefined) class.
     */
    if (new)
        if (iff->type == exception_iface)
            cd = NULL;
        else
            yyerror("There is already a class with the same name or the exception has been used before being defined");
    else
    {
        if (iff->type == exception_iface)
            iff->type = class_iface;

        cd = findClassWithInterface(pt, iff);
    }

    /* Create a new one. */
    xd = sipMalloc(sizeof (exceptionDef));

    xd->exceptionnr = -1;
    xd->iff = iff;
    xd->pyname = NULL;
    xd->cd = cd;
    xd->bibase = NULL;
    xd->base = NULL;
    xd->raisecode = NULL;
    xd->next = NULL;

    /* Append it to the list. */
    for (tail = &pt->exceptions; *tail != NULL; tail = &(*tail)->next)
        ;

    *tail = xd;

    return xd;
}


/*
 * Find an undefined (or create a new) class definition in a parse tree.
 */
static classDef *newClass(sipSpec *pt,ifaceFileType iftype,
              scopedNameDef *fqname)
{
    int flags;
    classDef *cd, *scope;
    codeBlock *hdrcode;

    if (sectionFlags & SECT_IS_PRIVATE)
        yyerror("Classes, structs and namespaces must be in the public or or protected sections");

    flags = 0;

    if ((scope = currentScope()) != NULL)
    {
        if (sectionFlags & SECT_IS_PROT)
        {
            flags = CLASS_IS_PROTECTED;

            if (scope->iff->type == class_iface)
                setHasShadow(scope);
        }

        /* Header code from outer scopes is also included. */
        hdrcode = scope->iff->hdrcode;
    }
    else
        hdrcode = NULL;

    if (pt -> genc)
    {
        /* C structs are always global types. */
        while (fqname -> next != NULL)
            fqname = fqname -> next;

        scope = NULL;
    }

    cd = findClass(pt, iftype, fqname);

    /* Check it hasn't already been defined. */
    if (iftype != namespace_iface && cd->iff->module != NULL)
        yyerror("The struct/class has already been defined");

    /* Complete the initialisation. */
    cd->classflags |= flags;
    cd->ecd = scope;
    cd->iff->module = currentModule;

    appendCodeBlock(&cd->iff->hdrcode, hdrcode);

    /* See if it is a namespace extender. */
    if (iftype == namespace_iface)
    {
        classDef *ns;

        for (ns = pt->classes; ns != NULL; ns = ns->next)
        {
            if (ns == cd)
                continue;

            if (ns->iff->type != namespace_iface)
                continue;

            if (!sameScopedName(ns->iff->fqcname, fqname))
                continue;

            cd->real = ns;
            break;
        }
    }

    return cd;
}


/*
 * Tidy up after finishing a class definition.
 */
static void finishClass(sipSpec *pt, moduleDef *mod, classDef *cd, optFlags *of)
{
    const char *pyname;
    optFlag *flg;

    /* Get the Python name and see if it is different to the C++ name. */
    pyname = getPythonName(of, classBaseName(cd));

    cd -> pyname = NULL;
    checkAttributes(pt, mod, cd->ecd, pyname, FALSE);
    cd->pyname = pyname;

    if (cd->pyname != classBaseName(cd))
        setIsRenamedClass(cd);

    if ((flg = findOptFlag(of, "TypeFlags", integer_flag)) != NULL)
        cd->userflags = flg->fvalue.ival;

    if (findOptFlag(of, "NoQMetaObject", bool_flag) != NULL)
        setNoQMetaObject(cd);

    if (isOpaque(cd))
    {
        if (findOptFlag(of, "External", bool_flag) != NULL)
            setIsExternal(cd);
    }
    else
    {
        int seq_might, seq_not;
        memberDef *md;

        if (findOptFlag(of, "NoDefaultCtors", bool_flag) != NULL)
            setNoDefaultCtors(cd);

        if (cd -> ctors == NULL)
        {
            if (!noDefaultCtors(cd))
            {
                /* Provide a default ctor. */

                cd->ctors = sipMalloc(sizeof (ctorDef));
 
                cd->ctors->ctorflags = SECT_IS_PUBLIC;
                cd->ctors->pysig.nrArgs = 0;
                cd->ctors->cppsig = &cd -> ctors -> pysig;
                cd->ctors->exceptions = NULL;
                cd->ctors->methodcode = NULL;
                cd->ctors->prehook = NULL;
                cd->ctors->posthook = NULL;
                cd->ctors->next = NULL;

                cd->defctor = cd->ctors;

                setCanCreate(cd);
            }
        }
        else if (cd -> defctor == NULL)
        {
            ctorDef *ct, *last = NULL;

            for (ct = cd -> ctors; ct != NULL; ct = ct -> next)
            {
                if (!isPublicCtor(ct))
                    continue;

                if (ct -> pysig.nrArgs == 0 || ct -> pysig.args[0].defval != NULL)
                {
                    cd -> defctor = ct;
                    break;
                }

                if (last == NULL)
                    last = ct;
            }

            /* The last resort is the first public ctor. */
            if (cd->defctor == NULL)
                cd->defctor = last;
        }

        if (findOptFlag(of,"Abstract",bool_flag) != NULL)
        {
            setIsAbstractClass(cd);
            setIsIncomplete(cd);
            resetCanCreate(cd);
        }

        /* We assume a public dtor if nothing specific was provided. */
        if (!isDtor(cd))
            setIsPublicDtor(cd);

        if (findOptFlag(of, "DelayDtor", bool_flag) != NULL)
        {
            setIsDelayedDtor(cd);
            setHasDelayedDtors(mod);
        }

        /*
         * There are subtle differences between the add and concat methods and
         * the multiply and repeat methods.  The number versions can have their
         * operands swapped and may return NotImplemented.  If the user has
         * used the /Numeric/ annotation or there are other numeric operators
         * then we use add/multiply.  Otherwise, if there are indexing
         * operators then we use concat/repeat.
         */
        seq_might = seq_not = FALSE;

        for (md = cd -> members; md != NULL; md = md -> next)
            switch (md -> slot)
            {
            case getitem_slot:
            case setitem_slot:
            case delitem_slot:
                /* This might be a sequence. */
                seq_might = TRUE;
                break;

            case sub_slot:
            case isub_slot:
            case div_slot:
            case idiv_slot:
            case mod_slot:
            case imod_slot:
            case pos_slot:
            case neg_slot:
                /* This is definately not a sequence. */
                seq_not = TRUE;
                break;
            }

        if (!seq_not && seq_might)
            for (md = cd -> members; md != NULL; md = md -> next)
            {
                /* Ignore if the user has been explicit. */
                if (isNumeric(md))
                    continue;

                switch (md -> slot)
                {
                case add_slot:
                    md -> slot = concat_slot;
                    break;

                case iadd_slot:
                    md -> slot = iconcat_slot;
                    break;

                case mul_slot:
                    md -> slot = repeat_slot;
                    break;

                case imul_slot:
                    md -> slot = irepeat_slot;
                    break;
                }
            }
    }

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsClassName(cd->iff->name);
    }
}


/*
 * Create a new mapped type.
 */
static mappedTypeDef *newMappedType(sipSpec *pt, argDef *ad, optFlags *of)
{
    mappedTypeDef *mtd;
    scopedNameDef *snd;
    ifaceFileDef *iff;

    /* Check that the type is one we want to map. */
    switch (ad->atype)
    {
    case defined_type:
        snd = ad->u.snd;
        break;

    case template_type:
        snd = ad->u.td->fqname;
        break;

    case struct_type:
        snd = ad->u.sname;
        break;

    default:
        yyerror("Invalid type for %MappedType");
    }

    iff = findIfaceFile(pt, currentModule, snd, mappedtype_iface, ad);

    if (inMainModule())
        setIsUsedName(iff->name);

    /* Check it hasn't already been defined. */
    for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
        if (mtd->iff == iff)
        {
            /*
             * We allow types based on the same template but with
             * different arguments.
             */
            if (ad->atype != template_type || sameBaseType(ad, &mtd->type))
                yyerror("Mapped type has already been defined in this module");
        }

    /* The module may not have been set yet. */
    iff->module = currentModule;

    /* Create a new mapped type. */
    mtd = allocMappedType(ad);

    if (findOptFlag(of, "NoRelease", bool_flag) != NULL)
        setNoRelease(mtd);

    mtd->iff = iff;
    mtd->next = pt->mappedtypes;

    pt->mappedtypes = mtd;

    return mtd;
}


/*
 * Allocate, intialise and return a mapped type structure.
 */
mappedTypeDef *allocMappedType(argDef *type)
{
    mappedTypeDef *mtd;

    mtd = sipMalloc(sizeof (mappedTypeDef));

    mtd->mtflags = 0;
    mtd->type = *type;
    mtd->type.argflags = 0;
    mtd->type.nrderefs = 0;

    mtd->mappednr = -1;
    mtd->iff = NULL;
    mtd->convfromcode = NULL;
    mtd->convtocode = NULL;
    mtd->next = NULL;

    return mtd;
}


/*
 * Create a new enum.
 */
static enumDef *newEnum(sipSpec *pt,moduleDef *mod,char *name,optFlags *of,
            int flags)
{
    enumDef *ed;
    classDef *escope = currentScope();

    ed = sipMalloc(sizeof (enumDef));

    if (name != NULL)
    {
        ed -> fqcname = text2scopedName(name);
        ed -> pyname = cacheName(pt, getPythonName(of, name));

        checkAttributes(pt, mod, escope, ed->pyname->text, FALSE);
    }
    else
    {
        ed -> fqcname = NULL;
        ed -> pyname = NULL;
    }

    ed -> enumflags = flags;
    ed -> enumnr = -1;
    ed -> ecd = escope;
    ed -> module = mod;
    ed -> members = NULL;
    ed -> slots = NULL;
    ed -> overs = NULL;
    ed -> next = pt -> enums;

    if (name != NULL && strcmp(ed->pyname->text, name) != 0)
        setIsRenamedEnum(ed);

    pt -> enums = ed;

    return ed;
}


/*
 * Get the type values and (optionally) the type names for substitution in
 * handwritten code.
 */
void appendTypeStrings(scopedNameDef *ename, signatureDef *patt, signatureDef *src, signatureDef *known, scopedNameDef **names, scopedNameDef **values)
{
    int a;

    for (a = 0; a < patt->nrArgs; ++a)
    {
        argDef *pad = &patt->args[a];

        if (pad->atype == defined_type)
        {
            char *nam = NULL;

            /*
             * If the type names are already known then check that this is one
             * of them.
             */
            if (known == NULL)
                nam = scopedNameTail(pad->u.snd);
            else if (pad->u.snd->next == NULL)
            {
                int k;

                for (k = 0; k < known->nrArgs; ++k)
                {
                    /* Skip base types. */
                    if (known->args[k].atype != defined_type)
                        continue;

                    if (strcmp(pad->u.snd->name, known->args[k].u.snd->name) == 0)
                    {
                        nam = pad->u.snd->name;
                        break;
                    }
                }
            }

            if (nam == NULL)
                continue;

            /* Add the name. */
            appendScopedName(names, text2scopePart(nam));

            /* Add the corresponding value. */
            appendScopedName(values, text2scopePart(getType(ename, &src->args[a])));
        }
        else if (pad->atype == template_type)
        {
            argDef *sad = &src->args[a];

            /* These checks shouldn't be necessary, but... */
            if (sad->atype == template_type && pad->u.td->types.nrArgs == sad->u.td->types.nrArgs)
                appendTypeStrings(ename, &pad->u.td->types, &sad->u.td->types, known, names, values);
        }
    }
}


/*
 * Convert a type to a string.  We impose some limitations because I'm too lazy
 * to handle everything that might be needed one day.
 */
static char *getType(scopedNameDef *ename, argDef *ad)
{
    if (ad->atype == defined_type)
        return scopedNameToString(ad->u.snd);

    fatalScopedName(ename);
    fatal(": unsupported type argument to template class instantiation\n");

    return NULL;
}


/*
 * Convert a scoped name to a string on the heap.
 */
static char *scopedNameToString(scopedNameDef *name)
{
    static const char scope_string[] = "::";
    size_t len;
    scopedNameDef *snd;
    char *s, *dp;

    /* Work out the length of buffer needed. */
    len = 0;

    for (snd = name; snd != NULL; snd = snd->next)
    {
        len += strlen(snd->name);

        if (snd->next != NULL)
            len += strlen(scope_string);
    }

    /* Allocate and populate the buffer. */
    dp = s = sipMalloc(len + 1);

    for (snd = name; snd != NULL; snd = snd->next)
    {
        strcpy(dp, snd->name);
        dp += strlen(snd->name);

        if (snd->next != NULL)
        {
            strcpy(dp, scope_string);
            dp += strlen(scope_string);
        }
    }

    return s;
}


/*
 * Instantiate a class template.
 */
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod, classDef *scope, scopedNameDef *fqname, classTmplDef *tcd, templateDef *td)
{
    scopedNameDef *type_names, *type_values;
    classDef *cd;
    ctorDef *oct, **cttail;
    memberDef *omd, **mdtail;
    overDef *ood, **odtail;
    argDef *ad;
    ifaceFileList *iffl, **used;

    type_names = type_values = NULL;
    appendTypeStrings(classFQCName(tcd->cd), &tcd->sig, &td->types, NULL, &type_names, &type_values);

    /*
     * Add a mapping from the template name to the instantiated name.  If
     * we have got this far we know there is room for it.
     */
    ad = &tcd->sig.args[tcd->sig.nrArgs++];
    ad->atype = defined_type;
    ad->name = NULL;
    ad->argflags = 0;
    ad->nrderefs = 0;
    ad->defval = NULL;
    ad->u.snd = classFQCName(tcd->cd);

    appendScopedName(&type_names, text2scopePart(scopedNameTail(classFQCName(tcd->cd))));
    appendScopedName(&type_values, text2scopePart(scopedNameToString(fqname)));

    /* Create the new class. */
    cd = sipMalloc(sizeof (classDef));

    /* Start with a shallow copy. */
    *cd = *tcd->cd;

    cd->pyname = scopedNameTail(fqname);
    cd->td = td;

    /* Handle the interface file. */
    cd->iff = findIfaceFile(pt, mod, fqname, class_iface, NULL);
    cd->iff->module = mod;

    /* Make a copy of the used list and add the enclosing scope. */
    used = &cd->iff->used;

    for (iffl = tcd->cd->iff->used; iffl != NULL; iffl = iffl->next)
        addToUsedList(used, iffl->iff);

    /* Include any scope header code. */
    if (scope != NULL)
        appendCodeBlock(&cd->iff->hdrcode, scope->iff->hdrcode);

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsClassName(cd->iff->name);
    }

    cd->ecd = currentScope();

    /* Handle the ctors. */
    cd->ctors = NULL;
    cttail = &cd->ctors;

    for (oct = tcd->cd->ctors; oct != NULL; oct = oct->next)
    {
        ctorDef *nct = sipMalloc(sizeof (ctorDef));

        /* Start with a shallow copy. */
        *nct = *oct;

        templateSignature(&nct->pysig, FALSE, tcd, td, cd);

        if (oct->cppsig == NULL)
            nct->cppsig = NULL;
        else if (oct->cppsig == &oct->pysig)
            nct->cppsig = &nct->pysig;
        else
        {
            nct->cppsig = sipMalloc(sizeof (signatureDef));

            *nct->cppsig = *oct->cppsig;

            templateSignature(nct->cppsig, FALSE, tcd, td, cd);
        }

        nct->methodcode = templateCode(pt, used, nct->methodcode, type_names, type_values);

        nct->next = NULL;
        *cttail = nct;
        cttail = &nct->next;

        /* Handle the default ctor. */
        if (tcd->cd->defctor == oct)
            cd->defctor = nct;
    }

    cd->dealloccode = templateCode(pt, used, cd->dealloccode, type_names, type_values);
    cd->dtorcode = templateCode(pt, used, cd->dtorcode, type_names, type_values);

    /* Handle the members, ie. the common parts of overloads. */
    cd->members = NULL;
    mdtail = &cd->members;

    for (omd = tcd->cd->members; omd != NULL; omd = omd->next)
    {
        memberDef *nmd = sipMalloc(sizeof (memberDef));

        /* Start with a shallow copy. */
        *nmd = *omd;

        nmd->module = mod;

        nmd->next = NULL;
        *mdtail = nmd;
        mdtail = &nmd->next;
    }

    /* Handle the overloads. */
    cd->overs = NULL;
    odtail = &cd->overs;

    for (ood = tcd->cd->overs; ood != NULL; ood = ood->next)
    {
        overDef *nod = sipMalloc(sizeof (overDef));
        memberDef *nmd;

        /* Start with a shallow copy. */
        *nod = *ood;

        for (nmd = cd->members, omd = tcd->cd->members; omd != NULL; omd = omd->next, nmd = nmd->next)
            if (omd == ood->common)
            {
                nod->common = nmd;
                break;
            }

        templateSignature(&nod->pysig, TRUE, tcd, td, cd);

        if (ood->cppsig == &ood->pysig)
            nod->cppsig = &nod->pysig;
        else
        {
            nod->cppsig = sipMalloc(sizeof (signatureDef));

            *nod->cppsig = *ood->cppsig;

            templateSignature(nod->cppsig, TRUE, tcd, td, cd);
        }

        nod->methodcode = templateCode(pt, used, nod->methodcode, type_names, type_values);

        /* Handle any virtual handler. */
        if (ood->virthandler != NULL)
        {
            nod->virthandler = sipMalloc(sizeof (virtHandlerDef));

            /* Start with a shallow copy. */
            *nod->virthandler = *ood->virthandler;

            if (ood->virthandler->cppsig == &ood->pysig)
                nod->virthandler->cppsig = &nod->pysig;
            else
            {
                nod->virthandler->cppsig = sipMalloc(sizeof (signatureDef));

                *nod->virthandler->cppsig = *ood->virthandler->cppsig;

                templateSignature(nod->virthandler->cppsig, TRUE, tcd, td, cd);
            }

            nod->virthandler->module = mod;
            nod->virthandler->virtcode = templateCode(pt, used, nod->virthandler->virtcode, type_names, type_values);
            nod->virthandler->next = mod->virthandlers;

            mod->virthandlers = nod->virthandler;
        }

        nod->next = NULL;
        *odtail = nod;
        odtail = &nod->next;
    }

    cd->cppcode = templateCode(pt, used, cd->cppcode, type_names, type_values);
    cd->iff->hdrcode = templateCode(pt, used, cd->iff->hdrcode, type_names, type_values);
    cd->convtosubcode = templateCode(pt, used, cd->convtosubcode, type_names, type_values);
    cd->convtocode = templateCode(pt, used, cd->convtocode, type_names, type_values);
    cd->travcode = templateCode(pt, used, cd->travcode, type_names, type_values);
    cd->clearcode = templateCode(pt, used, cd->clearcode, type_names, type_values);
    cd->readbufcode = templateCode(pt, used, cd->readbufcode, type_names, type_values);
    cd->writebufcode = templateCode(pt, used, cd->writebufcode, type_names, type_values);
    cd->segcountcode = templateCode(pt, used, cd->segcountcode, type_names, type_values);
    cd->charbufcode = templateCode(pt, used, cd->charbufcode, type_names, type_values);
    cd->picklecode = templateCode(pt, used, cd->picklecode, type_names, type_values);
    cd->next = pt->classes;

    pt->classes = cd;

    tcd->sig.nrArgs--;

    freeScopedName(type_names);
    freeScopedName(type_values);
}


/*
 * Replace any template arguments in a signature.
 */
static void templateSignature(signatureDef *sd, int result, classTmplDef *tcd, templateDef *td, classDef *ncd)
{
    int a;

    if (result)
        templateType(&sd->result, tcd, td, ncd);

    for (a = 0; a < sd->nrArgs; ++a)
        templateType(&sd->args[a], tcd, td, ncd);
}


/*
 * Replace any template arguments in a type.
 */
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td, classDef *ncd)
{
    int a;
    char *name;

    /* Descend into any sub-templates. */
    if (ad->atype == template_type)
    {
        templateDef *new_td = sipMalloc(sizeof (templateDef));

        /* Make a deep copy of the template definition. */
        *new_td = *ad->u.td;
        ad->u.td = new_td;

        templateSignature(&ad->u.td->types, FALSE, tcd, td, ncd);

        return;
    }

    /* Ignore if it isn't an unscoped name. */
    if (ad->atype != defined_type || ad->u.snd->next != NULL)
        return;

    name = ad->u.snd->name;

    for (a = 0; a < tcd->sig.nrArgs - 1; ++a)
        if (strcmp(name, scopedNameTail(tcd->sig.args[a].u.snd)) == 0)
        {
            ad->atype = td->types.args[a].atype;

            /* We take the constrained flag from the real type. */
            resetIsConstrained(ad);

            if (isConstrained(&td->types.args[a]))
                setIsConstrained(ad);

            ad->u = td->types.args[a].u;

            return;
        }

    /* Handle the class name itself. */
    if (strcmp(name, scopedNameTail(classFQCName(tcd->cd))) == 0)
    {
        ad->atype = class_type;
        ad->u.cd = ncd;
    }
}


/*
 * Replace any template arguments in a literal code block.
 */
codeBlock *templateCode(sipSpec *pt, ifaceFileList **used, codeBlock *ocb,
        scopedNameDef *names, scopedNameDef *values)
{
    codeBlock *ncb = NULL, **tail = &ncb;

    while (ocb != NULL)
    {
        char *at = ocb->frag;

        do
        {
            char *first = NULL;
            codeBlock *cb;
            scopedNameDef *nam, *val, *nam_first, *val_first;

            /*
             * Go through the rest of this fragment looking for each of the
             * types and the name of the class itself.
             */
            nam = names;
            val = values;

            while (nam != NULL && val != NULL)
            {
                char *cp;

                if ((cp = strstr(at, nam->name)) != NULL)
                    if (first == NULL || first > cp)
                    {
                        nam_first = nam;
                        val_first = val;
                        first = cp;
                    }

                nam = nam->next;
                val = val->next;
            }

            /* Create the new fragment. */
            cb = sipMalloc(sizeof (codeBlock));

            if (at == ocb->frag)
            {
                cb->filename = ocb->filename;
                cb->linenr = ocb->linenr;
            }
            else
                cb->filename = NULL;

            cb->next = NULL;
            *tail = cb;
            tail = &cb->next;

            /* See if anything was found. */
            if (first == NULL)
            {
                /* We can just point to this. */
                cb->frag = at;

                /* All done with this one. */
                at = NULL;
            }
            else
            {
                static char *gen_names[] = {
                    "sipForceConvertToTransfer_",
                    "sipForceConvertTo_",
                    "sipConvertFromTransfer_",
                    "sipConvertFrom_",
                    "sipClass_",
                    "sipEnum_",
                    "sipException_",
                    NULL
                };

                char *dp, *sp, **gn;
                int genname = FALSE;

                /*
                 * If the context in which the text is used is in the name of a
                 * SIP generated object then translate any "::" scoping to "_".
                 */
                for (gn = gen_names; *gn != NULL; ++gn)
                    if (search_back(first, at, *gn))
                    {
                        addUsedFromCode(pt, used, val_first->name);
                        genname = TRUE;
                        break;
                    }

                /* Fragment the fragment. */
                cb->frag = sipMalloc(first - at + strlen(val_first->name) + 1);

                strncpy(cb->frag, at, first - at);

                dp = &cb->frag[first - at];
                sp = val_first->name;

                if (genname)
                {
                    char gch;

                    while ((gch = *sp++) != '\0')
                        if (gch == ':' && *sp == ':')
                        {
                            *dp++ = '_';
                            ++sp;
                        }
                        else
                            *dp++ = gch;

                    *dp = '\0';
                }
                else
                    strcpy(dp, sp);

                /* Move past the replaced text. */
                at = first + strlen(nam_first->name);
            }
        }
        while (at != NULL && *at != '\0');

        ocb = ocb->next;
    }

    return ncb;
}


/*
 * Return TRUE if the text at the end of a string matches the target string.
 */
static int search_back(const char *end, const char *start, const char *target)
{
    size_t tlen = strlen(target);

    if (start + tlen >= end)
        return FALSE;

    return (strncmp(end - tlen, target, tlen) == 0);
}


/*
 * Add any needed interface files based on handwritten code.
 */
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname)
{
    ifaceFileDef *iff;
    enumDef *ed;

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (iff->type != class_iface && iff->type != exception_iface)
            continue;

        if (sameName(iff->fqcname, sname))
        {
            addToUsedList(used, iff);
            return;
        }
    }

    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        if (ed->ecd == NULL)
            continue;

        if (sameName(ed->fqcname, sname))
        {
            addToUsedList(used, ed->ecd->iff);
            return;
        }
    }
}


/*
 * Compare a scoped name with its string equivalent.
 */
static int sameName(scopedNameDef *snd, const char *sname)
{
    while (snd != NULL && *sname != '\0')
    {
        const char *sp = snd->name;

        while (*sp != '\0' && *sname != ':' && *sname != '\0')
            if (*sp++ != *sname++)
                return FALSE;

        if (*sp != '\0' || (*sname != ':' && *sname != '\0'))
            return FALSE;

        snd = snd->next;

        if (*sname == ':')
            sname += 2;
    }

    return (snd == NULL && *sname == '\0');
}


/*
 * Compare a (possibly) relative scoped name with a fully qualified scoped name
 * while taking the current scope into account.
 */
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name)
{
    classDef *scope;

    for (scope = currentScope(); scope != NULL; scope = scope->ecd)
    {
        scopedNameDef *snd;
        int found;

        snd = copyScopedName(classFQCName(scope));
        appendScopedName(&snd, copyScopedName(rel_name));

        found = sameScopedName(fq_name, snd);

        freeScopedName(snd);

        if (found)
            return TRUE;
    }

    return sameScopedName(fq_name, rel_name);
}


/*
 * Create a new typedef.
 */
static void newTypedef(sipSpec *pt,moduleDef *mod,char *name,argDef *type)
{
    typedefDef *td;
    scopedNameDef *fqname = text2scopedName(name);
    classDef *scope = currentScope();

    /* See if we are instantiating a template class. */
    if (type->atype == template_type)
    {
        classTmplDef *tcd;
        templateDef *td = type->u.td;

        for (tcd = pt->classtemplates; tcd != NULL; tcd = tcd->next)
            if (foundInScope(tcd->cd->iff->fqcname, td->fqname) &&
                sameTemplateSignature(&tcd->sig, &td->types, FALSE))
            {
                instantiateClassTemplate(pt, mod, scope, fqname, tcd, td);

                /* All done. */
                return;
            }
    }

    /* Check it doesn't already exist. */
    for (td = pt -> typedefs; td != NULL; td = td -> next)
        if (sameScopedName(td -> fqname,fqname))
        {
            fatalScopedName(fqname);
            fatal(" already defined\n");
        }

    td = sipMalloc(sizeof (typedefDef));

    td -> fqname = fqname;
    td -> ecd = scope;
    td -> module = mod;
    td -> type = *type;
    td -> next = pt -> typedefs;

    mod -> nrtypedefs++;

    pt -> typedefs = td;
}


/*
 * Return TRUE if the template signatures are the same.  A deep comparison is
 * used for mapped type templates where we want to recurse into any nested
 * templates.
 */
int sameTemplateSignature(signatureDef *tmpl_sd, signatureDef *args_sd,
        int deep)
{
    int a;

    if (tmpl_sd->nrArgs != args_sd->nrArgs)
        return FALSE;

    for (a = 0; a < tmpl_sd->nrArgs; ++a)
    {
        argDef *tmpl_ad = &tmpl_sd->args[a];
        argDef *args_ad = &args_sd->args[a];

        /*
         * If we are doing a shallow comparision (ie. for class templates) then
         * a type name in the template signature matches anything in the
         * argument signature.
         */
        if (tmpl_ad->atype == defined_type && !deep)
            continue;

        /*
         * For type names only compare the references and pointers, and do the
         * same for any nested templates.
         */
        if (tmpl_ad->atype == defined_type && args_ad->atype == defined_type)
        {
            if (isReference(tmpl_ad) != isReference(args_ad) || tmpl_ad->nrderefs != args_ad->nrderefs)
                return FALSE;
        }
        else if (tmpl_ad->atype == template_type && args_ad->atype == template_type)
        {
            if (!sameTemplateSignature(&tmpl_ad->u.td->types, &args_ad->u.td->types, deep))
                return FALSE;
        }
        else if (!sameBaseType(tmpl_ad, args_ad))
            return FALSE;
    }

    return TRUE;
}


/*
 * Create a new variable.
 */
static void newVar(sipSpec *pt,moduleDef *mod,char *name,int isstatic,
           argDef *type,optFlags *of,codeBlock *acode,codeBlock *gcode,
           codeBlock *scode)
{
    varDef *var;
    classDef *escope = currentScope();
    nameDef *nd = cacheName(pt,getPythonName(of,name));

    if (inMainModule())
        setIsUsedName(nd);

    checkAttributes(pt, mod, escope, nd->text, FALSE);

    var = sipMalloc(sizeof (varDef));

    var -> pyname = nd;
    var -> fqcname = text2scopedName(name);
    var -> ecd = escope;
    var -> module = mod;
    var -> varflags = 0;
    var -> type = *type;
    var -> accessfunc = acode;
    var -> getcode = gcode;
    var -> setcode = scode;
    var -> next = pt -> vars;

    if (isstatic || (escope != NULL && escope->iff->type == namespace_iface))
        setIsStaticVar(var);

    pt -> vars = var;
}


/*
 * Create a new ctor.
 */
static void newCtor(char *name,int sectFlags,signatureDef *args,
            optFlags *optflgs,codeBlock *methodcode,
            throwArgs *exceptions,signatureDef *cppsig,int explicit)
{
    ctorDef *ct, **ctp;
    classDef *cd = currentScope();

    /* Check the name of the constructor. */
    if (strcmp(classBaseName(cd),name) != 0)
        yyerror("Constructor doesn't have the same name as its class");

    /* Add to the list of constructors. */
    ct = sipMalloc(sizeof (ctorDef));

    ct -> ctorflags = sectFlags;
    ct -> pysig = *args;
    ct -> cppsig = (cppsig != NULL ? cppsig : &ct -> pysig);
    ct -> exceptions = exceptions;
    ct -> methodcode = methodcode;
    ct -> next = NULL;

    if (!isPrivateCtor(ct))
        setCanCreate(cd);

    if (isProtectedCtor(ct))
        setHasShadow(cd);

    if (explicit)
        setIsExplicitCtor(ct);

    getHooks(optflgs,&ct -> prehook,&ct -> posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGILCtor(ct);
    else if (getHoldGIL(optflgs))
        setIsHoldGILCtor(ct);

    if (getTransfer(optflgs))
        setIsResultTransferredCtor(ct);

    if (findOptFlag(optflgs,"NoDerived",bool_flag) != NULL)
    {
        if (cppsig != NULL)
            yyerror("The /NoDerived/ annotation cannot be used with a C++ signature");

        if (methodcode == NULL)
            yyerror("The /NoDerived/ annotation must be used with %MethodCode");

        ct->cppsig = NULL;
    }

    if (findOptFlag(optflgs,"Default",bool_flag) != NULL)
    {
        if (cd -> defctor != NULL)
            yyerror("A constructor with the /Default/ annotation has already been defined");

        cd -> defctor = ct;
    }

    /* Append to the list. */
    for (ctp = &cd->ctors; *ctp != NULL; ctp = &(*ctp)->next)
        ;

    *ctp = ct;
}


/*
 * Create a new function.
 */
static void newFunction(sipSpec *pt,moduleDef *mod,int sflags,int isstatic,
            int isvirt,char *name,signatureDef *sig,int isconst,
            int isabstract,optFlags *optflgs,codeBlock *methodcode,
            codeBlock *vcode,throwArgs *exceptions,
            signatureDef *cppsig)
{
    classDef *cd = currentScope();
    nameDef *pname;
    int factory, xferback, no_arg_parser;
    overDef *od, **odp, **headp;
    optFlag *of;
    virtHandlerDef *vhd;

    /* Extra checks for a C module. */
    if (pt -> genc)
    {
        if (cd != NULL)
            yyerror("Function declaration not allowed in a struct in a C module");

        if (isstatic)
            yyerror("Static functions not allowed in a C module");

        if (exceptions != NULL)
            yyerror("Exceptions not allowed in a C module");
    }

    headp = (cd != NULL ?  &cd->overs : &mod->overs);

    /* See if it is a factory method. */
    if (findOptFlag(optflgs,"Factory",bool_flag) != NULL)
        factory = TRUE;
    else
    {
        int a;

        factory = FALSE;

        /* Check /TransferThis/ wasn't specified. */
        if (cd == NULL || isstatic)
            for (a = 0; a < sig -> nrArgs; ++a)
                if (isThisTransferred(&sig -> args[a]))
                    yyerror("/TransferThis/ may only be specified in constructors and class methods");
    }

    /* See if the result is to be returned to Python ownership. */
    xferback = (findOptFlag(optflgs,"TransferBack",bool_flag) != NULL);

    if (factory && xferback)
        yyerror("/TransferBack/ and /Factory/ cannot both be specified");

    /* Create a new overload definition. */

    od = sipMalloc(sizeof (overDef));

    /* Set the overload flags. */

    od -> overflags = sflags;

    if (factory)
        setIsFactory(od);

    if (xferback)
        setIsResultTransferredBack(od);

    if (getTransfer(optflgs))
        setIsResultTransferred(od);

    if (findOptFlag(optflgs, "TransferThis", bool_flag) != NULL)
        setIsThisTransferredMeth(od);

    if (isProtected(od))
        setHasShadow(cd);

    if ((isSlot(od) || isSignal(od)) && !isPrivate(od))
    {
        if (isSignal(od))
            setHasShadow(cd);

        pt -> sigslots = TRUE;
    }

    if (isSignal(od) && (methodcode != NULL || vcode != NULL))
        yyerror("Cannot provide code for signals");

    if (isstatic)
    {
        if (isSignal(od))
            yyerror("Static functions cannot be signals");

        if (isvirt)
            yyerror("Static functions cannot be virtual");

        setIsStatic(od);
    }

    if (isconst)
        setIsConst(od);

    if (isabstract)
    {
        if (sflags == 0)
            yyerror("Non-class function specified as abstract");

        setIsAbstract(od);
    }

    if ((of = findOptFlag(optflgs,"AutoGen",opt_name_flag)) != NULL)
    {
        setIsAutoGen(od);

        if (of -> fvalue.sval != NULL)
        {
            qualDef *qd;

            if ((qd = findQualifier(of -> fvalue.sval)) == NULL || qd -> qtype != feature_qualifier)
                yyerror("No such feature");

            if (excludedFeature(excludedQualifiers,qd))
                resetIsAutoGen(od);
        }
    }

    if (isvirt)
    {
        if (isSignal(od) && !optNoEmitters(pt))
            yyerror("Virtual signals aren't supported");

        setIsVirtual(od);
        setHasShadow(cd);

        vhd = sipMalloc(sizeof (virtHandlerDef));

        vhd->virthandlernr = -1;
        vhd->vhflags = 0;
        vhd->pysig = &od->pysig;
        vhd->cppsig = (cppsig != NULL ? cppsig : &od->pysig);
        vhd->virtcode = vcode;

        if (factory || xferback)
            setIsTransferVH(vhd);

        /*
         * Only add it to the module's virtual handlers if we are not in a
         * class template.
         */
        if (!currentIsTemplate)
        {
            vhd->module = currentModule;

            vhd->next = currentModule->virthandlers;
            currentModule->virthandlers = vhd;
        }
    }
    else
    {
        if (vcode != NULL)
            yyerror("%VirtualCatcherCode provided for non-virtual function");

        vhd = NULL;
    }

    od->cppname = name;
    od->pysig = *sig;
    od->cppsig = (cppsig != NULL ? cppsig : &od->pysig);
    od->exceptions = exceptions;
    od->methodcode = methodcode;
    od->virthandler = vhd;

    no_arg_parser = (findOptFlag(optflgs, "NoArgParser", bool_flag) != NULL);

    if (no_arg_parser)
    {
        if (cd != NULL)
            yyerror("/NoArgParser/ may only be specified for global functions");

        if (methodcode == NULL)
            yyerror("%MethodCode must be supplied if /NoArgParser/ is specified");
    }

    od->common = findFunction(pt, mod, cd, getPythonName(optflgs, name),
            (methodcode != NULL), sig->nrArgs, no_arg_parser);

    if (findOptFlag(optflgs,"Numeric",bool_flag) != NULL)
        setIsNumeric(od -> common);

    /* Methods that run in new threads must be virtual. */
    if (findOptFlag(optflgs,"NewThread",bool_flag) != NULL)
    {
        argDef *res;

        if (!isvirt)
            yyerror("/NewThread/ may only be specified for virtual functions");

        /*
         * This is an arbitary limitation to make the code generator
         * slightly easier - laziness on my part.
         */
        res = &od -> cppsig -> result;

        if (res -> atype != void_type || res -> nrderefs != 0)
            yyerror("/NewThread/ may only be specified for void functions");

        setIsNewThread(od);
    }

    getHooks(optflgs,&od -> prehook,&od -> posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGIL(od);
    else if (getHoldGIL(optflgs))
        setIsHoldGIL(od);

    od -> next = NULL;

    /* Append to the list. */
    for (odp = headp; *odp != NULL; odp = &(*odp)->next)
        ;

    *odp = od;
}


/*
 * Return the Python name based on the C/C++ name and any /PyName/ annotation.
 */
static const char *getPythonName(optFlags *optflgs, const char *cname)
{
    const char *pname;
    optFlag *of;

    if ((of = findOptFlag(optflgs, "PyName", name_flag)) != NULL)
        pname = of -> fvalue.sval;
    else
        pname = cname;

    return pname;
}


/*
 * Cache a name in a module.
 */
nameDef *cacheName(sipSpec *pt, const char *name)
{
    nameDef *nd;

    /* See if it already exists. */
    for (nd = pt->namecache; nd != NULL; nd = nd->next)
        if (strcmp(nd->text, name) == 0)
            return nd;

    /* Create a new one. */
    nd = sipMalloc(sizeof (nameDef));

    nd->nameflags = 0;
    nd->module = currentSpec->module;
    nd->text = name;
    nd->next = pt->namecache;

    pt->namecache = nd;

    return nd;
}


/*
 * Find (or create) an overloaded function name.
 */
static memberDef *findFunction(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *pname, int hwcode, int nrargs, int no_arg_parser)
{
    static struct slot_map {
        char *name;         /* The slot name. */
        slotType type;      /* The corresponding type. */
        int needs_hwcode;   /* Set if handwritten code is required. */
        int nrargs;         /* Nr. of arguments. */
    } slot_table[] = {
        {"__str__", str_slot, TRUE, 0},
        {"__unicode__", unicode_slot, TRUE, 0},
        {"__int__", int_slot, FALSE, 0},
        {"__long__", long_slot, FALSE, 0},
        {"__float__", float_slot, FALSE, 0},
        {"__len__", len_slot, TRUE, 0},
        {"__contains__", contains_slot, TRUE, 1},
        {"__add__", add_slot, FALSE, 1},
        {"__sub__", sub_slot, FALSE, 1},
        {"__mul__", mul_slot, FALSE, 1},
        {"__div__", div_slot, FALSE, 1},
        {"__mod__", mod_slot, FALSE, 1},
        {"__and__", and_slot, FALSE, 1},
        {"__or__", or_slot, FALSE, 1},
        {"__xor__", xor_slot, FALSE, 1},
        {"__lshift__", lshift_slot, FALSE, 1},
        {"__rshift__", rshift_slot, FALSE, 1},
        {"__iadd__", iadd_slot, FALSE, 1},
        {"__isub__", isub_slot, FALSE, 1},
        {"__imul__", imul_slot, FALSE, 1},
        {"__idiv__", idiv_slot, FALSE, 1},
        {"__imod__", imod_slot, FALSE, 1},
        {"__iand__", iand_slot, FALSE, 1},
        {"__ior__", ior_slot, FALSE, 1},
        {"__ixor__", ixor_slot, FALSE, 1},
        {"__ilshift__", ilshift_slot, FALSE, 1},
        {"__irshift__", irshift_slot, FALSE, 1},
        {"__invert__", invert_slot, FALSE, 0},
        {"__call__", call_slot, FALSE, -1},
        {"__getitem__", getitem_slot, FALSE, -1},
        {"__setitem__", setitem_slot, TRUE, -1},
        {"__delitem__", delitem_slot, TRUE, -1},
        {"__lt__", lt_slot, FALSE, 1},
        {"__le__", le_slot, FALSE, 1},
        {"__eq__", eq_slot, FALSE, 1},
        {"__ne__", ne_slot, FALSE, 1},
        {"__gt__", gt_slot, FALSE, 1},
        {"__ge__", ge_slot, FALSE, 1},
        {"__cmp__", cmp_slot, FALSE, 1},
        {"__nonzero__", nonzero_slot, TRUE, 0},
        {"__neg__", neg_slot, FALSE, 0},
        {"__pos__", pos_slot, FALSE, 0},
        {"__abs__", abs_slot, TRUE, 0},
        {"__repr__", repr_slot, TRUE, 0},
        {"__hash__", hash_slot, TRUE, 0},
        {NULL}
    };

    memberDef *md, **flist;
    struct slot_map *sm;
    slotType st;

    /* Get the slot type. */
    st = no_slot;

    for (sm = slot_table; sm->name != NULL; ++sm)
        if (strcmp(sm->name, pname) == 0)
        {
            if (sm->needs_hwcode && !hwcode)
                yyerror("This Python slot requires %MethodCode");

            if (sm->nrargs < 0)
            {
                int min_nr;

                /* These require a minimum number. */
                switch (sm->type)
                {
                case getitem_slot:
                case delitem_slot:
                    min_nr = 1;
                    break;

                case setitem_slot:
                    min_nr = 2;
                    break;

                default:
                    min_nr = 0;
                }

                if (nrargs < min_nr)
                    yyerror("Insufficient number of arguments to Python slot");
            }
            else if (cd == NULL)
            {
                /* Global operators need one extra argument. */
                if (sm -> nrargs + 1 != nrargs)
                    yyerror("Incorrect number of arguments to global operator");
            }
            else if (sm->nrargs != nrargs)
                yyerror("Incorrect number of arguments to Python slot");

            st = sm->type;

            break;
        }

    /* Check there is no name clash. */
    checkAttributes(pt, mod, cd, pname, TRUE);

    /* See if it already exists. */
    flist = (cd != NULL ? &cd->members : &mod->othfuncs);

    for (md = *flist; md != NULL; md = md->next)
        if (strcmp(md->pyname->text, pname) == 0 && md->module == mod)
            break;

    if (md == NULL)
    {
        /* Create a new one. */
        md = sipMalloc(sizeof (memberDef));

        md->pyname = cacheName(pt, pname);
        md->memberflags = 0;
        md->slot = st;
        md->module = mod;
        md->next = *flist;

        *flist = md;

        if (inMainModule())
            setIsUsedName(md->pyname);

        if (no_arg_parser)
            setNoArgParser(md);
    }
    else if (noArgParser(md))
        yyerror("Another overload has already been defined that is annotated as /NoArgParser/");

    /* Global operators are a subset. */
    if (cd == NULL && st != no_slot && st != neg_slot && st != pos_slot && !isNumberSlot(md) && !isRichCompareSlot(md))
        yyerror("Global operators must be either numeric or comparison operators");

    return md;
}


/*
 * Search a set of flags for a particular one and check its type.
 */
static optFlag *findOptFlag(optFlags *flgs,char *name,flagType ft)
{
    int f;

    for (f = 0; f < flgs -> nrFlags; ++f)
    {
        optFlag *of = &flgs -> flags[f];

        if (strcmp(of -> fname,name) == 0)
        {
            /*
             * An optional name can look like a boolean or a name.
             */

            if (ft == opt_name_flag)
            {
                if (of -> ftype == bool_flag)
                {
                    of -> ftype = opt_name_flag;
                    of -> fvalue.sval = NULL;
                }
                else if (of -> ftype == name_flag)
                    of -> ftype = opt_name_flag;
            }

            if (ft != of -> ftype)
                yyerror("Optional flag has a value of the wrong type");

            return of;
        }
    }

    return NULL;
}


/*
 * A name is going to be used as a Python attribute name within a Python scope
 * (ie. a Python dictionary), so check against what we already know is going in
 * the same scope in case there is a clash.
 */
static void checkAttributes(sipSpec *pt, moduleDef *mod, classDef *pyscope,
        const char *attr, int isfunc)
{
    enumDef *ed;
    varDef *vd;
    classDef *cd;

    /* Check the enums. */

    for (ed = pt -> enums; ed != NULL; ed = ed -> next)
    {
        enumMemberDef *emd;

        if (ed -> ecd != pyscope || ed -> pyname == NULL)
            continue;

        if (strcmp(ed->pyname->text, attr) == 0)
            yyerror("There is already an enum in scope with the same Python name");

        for (emd = ed -> members; emd != NULL; emd = emd -> next)
            if (strcmp(emd -> pyname -> text, attr) == 0)
                yyerror("There is already an enum member in scope with the same Python name");
    }

    /* Check the variables. */

    for (vd = pt -> vars; vd != NULL; vd = vd -> next)
    {
        if (vd -> ecd != pyscope)
            continue;

        if (strcmp(vd -> pyname -> text, attr) == 0)
            yyerror("There is already a variable in scope with the same Python name");
    }

    /*
     * Only check the members if this attribute isn't a member because we
     * can handle members with the same name in the same scope.
     */
    if (!isfunc)
    {
        memberDef *md, *membs;

        membs = (pyscope != NULL ? pyscope->members : mod->othfuncs);

        for (md = membs; md != NULL; md = md -> next)
        {
            overDef *od, *overs;

            if (strcmp(md -> pyname -> text, attr) != 0)
                continue;

            /* Check for a conflict with all overloads. */

            overs = (pyscope != NULL ? pyscope->overs : mod->overs);

            for (od = overs; od != NULL; od = od -> next)
            {
                if (od -> common != md)
                    continue;

                yyerror("There is already a function in scope with the same Python name");
            }
        }
    }

    /* Check the classes. */

    for (cd = pt -> classes; cd != NULL; cd = cd -> next)
    {
        if (cd -> ecd != pyscope || cd -> pyname == NULL)
            continue;

        if (strcmp(cd->pyname, attr) == 0 && !isExternal(cd))
            yyerror("There is already a class or namespace in scope with the same Python name");
    }

    /* Check the exceptions. */

    if (pyscope == NULL)
    {
        exceptionDef *xd;

        for (xd = pt->exceptions; xd != NULL; xd = xd->next)
            if (xd->pyname != NULL && strcmp(xd->pyname, attr) == 0)
                yyerror("There is already an exception with the same Python name");
    }
}


/*
 * Append a code block to a list of them.  Append is needed to give the
 * specifier easy control over the order of the documentation.
 */
void appendCodeBlock(codeBlock **headp, codeBlock *new)
{
    while (*headp != NULL)
        headp = &(*headp)->next;

    *headp = new;
}


/*
 * Handle the end of a fully parsed a file.
 */
static void handleEOF()
{
    /*
     * Check that the number of nested if's is the same as when we started
     * the file.
     */

    if (skipStackPtr > currentContext.ifdepth)
        fatal("Too many %%If statements in %s\n", previousFile);

    if (skipStackPtr < currentContext.ifdepth)
        fatal("Too many %%End statements in %s\n", previousFile);
}


/*
 * Handle the end of a fully parsed a module.
 */
static void handleEOM()
{
    /* Check it has been named. */

    if (currentModule -> name == NULL)
        fatal("No %%Module has been specified for module defined in %s\n",previousFile);

    /* The previous module is now current. */

    currentModule = currentContext.prevmod;
}


/*
 * Find an existing qualifier.
 */
static qualDef *findQualifier(char *name)
{
    moduleDef *mod;

    for (mod = currentSpec -> modules; mod != NULL; mod = mod -> next)
    {
        qualDef *qd;

        for (qd = mod -> qualifiers; qd != NULL; qd = qd -> next)
            if (strcmp(qd -> name,name) == 0)
                return qd;
    }

    return NULL;
}


/*
 * Return a copy of a scoped name.
 */
scopedNameDef *copyScopedName(scopedNameDef *snd)
{
    scopedNameDef *head;

    head = NULL;

    while (snd != NULL)
    {
        appendScopedName(&head,text2scopePart(snd -> name));
        snd = snd -> next;
    }

    return head;
}


/*
 * Append a name to a list of scopes.
 */
void appendScopedName(scopedNameDef **headp,scopedNameDef *newsnd)
{
    while (*headp != NULL)
        headp = &(*headp) -> next;

    *headp = newsnd;
}


/*
 * Free a scoped name - but not the text itself.
 */
void freeScopedName(scopedNameDef *snd)
{
    while (snd != NULL)
    {
        scopedNameDef *next = snd -> next;

        free(snd);

        snd = next;
    }
}


/*
 * Convert a text string to a scope part structure.
 */
scopedNameDef *text2scopePart(char *text)
{
    scopedNameDef *snd;

    snd = sipMalloc(sizeof (scopedNameDef));

    snd -> name = text;
    snd -> next = NULL;

    return snd;
}


/*
 * Convert a text string to a fully scoped name.
 */
static scopedNameDef *text2scopedName(char *text)
{
    return scopeScopedName(text2scopePart(text));
}


/*
 * Prepend any current scope to a scoped name.
 */
static scopedNameDef *scopeScopedName(scopedNameDef *name)
{
    classDef *cd = currentScope();
    scopedNameDef *snd;

    snd = (cd != NULL ? copyScopedName(cd->iff->fqcname) : NULL);

    appendScopedName(&snd, name);

    return snd;
}


/*
 * Return a pointer to the tail part of a scoped name.
 */
char *scopedNameTail(scopedNameDef *snd)
{
    if (snd == NULL)
        return NULL;

    while (snd -> next != NULL)
        snd = snd -> next;

    return snd -> name;
}


/*
 * Push the given scope onto the scope stack.
 */
static void pushScope(classDef *scope)
{
    if (currentScopeIdx >= MAX_NESTED_SCOPE)
        fatal("Internal error: increase the value of MAX_NESTED_SCOPE\n");

    scopeStack[currentScopeIdx] = scope;
    sectFlagsStack[currentScopeIdx] = sectionFlags;

    ++currentScopeIdx;
}


/*
 * Pop the scope stack.
 */
static void popScope(void)
{
    if (currentScopeIdx > 0)
        sectionFlags = sectFlagsStack[--currentScopeIdx];
}


/*
 * Return non-zero if the current input should be parsed rather than be
 * skipped.
 */
static int notSkipping()
{
    return (skipStackPtr == 0 ? TRUE : skipStack[skipStackPtr - 1]);
}


/*
 * Return the value of an expression involving a time period.
 */
static int timePeriod(char *lname,char *uname)
{
    int this, line;
    qualDef *qd, *lower, *upper;
    moduleDef *mod;

    if (lname == NULL)
        lower = NULL;
    else if ((lower = findQualifier(lname)) == NULL || lower -> qtype != time_qualifier)
        yyerror("Lower bound is not a time version");

    if (uname == NULL)
        upper = NULL;
    else if ((upper = findQualifier(uname)) == NULL || upper -> qtype != time_qualifier)
        yyerror("Upper bound is not a time version");

    /* Sanity checks on the bounds. */

    if (lower == NULL && upper == NULL)
        yyerror("Lower and upper bounds cannot both be omitted");

    if (lower != NULL && upper != NULL)
    {
        if (lower -> module != upper -> module || lower -> line != upper -> line)
            yyerror("Lower and upper bounds are from different timelines");

        if (lower == upper)
            yyerror("Lower and upper bounds must be different");

        if (lower -> order > upper -> order)
            yyerror("Later version specified as lower bound");
    }

    /* Go through each slot in the relevant timeline. */

    if (lower != NULL)
    {
        mod = lower -> module;
        line = lower -> line;
    }
    else
    {
        mod = upper -> module;
        line = upper -> line;
    }

    this = FALSE;

    for (qd = mod -> qualifiers; qd != NULL; qd = qd -> next)
    {
        if (qd -> qtype != time_qualifier || qd -> line != line)
            continue;

        if (lower != NULL && qd -> order < lower -> order)
            continue;

        if (upper != NULL && qd -> order >= upper -> order)
            continue;

        /*
         * This is within the required range so if it is also needed
         * then the expression is true.
         */

        if (isNeeded(qd))
        {
            this = TRUE;
            break;
        }
    }

    return this;
}


/*
 * Return the value of an expression involving a single platform or feature.
 */
static int platOrFeature(char *name,int optnot)
{
    int this;
    qualDef *qd;

    if ((qd = findQualifier(name)) == NULL || qd -> qtype == time_qualifier)
        yyerror("No such platform or feature");

    /* Assume this sub-expression is false. */

    this = FALSE;

    if (qd -> qtype == feature_qualifier)
    {
        if (!excludedFeature(excludedQualifiers,qd))
            this = TRUE;
    }
    else if (isNeeded(qd))
        this = TRUE;

    if (optnot)
        this = !this;

    return this;
}


/*
 * Return TRUE if the given qualifier is excluded.
 */
int excludedFeature(stringList *xsl,qualDef *qd)
{
    while (xsl != NULL)
    {
        if (strcmp(qd -> name,xsl -> s) == 0)
            return TRUE;

        xsl = xsl -> next;
    }

    return FALSE;
}


/*
 * Return TRUE if the given qualifier is needed.
 */
static int isNeeded(qualDef *qd)
{
    stringList *sl;

    for (sl = neededQualifiers; sl != NULL; sl = sl -> next)
        if (strcmp(qd -> name,sl -> s) == 0)
            return TRUE;

    return FALSE;
}


/*
 * Return the current scope.  currentScope() is only valid if notSkipping()
 * returns non-zero.
 */
static classDef *currentScope(void)
{
    return (currentScopeIdx > 0 ? scopeStack[currentScopeIdx - 1] : NULL);
}


/*
 * Create a new qualifier.
 */
static void newQualifier(moduleDef *mod, int line, int order, char *name,
        qualType qt)
{
    qualDef *qd;

    /* Check it doesn't already exist. */

    if (findQualifier(name) != NULL)
        yyerror("Version is already defined");

    qd = sipMalloc(sizeof (qualDef));
    qd->name = name;
    qd->qtype = qt;
    qd->module = mod;
    qd->line = line;
    qd->order = order;
    qd->next = mod -> qualifiers;
    mod->qualifiers = qd;
}


/*
 * Create a new imported module.
 */
static void newImport(char *filename)
{
    moduleDef *from, *mod;
    moduleListDef *mld;

    /* Create a new module if it has not already been defined. */
    for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
        if (strcmp(mod->file, filename) == 0)
            break;

    from = currentModule;

    if (mod == NULL)
    {
        newModule(NULL, filename);
        mod = currentModule;
    }

    /* Add the new import unless it has already been imported. */
    for (mld = from->imports; mld != NULL; mld = mld->next)
        if (mld->module == mod)
            return;

    mld = sipMalloc(sizeof (moduleListDef));
    mld->module = mod;
    mld->next = from->imports;

    from->imports = mld;
}


/*
 * Set up pointers to hook names.
 */
static void getHooks(optFlags *optflgs,char **pre,char **post)
{
    optFlag *of;

    if ((of = findOptFlag(optflgs,"PreHook",name_flag)) != NULL)
        *pre = of -> fvalue.sval;
    else
        *pre = NULL;

    if ((of = findOptFlag(optflgs,"PostHook",name_flag)) != NULL)
        *post = of -> fvalue.sval;
    else
        *post = NULL;
}


/*
 * Get the /Transfer/ option flag.
 */
static int getTransfer(optFlags *optflgs)
{
    return (findOptFlag(optflgs, "Transfer", bool_flag) != NULL);
}


/*
 * Get the /ReleaseGIL/ option flag.
 */
static int getReleaseGIL(optFlags *optflgs)
{
    return (findOptFlag(optflgs, "ReleaseGIL", bool_flag) != NULL);
}


/*
 * Get the /HoldGIL/ option flag.
 */
static int getHoldGIL(optFlags *optflgs)
{
    return (findOptFlag(optflgs, "HoldGIL", bool_flag) != NULL);
}


/*
 * Return TRUE if the QtNoEmitters option was specified.
 */
int optNoEmitters(sipSpec *pt)
{
    return optFind(pt, "QtNoEmitters");
}


/*
 * Return TRUE if the QtRegisterTypes option was specified.
 */
int optRegisterTypes(sipSpec *pt)
{
    return optFind(pt, "QtRegisterTypes");
}


/*
 * Return TRUE if the Qt4Q_OBJECT option was specified.
 */
int optQ_OBJECT4(sipSpec *pt)
{
    return optFind(pt, "Qt4Q_OBJECT");
}


/*
 * Return TRUE if the AssignmentHelpers option was specified.
 */
int optAssignmentHelpers(sipSpec *pt)
{
    return optFind(pt, "AssignmentHelpers");
}


/*
 * Return TRUE if a particular option was specified with %SIPOptions.
 */
static int optFind(sipSpec *pt, const char *opt)
{
    stringList *sl;

    for (sl = pt->options; sl != NULL; sl = sl->next)
        if (strcmp(sl->s, opt) == 0)
            return TRUE;

    return FALSE;
}


/*
 * Set the name of a module.
 */
static void setModuleName(moduleDef *mod, const char *fullname)
{
    mod->fullname = fullname;

    if ((mod->name = strrchr(fullname, '.')) != NULL)
        mod->name++;
    else
        mod->name = fullname;
}

