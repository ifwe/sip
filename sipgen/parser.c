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
     TK_PLUGIN = 258,
     TK_DOC = 259,
     TK_EXPORTEDDOC = 260,
     TK_MAKEFILE = 261,
     TK_ACCESSCODE = 262,
     TK_GETCODE = 263,
     TK_SETCODE = 264,
     TK_PREINITCODE = 265,
     TK_INITCODE = 266,
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
     TK_ELLIPSIS = 359,
     TK_DEFMETATYPE = 360,
     TK_DEFSUPERTYPE = 361
   };
#endif
#define TK_PLUGIN 258
#define TK_DOC 259
#define TK_EXPORTEDDOC 260
#define TK_MAKEFILE 261
#define TK_ACCESSCODE 262
#define TK_GETCODE 263
#define TK_SETCODE 264
#define TK_PREINITCODE 265
#define TK_INITCODE 266
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
#define TK_DEFMETATYPE 360
#define TK_DEFSUPERTYPE 361




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
static void newTypedef(sipSpec *, moduleDef *, char *, argDef *, optFlags *);
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
static scopedNameDef *text2scopedName(classDef *scope, char *text);
static scopedNameDef *scopeScopedName(classDef *scope, scopedNameDef *name);
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
static int getDeprecated(optFlags *);
static void templateSignature(signatureDef *sd, int result, classTmplDef *tcd, templateDef *td, classDef *ncd);
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td, classDef *ncd);
static int search_back(const char *end, const char *start, const char *target);
static char *type2string(argDef *ad);
static char *scopedNameToString(scopedNameDef *name);
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname);
static int sameName(scopedNameDef *snd, const char *sname);
static int stringFind(stringList *sl, const char *s);
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname);
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name);
static void defineClass(scopedNameDef *snd);
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def);
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod);
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void resolveAnyTypedef(sipSpec *pt, argDef *ad);
static void addVariable(sipSpec *pt, varDef *vd);


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
#line 121 "parser.y"
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
#line 415 "parser.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 427 "parser.c"

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
#define YYLAST   1016

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  139
/* YYNRULES -- Number of rules. */
#define YYNRULES  348
/* YYNRULES -- Number of states. */
#define YYNSTATES  584

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   361

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   112,     2,     2,     2,   127,   119,     2,
     110,   111,   117,   116,   114,   113,     2,   118,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   124,   109,
     122,   115,   123,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   125,     2,   126,   128,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   107,   120,   108,   121,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106
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
      80,    82,    84,    86,    88,    90,    92,    95,   105,   106,
     110,   113,   114,   120,   121,   127,   132,   134,   137,   139,
     142,   145,   146,   154,   156,   159,   160,   166,   168,   171,
     173,   176,   177,   183,   185,   188,   190,   195,   197,   200,
     204,   209,   211,   215,   217,   220,   223,   226,   229,   232,
     236,   238,   240,   242,   244,   245,   247,   250,   253,   256,
     257,   260,   261,   264,   265,   268,   271,   274,   277,   280,
     281,   283,   286,   289,   292,   295,   298,   301,   304,   307,
     310,   313,   316,   319,   322,   325,   328,   331,   336,   339,
     341,   344,   345,   354,   355,   357,   358,   360,   361,   363,
     365,   368,   370,   372,   377,   378,   380,   381,   384,   385,
     388,   390,   394,   396,   398,   400,   402,   404,   406,   407,
     409,   411,   413,   415,   418,   420,   424,   426,   428,   433,
     435,   437,   439,   441,   443,   445,   447,   448,   450,   454,
     460,   472,   473,   481,   482,   486,   491,   492,   500,   501,
     504,   506,   510,   512,   513,   517,   519,   522,   524,   526,
     528,   530,   532,   534,   536,   538,   540,   542,   544,   546,
     548,   550,   552,   554,   556,   558,   560,   562,   565,   568,
     572,   576,   580,   583,   584,   586,   598,   599,   603,   605,
     615,   616,   622,   623,   630,   631,   633,   647,   662,   676,
     678,   680,   682,   684,   686,   688,   690,   692,   695,   698,
     701,   704,   707,   710,   713,   716,   719,   722,   726,   730,
     732,   735,   738,   740,   743,   746,   749,   751,   754,   755,
     757,   758,   761,   762,   766,   768,   772,   774,   778,   780,
     782,   784,   785,   788,   789,   792,   794,   795,   797,   801,
     806,   811,   816,   820,   824,   831,   838,   842,   845,   846,
     850,   852,   854,   856,   857,   861,   863,   871,   876,   880,
     884,   885,   887,   888,   891,   893,   898,   901,   904,   906,
     908,   911,   913,   915,   918,   921,   925,   927,   929,   931,
     934,   937,   939,   941,   943,   945,   947,   949,   951,   953,
     955,   957,   959,   961,   965,   966,   971,   972,   974
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     130,     0,    -1,   131,    -1,   130,   131,    -1,    -1,   132,
     133,    -1,   167,    -1,   165,    -1,   166,    -1,   135,    -1,
     177,    -1,   171,    -1,   172,    -1,   173,    -1,   154,    -1,
     149,    -1,   153,    -1,   162,    -1,   163,    -1,   164,    -1,
     178,    -1,   179,    -1,   189,    -1,   191,    -1,   192,    -1,
     193,    -1,   194,    -1,   195,    -1,   196,    -1,   197,    -1,
     198,    -1,   139,    -1,   141,    -1,   134,    -1,   158,    -1,
     161,    -1,   146,    -1,   220,    -1,   225,    -1,   222,    -1,
     136,    -1,   219,    -1,   201,    -1,   241,    -1,   259,    -1,
     180,    -1,     3,    22,    -1,   100,   215,   137,   245,   107,
     181,   138,   108,   109,    -1,    -1,   110,   215,   111,    -1,
     101,   199,    -1,    -1,    18,   264,   245,   140,   143,    -1,
      -1,   224,    18,   264,   142,   143,    -1,   107,   144,   108,
     109,    -1,   145,    -1,   144,   145,    -1,   180,    -1,    34,
     199,    -1,    35,   199,    -1,    -1,    88,    22,   147,   107,
     148,   108,   109,    -1,   134,    -1,   148,   134,    -1,    -1,
      90,   150,   107,   151,   108,    -1,   152,    -1,   151,   152,
      -1,    22,    -1,    91,    22,    -1,    -1,    89,   155,   107,
     156,   108,    -1,   157,    -1,   156,   157,    -1,    22,    -1,
      20,   110,   160,   111,    -1,    22,    -1,   112,    22,    -1,
     159,    75,    22,    -1,   159,    75,   112,    22,    -1,   159,
      -1,   204,   113,   204,    -1,    21,    -1,    92,   245,    -1,
     105,   169,    -1,   106,   169,    -1,    45,   169,    -1,    46,
     169,    -1,   168,   169,   170,    -1,    43,    -1,    44,    -1,
      22,    -1,    23,    -1,    -1,    85,    -1,    37,    23,    -1,
      38,    23,    -1,    39,    23,    -1,    -1,     7,   199,    -1,
      -1,     8,   199,    -1,    -1,     9,   199,    -1,    17,   199,
      -1,    40,   199,    -1,    41,   199,    -1,    42,   199,    -1,
      -1,   180,    -1,    26,   199,    -1,    27,   199,    -1,    28,
     199,    -1,    29,   199,    -1,    30,   199,    -1,    31,   199,
      -1,    32,   199,    -1,    14,   199,    -1,    15,   199,    -1,
      10,   199,    -1,    11,   199,    -1,    12,   199,    -1,    13,
     199,    -1,    16,   199,    -1,     4,   199,    -1,     5,   199,
      -1,     6,    23,   203,   199,    -1,   200,    21,    -1,    19,
      -1,   200,    19,    -1,    -1,    71,   204,   245,   202,   107,
     205,   108,   109,    -1,    -1,    23,    -1,    -1,    22,    -1,
      -1,   206,    -1,   207,    -1,   206,   207,    -1,   158,    -1,
     161,    -1,    22,   209,   245,   208,    -1,    -1,   114,    -1,
      -1,   115,   214,    -1,    -1,   115,   211,    -1,   214,    -1,
     211,   212,   214,    -1,   113,    -1,   116,    -1,   117,    -1,
     118,    -1,   119,    -1,   120,    -1,    -1,   112,    -1,   121,
      -1,   113,    -1,   116,    -1,   213,   217,    -1,   216,    -1,
     215,    74,   216,    -1,    22,    -1,   215,    -1,   264,   110,
     218,   111,    -1,    86,    -1,    85,    -1,    94,    -1,    95,
      -1,    96,    -1,    24,    -1,    93,    -1,    -1,   211,    -1,
     218,   114,   211,    -1,    87,   260,    22,   245,   109,    -1,
      87,   260,   110,   263,    22,   111,   110,   265,   111,   245,
     109,    -1,    -1,    48,   215,   221,   227,   245,   230,   109,
      -1,    -1,   224,   223,   225,    -1,   103,   122,   265,   123,
      -1,    -1,    47,   215,   226,   227,   245,   230,   109,    -1,
      -1,   124,   228,    -1,   229,    -1,   228,   114,   229,    -1,
     215,    -1,    -1,   107,   231,   108,    -1,   232,    -1,   231,
     232,    -1,   158,    -1,   161,    -1,   146,    -1,   220,    -1,
     225,    -1,   136,    -1,   219,    -1,   201,    -1,   190,    -1,
     180,    -1,   182,    -1,   183,    -1,   184,    -1,   185,    -1,
     186,    -1,   187,    -1,   188,    -1,   235,    -1,   234,    -1,
     254,    -1,    36,   199,    -1,    35,   199,    -1,    49,   233,
     124,    -1,    50,   233,   124,    -1,    51,   233,   124,    -1,
      52,   124,    -1,    -1,    53,    -1,   240,   121,    22,   110,
     111,   266,   244,   245,   109,   249,   250,    -1,    -1,   102,
     236,   237,    -1,   237,    -1,    22,   110,   251,   111,   266,
     245,   238,   109,   249,    -1,    -1,   125,   110,   251,   111,
     126,    -1,    -1,   125,   260,   110,   251,   111,   126,    -1,
      -1,    70,    -1,   260,    22,   110,   251,   111,   243,   266,
     244,   245,   239,   109,   249,   250,    -1,   260,    97,   242,
     110,   251,   111,   243,   266,   244,   245,   239,   109,   249,
     250,    -1,    97,   260,   110,   251,   111,   243,   266,   244,
     245,   239,   109,   249,   250,    -1,   116,    -1,   113,    -1,
     117,    -1,   118,    -1,   127,    -1,   119,    -1,   120,    -1,
     128,    -1,   122,   122,    -1,   123,   123,    -1,   116,   115,
      -1,   113,   115,    -1,   117,   115,    -1,   118,   115,    -1,
     127,   115,    -1,   119,   115,    -1,   120,   115,    -1,   128,
     115,    -1,   122,   122,   115,    -1,   123,   123,   115,    -1,
     121,    -1,   110,   111,    -1,   125,   126,    -1,   122,    -1,
     122,   115,    -1,   115,   115,    -1,   112,   115,    -1,   123,
      -1,   123,   115,    -1,    -1,    76,    -1,    -1,   115,    85,
      -1,    -1,   118,   246,   118,    -1,   247,    -1,   246,   114,
     247,    -1,    22,    -1,    22,   115,   248,    -1,   169,    -1,
      24,    -1,    85,    -1,    -1,    33,   199,    -1,    -1,    25,
     199,    -1,   252,    -1,    -1,   253,    -1,   252,   114,   253,
      -1,    78,   204,   245,   210,    -1,    79,   204,   245,   210,
      -1,    80,   204,   245,   210,    -1,    81,   204,   245,    -1,
      82,   204,   245,    -1,    83,   110,   251,   111,   204,   245,
      -1,    84,   110,   251,   111,   204,   245,    -1,    99,   204,
     245,    -1,   261,   210,    -1,    -1,    77,   255,   256,    -1,
     256,    -1,   257,    -1,   259,    -1,    -1,    70,   258,   241,
      -1,   241,    -1,   260,    22,   245,   109,   174,   175,   176,
      -1,    76,   264,   263,   262,    -1,   264,   263,   262,    -1,
     260,   204,   245,    -1,    -1,   119,    -1,    -1,   263,   117,
      -1,   215,    -1,   215,   122,   265,   123,    -1,    48,   215,
      -1,    73,    55,    -1,    55,    -1,    73,    -1,    73,    56,
      -1,    56,    -1,    57,    -1,    73,    57,    -1,    57,    57,
      -1,    73,    57,    57,    -1,    58,    -1,    59,    -1,    54,
      -1,    72,    60,    -1,    73,    60,    -1,    60,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,   104,    -1,   260,
      -1,   265,   114,   260,    -1,    -1,    98,   110,   267,   111,
      -1,    -1,   215,    -1,   267,   114,   215,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   313,   313,   314,   317,   317,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   354,   358,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   399,   404,   439,   443,
     517,   522,   522,   528,   528,   577,   591,   592,   595,   599,
     608,   619,   619,   650,   651,   654,   654,   681,   682,   685,
     690,   695,   695,   720,   721,   724,   729,   742,   745,   748,
     751,   756,   757,   762,   768,   795,   806,   817,   830,   843,
     876,   879,   884,   885,   901,   904,   907,   912,   917,   922,
     925,   930,   933,   938,   941,   946,   951,   956,   961,   966,
     969,   972,   977,   982,   987,   992,   997,  1002,  1007,  1012,
    1017,  1023,  1029,  1035,  1041,  1050,  1056,  1061,  1067,  1070,
    1071,  1082,  1082,  1093,  1096,  1101,  1104,  1109,  1110,  1113,
    1114,  1117,  1118,  1119,  1146,  1147,  1150,  1151,  1154,  1157,
    1162,  1163,  1181,  1184,  1187,  1190,  1193,  1196,  1201,  1204,
    1207,  1210,  1213,  1218,  1236,  1237,  1245,  1250,  1259,  1269,
    1273,  1277,  1281,  1285,  1289,  1293,  1299,  1304,  1310,  1328,
    1332,  1355,  1355,  1375,  1375,  1402,  1407,  1407,  1422,  1423,
    1426,  1427,  1430,  1469,  1472,  1477,  1478,  1481,  1482,  1483,
    1484,  1485,  1486,  1487,  1488,  1489,  1493,  1497,  1508,  1519,
    1530,  1541,  1552,  1563,  1574,  1575,  1576,  1577,  1588,  1599,
    1606,  1613,  1620,  1629,  1632,  1637,  1686,  1686,  1687,  1690,
    1716,  1719,  1726,  1729,  1737,  1740,  1745,  1762,  1787,  1863,
    1864,  1865,  1866,  1867,  1868,  1869,  1870,  1871,  1872,  1873,
    1874,  1875,  1876,  1877,  1878,  1879,  1880,  1881,  1882,  1883,
    1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1894,  1897,
    1902,  1905,  1913,  1916,  1922,  1926,  1938,  1942,  1948,  1952,
    1956,  1962,  1965,  1970,  1973,  1978,  2026,  2031,  2037,  2064,
    2073,  2082,  2091,  2102,  2110,  2125,  2140,  2146,  2152,  2152,
    2153,  2156,  2157,  2160,  2160,  2161,  2164,  2197,  2203,  2211,
    2271,  2274,  2282,  2285,  2290,  2301,  2315,  2332,  2339,  2346,
    2353,  2360,  2367,  2374,  2381,  2388,  2395,  2402,  2409,  2416,
    2423,  2430,  2437,  2444,  2451,  2458,  2465,  2472,  2479,  2486,
    2493,  2500,  2509,  2515,  2531,  2534,  2542,  2548,  2555
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_PLUGIN", "TK_DOC", "TK_EXPORTEDDOC",
  "TK_MAKEFILE", "TK_ACCESSCODE", "TK_GETCODE", "TK_SETCODE",
  "TK_PREINITCODE", "TK_INITCODE", "TK_POSTINITCODE", "TK_UNITCODE",
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
  "TK_EXPLICIT", "TK_TEMPLATE", "TK_ELLIPSIS", "TK_DEFMETATYPE",
  "TK_DEFSUPERTYPE", "'{'", "'}'", "';'", "'('", "')'", "'!'", "'-'",
  "','", "'='", "'+'", "'*'", "'/'", "'&'", "'|'", "'~'", "'<'", "'>'",
  "':'", "'['", "']'", "'%'", "'^'", "$accept", "specification",
  "statement", "@1", "modstatement", "nsstatement", "plugin", "exception",
  "baseexception", "raisecode", "mappedtype", "@2", "mappedtypetmpl", "@3",
  "mtdefinition", "mtbody", "mtline", "namespace", "@4", "nsbody",
  "platforms", "@5", "platformlist", "platform", "feature", "timeline",
  "@6", "qualifierlist", "qualifiername", "ifstart", "oredqualifiers",
  "qualifiers", "ifend", "license", "defmetatype", "defsupertype",
  "consmodule", "compmodule", "module", "modlang", "dottedname",
  "optnumber", "include", "optinclude", "import", "optaccesscode",
  "optgetcode", "optsetcode", "copying", "exphdrcode", "modhdrcode",
  "typehdrcode", "opttypehdrcode", "travcode", "clearcode", "readbufcode",
  "writebufcode", "segcountcode", "charbufcode", "picklecode", "modcode",
  "typecode", "preinitcode", "initcode", "postinitcode", "unitcode",
  "prepycode", "doc", "exporteddoc", "makefile", "codeblock", "codelines",
  "enum", "@7", "optfilename", "optname", "optenumbody", "enumbody",
  "enumline", "optcomma", "optenumassign", "optassign", "expr", "binop",
  "optunop", "value", "scopedname", "scopepart", "simplevalue", "exprlist",
  "typedef", "struct", "@8", "classtmpl", "@9", "template", "class", "@10",
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
     355,   356,   357,   358,   359,   360,   361,   123,   125,    59,
      40,    41,    33,    45,    44,    61,    43,    42,    47,    38,
     124,   126,    60,    62,    58,    91,    93,    37,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   129,   130,   130,   132,   131,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   135,   136,   137,   137,
     138,   140,   139,   142,   141,   143,   144,   144,   145,   145,
     145,   147,   146,   148,   148,   150,   149,   151,   151,   152,
     153,   155,   154,   156,   156,   157,   158,   159,   159,   159,
     159,   160,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   168,   169,   169,   170,   170,   171,   172,   173,   174,
     174,   175,   175,   176,   176,   177,   178,   179,   180,   181,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     200,   202,   201,   203,   203,   204,   204,   205,   205,   206,
     206,   207,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   212,   212,   212,   212,   213,   213,
     213,   213,   213,   214,   215,   215,   216,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   218,   218,   218,   219,
     219,   221,   220,   223,   222,   224,   226,   225,   227,   227,
     228,   228,   229,   230,   230,   231,   231,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   233,   233,   234,   236,   235,   235,   237,
     238,   238,   239,   239,   240,   240,   241,   241,   241,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   243,   243,
     244,   244,   245,   245,   246,   246,   247,   247,   248,   248,
     248,   249,   249,   250,   250,   251,   252,   252,   252,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   255,   254,
     254,   256,   256,   258,   257,   257,   259,   260,   260,   261,
     262,   262,   263,   263,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   265,   265,   266,   266,   267,   267,   267
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     9,     0,     3,
       2,     0,     5,     0,     5,     4,     1,     2,     1,     2,
       2,     0,     7,     1,     2,     0,     5,     1,     2,     1,
       2,     0,     5,     1,     2,     1,     4,     1,     2,     3,
       4,     1,     3,     1,     2,     2,     2,     2,     2,     3,
       1,     1,     1,     1,     0,     1,     2,     2,     2,     0,
       2,     0,     2,     0,     2,     2,     2,     2,     2,     0,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     2,     1,
       2,     0,     8,     0,     1,     0,     1,     0,     1,     1,
       2,     1,     1,     4,     0,     1,     0,     2,     0,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     2,     1,     3,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     3,     5,
      11,     0,     7,     0,     3,     4,     0,     7,     0,     2,
       1,     3,     1,     0,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     2,     0,     1,    11,     0,     3,     1,     9,
       0,     5,     0,     6,     0,     1,    13,    14,    13,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     1,
       2,     2,     1,     2,     2,     2,     1,     2,     0,     1,
       0,     2,     0,     3,     1,     3,     1,     3,     1,     1,
       1,     0,     2,     0,     2,     1,     0,     1,     3,     4,
       4,     4,     3,     3,     6,     6,     3,     2,     0,     3,
       1,     1,     1,     0,     3,     1,     7,     4,     3,     3,
       0,     1,     0,     2,     1,     4,     2,     2,     1,     1,
       2,     1,     1,     2,     2,     3,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     4,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
     166,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,   328,   318,   321,   322,   326,   327,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   135,
       0,   319,     0,     0,     0,    71,    65,     0,   272,     0,
       0,     0,   341,     0,     0,     5,    33,     9,    40,    31,
      32,    36,    15,    16,    14,    34,    35,    17,    18,    19,
       7,     8,     6,     0,    11,    12,    13,    10,    20,    21,
      45,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      42,   314,   164,    41,    37,    39,   183,    38,    43,    44,
       0,   312,    46,   129,   125,     0,   126,   133,   120,   121,
     122,   123,   118,   124,   105,     0,   272,   135,    96,    97,
      98,   106,   107,   108,    92,    93,    87,    88,   186,   181,
     324,   136,   272,   329,   317,   320,   323,   330,   312,     0,
      61,     0,     0,    70,     0,    84,     0,    48,     0,    85,
      86,    94,     0,     0,     0,     0,   272,     0,   310,   130,
     128,   134,     0,   316,    51,    77,     0,    81,     0,     0,
     188,   188,   131,   325,   310,   272,   312,     0,     0,     0,
     276,     0,   274,   286,     0,   272,   342,     0,    95,    89,
     165,     0,    53,   184,   286,     0,     0,     0,   240,     0,
     239,   241,   242,   244,   245,   259,   262,   266,     0,   243,
     246,     0,   313,   311,   308,   127,     0,    78,     0,    76,
     135,     0,   272,   272,     0,   307,     0,     0,     0,    75,
       0,    73,    69,     0,    67,     0,     0,   273,   135,   135,
     135,   135,   135,     0,     0,   135,     0,   285,   287,   135,
     148,     0,     0,     0,   185,   315,     0,     0,    99,   260,
     265,   250,   264,   249,   251,   252,   254,   255,   263,   247,
     267,   248,   261,   253,   256,   286,     0,    52,    79,     0,
      82,   192,   189,   190,   193,   193,   137,   179,     0,    63,
       0,   183,    72,    74,    66,    68,   279,   280,   278,   277,
     275,   272,   272,   272,   272,   272,   286,   286,   272,   268,
       0,   272,   158,   297,    49,   109,   343,    54,   268,     0,
     101,   257,   258,     0,     0,     0,     0,    56,    58,    80,
       0,   234,     0,     0,   146,   141,   142,     0,   138,   139,
       0,     0,    64,   148,   148,   148,   292,   293,     0,     0,
     296,   269,   344,   288,   309,   159,   161,   162,   160,   149,
       0,   150,   110,     0,   344,   100,     0,   103,   268,    59,
      60,     0,    57,   191,     0,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,   223,   223,     0,   303,
     298,   226,   202,   199,   197,   198,   206,   207,   208,   209,
     210,   211,   212,   213,   205,   204,   203,   200,   201,   234,
     195,   215,   214,   228,     0,   305,   216,   300,   301,   302,
     187,   182,   158,   272,     0,   140,     0,    62,   289,   290,
     291,   135,   135,     0,   270,   152,   153,   154,   155,   156,
     157,   158,   174,   170,   169,   175,   171,   172,   173,   167,
     163,     0,     0,     0,   270,   102,     0,   306,   344,    55,
     119,   286,   111,   112,   113,   114,   115,   116,   117,   218,
     217,   224,     0,     0,     0,   222,     0,     0,     0,   194,
     196,     0,   147,   144,   132,     0,   272,   272,   346,     0,
     272,   151,   158,    50,     0,   272,   104,   270,     0,   219,
     220,   221,   304,     0,   303,   299,     0,   227,     0,   145,
     143,   272,   294,   295,   347,     0,   271,   232,   177,     0,
      47,   232,   272,   344,     0,     0,     0,   345,     0,     0,
       0,   168,   158,     0,   232,   272,   344,   180,   348,     0,
     281,   178,   281,     0,   230,   270,   286,     0,   283,   283,
     281,     0,     0,   272,     0,   282,     0,   238,   236,   283,
     286,   281,     0,     0,   284,   237,     0,   229,   281,   233,
       0,   283,   231,   225
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,     2,     3,    65,    66,    67,    68,   195,   463,
      69,   226,    70,   266,   287,   336,   337,    71,   187,   300,
      72,   152,   243,   244,    73,    74,   151,   240,   241,    75,
     177,   178,    76,    77,    78,    79,    80,    81,    82,    83,
     136,   199,    84,    85,    86,   330,   377,   467,    87,    88,
      89,    90,   373,   407,   408,   409,   410,   411,   412,   413,
      91,   414,    92,    93,    94,    95,    96,    97,    98,    99,
     114,   115,   100,   234,   172,   142,   347,   348,   349,   520,
     433,   323,   369,   451,   370,   371,   101,   102,   460,   529,
     103,   104,   181,   105,   165,   301,   107,   180,   232,   292,
     293,   342,   419,   420,   482,   421,   422,   488,   423,   562,
     540,   424,   108,   221,   362,   500,   155,   191,   192,   309,
     558,   567,   256,   257,   258,   426,   487,   427,   428,   486,
     109,   259,   260,   224,   168,   111,   197,   444,   525
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -494
static const short int yypact[] =
{
    -494,   140,  -494,   522,  -494,  -494,    40,   115,   115,   148,
     115,   115,   115,   115,   115,   115,   115,   912,    88,  -494,
    -494,   185,   192,   193,   115,   115,   115,  -494,  -494,    84,
      84,   181,   181,  -494,  -494,  -494,   150,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,   196,
     159,   134,   912,   441,   202,  -494,  -494,   203,   109,   441,
     181,   106,  -494,    84,    84,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,    84,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,   -21,  -494,  -494,  -494,  -494,   211,  -494,  -494,  -494,
      32,  -494,  -494,  -494,  -494,    66,  -494,   210,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,   181,   109,     7,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,   160,     1,
    -494,  -494,   109,  -494,  -494,  -494,   178,  -494,  -494,    17,
    -494,   130,   147,  -494,   236,  -494,   149,   -13,   441,  -494,
    -494,   177,   181,   441,   912,   216,   -46,   320,    63,  -494,
    -494,  -494,   115,   160,  -494,   151,   243,   191,   156,   155,
     146,   146,  -494,  -494,    63,   109,  -494,   167,   253,   254,
     162,    79,  -494,   784,   181,   109,  -494,    27,  -494,  -494,
    -494,    39,  -494,  -494,   784,   170,   169,   168,   174,   175,
     176,   179,   182,   207,   209,  -494,    43,   -11,   173,   215,
     218,   172,  -494,  -494,  -494,  -494,   186,  -494,     9,  -494,
     196,   181,   109,   109,   189,  -494,   222,     5,   731,  -494,
       8,  -494,  -494,    18,  -494,    20,   236,  -494,   196,   196,
     196,   196,   196,   190,   224,   196,   214,   171,  -494,   196,
     220,   -16,   229,   441,  -494,  -494,   186,   226,   331,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,   225,
    -494,   227,  -494,  -494,  -494,   784,   135,  -494,  -494,   319,
    -494,   160,   231,  -494,   239,   239,   180,  -494,   232,  -494,
     184,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,   109,   109,   109,   109,   109,   784,   784,   109,   271,
     784,   109,    31,  -494,  -494,   307,  -494,  -494,   271,   115,
     342,  -494,  -494,   241,   115,   115,    25,  -494,  -494,  -494,
     181,   672,   244,   245,   240,  -494,  -494,   248,   180,  -494,
     249,   251,  -494,   220,   220,   220,  -494,  -494,   246,   250,
    -494,  -494,   260,  -494,  -494,  -494,  -494,  -494,  -494,    68,
     837,  -494,  -494,   261,   260,  -494,   115,   355,   271,  -494,
    -494,   257,  -494,  -494,   115,   259,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   314,   314,   314,   263,   252,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,   609,
    -494,  -494,  -494,  -494,   267,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,    31,   109,   262,  -494,   441,  -494,  -494,  -494,
    -494,   196,   196,   264,   255,  -494,  -494,  -494,  -494,  -494,
    -494,    31,  -494,  -494,  -494,  -494,  -494,  -494,  -494,   -29,
    -494,   265,   115,   281,   255,  -494,   115,  -494,   260,  -494,
    -494,   784,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,   266,   268,   269,  -494,   889,   247,   350,  -494,
    -494,   369,  -494,   280,  -494,    34,   109,   109,   181,   312,
     109,  -494,    62,  -494,   289,   109,  -494,   255,   290,  -494,
    -494,  -494,  -494,    33,  -494,  -494,   259,  -494,   292,  -494,
    -494,   109,  -494,  -494,   160,    49,  -494,   275,    68,    85,
    -494,   275,   109,   260,   293,   294,   297,  -494,   181,   441,
     298,  -494,    31,   299,   275,   109,   260,  -494,   160,   300,
     376,    68,   376,   302,   287,   255,   784,   115,   388,   388,
     376,   304,   306,   109,   305,  -494,   115,  -494,  -494,   388,
     784,   376,   309,   295,  -494,  -494,   308,  -494,   376,  -494,
     296,   388,  -494,  -494
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -494,  -494,   422,  -494,  -494,  -192,  -494,  -309,  -494,  -494,
    -494,  -494,  -494,  -494,   158,  -494,    89,  -308,  -494,  -494,
    -494,  -494,  -494,   183,  -494,  -494,  -494,  -494,   187,  -270,
    -494,  -494,  -268,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
     -15,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -262,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
      -8,  -494,  -306,  -494,  -494,  -113,  -494,  -494,    80,  -494,
    -494,  -132,  -446,  -494,  -494,  -362,   -22,   284,  -494,  -494,
    -304,  -291,  -494,  -494,  -494,   426,  -146,  -494,   270,  -494,
     110,   154,  -494,    36,  -242,  -494,  -494,  -494,   -36,  -494,
    -462,  -494,  -320,  -494,  -292,  -430,  -101,  -494,   213,  -494,
    -469,  -493,  -193,  -494,   133,  -494,  -494,   -31,  -494,  -494,
    -319,    -2,  -494,   273,   -96,    -5,  -150,  -354,  -494
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -317
static const short int yytable[] =
{
     116,   110,   118,   119,   120,   121,   122,   123,   124,   138,
     139,   267,   126,   201,   179,   137,   131,   132,   133,   203,
     464,   425,   429,  -316,   338,   174,   345,   298,   346,   175,
     239,   288,   402,   403,   505,   415,   374,   416,   157,   185,
     242,   182,   134,   135,   306,   162,   299,   148,   159,   160,
     417,   149,   184,   162,   166,   534,   528,   156,   162,   334,
     335,   162,   112,   372,   204,   205,   568,    26,   161,   543,
     492,   404,   154,   405,   338,   162,   575,   532,   345,   406,
     346,  -314,   553,   559,   236,   169,   468,   170,   583,   501,
     237,   569,   333,   163,   262,   324,   551,   194,  -316,   425,
     429,   163,   577,   173,   280,   307,   134,   135,   352,   581,
     402,   403,   281,   415,   507,   416,   302,   290,  -316,   176,
    -316,   289,   222,   358,   359,   563,   304,   186,   417,   167,
     167,   294,   295,   381,   113,   311,   312,   313,   314,   315,
       4,   263,   318,   365,   366,   521,   321,   367,   263,   404,
     264,   405,   368,   263,   483,   484,   196,   406,   278,   202,
     537,   196,   265,   538,   225,   279,   512,   425,   429,   334,
     335,   117,   261,  -176,   365,   366,  -176,    26,   367,   545,
     222,   445,   223,   368,   446,   447,   448,   449,   450,   144,
     145,   146,   555,   246,   147,   418,   541,   247,   127,   542,
      18,    19,   344,    20,    18,    19,    20,   140,   128,   291,
     353,   354,   355,   356,   357,   129,   130,   360,   141,   143,
     364,   438,   439,   440,   150,   153,    26,   154,   158,   164,
     308,    31,    32,   171,   162,   183,   110,   188,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,   189,    49,    50,    51,   190,   193,
      52,   326,   198,    31,  -136,   227,   228,   229,   230,    20,
     231,    53,    54,   418,   238,   239,   242,   245,   508,   268,
     269,    59,   285,   270,    60,   320,   495,    61,    62,   271,
     272,   273,   351,   286,   274,   125,   296,   275,   110,   282,
     316,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,   514,   291,    50,
      51,   375,   276,    52,   277,   319,   379,   380,   496,   497,
     283,   297,   493,   284,   317,   322,   325,   328,   329,   110,
     331,   339,   332,   350,    59,   340,   341,   361,   459,    26,
     376,    62,   378,   430,   431,   432,   434,   441,   443,   436,
     437,   442,   462,   564,   466,   461,   469,   481,   465,   471,
     499,   494,   516,  -235,   498,   502,   470,   576,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   485,   491,   504,
     509,   518,   510,   511,   519,   522,   523,   526,   530,   527,
     539,   533,   535,   204,   531,   546,   547,   550,   552,   557,
     556,   560,   561,   566,   570,   571,   573,   110,   578,   580,
     536,   579,   582,     5,   327,   382,   305,   303,   435,   106,
     206,   544,   207,   208,   196,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   554,   218,   200,   219,   220,   343,
     383,   233,   517,   363,   503,   490,   515,   235,   506,   310,
       0,     0,   572,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   524,     0,     0,     0,
       0,     0,     0,     0,   513,   110,     0,     0,     0,   125,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,     0,    50,    51,     0,   548,    52,     0,     0,
       0,     0,     0,     0,     0,     6,     7,     8,     9,     0,
       0,     0,    10,    11,    12,    13,    14,   549,    15,    16,
      17,     0,    18,    19,    20,    62,     0,     0,     0,   565,
       0,     0,     0,     0,     0,     0,     0,     0,   574,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    56,    57,    58,     0,     0,     0,     0,    59,
       0,     0,    60,     0,   384,    61,    62,    63,    64,    18,
      19,   385,     0,     0,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,    31,    32,   395,   396,
     397,   398,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,   399,
      49,    50,    51,     0,     0,    52,   400,   384,     0,     0,
       0,     0,    18,    19,   385,     0,    53,    54,   386,   387,
     388,   389,   390,   391,   392,     0,    59,   393,   394,    60,
       0,   401,     0,    62,    26,     0,     0,   489,     0,    31,
      32,   395,   396,   397,   398,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   399,    49,    50,    51,     0,     0,    52,   400,
       0,    18,    19,    20,     0,     0,     0,     0,     0,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,    60,    26,   401,     0,    62,     0,    31,    32,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,     0,    20,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,    59,     0,
       0,    60,   125,     0,    61,    62,     0,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,     0,    50,    51,     0,    20,
      52,   452,   248,   249,   250,   251,   252,   253,   254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,     0,   125,     0,     0,    62,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,     0,    50,
      51,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   453,   454,     0,     0,     0,     0,     0,     0,
     455,   456,   457,   458,    20,     0,     0,   125,     0,     0,
       0,    62,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
     125,    50,    51,     0,     0,    52,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,     0,    50,    51,    59,     0,     0,     0,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62
};

static const short int yycheck[] =
{
       8,     3,    10,    11,    12,    13,    14,    15,    16,    31,
      32,   204,    17,   163,   127,    30,    24,    25,    26,   165,
     374,   341,   341,    22,   286,   126,   296,    22,   296,    22,
      22,    22,   341,   341,   464,   341,   328,   341,    60,    22,
      22,   142,    22,    23,    24,    74,   238,    52,    63,    64,
     341,    53,   148,    74,    22,    22,   502,    59,    74,    34,
      35,    74,    22,   325,   110,   166,   559,    42,    83,   531,
     432,   341,   118,   341,   336,    74,   569,   507,   348,   341,
     348,   110,   544,   552,   185,    19,   378,    21,   581,   451,
     186,   560,   285,   122,   195,   111,   542,   110,    97,   419,
     419,   122,   571,   125,   115,    85,    22,    23,   300,   578,
     419,   419,   123,   419,   468,   419,   108,   230,   117,   112,
     119,   112,   117,   316,   317,   555,   108,   110,   419,    97,
      97,   232,   233,   108,    19,   248,   249,   250,   251,   252,
       0,   114,   255,   112,   113,   111,   259,   116,   114,   419,
     123,   419,   121,   114,   396,   397,   158,   419,   115,   164,
     111,   163,   123,   114,   172,   122,   486,   487,   487,    34,
      35,    23,   194,   111,   112,   113,   114,    42,   116,   533,
     117,   113,   119,   121,   116,   117,   118,   119,   120,    55,
      56,    57,   546,   114,    60,   341,   111,   118,   110,   114,
      20,    21,    22,    22,    20,    21,    22,    57,    23,   231,
     311,   312,   313,   314,   315,    23,    23,   318,    22,    60,
     321,   353,   354,   355,    22,    22,    42,   118,   122,    18,
     245,    47,    48,    23,    74,    57,   238,   107,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,   107,    71,    72,    73,    22,   110,
      76,   263,    85,    47,   113,    22,    75,   111,   113,    22,
     124,    87,    88,   419,   107,    22,    22,   115,   471,   109,
     111,    97,   110,   115,   100,   114,   436,   103,   104,   115,
     115,   115,   108,   107,   115,    48,   107,   115,   300,   126,
     110,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   340,    72,
      73,   329,   115,    76,   115,   111,   334,   335,   441,   442,
     115,   109,   433,   115,   110,   115,   107,   111,     7,   341,
     115,    22,   115,   111,    97,   114,   107,    76,   370,    42,
       8,   104,   111,   109,   109,   115,   108,   111,    98,   110,
     109,   111,   101,   556,     9,   370,   109,    53,   376,   110,
     115,   109,    22,   121,   110,   110,   384,   570,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   124,   121,   108,
     124,    22,   124,   124,   114,   496,   497,    85,   109,   500,
     125,   111,   110,   110,   505,   111,   109,   109,   109,    33,
     110,   109,   125,    25,   110,   109,   111,   419,   109,   111,
     521,   126,   126,     1,   266,   336,   243,   240,   348,     3,
     110,   532,   112,   113,   436,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   545,   125,   162,   127,   128,   295,
     340,   181,   488,   320,   462,   419,   487,   184,   466,   246,
      -1,    -1,   563,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   498,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   486,   487,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    73,    -1,   538,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    10,    11,    12,    13,    14,   539,    16,    17,
      18,    -1,    20,    21,    22,   104,    -1,    -1,    -1,   557,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   566,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    97,
      -1,    -1,   100,    -1,    15,   103,   104,   105,   106,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    -1,    -1,    76,    77,    15,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    87,    88,    26,    27,
      28,    29,    30,    31,    32,    -1,    97,    35,    36,   100,
      -1,   102,    -1,   104,    42,    -1,    -1,   108,    -1,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    -1,    76,    77,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,   100,    42,   102,    -1,   104,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
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
      93,    94,    95,    96,    22,    -1,    -1,    48,    -1,    -1,
      -1,   104,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      48,    72,    73,    -1,    -1,    76,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    -1,    72,    73,    97,    -1,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   130,   131,   132,     0,   131,     3,     4,     5,     6,
      10,    11,    12,    13,    14,    16,    17,    18,    20,    21,
      22,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    71,
      72,    73,    76,    87,    88,    89,    90,    91,    92,    97,
     100,   103,   104,   105,   106,   133,   134,   135,   136,   139,
     141,   146,   149,   153,   154,   158,   161,   162,   163,   164,
     165,   166,   167,   168,   171,   172,   173,   177,   178,   179,
     180,   189,   191,   192,   193,   194,   195,   196,   197,   198,
     201,   215,   216,   219,   220,   222,   224,   225,   241,   259,
     260,   264,    22,    19,   199,   200,   199,    23,   199,   199,
     199,   199,   199,   199,   199,    48,   264,   110,    23,    23,
      23,   199,   199,   199,    22,    23,   169,   169,   215,   215,
      57,    22,   204,    60,    55,    56,    57,    60,   264,   260,
      22,   155,   150,    22,   118,   245,   260,   215,   122,   169,
     169,   169,    74,   122,    18,   223,    22,    97,   263,    19,
      21,    23,   203,   215,   245,    22,   112,   159,   160,   204,
     226,   221,   245,    57,   263,    22,   110,   147,   107,   107,
      22,   246,   247,   110,   110,   137,   260,   265,    85,   170,
     216,   265,   264,   225,   110,   245,   110,   112,   113,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   125,   127,
     128,   242,   117,   119,   262,   199,   140,    22,    75,   111,
     113,   124,   227,   227,   202,   262,   245,   263,   107,    22,
     156,   157,    22,   151,   152,   115,   114,   118,    78,    79,
      80,    81,    82,    83,    84,    99,   251,   252,   253,   260,
     261,   215,   245,   114,   123,   123,   142,   251,   109,   111,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   122,
     115,   123,   126,   115,   115,   110,   107,   143,    22,   112,
     204,   215,   228,   229,   245,   245,   107,   109,    22,   134,
     148,   224,   108,   157,   108,   152,    24,    85,   169,   248,
     247,   204,   204,   204,   204,   204,   110,   110,   204,   111,
     114,   204,   115,   210,   111,   107,   260,   143,   111,     7,
     174,   115,   115,   251,    34,    35,   144,   145,   180,    22,
     114,   107,   230,   230,    22,   158,   161,   205,   206,   207,
     111,   108,   134,   245,   245,   245,   245,   245,   251,   251,
     245,    76,   243,   253,   245,   112,   113,   116,   121,   211,
     213,   214,   180,   181,   243,   199,     8,   175,   111,   199,
     199,   108,   145,   229,    15,    22,    26,    27,    28,    29,
      30,    31,    32,    35,    36,    49,    50,    51,    52,    70,
      77,   102,   136,   146,   158,   161,   180,   182,   183,   184,
     185,   186,   187,   188,   190,   201,   219,   220,   225,   231,
     232,   234,   235,   237,   240,   241,   254,   256,   257,   259,
     109,   109,   115,   209,   108,   207,   110,   109,   210,   210,
     210,   111,   111,    98,   266,   113,   116,   117,   118,   119,
     120,   212,    24,    85,    86,    93,    94,    95,    96,   215,
     217,   264,   101,   138,   266,   199,     9,   176,   243,   109,
     199,   110,   199,   199,   199,   199,   199,   199,   199,   199,
     199,    53,   233,   233,   233,   124,   258,   255,   236,   108,
     232,   121,   214,   245,   109,   265,   204,   204,   110,   115,
     244,   214,   110,   199,   108,   244,   199,   266,   251,   124,
     124,   124,   241,   260,    70,   256,    22,   237,    22,   114,
     208,   111,   245,   245,   215,   267,    85,   245,   211,   218,
     109,   245,   244,   111,    22,   110,   245,   111,   114,   125,
     239,   111,   114,   239,   245,   266,   111,   109,   215,   260,
     109,   211,   109,   239,   245,   266,   110,    33,   249,   249,
     109,   125,   238,   244,   251,   199,    25,   250,   250,   249,
     110,   109,   245,   111,   199,   250,   251,   249,   109,   126,
     111,   249,   126,   250
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
#line 317 "parser.y"
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

  case 20:
#line 350 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->exphdrcode, yyvsp[0].codeb);
        }
    break;

  case 21:
#line 354 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->hdrcode, yyvsp[0].codeb);
        }
    break;

  case 22:
#line 358 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->cppcode, yyvsp[0].codeb);
        }
    break;

  case 45:
#line 386 "parser.y"
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

  case 46:
#line 399 "parser.y"
    {
            appendString(&currentSpec->plugins, yyvsp[0].text);
        }
    break;

  case 47:
#line 404 "parser.y"
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

  case 48:
#line 439 "parser.y"
    {
            yyval.exceptionbase.bibase = NULL;
            yyval.exceptionbase.base = NULL;
        }
    break;

  case 49:
#line 443 "parser.y"
    {
            exceptionDef *xd;

            yyval.exceptionbase.bibase = NULL;
            yyval.exceptionbase.base = NULL;

            /* See if it is a defined exception. */
            for (xd = currentSpec->exceptions; xd != NULL; xd = xd->next)
                if (compareScopedNames(xd->iff->fqcname, yyvsp[-1].scpvalp) == 0)
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

  case 50:
#line 517 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 51:
#line 522 "parser.y"
    {
            if (notSkipping())
                currentMappedType = newMappedType(currentSpec, &yyvsp[-1].memArg, &yyvsp[0].optflags);
        }
    break;

  case 53:
#line 528 "parser.y"
    {
            int a;

            if (currentSpec->genc)
                yyerror("%MappedType templates not allowed in a C module");

            /* Check the template arguments are basic types or simple names. */
            for (a = 0; a < yyvsp[-2].signature.nrArgs; ++a)
            {
                argDef *ad = &yyvsp[-2].signature.args[a];

                if (ad->atype == defined_type && ad->u.snd->next != NULL)
                    yyerror("%MappedType template arguments must be simple names");
            }

            if (yyvsp[0].memArg.atype != template_type)
                yyerror("%MappedType template must map a template type");

            if (notSkipping())
            {
                mappedTypeTmplDef *mtt;
                ifaceFileDef *iff;

                /* Check a template hasn't already been provided. */
                for (mtt = currentSpec->mappedtypetemplates; mtt != NULL; mtt = mtt->next)
                    if (compareScopedNames(mtt->mt->type.u.td->fqname, yyvsp[0].memArg.u.td->fqname) == 0 && sameTemplateSignature(&mtt->mt->type.u.td->types, &yyvsp[0].memArg.u.td->types, TRUE))
                        yyerror("%MappedType template for this type has already been defined");

                yyvsp[0].memArg.nrderefs = 0;
                yyvsp[0].memArg.argflags = 0;

                mtt = sipMalloc(sizeof (mappedTypeTmplDef));

                mtt->sig = yyvsp[-2].signature;
                mtt->mt = allocMappedType(currentSpec, &yyvsp[0].memArg);
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

  case 55:
#line 577 "parser.y"
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

  case 58:
#line 595 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->iff->hdrcode, yyvsp[0].codeb);
        }
    break;

  case 59:
#line 599 "parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType -> convfromcode != NULL)
                    yyerror("%MappedType has more than one %ConvertFromTypeCode directive");

                currentMappedType -> convfromcode = yyvsp[0].codeb;
            }
        }
    break;

  case 60:
#line 608 "parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType -> convtocode != NULL)
                    yyerror("%MappedType has more than one %ConvertToTypeCode directive");

                currentMappedType -> convtocode = yyvsp[0].codeb;
            }
        }
    break;

  case 61:
#line 619 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("namespace definition not allowed in a C module");

            if (notSkipping())
            {
                classDef *ns;

                ns = newClass(currentSpec, namespace_iface,
                        text2scopedName(currentScope(), yyvsp[0].text));

                pushScope(ns);

                sectionFlags = 0;
            }
        }
    break;

  case 62:
#line 634 "parser.y"
    {
            if (notSkipping())
            {
                if (inMainModule())
                {
                    classDef *ns = currentScope();

                    setIsUsedName(ns->iff->name);
                    setIsUsedName(ns->pyname);
                }

                popScope();
            }
        }
    break;

  case 65:
#line 654 "parser.y"
    {
            qualDef *qd;

            for (qd = currentModule -> qualifiers; qd != NULL; qd = qd -> next)
                if (qd -> qtype == platform_qualifier)
                    yyerror("%Platforms has already been defined for this module");
        }
    break;

  case 66:
#line 661 "parser.y"
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

  case 69:
#line 685 "parser.y"
    {
            newQualifier(currentModule,-1,-1,yyvsp[0].text,platform_qualifier);
        }
    break;

  case 70:
#line 690 "parser.y"
    {
            newQualifier(currentModule,-1,-1,yyvsp[0].text,feature_qualifier);
        }
    break;

  case 71:
#line 695 "parser.y"
    {
            currentTimelineOrder = 0;
        }
    break;

  case 72:
#line 698 "parser.y"
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

  case 75:
#line 724 "parser.y"
    {
            newQualifier(currentModule,currentModule -> nrtimelines,currentTimelineOrder++,yyvsp[0].text,time_qualifier);
        }
    break;

  case 76:
#line 729 "parser.y"
    {
            if (skipStackPtr >= MAX_NESTED_IF)
                yyerror("Internal error: increase the value of MAX_NESTED_IF");

            /* Nested %Ifs are implicit logical ands. */

            if (skipStackPtr > 0)
                yyvsp[-1].boolean = (yyvsp[-1].boolean && skipStack[skipStackPtr - 1]);

            skipStack[skipStackPtr++] = yyvsp[-1].boolean;
        }
    break;

  case 77:
#line 742 "parser.y"
    {
            yyval.boolean = platOrFeature(yyvsp[0].text,FALSE);
        }
    break;

  case 78:
#line 745 "parser.y"
    {
            yyval.boolean = platOrFeature(yyvsp[0].text,TRUE);
        }
    break;

  case 79:
#line 748 "parser.y"
    {
            yyval.boolean = (platOrFeature(yyvsp[0].text,FALSE) || yyvsp[-2].boolean);
        }
    break;

  case 80:
#line 751 "parser.y"
    {
            yyval.boolean = (platOrFeature(yyvsp[0].text,TRUE) || yyvsp[-3].boolean);
        }
    break;

  case 82:
#line 757 "parser.y"
    {
            yyval.boolean = timePeriod(yyvsp[-2].text,yyvsp[0].text);
        }
    break;

  case 83:
#line 762 "parser.y"
    {
            if (skipStackPtr-- <= 0)
                yyerror("Too many %End directives");
        }
    break;

  case 84:
#line 768 "parser.y"
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

  case 85:
#line 795 "parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defmetatype != NULL)
                    yyerror("%DefaultMetatype has already been defined for this module");

                currentModule->defmetatype = cacheName(currentSpec, yyvsp[0].text);
            }
        }
    break;

  case 86:
#line 806 "parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defsupertype != NULL)
                    yyerror("%DefaultSupertype has already been defined for this module");

                currentModule->defsupertype = cacheName(currentSpec, yyvsp[0].text);
            }
        }
    break;

  case 87:
#line 817 "parser.y"
    {
            /* Make sure this is the first mention of a module. */
            if (currentSpec->module != currentModule)
                yyerror("A %ConsolidatedModule cannot be %Imported");

            if (currentModule->fullname != NULL)
                yyerror("%ConsolidatedModule must appear before any %Module or %CModule directive");

            setModuleName(currentSpec, currentModule, yyvsp[0].text);
            setIsConsolidated(currentModule);
        }
    break;

  case 88:
#line 830 "parser.y"
    {
            /* Make sure this is the first mention of a module. */
            if (currentSpec->module != currentModule)
                yyerror("A %CompositeModule cannot be %Imported");

            if (currentModule->fullname != NULL)
                yyerror("%CompositeModule must appear before any %Module or %CModule directive");

            setModuleName(currentSpec, currentModule, yyvsp[0].text);
            setIsComposite(currentModule);
        }
    break;

  case 89:
#line 843 "parser.y"
    {
            /* Check the module hasn't already been defined. */

            moduleDef *mod;

            for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
                if (mod->fullname != NULL && strcmp(mod->fullname->text, yyvsp[-1].text) == 0)
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

            setModuleName(currentSpec, currentModule, yyvsp[-1].text);
            currentModule->version = yyvsp[0].number;

            if (currentSpec->genc < 0)
                currentSpec->genc = yyvsp[-2].boolean;
            else if (currentSpec->genc != yyvsp[-2].boolean)
                yyerror("Cannot mix C and C++ modules");
        }
    break;

  case 90:
#line 876 "parser.y"
    {
            yyval.boolean = FALSE;
        }
    break;

  case 91:
#line 879 "parser.y"
    {
            yyval.boolean = TRUE;
        }
    break;

  case 93:
#line 885 "parser.y"
    {
            /*
             * The grammar design is a bit broken and this is the easiest way
             * to allow periods in names.
             */

            char *cp;

            for (cp = yyvsp[0].text; *cp != '\0'; ++cp)
                if (*cp != '.' && *cp != '_' && !isalnum(*cp))
                    yyerror("Invalid character in name");

            yyval.text = yyvsp[0].text;
        }
    break;

  case 94:
#line 901 "parser.y"
    {
            yyval.number = -1;
        }
    break;

  case 96:
#line 907 "parser.y"
    {
            parseFile(NULL, yyvsp[0].text, NULL, FALSE);
        }
    break;

  case 97:
#line 912 "parser.y"
    {
            parseFile(NULL, yyvsp[0].text, NULL, TRUE);
        }
    break;

  case 98:
#line 917 "parser.y"
    {
            newImport(yyvsp[0].text);
        }
    break;

  case 99:
#line 922 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 100:
#line 925 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 101:
#line 930 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 102:
#line 933 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 103:
#line 938 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 104:
#line 941 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 105:
#line 946 "parser.y"
    {
            appendCodeBlock(&currentModule->copying, yyvsp[0].codeb);
        }
    break;

  case 106:
#line 951 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 107:
#line 956 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 108:
#line 961 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 109:
#line 966 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 111:
#line 972 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 112:
#line 977 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 113:
#line 982 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 114:
#line 987 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 115:
#line 992 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 116:
#line 997 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 117:
#line 1002 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 118:
#line 1007 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 119:
#line 1012 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 120:
#line 1017 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->preinitcode, yyvsp[0].codeb);
        }
    break;

  case 121:
#line 1023 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->initcode, yyvsp[0].codeb);
        }
    break;

  case 122:
#line 1029 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->postinitcode, yyvsp[0].codeb);
        }
    break;

  case 123:
#line 1035 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitcode, yyvsp[0].codeb);
        }
    break;

  case 124:
#line 1041 "parser.y"
    {
            /*
             * This is a no-op and is retained for compatibility
             * until the last use of it (by SIP v3) can be removed
             * from PyQt.
             */
        }
    break;

  case 125:
#line 1050 "parser.y"
    {
            if (inMainModule())
                appendCodeBlock(&currentSpec -> docs,yyvsp[0].codeb);
        }
    break;

  case 126:
#line 1056 "parser.y"
    {
            appendCodeBlock(&currentSpec -> docs,yyvsp[0].codeb);
        }
    break;

  case 127:
#line 1061 "parser.y"
    {
            if (inMainModule())
                yywarning("%Makefile is ignored, please use the -b flag instead");
        }
    break;

  case 130:
#line 1071 "parser.y"
    {
            yyval.codeb = yyvsp[-1].codeb;

            append(&yyval.codeb->frag, yyvsp[0].codeb->frag);

            free(yyvsp[0].codeb->frag);
            free((char *)yyvsp[0].codeb->filename);
            free(yyvsp[0].codeb);
        }
    break;

  case 131:
#line 1082 "parser.y"
    {
            if (notSkipping())
            {
                if (sectionFlags != 0 && (sectionFlags & ~(SECT_IS_PUBLIC | SECT_IS_PROT)) != 0)
                    yyerror("Class enums must be in the public or protected sections");

                currentEnum = newEnum(currentSpec,currentModule,yyvsp[-1].text,&yyvsp[0].optflags,sectionFlags);
            }
        }
    break;

  case 133:
#line 1093 "parser.y"
    {
            yyval.text = NULL;
        }
    break;

  case 134:
#line 1096 "parser.y"
    {
            yyval.text = yyvsp[0].text;
        }
    break;

  case 135:
#line 1101 "parser.y"
    {
            yyval.text = NULL;
        }
    break;

  case 136:
#line 1104 "parser.y"
    {
            yyval.text = yyvsp[0].text;
        }
    break;

  case 143:
#line 1119 "parser.y"
    {
            if (notSkipping())
            {
                enumMemberDef *emd, **tail;

                /* Note that we don't use the assigned value. */
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

  case 148:
#line 1154 "parser.y"
    {
            yyval.valp = NULL;
        }
    break;

  case 149:
#line 1157 "parser.y"
    {
            yyval.valp = yyvsp[0].valp;
        }
    break;

  case 151:
#line 1163 "parser.y"
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

  case 152:
#line 1181 "parser.y"
    {
            yyval.qchar = '-';
        }
    break;

  case 153:
#line 1184 "parser.y"
    {
            yyval.qchar = '+';
        }
    break;

  case 154:
#line 1187 "parser.y"
    {
            yyval.qchar = '*';
        }
    break;

  case 155:
#line 1190 "parser.y"
    {
            yyval.qchar = '/';
        }
    break;

  case 156:
#line 1193 "parser.y"
    {
            yyval.qchar = '&';
        }
    break;

  case 157:
#line 1196 "parser.y"
    {
            yyval.qchar = '|';
        }
    break;

  case 158:
#line 1201 "parser.y"
    {
            yyval.qchar = '\0';
        }
    break;

  case 159:
#line 1204 "parser.y"
    {
            yyval.qchar = '!';
        }
    break;

  case 160:
#line 1207 "parser.y"
    {
            yyval.qchar = '~';
        }
    break;

  case 161:
#line 1210 "parser.y"
    {
            yyval.qchar = '-';
        }
    break;

  case 162:
#line 1213 "parser.y"
    {
            yyval.qchar = '+';
        }
    break;

  case 163:
#line 1218 "parser.y"
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

  case 165:
#line 1237 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("Scoped names are not allowed in a C module");

            appendScopedName(&yyvsp[-2].scpvalp,yyvsp[0].scpvalp);
        }
    break;

  case 166:
#line 1245 "parser.y"
    {
            yyval.scpvalp = text2scopePart(yyvsp[0].text);
        }
    break;

  case 167:
#line 1250 "parser.y"
    {
            /*
             * We let the C++ compiler decide if the value is a valid one - no
             * point in building a full C++ parser here.
             */

            yyval.value.vtype = scoped_value;
            yyval.value.u.vscp = yyvsp[0].scpvalp;
        }
    break;

  case 168:
#line 1259 "parser.y"
    {
            fcallDef *fcd;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = yyvsp[-1].fcall;
            fcd -> type = yyvsp[-3].memArg;

            yyval.value.vtype = fcall_value;
            yyval.value.u.fcd = fcd;
        }
    break;

  case 169:
#line 1269 "parser.y"
    {
            yyval.value.vtype = real_value;
            yyval.value.u.vreal = yyvsp[0].real;
        }
    break;

  case 170:
#line 1273 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = yyvsp[0].number;
        }
    break;

  case 171:
#line 1277 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = 1;
        }
    break;

  case 172:
#line 1281 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = 0;
        }
    break;

  case 173:
#line 1285 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = 0;
        }
    break;

  case 174:
#line 1289 "parser.y"
    {
            yyval.value.vtype = string_value;
            yyval.value.u.vstr = yyvsp[0].text;
        }
    break;

  case 175:
#line 1293 "parser.y"
    {
            yyval.value.vtype = qchar_value;
            yyval.value.u.vqchar = yyvsp[0].qchar;
        }
    break;

  case 176:
#line 1299 "parser.y"
    {
            /* No values. */

            yyval.fcall.nrArgs = 0;
        }
    break;

  case 177:
#line 1304 "parser.y"
    {
            /* The single or first expression. */

            yyval.fcall.args[0] = yyvsp[0].valp;
            yyval.fcall.nrArgs = 1;
        }
    break;

  case 178:
#line 1310 "parser.y"
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

  case 179:
#line 1328 "parser.y"
    {
            if (notSkipping())
                newTypedef(currentSpec, currentModule, yyvsp[-2].text, &yyvsp[-3].memArg, &yyvsp[-1].optflags);
        }
    break;

  case 180:
#line 1332 "parser.y"
    {
            if (notSkipping())
            {
                signatureDef *sig;
                argDef ftype;

                memset(&ftype, 0, sizeof (argDef));

                /* Create the full signature on the heap. */
                sig = sipMalloc(sizeof (signatureDef));
                *sig = yyvsp[-3].signature;
                sig->result = yyvsp[-9].memArg;

                /* Create the full type. */
                ftype.atype = function_type;
                ftype.nrderefs = yyvsp[-7].number;
                ftype.u.sa = sig;

                newTypedef(currentSpec, currentModule, yyvsp[-6].text, &ftype, &yyvsp[-1].optflags);
            }
        }
    break;

  case 181:
#line 1355 "parser.y"
    {
            if (currentSpec -> genc && yyvsp[0].scpvalp->next != NULL)
                yyerror("Namespaces not allowed in a C module");

            if (notSkipping())
            {
                defineClass(yyvsp[0].scpvalp);
                sectionFlags = SECT_IS_PUBLIC;
            }
        }
    break;

  case 182:
#line 1364 "parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = completeClass(yyvsp[-5].scpvalp, &yyvsp[-2].optflags, yyvsp[-1].boolean);

                if (currentSpec -> genc && cd->supers != NULL)
                    yyerror("Super-classes not allowed in a C module struct");
            }
        }
    break;

  case 183:
#line 1375 "parser.y"
    {currentIsTemplate = TRUE;}
    break;

  case 184:
#line 1375 "parser.y"
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

  case 185:
#line 1402 "parser.y"
    {
            yyval.signature = yyvsp[-1].signature;
        }
    break;

  case 186:
#line 1407 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("Class definition not allowed in a C module");

            if (notSkipping())
            {
                defineClass(yyvsp[0].scpvalp);
                sectionFlags = SECT_IS_PRIVATE;
            }
        }
    break;

  case 187:
#line 1416 "parser.y"
    {
            if (notSkipping())
                yyval.klass = completeClass(yyvsp[-5].scpvalp, &yyvsp[-2].optflags, yyvsp[-1].boolean);
        }
    break;

  case 192:
#line 1430 "parser.y"
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
                    ad.original_type = NULL;

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

  case 193:
#line 1469 "parser.y"
    {
            yyval.boolean = FALSE;
        }
    break;

  case 194:
#line 1472 "parser.y"
    {
            yyval.boolean = TRUE;
        }
    break;

  case 205:
#line 1489 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->cppcode, yyvsp[0].codeb);
        }
    break;

  case 206:
#line 1493 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->iff->hdrcode, yyvsp[0].codeb);
        }
    break;

  case 207:
#line 1497 "parser.y"
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

  case 208:
#line 1508 "parser.y"
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

  case 209:
#line 1519 "parser.y"
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

  case 210:
#line 1530 "parser.y"
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

  case 211:
#line 1541 "parser.y"
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

  case 212:
#line 1552 "parser.y"
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

  case 213:
#line 1563 "parser.y"
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

  case 217:
#line 1577 "parser.y"
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

  case 218:
#line 1588 "parser.y"
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

  case 219:
#line 1599 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("public section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PUBLIC | yyvsp[-1].number;
        }
    break;

  case 220:
#line 1606 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("protected section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PROT | yyvsp[-1].number;
        }
    break;

  case 221:
#line 1613 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("private section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PRIVATE | yyvsp[-1].number;
        }
    break;

  case 222:
#line 1620 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("signals section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_SIGNAL;
        }
    break;

  case 223:
#line 1629 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 224:
#line 1632 "parser.y"
    {
            yyval.number = SECT_IS_SLOT;
        }
    break;

  case 225:
#line 1637 "parser.y"
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

  case 226:
#line 1686 "parser.y"
    {currentCtorIsExplicit = TRUE;}
    break;

  case 229:
#line 1690 "parser.y"
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

  case 230:
#line 1716 "parser.y"
    {
            yyval.optsignature = NULL;
        }
    break;

  case 231:
#line 1719 "parser.y"
    {
            yyval.optsignature = sipMalloc(sizeof (signatureDef));

            *yyval.optsignature = yyvsp[-2].signature;
        }
    break;

  case 232:
#line 1726 "parser.y"
    {
            yyval.optsignature = NULL;
        }
    break;

  case 233:
#line 1729 "parser.y"
    {
            yyval.optsignature = sipMalloc(sizeof (signatureDef));

            *yyval.optsignature = yyvsp[-2].signature;
            yyval.optsignature -> result = yyvsp[-4].memArg;
        }
    break;

  case 234:
#line 1737 "parser.y"
    {
            yyval.number = FALSE;
        }
    break;

  case 235:
#line 1740 "parser.y"
    {
            yyval.number = TRUE;
        }
    break;

  case 236:
#line 1745 "parser.y"
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

  case 237:
#line 1762 "parser.y"
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

  case 238:
#line 1787 "parser.y"
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
                        if (compareScopedNames(yyvsp[-11].memArg.u.snd, al->arg.u.snd) == 0)
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

  case 239:
#line 1863 "parser.y"
    {yyval.text = "__add__";}
    break;

  case 240:
#line 1864 "parser.y"
    {yyval.text = "__sub__";}
    break;

  case 241:
#line 1865 "parser.y"
    {yyval.text = "__mul__";}
    break;

  case 242:
#line 1866 "parser.y"
    {yyval.text = "__div__";}
    break;

  case 243:
#line 1867 "parser.y"
    {yyval.text = "__mod__";}
    break;

  case 244:
#line 1868 "parser.y"
    {yyval.text = "__and__";}
    break;

  case 245:
#line 1869 "parser.y"
    {yyval.text = "__or__";}
    break;

  case 246:
#line 1870 "parser.y"
    {yyval.text = "__xor__";}
    break;

  case 247:
#line 1871 "parser.y"
    {yyval.text = "__lshift__";}
    break;

  case 248:
#line 1872 "parser.y"
    {yyval.text = "__rshift__";}
    break;

  case 249:
#line 1873 "parser.y"
    {yyval.text = "__iadd__";}
    break;

  case 250:
#line 1874 "parser.y"
    {yyval.text = "__isub__";}
    break;

  case 251:
#line 1875 "parser.y"
    {yyval.text = "__imul__";}
    break;

  case 252:
#line 1876 "parser.y"
    {yyval.text = "__idiv__";}
    break;

  case 253:
#line 1877 "parser.y"
    {yyval.text = "__imod__";}
    break;

  case 254:
#line 1878 "parser.y"
    {yyval.text = "__iand__";}
    break;

  case 255:
#line 1879 "parser.y"
    {yyval.text = "__ior__";}
    break;

  case 256:
#line 1880 "parser.y"
    {yyval.text = "__ixor__";}
    break;

  case 257:
#line 1881 "parser.y"
    {yyval.text = "__ilshift__";}
    break;

  case 258:
#line 1882 "parser.y"
    {yyval.text = "__irshift__";}
    break;

  case 259:
#line 1883 "parser.y"
    {yyval.text = "__invert__";}
    break;

  case 260:
#line 1884 "parser.y"
    {yyval.text = "__call__";}
    break;

  case 261:
#line 1885 "parser.y"
    {yyval.text = "__getitem__";}
    break;

  case 262:
#line 1886 "parser.y"
    {yyval.text = "__lt__";}
    break;

  case 263:
#line 1887 "parser.y"
    {yyval.text = "__le__";}
    break;

  case 264:
#line 1888 "parser.y"
    {yyval.text = "__eq__";}
    break;

  case 265:
#line 1889 "parser.y"
    {yyval.text = "__ne__";}
    break;

  case 266:
#line 1890 "parser.y"
    {yyval.text = "__gt__";}
    break;

  case 267:
#line 1891 "parser.y"
    {yyval.text = "__ge__";}
    break;

  case 268:
#line 1894 "parser.y"
    {
            yyval.number = FALSE;
        }
    break;

  case 269:
#line 1897 "parser.y"
    {
            yyval.number = TRUE;
        }
    break;

  case 270:
#line 1902 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 271:
#line 1905 "parser.y"
    {
            if (yyvsp[0].number != 0)
                yyerror("Abstract virtual function '= 0' expected");

            yyval.number = TRUE;
        }
    break;

  case 272:
#line 1913 "parser.y"
    {
            yyval.optflags.nrFlags = 0;
        }
    break;

  case 273:
#line 1916 "parser.y"
    {
            yyval.optflags = yyvsp[-1].optflags;
        }
    break;

  case 274:
#line 1922 "parser.y"
    {
            yyval.optflags.flags[0] = yyvsp[0].flag;
            yyval.optflags.nrFlags = 1;
        }
    break;

  case 275:
#line 1926 "parser.y"
    {
            /* Check there is room. */

            if (yyvsp[-2].optflags.nrFlags == MAX_NR_FLAGS)
                yyerror("Too many optional flags");

            yyval.optflags = yyvsp[-2].optflags;

            yyval.optflags.flags[yyval.optflags.nrFlags++] = yyvsp[0].flag;
        }
    break;

  case 276:
#line 1938 "parser.y"
    {
            yyval.flag.ftype = bool_flag;
            yyval.flag.fname = yyvsp[0].text;
        }
    break;

  case 277:
#line 1942 "parser.y"
    {
            yyval.flag = yyvsp[0].flag;
            yyval.flag.fname = yyvsp[-2].text;
        }
    break;

  case 278:
#line 1948 "parser.y"
    {
            yyval.flag.ftype = (strchr(yyvsp[0].text, '.') != NULL) ? dotted_name_flag : name_flag;
            yyval.flag.fvalue.sval = yyvsp[0].text;
        }
    break;

  case 279:
#line 1952 "parser.y"
    {
            yyval.flag.ftype = string_flag;
            yyval.flag.fvalue.sval = yyvsp[0].text;
        }
    break;

  case 280:
#line 1956 "parser.y"
    {
            yyval.flag.ftype = integer_flag;
            yyval.flag.fvalue.ival = yyvsp[0].number;
        }
    break;

  case 281:
#line 1962 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 282:
#line 1965 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 283:
#line 1970 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 284:
#line 1973 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 285:
#line 1978 "parser.y"
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

  case 286:
#line 2026 "parser.y"
    {
            /* No arguments. */

            yyval.signature.nrArgs = 0;
        }
    break;

  case 287:
#line 2031 "parser.y"
    {
            /* The single or first argument. */

            yyval.signature.args[0] = yyvsp[0].memArg;
            yyval.signature.nrArgs = 1;
        }
    break;

  case 288:
#line 2037 "parser.y"
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

  case 289:
#line 2064 "parser.y"
    {
            yyval.memArg.atype = signal_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-2].text;
            yyval.memArg.defval = yyvsp[0].valp;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 290:
#line 2073 "parser.y"
    {
            yyval.memArg.atype = slot_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-2].text;
            yyval.memArg.defval = yyvsp[0].valp;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 291:
#line 2082 "parser.y"
    {
            yyval.memArg.atype = anyslot_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-2].text;
            yyval.memArg.defval = yyvsp[0].valp;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 292:
#line 2091 "parser.y"
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

  case 293:
#line 2102 "parser.y"
    {
            yyval.memArg.atype = rxdis_type;
            yyval.memArg.argflags = 0;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-1].text;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 294:
#line 2110 "parser.y"
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

  case 295:
#line 2125 "parser.y"
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

  case 296:
#line 2140 "parser.y"
    {
            yyval.memArg.atype = qobject_type;
            yyval.memArg.argflags = 0;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-1].text;
        }
    break;

  case 297:
#line 2146 "parser.y"
    {
            yyval.memArg = yyvsp[-1].memArg;
            yyval.memArg.defval = yyvsp[0].valp;
        }
    break;

  case 298:
#line 2152 "parser.y"
    {currentIsStatic = TRUE;}
    break;

  case 303:
#line 2160 "parser.y"
    {currentOverIsVirt = TRUE;}
    break;

  case 306:
#line 2164 "parser.y"
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

  case 307:
#line 2197 "parser.y"
    {
            yyval.memArg = yyvsp[-2].memArg;
            yyval.memArg.nrderefs += yyvsp[-1].number;
            yyval.memArg.argflags |= ARG_IS_CONST | yyvsp[0].number;
            yyval.memArg.name = NULL;
        }
    break;

  case 308:
#line 2203 "parser.y"
    {
            yyval.memArg = yyvsp[-2].memArg;
            yyval.memArg.nrderefs += yyvsp[-1].number;
            yyval.memArg.argflags |= yyvsp[0].number;
            yyval.memArg.name = NULL;
        }
    break;

  case 309:
#line 2211 "parser.y"
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

  case 310:
#line 2271 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 311:
#line 2274 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("References not allowed in a C module");

            yyval.number = ARG_IS_REF;
        }
    break;

  case 312:
#line 2282 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 313:
#line 2285 "parser.y"
    {
            yyval.number = yyvsp[-1].number + 1;
        }
    break;

  case 314:
#line 2290 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = defined_type;
            yyval.memArg.u.snd = yyvsp[0].scpvalp;

            /* Try and resolve typedefs as early as possible. */
            resolveAnyTypedef(currentSpec, &yyval.memArg);
        }
    break;

  case 315:
#line 2301 "parser.y"
    {
            templateDef *td;

            td = sipMalloc(sizeof(templateDef));
            td->fqname = yyvsp[-3].scpvalp;
            td->types = yyvsp[-1].signature;

            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = template_type;
            yyval.memArg.u.td = td;
        }
    break;

  case 316:
#line 2315 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

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

  case 317:
#line 2332 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ushort_type;
        }
    break;

  case 318:
#line 2339 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = short_type;
        }
    break;

  case 319:
#line 2346 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = uint_type;
        }
    break;

  case 320:
#line 2353 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = uint_type;
        }
    break;

  case 321:
#line 2360 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = int_type;
        }
    break;

  case 322:
#line 2367 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = long_type;
        }
    break;

  case 323:
#line 2374 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ulong_type;
        }
    break;

  case 324:
#line 2381 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = longlong_type;
        }
    break;

  case 325:
#line 2388 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ulonglong_type;
        }
    break;

  case 326:
#line 2395 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = float_type;
        }
    break;

  case 327:
#line 2402 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = double_type;
        }
    break;

  case 328:
#line 2409 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = bool_type;
        }
    break;

  case 329:
#line 2416 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = sstring_type;
        }
    break;

  case 330:
#line 2423 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ustring_type;
        }
    break;

  case 331:
#line 2430 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = string_type;
        }
    break;

  case 332:
#line 2437 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = wstring_type;
        }
    break;

  case 333:
#line 2444 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = void_type;
        }
    break;

  case 334:
#line 2451 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pyobject_type;
        }
    break;

  case 335:
#line 2458 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pytuple_type;
        }
    break;

  case 336:
#line 2465 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pylist_type;
        }
    break;

  case 337:
#line 2472 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pydict_type;
        }
    break;

  case 338:
#line 2479 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pycallable_type;
        }
    break;

  case 339:
#line 2486 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pyslice_type;
        }
    break;

  case 340:
#line 2493 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pytype_type;
        }
    break;

  case 341:
#line 2500 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ellipsis_type;
        }
    break;

  case 342:
#line 2509 "parser.y"
    {
            /* The single or first type. */

            yyval.signature.args[0] = yyvsp[0].memArg;
            yyval.signature.nrArgs = 1;
        }
    break;

  case 343:
#line 2515 "parser.y"
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

  case 344:
#line 2531 "parser.y"
    {
            yyval.throwlist = NULL;
        }
    break;

  case 345:
#line 2534 "parser.y"
    {
            if (currentSpec->genc)
                yyerror("Exceptions not allowed in a C module");

            yyval.throwlist = yyvsp[-1].throwlist;
        }
    break;

  case 346:
#line 2542 "parser.y"
    {
            /* Empty list so use a blank. */

            yyval.throwlist = sipMalloc(sizeof (throwArgs));
            yyval.throwlist -> nrArgs = 0;
        }
    break;

  case 347:
#line 2548 "parser.y"
    {
            /* The only or first exception. */

            yyval.throwlist = sipMalloc(sizeof (throwArgs));
            yyval.throwlist -> nrArgs = 1;
            yyval.throwlist -> args[0] = findException(currentSpec, yyvsp[0].scpvalp, FALSE);
        }
    break;

  case 348:
#line 2555 "parser.y"
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
#line 4944 "parser.c"

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


#line 2571 "parser.y"



/*
 * Parse the specification.
 */
void parse(sipSpec *spec, FILE *fp, char *filename, stringList *tsl,
        stringList *xfl)
{
    classTmplDef *tcd;

    /* Initialise the spec. */
 
    spec->modules = NULL;
    spec->namecache = NULL;
    spec->ifacefiles = NULL;
    spec->classes = NULL;
    spec->classtemplates = NULL;
    spec->exceptions = NULL;
    spec->mappedtypes = NULL;
    spec->mappedtypetemplates = NULL;
    spec->enums = NULL;
    spec->vars = NULL;
    spec->typedefs = NULL;
    spec->exphdrcode = NULL;
    spec->docs = NULL;
    spec->sigslots = FALSE;
    spec->genc = -1;
    spec->plugins = NULL;

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
    spec->module = currentModule;

    yyparse();

    handleEOF();
    handleEOM();

    /*
     * Go through each template class and remove it from the list of classes.
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

    newmod->version = -1;
    newmod->qobjclass = -1;
    newmod->nrvirthandlers = -1;

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
        if (compareScopedNames(iff->fqcname, fqname) != 0)
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

    iff->name = cacheName(pt, scopedNameToString(fqname));
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
    cd -> pyname = cacheName(pt, classBaseName(cd));
    cd -> classnr = -1;
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

    if (currentIsTemplate)
        setIsTemplateClass(cd);

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

            if (compareScopedNames(ns->iff->fqcname, fqname) != 0)
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

    cd->pyname = NULL;
    checkAttributes(pt, mod, cd->ecd, pyname, FALSE);
    cd->pyname = cacheName(pt, pyname);

    if ((flg = findOptFlag(of, "Metatype", dotted_name_flag)) != NULL)
        cd->metatype = cacheName(pt, flg->fvalue.sval);

    if ((flg = findOptFlag(of, "Supertype", dotted_name_flag)) != NULL)
        cd->supertype = cacheName(pt, flg->fvalue.sval);

    if ((flg = findOptFlag(of, "PyQt4Flags", integer_flag)) != NULL)
        cd->pyqt4_flags = flg->fvalue.ival;

    if (findOptFlag(of, "PyQt4NoQMetaObject", bool_flag) != NULL)
        setPyQt4NoQMetaObject(cd);

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

        if (getDeprecated(of))
            setIsDeprecatedClass(cd);

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
        setIsUsedName(cd->pyname);
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
    mtd = allocMappedType(pt, ad);

    if (findOptFlag(of, "NoRelease", bool_flag) != NULL)
        setNoRelease(mtd);

    mtd->iff = iff;
    mtd->next = pt->mappedtypes;

    pt->mappedtypes = mtd;

    if (inMainModule())
        setIsUsedName(mtd->cname);

    return mtd;
}


/*
 * Allocate, intialise and return a mapped type structure.
 */
mappedTypeDef *allocMappedType(sipSpec *pt, argDef *type)
{
    mappedTypeDef *mtd;

    mtd = sipMalloc(sizeof (mappedTypeDef));

    mtd->type = *type;
    mtd->type.argflags = 0;
    mtd->type.nrderefs = 0;

    mtd->cname = cacheName(pt, type2string(&mtd->type));
    mtd->mappednr = -1;

    return mtd;
}


/*
 * Create a new enum.
 */
static enumDef *newEnum(sipSpec *pt, moduleDef *mod, char *name, optFlags *of,
        int flags)
{
    enumDef *ed;
    classDef *escope = currentScope();

    ed = sipMalloc(sizeof (enumDef));

    if (name != NULL)
    {
        ed->pyname = cacheName(pt, getPythonName(of, name));
        checkAttributes(pt, mod, escope, ed->pyname->text, FALSE);

        ed->fqcname = text2scopedName(escope, name);
        ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));

        if (inMainModule())
        {
            setIsUsedName(ed->pyname);
            setIsUsedName(ed->cname);
        }
    }
    else
    {
        ed->pyname = NULL;
        ed->fqcname = NULL;
        ed->cname = NULL;
    }

    ed -> enumflags = flags;
    ed -> enumnr = -1;
    ed -> ecd = escope;
    ed -> module = mod;
    ed -> members = NULL;
    ed -> slots = NULL;
    ed -> overs = NULL;
    ed -> next = pt -> enums;

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
            char *nam = NULL, *val;
            argDef *sad;

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

            /*
             * Add the corresponding value.  For defined types we don't want 
             * any indirection or references.
             */
            sad = &src->args[a];

            if (sad->atype == defined_type)
                val = scopedNameToString(sad->u.snd);
            else
                val = type2string(sad);

            appendScopedName(values, text2scopePart(val));
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
 * Convert a type to a string on the heap.  The string will use the minimum
 * whitespace while still remaining valid C++.
 */
static char *type2string(argDef *ad)
{
    int i, on_heap = FALSE;
    int nr_derefs = ad->nrderefs;
    int is_reference = isReference(ad);
    char *s;

    /* Use the original type if possible. */
    if (ad->original_type != NULL && !noTypeName(ad->original_type))
    {
        s = scopedNameToString(ad->original_type->fqname);
        on_heap = TRUE;

        nr_derefs -= ad->original_type->type.nrderefs;

        if (isReference(&ad->original_type->type))
            is_reference = FALSE;
    }
    else
        switch (ad->atype)
        {
        case template_type:
            {
                templateDef *td = ad->u.td;

                s = scopedNameToString(td->fqname);
                append(&s, "<");

                for (i = 0; i < td->types.nrArgs; ++i)
                {
                    char *sub_type = type2string(&td->types.args[i]);

                    if (i > 0)
                        append(&s, ",");

                    append(&s, sub_type);
                    free(sub_type);
                }

                if (s[strlen(s) - 1] == '>')
                    append(&s, " >");
                else
                    append(&s, ">");

                on_heap = TRUE;
                break;
            }

        case defined_type:
            s = scopedNameToString(ad->u.snd);
            on_heap = TRUE;
            break;

        case ustring_type:
            s = "unsigned char";
            break;

        case string_type:
            s = "char";
            break;

        case sstring_type:
            s = "signed char";
            break;

        case wstring_type:
            s = "wchar_t";
            break;

        case ushort_type:
            s = "unsigned short";
            break;

        case short_type:
            s = "short";
            break;

        case uint_type:
            s = "unsigned int";
            break;

        case int_type:
        case cint_type:
            s = "int";
            break;

        case ulong_type:
            s = "unsigned long";
            break;

        case long_type:
            s = "long";
            break;

        case ulonglong_type:
            s = "unsigned long long";
            break;

        case longlong_type:
            s = "long long";
            break;

        case float_type:
        case cfloat_type:
            s = "float";
            break;

        case double_type:
        case cdouble_type:
            s = "double";
            break;

        case bool_type:
        case cbool_type:
            s = "bool";
            break;

        default:
            fatal("Unsupported type argument to type2string()\n");
        }

    /* Make sure the string is on the heap. */
    if (!on_heap)
        s = sipStrdup(s);

    while (nr_derefs-- > 0)
        append(&s, "*");

    if (is_reference)
        append(&s, "&");

    return s;
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
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod,
        classDef *scope, scopedNameDef *fqname, classTmplDef *tcd,
        templateDef *td)
{
    scopedNameDef *type_names, *type_values;
    classDef *cd;
    ctorDef *oct, **cttail;
    argDef *ad;
    ifaceFileList *iffl, **used;

    type_names = type_values = NULL;
    appendTypeStrings(classFQCName(tcd->cd), &tcd->sig, &td->types, NULL, &type_names, &type_values);

    /*
     * Add a mapping from the template name to the instantiated name.  If we
     * have got this far we know there is room for it.
     */
    ad = &tcd->sig.args[tcd->sig.nrArgs++];
    memset(ad, 0, sizeof (argDef));
    ad->atype = defined_type;
    ad->u.snd = classFQCName(tcd->cd);

    appendScopedName(&type_names, text2scopePart(scopedNameTail(classFQCName(tcd->cd))));
    appendScopedName(&type_values, text2scopePart(scopedNameToString(fqname)));

    /* Create the new class. */
    cd = sipMalloc(sizeof (classDef));

    /* Start with a shallow copy. */
    *cd = *tcd->cd;

    resetIsTemplateClass(cd);
    cd->pyname = cacheName(pt, scopedNameTail(fqname));
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
        setIsUsedName(cd->pyname);
    }

    cd->ecd = currentScope();

    /* Handle the enums. */
    instantiateTemplateEnums(pt, tcd, td, cd, used, type_names, type_values);

    /* Handle the variables. */
    instantiateTemplateVars(pt, tcd, td, cd, used, type_names, type_values);

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

    /* Handle the methods. */
    cd->members = instantiateTemplateMethods(tcd->cd->members, mod);
    cd->overs = instantiateTemplateOverloads(pt, tcd->cd->overs,
            tcd->cd->members, cd->members, tcd, td, cd, used, type_names,
            type_values);

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
 * Instantiate the methods of a template class.
 */
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod)
{
    memberDef *md, *methods, **mdtail;

    methods = NULL;
    mdtail = &methods;

    for (md = tmd; md != NULL; md = md->next)
    {
        memberDef *nmd = sipMalloc(sizeof (memberDef));

        /* Start with a shallow copy. */
        *nmd = *md;

        nmd->module = mod;

        if (inMainModule())
            setIsUsedName(nmd->pyname);

        nmd->next = NULL;
        *mdtail = nmd;
        mdtail = &nmd->next;
    }

    return methods;
}


/*
 * Instantiate the overloads of a template class.
 */
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    overDef *od, *overloads, **odtail;

    overloads = NULL;
    odtail = &overloads;

    for (od = tod; od != NULL; od = od->next)
    {
        overDef *nod = sipMalloc(sizeof (overDef));
        memberDef *nmd, *omd;

        /* Start with a shallow copy. */
        *nod = *od;

        for (nmd = methods, omd = tmethods; omd != NULL; omd = omd->next, nmd = nmd->next)
            if (omd == od->common)
            {
                nod->common = nmd;
                break;
            }

        templateSignature(&nod->pysig, TRUE, tcd, td, cd);

        if (od->cppsig == &od->pysig)
            nod->cppsig = &nod->pysig;
        else
        {
            nod->cppsig = sipMalloc(sizeof (signatureDef));

            *nod->cppsig = *od->cppsig;

            templateSignature(nod->cppsig, TRUE, tcd, td, cd);
        }

        nod->methodcode = templateCode(pt, used, nod->methodcode, type_names, type_values);

        /* Handle any virtual handler. */
        if (od->virthandler != NULL)
        {
            moduleDef *mod = cd->iff->module;

            nod->virthandler = sipMalloc(sizeof (virtHandlerDef));

            /* Start with a shallow copy. */
            *nod->virthandler = *od->virthandler;

            if (od->virthandler->cppsig == &od->pysig)
                nod->virthandler->cppsig = &nod->pysig;
            else
            {
                nod->virthandler->cppsig = sipMalloc(sizeof (signatureDef));

                *nod->virthandler->cppsig = *od->virthandler->cppsig;

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

    return overloads;
}


/*
 * Instantiate the enums of a template class.
 */
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    enumDef *ted;
    moduleDef *mod = cd->iff->module;

    for (ted = pt->enums; ted != NULL; ted = ted->next)
        if (ted->ecd == tcd->cd)
        {
            enumDef *ed;
            enumMemberDef *temd;

            ed = sipMalloc(sizeof (enumDef));

            /* Start with a shallow copy. */
            *ed = *ted;

            if (ed->fqcname != NULL)
            {
                ed->fqcname = text2scopedName(cd, scopedNameTail(ed->fqcname));
                ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));
            }

            if (inMainModule())
            {
                if (ed->pyname != NULL)
                    setIsUsedName(ed->pyname);

                if (ed->cname != NULL)
                    setIsUsedName(ed->cname);
            }

            ed->ecd = cd;
            ed->module = mod;
            ed->members = NULL;

            for (temd = ted->members; temd != NULL; temd = temd->next)
            {
                enumMemberDef *emd;

                emd = sipMalloc(sizeof (enumMemberDef));

                /* Start with a shallow copy. */
                *emd = *temd;
                emd->ed = ed;

                emd->next = ed->members;
                ed->members = emd;
            }

            ed->slots = instantiateTemplateMethods(ted->slots, mod);
            ed->overs = instantiateTemplateOverloads(pt, ted->overs,
                    ted->slots, ed->slots, tcd, td, cd, used, type_names,
                    type_values);

            ed->next = pt->enums;
            pt->enums = ed;
        }
}


/*
 * Instantiate the variables of a template class.
 */
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    varDef *tvd;

    for (tvd = pt->vars; tvd != NULL; tvd = tvd->next)
        if (tvd->ecd == tcd->cd)
        {
            varDef *vd;

            vd = sipMalloc(sizeof (varDef));

            /* Start with a shallow copy. */
            *vd = *tvd;

            if (inMainModule())
                setIsUsedName(vd->pyname);

            vd->fqcname = text2scopedName(cd, scopedNameTail(vd->fqcname));
            vd->ecd = cd;
            vd->module = cd->iff->module;

            templateType(&vd->type, tcd, td, cd);

            vd->accessfunc = templateCode(pt, used, vd->accessfunc, type_names, type_values);
            vd->getcode = templateCode(pt, used, vd->getcode, type_names, type_values);
            vd->setcode = templateCode(pt, used, vd->setcode, type_names, type_values);

            addVariable(pt, vd);
        }
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
            argDef *tad = &td->types.args[a];

            ad->atype = tad->atype;

            /* We take the constrained flag from the real type. */
            resetIsConstrained(ad);

            if (isConstrained(tad))
                setIsConstrained(ad);

            ad->u = tad->u;

            return;
        }

    /* Handle the class name itself. */
    if (strcmp(name, scopedNameTail(classFQCName(tcd->cd))) == 0)
    {
        ad->atype = class_type;
        ad->u.cd = ncd;
        ad->original_type = NULL;
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
                    "sipType_",
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

        found = (compareScopedNames(fq_name, snd) == 0);

        freeScopedName(snd);

        if (found)
            return TRUE;
    }

    return compareScopedNames(fq_name, rel_name) == 0;
}


/*
 * Create a new typedef.
 */
static void newTypedef(sipSpec *pt, moduleDef *mod, char *name, argDef *type,
        optFlags *optflgs)
{
    typedefDef *td, **tdp;
    scopedNameDef *fqname;
    classDef *scope;

    scope = currentScope();
    fqname = text2scopedName(scope, name);

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

    /*
     * Check it doesn't already exist and find the position in the sorted list
     * where it should be put.
     */
    for (tdp = &pt->typedefs; *tdp != NULL; tdp = &(*tdp)->next)
    {
        int res = compareScopedNames((*tdp)->fqname, fqname);

        if (res == 0)
        {
            fatalScopedName(fqname);
            fatal(" already defined\n");
        }

        if (res > 0)
            break;
    }

    td = sipMalloc(sizeof (typedefDef));

    td->tdflags = 0;
    td->fqname = fqname;
    td->ecd = scope;
    td->module = mod;
    td->type = *type;

    td->next = *tdp;
    *tdp = td;

    if (findOptFlag(optflgs, "NoTypeName", bool_flag) != NULL)
        setNoTypeName(td);

    mod->nrtypedefs++;
}


/*
 * Speculatively try and resolve any typedefs.  In some cases (eg. when
 * comparing template signatures) it helps to use the real type if it is known.
 * Note that this wouldn't be necessary if we required that all types be known
 * before they are used.
 */
static void resolveAnyTypedef(sipSpec *pt, argDef *ad)
{
    while (ad->atype == defined_type)
    {
        ad->atype = no_type;
        searchTypedefs(pt, ad->u.snd, ad);

        if (ad->atype == no_type)
        {
            ad->atype = defined_type;
            break;
        }
    }
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
    var -> fqcname = text2scopedName(escope, name);
    var -> ecd = escope;
    var -> module = mod;
    var -> varflags = 0;
    var -> type = *type;
    var -> accessfunc = acode;
    var -> getcode = gcode;
    var -> setcode = scode;

    if (isstatic || (escope != NULL && escope->iff->type == namespace_iface))
        setIsStaticVar(var);

    addVariable(pt, var);
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

    if (getDeprecated(optflgs))
        setIsDeprecatedCtor(ct);

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
        if (isSignal(od) && pluginPyQt3(pt))
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

    if (getDeprecated(optflgs))
        setIsDeprecated(od);

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
 * Cache a name in a module.  Entries in the cache are stored in order of
 * decreasing length.
 */
nameDef *cacheName(sipSpec *pt, const char *name)
{
    nameDef *nd, **ndp = &pt->namecache;
    size_t len = strlen(name);

    /* Skip entries that are too large. */
    while (*ndp != NULL && (*ndp)->len > len)
        ndp = &(*ndp)->next;

    /* Check entries that are the right length. */
    for (nd = *ndp; nd != NULL && nd->len == len; nd = nd->next)
        if (memcmp(nd->text, name, len) == 0)
            return nd;

    /* Create a new one. */
    nd = sipMalloc(sizeof (nameDef));

    nd->nameflags = 0;
    nd->text = name;
    nd->len = len;
    nd->next = *ndp;

    *ndp = nd;

    return nd;
}


/*
 * Find (or create) an overloaded function name.
 */
static memberDef *findFunction(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *pname, int hwcode, int nrargs, int no_arg_parser)
{
    static struct slot_map {
        const char *name;   /* The slot name. */
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
        {"__getitem__", getitem_slot, FALSE, 1},
        {"__setitem__", setitem_slot, TRUE, 2},
        {"__delitem__", delitem_slot, TRUE, 1},
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

            if (sm->nrargs >= 0)
            {
                if (cd == NULL)
                {
                    /* Global operators need one extra argument. */
                    if (sm -> nrargs + 1 != nrargs)
                        yyerror("Incorrect number of arguments to global operator");
                }
                else if (sm->nrargs != nrargs)
                    yyerror("Incorrect number of arguments to Python slot");
            }

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

        if (strcmp(cd->pyname->text, attr) == 0 && !isExternal(cd))
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
static scopedNameDef *text2scopedName(classDef *scope, char *text)
{
    return scopeScopedName(scope, text2scopePart(text));
}


/*
 * Prepend any current scope to a scoped name.
 */
static scopedNameDef *scopeScopedName(classDef *scope, scopedNameDef *name)
{
    scopedNameDef *snd;

    snd = (scope != NULL ? copyScopedName(scope->iff->fqcname) : NULL);

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
 * Get the /Deprecated/ option flag.
 */
static int getDeprecated(optFlags *optflgs)
{
    return (findOptFlag(optflgs, "Deprecated", bool_flag) != NULL);
}


/*
 * Return TRUE if the PyQt3 plugin was specified.
 */
int pluginPyQt3(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt3");
}


/*
 * Return TRUE if the PyQt4 plugin was specified.
 */
int pluginPyQt4(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt4");
}


/*
 * Return TRUE if a list of strings contains a given entry.
 */
static int stringFind(stringList *sl, const char *s)
{
    while (sl != NULL)
    {
        if (strcmp(sl->s, s) == 0)
            return TRUE;

        sl = sl->next;
    }

    return FALSE;
}


/*
 * Set the name of a module.
 */
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname)
{
    mod->fullname = cacheName(pt, fullname);

    if (inMainModule())
        setIsUsedName(mod->fullname);

    if ((mod->name = strrchr(fullname, '.')) != NULL)
        mod->name++;
    else
        mod->name = fullname;
}


/*
 * Define a new class and set its name.
 */
static void defineClass(scopedNameDef *snd)
{
    pushScope(newClass(currentSpec, class_iface,
            scopeScopedName(currentScope(), snd)));
}


/*
 * Complete the definition of a class.
 */
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def)
{
    classDef *cd = currentScope();

    /* See if the class was defined or just declared. */
    if (has_def)
    {
        if (snd->next != NULL)
            yyerror("A scoped name cannot be given in a class/struct definition");

    }
    else if (cd->supers != NULL)
        yyerror("Class/struct has super-classes but no definition");
    else
        setIsOpaque(cd);

    finishClass(currentSpec, currentModule, cd, of);
    popScope();

    /*
     * Check that external classes have only been declared at the global scope.
     */
    if (isExternal(cd) && currentScope() != NULL)
        yyerror("External classes/structs can only be declared in the global scope");

    return cd;
}


/*
 * Add a variable to the list so that the list remains sorted.
 */
static void addVariable(sipSpec *pt, varDef *vd)
{
    varDef **at = &pt->vars;

    while (*at != NULL)
    {
        if (strcmp(vd->pyname->text, (*at)->pyname->text) < 0)
            break;

        at = &(*at)->next;
    }

    vd->next = *at;
    *at = vd;
}

