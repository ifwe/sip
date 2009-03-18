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
     TK_GETBUFFERCODE = 283,
     TK_RELEASEBUFFERCODE = 284,
     TK_READBUFFERCODE = 285,
     TK_WRITEBUFFERCODE = 286,
     TK_SEGCOUNTCODE = 287,
     TK_CHARBUFFERCODE = 288,
     TK_PICKLECODE = 289,
     TK_METHODCODE = 290,
     TK_FROMTYPE = 291,
     TK_TOTYPE = 292,
     TK_TOSUBCLASS = 293,
     TK_INCLUDE = 294,
     TK_OPTINCLUDE = 295,
     TK_IMPORT = 296,
     TK_EXPHEADERCODE = 297,
     TK_MODHEADERCODE = 298,
     TK_TYPEHEADERCODE = 299,
     TK_MODULE = 300,
     TK_CMODULE = 301,
     TK_CONSMODULE = 302,
     TK_COMPOMODULE = 303,
     TK_CLASS = 304,
     TK_STRUCT = 305,
     TK_PUBLIC = 306,
     TK_PROTECTED = 307,
     TK_PRIVATE = 308,
     TK_SIGNALS = 309,
     TK_SLOTS = 310,
     TK_BOOL = 311,
     TK_SHORT = 312,
     TK_INT = 313,
     TK_LONG = 314,
     TK_FLOAT = 315,
     TK_DOUBLE = 316,
     TK_CHAR = 317,
     TK_WCHAR_T = 318,
     TK_VOID = 319,
     TK_PYOBJECT = 320,
     TK_PYTUPLE = 321,
     TK_PYLIST = 322,
     TK_PYDICT = 323,
     TK_PYCALLABLE = 324,
     TK_PYSLICE = 325,
     TK_PYTYPE = 326,
     TK_VIRTUAL = 327,
     TK_ENUM = 328,
     TK_SIGNED = 329,
     TK_UNSIGNED = 330,
     TK_SCOPE = 331,
     TK_LOGICAL_OR = 332,
     TK_CONST = 333,
     TK_STATIC = 334,
     TK_SIPSIGNAL = 335,
     TK_SIPSLOT = 336,
     TK_SIPANYSLOT = 337,
     TK_SIPRXCON = 338,
     TK_SIPRXDIS = 339,
     TK_SIPSLOTCON = 340,
     TK_SIPSLOTDIS = 341,
     TK_NUMBER = 342,
     TK_REAL = 343,
     TK_TYPEDEF = 344,
     TK_NAMESPACE = 345,
     TK_TIMELINE = 346,
     TK_PLATFORMS = 347,
     TK_FEATURE = 348,
     TK_LICENSE = 349,
     TK_QCHAR = 350,
     TK_TRUE = 351,
     TK_FALSE = 352,
     TK_NULL = 353,
     TK_OPERATOR = 354,
     TK_THROW = 355,
     TK_QOBJECT = 356,
     TK_EXCEPTION = 357,
     TK_RAISECODE = 358,
     TK_EXPLICIT = 359,
     TK_TEMPLATE = 360,
     TK_ELLIPSIS = 361,
     TK_DEFMETATYPE = 362,
     TK_DEFSUPERTYPE = 363
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
#define TK_GETBUFFERCODE 283
#define TK_RELEASEBUFFERCODE 284
#define TK_READBUFFERCODE 285
#define TK_WRITEBUFFERCODE 286
#define TK_SEGCOUNTCODE 287
#define TK_CHARBUFFERCODE 288
#define TK_PICKLECODE 289
#define TK_METHODCODE 290
#define TK_FROMTYPE 291
#define TK_TOTYPE 292
#define TK_TOSUBCLASS 293
#define TK_INCLUDE 294
#define TK_OPTINCLUDE 295
#define TK_IMPORT 296
#define TK_EXPHEADERCODE 297
#define TK_MODHEADERCODE 298
#define TK_TYPEHEADERCODE 299
#define TK_MODULE 300
#define TK_CMODULE 301
#define TK_CONSMODULE 302
#define TK_COMPOMODULE 303
#define TK_CLASS 304
#define TK_STRUCT 305
#define TK_PUBLIC 306
#define TK_PROTECTED 307
#define TK_PRIVATE 308
#define TK_SIGNALS 309
#define TK_SLOTS 310
#define TK_BOOL 311
#define TK_SHORT 312
#define TK_INT 313
#define TK_LONG 314
#define TK_FLOAT 315
#define TK_DOUBLE 316
#define TK_CHAR 317
#define TK_WCHAR_T 318
#define TK_VOID 319
#define TK_PYOBJECT 320
#define TK_PYTUPLE 321
#define TK_PYLIST 322
#define TK_PYDICT 323
#define TK_PYCALLABLE 324
#define TK_PYSLICE 325
#define TK_PYTYPE 326
#define TK_VIRTUAL 327
#define TK_ENUM 328
#define TK_SIGNED 329
#define TK_UNSIGNED 330
#define TK_SCOPE 331
#define TK_LOGICAL_OR 332
#define TK_CONST 333
#define TK_STATIC 334
#define TK_SIPSIGNAL 335
#define TK_SIPSLOT 336
#define TK_SIPANYSLOT 337
#define TK_SIPRXCON 338
#define TK_SIPRXDIS 339
#define TK_SIPSLOTCON 340
#define TK_SIPSLOTDIS 341
#define TK_NUMBER 342
#define TK_REAL 343
#define TK_TYPEDEF 344
#define TK_NAMESPACE 345
#define TK_TIMELINE 346
#define TK_PLATFORMS 347
#define TK_FEATURE 348
#define TK_LICENSE 349
#define TK_QCHAR 350
#define TK_TRUE 351
#define TK_FALSE 352
#define TK_NULL 353
#define TK_OPERATOR 354
#define TK_THROW 355
#define TK_QOBJECT 356
#define TK_EXCEPTION 357
#define TK_RAISECODE 358
#define TK_EXPLICIT 359
#define TK_TEMPLATE 360
#define TK_ELLIPSIS 361
#define TK_DEFMETATYPE 362
#define TK_DEFSUPERTYPE 363




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
#line 419 "parser.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 431 "parser.c"

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
#define YYLAST   1081

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  131
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  141
/* YYNRULES -- Number of rules. */
#define YYNRULES  352
/* YYNRULES -- Number of states. */
#define YYNSTATES  590

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   363

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,     2,     2,     2,   129,   121,     2,
     112,   113,   119,   118,   116,   115,     2,   120,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   126,   111,
     124,   117,   125,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   127,     2,   128,   130,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   109,   122,   110,   123,     2,     2,     2,
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
     105,   106,   107,   108
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
     310,   313,   316,   319,   322,   325,   328,   331,   334,   337,
     342,   345,   347,   350,   351,   360,   361,   363,   364,   366,
     367,   369,   371,   374,   376,   378,   383,   384,   386,   387,
     390,   391,   394,   396,   400,   402,   404,   406,   408,   410,
     412,   413,   415,   417,   419,   421,   424,   426,   430,   432,
     434,   439,   441,   443,   445,   447,   449,   451,   453,   454,
     456,   460,   466,   478,   479,   487,   488,   492,   497,   498,
     506,   507,   510,   512,   516,   518,   519,   523,   525,   528,
     530,   532,   534,   536,   538,   540,   542,   544,   546,   548,
     550,   552,   554,   556,   558,   560,   562,   564,   566,   568,
     570,   572,   575,   578,   582,   586,   590,   593,   594,   596,
     608,   609,   613,   615,   625,   626,   632,   633,   640,   641,
     643,   657,   672,   686,   688,   690,   692,   694,   696,   698,
     700,   702,   705,   708,   711,   714,   717,   720,   723,   726,
     729,   732,   736,   740,   742,   745,   748,   750,   753,   756,
     759,   761,   764,   765,   767,   768,   771,   772,   776,   778,
     782,   784,   788,   790,   792,   794,   795,   798,   799,   802,
     804,   805,   807,   811,   816,   821,   826,   830,   834,   841,
     848,   852,   855,   856,   860,   862,   864,   866,   867,   871,
     873,   881,   886,   890,   894,   895,   897,   898,   901,   903,
     908,   911,   914,   916,   918,   921,   923,   925,   928,   931,
     935,   937,   939,   941,   944,   947,   949,   951,   953,   955,
     957,   959,   961,   963,   965,   967,   969,   971,   975,   976,
     981,   982,   984
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     132,     0,    -1,   133,    -1,   132,   133,    -1,    -1,   134,
     135,    -1,   169,    -1,   167,    -1,   168,    -1,   137,    -1,
     179,    -1,   173,    -1,   174,    -1,   175,    -1,   156,    -1,
     151,    -1,   155,    -1,   164,    -1,   165,    -1,   166,    -1,
     180,    -1,   181,    -1,   193,    -1,   195,    -1,   196,    -1,
     197,    -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,
     202,    -1,   141,    -1,   143,    -1,   136,    -1,   160,    -1,
     163,    -1,   148,    -1,   224,    -1,   229,    -1,   226,    -1,
     138,    -1,   223,    -1,   205,    -1,   245,    -1,   263,    -1,
     182,    -1,     3,    22,    -1,   102,   219,   139,   249,   109,
     183,   140,   110,   111,    -1,    -1,   112,   219,   113,    -1,
     103,   203,    -1,    -1,    18,   268,   249,   142,   145,    -1,
      -1,   228,    18,   268,   144,   145,    -1,   109,   146,   110,
     111,    -1,   147,    -1,   146,   147,    -1,   182,    -1,    36,
     203,    -1,    37,   203,    -1,    -1,    90,    22,   149,   109,
     150,   110,   111,    -1,   136,    -1,   150,   136,    -1,    -1,
      92,   152,   109,   153,   110,    -1,   154,    -1,   153,   154,
      -1,    22,    -1,    93,    22,    -1,    -1,    91,   157,   109,
     158,   110,    -1,   159,    -1,   158,   159,    -1,    22,    -1,
      20,   112,   162,   113,    -1,    22,    -1,   114,    22,    -1,
     161,    77,    22,    -1,   161,    77,   114,    22,    -1,   161,
      -1,   208,   115,   208,    -1,    21,    -1,    94,   249,    -1,
     107,   171,    -1,   108,   171,    -1,    47,   171,    -1,    48,
     171,    -1,   170,   171,   172,    -1,    45,    -1,    46,    -1,
      22,    -1,    23,    -1,    -1,    87,    -1,    39,    23,    -1,
      40,    23,    -1,    41,    23,    -1,    -1,     7,   203,    -1,
      -1,     8,   203,    -1,    -1,     9,   203,    -1,    17,   203,
      -1,    42,   203,    -1,    43,   203,    -1,    44,   203,    -1,
      -1,   182,    -1,    26,   203,    -1,    27,   203,    -1,    28,
     203,    -1,    29,   203,    -1,    30,   203,    -1,    31,   203,
      -1,    32,   203,    -1,    33,   203,    -1,    34,   203,    -1,
      14,   203,    -1,    15,   203,    -1,    10,   203,    -1,    11,
     203,    -1,    12,   203,    -1,    13,   203,    -1,    16,   203,
      -1,     4,   203,    -1,     5,   203,    -1,     6,    23,   207,
     203,    -1,   204,    21,    -1,    19,    -1,   204,    19,    -1,
      -1,    73,   208,   249,   206,   109,   209,   110,   111,    -1,
      -1,    23,    -1,    -1,    22,    -1,    -1,   210,    -1,   211,
      -1,   210,   211,    -1,   160,    -1,   163,    -1,    22,   213,
     249,   212,    -1,    -1,   116,    -1,    -1,   117,   218,    -1,
      -1,   117,   215,    -1,   218,    -1,   215,   216,   218,    -1,
     115,    -1,   118,    -1,   119,    -1,   120,    -1,   121,    -1,
     122,    -1,    -1,   114,    -1,   123,    -1,   115,    -1,   118,
      -1,   217,   221,    -1,   220,    -1,   219,    76,   220,    -1,
      22,    -1,   219,    -1,   268,   112,   222,   113,    -1,    88,
      -1,    87,    -1,    96,    -1,    97,    -1,    98,    -1,    24,
      -1,    95,    -1,    -1,   215,    -1,   222,   116,   215,    -1,
      89,   264,    22,   249,   111,    -1,    89,   264,   112,   267,
      22,   113,   112,   269,   113,   249,   111,    -1,    -1,    50,
     219,   225,   231,   249,   234,   111,    -1,    -1,   228,   227,
     229,    -1,   105,   124,   269,   125,    -1,    -1,    49,   219,
     230,   231,   249,   234,   111,    -1,    -1,   126,   232,    -1,
     233,    -1,   232,   116,   233,    -1,   219,    -1,    -1,   109,
     235,   110,    -1,   236,    -1,   235,   236,    -1,   160,    -1,
     163,    -1,   148,    -1,   224,    -1,   229,    -1,   138,    -1,
     223,    -1,   205,    -1,   194,    -1,   182,    -1,   184,    -1,
     185,    -1,   186,    -1,   187,    -1,   188,    -1,   189,    -1,
     190,    -1,   191,    -1,   192,    -1,   239,    -1,   238,    -1,
     258,    -1,    38,   203,    -1,    37,   203,    -1,    51,   237,
     126,    -1,    52,   237,   126,    -1,    53,   237,   126,    -1,
      54,   126,    -1,    -1,    55,    -1,   244,   123,    22,   112,
     113,   270,   248,   249,   111,   253,   254,    -1,    -1,   104,
     240,   241,    -1,   241,    -1,    22,   112,   255,   113,   270,
     249,   242,   111,   253,    -1,    -1,   127,   112,   255,   113,
     128,    -1,    -1,   127,   264,   112,   255,   113,   128,    -1,
      -1,    72,    -1,   264,    22,   112,   255,   113,   247,   270,
     248,   249,   243,   111,   253,   254,    -1,   264,    99,   246,
     112,   255,   113,   247,   270,   248,   249,   243,   111,   253,
     254,    -1,    99,   264,   112,   255,   113,   247,   270,   248,
     249,   243,   111,   253,   254,    -1,   118,    -1,   115,    -1,
     119,    -1,   120,    -1,   129,    -1,   121,    -1,   122,    -1,
     130,    -1,   124,   124,    -1,   125,   125,    -1,   118,   117,
      -1,   115,   117,    -1,   119,   117,    -1,   120,   117,    -1,
     129,   117,    -1,   121,   117,    -1,   122,   117,    -1,   130,
     117,    -1,   124,   124,   117,    -1,   125,   125,   117,    -1,
     123,    -1,   112,   113,    -1,   127,   128,    -1,   124,    -1,
     124,   117,    -1,   117,   117,    -1,   114,   117,    -1,   125,
      -1,   125,   117,    -1,    -1,    78,    -1,    -1,   117,    87,
      -1,    -1,   120,   250,   120,    -1,   251,    -1,   250,   116,
     251,    -1,    22,    -1,    22,   117,   252,    -1,   171,    -1,
      24,    -1,    87,    -1,    -1,    35,   203,    -1,    -1,    25,
     203,    -1,   256,    -1,    -1,   257,    -1,   256,   116,   257,
      -1,    80,   208,   249,   214,    -1,    81,   208,   249,   214,
      -1,    82,   208,   249,   214,    -1,    83,   208,   249,    -1,
      84,   208,   249,    -1,    85,   112,   255,   113,   208,   249,
      -1,    86,   112,   255,   113,   208,   249,    -1,   101,   208,
     249,    -1,   265,   214,    -1,    -1,    79,   259,   260,    -1,
     260,    -1,   261,    -1,   263,    -1,    -1,    72,   262,   245,
      -1,   245,    -1,   264,    22,   249,   111,   176,   177,   178,
      -1,    78,   268,   267,   266,    -1,   268,   267,   266,    -1,
     264,   208,   249,    -1,    -1,   121,    -1,    -1,   267,   119,
      -1,   219,    -1,   219,   124,   269,   125,    -1,    50,   219,
      -1,    75,    57,    -1,    57,    -1,    75,    -1,    75,    58,
      -1,    58,    -1,    59,    -1,    75,    59,    -1,    59,    59,
      -1,    75,    59,    59,    -1,    60,    -1,    61,    -1,    56,
      -1,    74,    62,    -1,    75,    62,    -1,    62,    -1,    63,
      -1,    64,    -1,    65,    -1,    66,    -1,    67,    -1,    68,
      -1,    69,    -1,    70,    -1,    71,    -1,   106,    -1,   264,
      -1,   269,   116,   264,    -1,    -1,   100,   112,   271,   113,
      -1,    -1,   219,    -1,   271,   116,   219,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   317,   317,   318,   321,   321,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   358,   362,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   403,   408,   443,   447,
     521,   526,   526,   532,   532,   581,   595,   596,   599,   603,
     612,   623,   623,   654,   655,   658,   658,   685,   686,   689,
     694,   699,   699,   724,   725,   728,   733,   746,   749,   752,
     755,   760,   761,   766,   772,   799,   810,   821,   834,   847,
     880,   883,   888,   889,   905,   908,   911,   916,   921,   926,
     929,   934,   937,   942,   945,   950,   955,   960,   965,   970,
     973,   976,   981,   986,   991,   996,  1001,  1006,  1011,  1016,
    1021,  1026,  1031,  1037,  1043,  1049,  1055,  1064,  1070,  1075,
    1081,  1084,  1085,  1096,  1096,  1107,  1110,  1115,  1118,  1123,
    1124,  1127,  1128,  1131,  1132,  1133,  1160,  1161,  1164,  1165,
    1168,  1171,  1176,  1177,  1195,  1198,  1201,  1204,  1207,  1210,
    1215,  1218,  1221,  1224,  1227,  1232,  1250,  1251,  1259,  1264,
    1273,  1283,  1287,  1291,  1295,  1299,  1303,  1307,  1313,  1318,
    1324,  1342,  1346,  1369,  1369,  1389,  1389,  1416,  1421,  1421,
    1436,  1437,  1440,  1441,  1444,  1483,  1486,  1491,  1492,  1495,
    1496,  1497,  1498,  1499,  1500,  1501,  1502,  1503,  1507,  1511,
    1522,  1533,  1544,  1555,  1566,  1577,  1588,  1599,  1610,  1611,
    1612,  1613,  1624,  1635,  1642,  1649,  1656,  1665,  1668,  1673,
    1722,  1722,  1723,  1726,  1752,  1755,  1762,  1765,  1773,  1776,
    1781,  1798,  1823,  1899,  1900,  1901,  1902,  1903,  1904,  1905,
    1906,  1907,  1908,  1909,  1910,  1911,  1912,  1913,  1914,  1915,
    1916,  1917,  1918,  1919,  1920,  1921,  1922,  1923,  1924,  1925,
    1926,  1927,  1930,  1933,  1938,  1941,  1949,  1952,  1958,  1962,
    1974,  1978,  1984,  1988,  1992,  1998,  2001,  2006,  2009,  2014,
    2062,  2067,  2073,  2100,  2109,  2118,  2127,  2138,  2146,  2161,
    2176,  2182,  2188,  2188,  2189,  2192,  2193,  2196,  2196,  2197,
    2200,  2233,  2239,  2247,  2314,  2317,  2325,  2328,  2333,  2344,
    2358,  2375,  2382,  2389,  2396,  2403,  2410,  2417,  2424,  2431,
    2438,  2445,  2452,  2459,  2466,  2473,  2480,  2487,  2494,  2501,
    2508,  2515,  2522,  2529,  2536,  2543,  2552,  2558,  2574,  2577,
    2585,  2591,  2598
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
  "TK_CLEARCODE", "TK_GETBUFFERCODE", "TK_RELEASEBUFFERCODE",
  "TK_READBUFFERCODE", "TK_WRITEBUFFERCODE", "TK_SEGCOUNTCODE",
  "TK_CHARBUFFERCODE", "TK_PICKLECODE", "TK_METHODCODE", "TK_FROMTYPE",
  "TK_TOTYPE", "TK_TOSUBCLASS", "TK_INCLUDE", "TK_OPTINCLUDE", "TK_IMPORT",
  "TK_EXPHEADERCODE", "TK_MODHEADERCODE", "TK_TYPEHEADERCODE", "TK_MODULE",
  "TK_CMODULE", "TK_CONSMODULE", "TK_COMPOMODULE", "TK_CLASS", "TK_STRUCT",
  "TK_PUBLIC", "TK_PROTECTED", "TK_PRIVATE", "TK_SIGNALS", "TK_SLOTS",
  "TK_BOOL", "TK_SHORT", "TK_INT", "TK_LONG", "TK_FLOAT", "TK_DOUBLE",
  "TK_CHAR", "TK_WCHAR_T", "TK_VOID", "TK_PYOBJECT", "TK_PYTUPLE",
  "TK_PYLIST", "TK_PYDICT", "TK_PYCALLABLE", "TK_PYSLICE", "TK_PYTYPE",
  "TK_VIRTUAL", "TK_ENUM", "TK_SIGNED", "TK_UNSIGNED", "TK_SCOPE",
  "TK_LOGICAL_OR", "TK_CONST", "TK_STATIC", "TK_SIPSIGNAL", "TK_SIPSLOT",
  "TK_SIPANYSLOT", "TK_SIPRXCON", "TK_SIPRXDIS", "TK_SIPSLOTCON",
  "TK_SIPSLOTDIS", "TK_NUMBER", "TK_REAL", "TK_TYPEDEF", "TK_NAMESPACE",
  "TK_TIMELINE", "TK_PLATFORMS", "TK_FEATURE", "TK_LICENSE", "TK_QCHAR",
  "TK_TRUE", "TK_FALSE", "TK_NULL", "TK_OPERATOR", "TK_THROW",
  "TK_QOBJECT", "TK_EXCEPTION", "TK_RAISECODE", "TK_EXPLICIT",
  "TK_TEMPLATE", "TK_ELLIPSIS", "TK_DEFMETATYPE", "TK_DEFSUPERTYPE", "'{'",
  "'}'", "';'", "'('", "')'", "'!'", "'-'", "','", "'='", "'+'", "'*'",
  "'/'", "'&'", "'|'", "'~'", "'<'", "'>'", "':'", "'['", "']'", "'%'",
  "'^'", "$accept", "specification", "statement", "@1", "modstatement",
  "nsstatement", "plugin", "exception", "baseexception", "raisecode",
  "mappedtype", "@2", "mappedtypetmpl", "@3", "mtdefinition", "mtbody",
  "mtline", "namespace", "@4", "nsbody", "platforms", "@5", "platformlist",
  "platform", "feature", "timeline", "@6", "qualifierlist",
  "qualifiername", "ifstart", "oredqualifiers", "qualifiers", "ifend",
  "license", "defmetatype", "defsupertype", "consmodule", "compmodule",
  "module", "modlang", "dottedname", "optnumber", "include", "optinclude",
  "import", "optaccesscode", "optgetcode", "optsetcode", "copying",
  "exphdrcode", "modhdrcode", "typehdrcode", "opttypehdrcode", "travcode",
  "clearcode", "getbufcode", "releasebufcode", "readbufcode",
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   123,
     125,    59,    40,    41,    33,    45,    44,    61,    43,    42,
      47,    38,   124,   126,    60,    62,    58,    91,    93,    37,
      94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   131,   132,   132,   134,   133,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   137,   138,   139,   139,
     140,   142,   141,   144,   143,   145,   146,   146,   147,   147,
     147,   149,   148,   150,   150,   152,   151,   153,   153,   154,
     155,   157,   156,   158,   158,   159,   160,   161,   161,   161,
     161,   162,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   170,   171,   171,   172,   172,   173,   174,   175,   176,
     176,   177,   177,   178,   178,   179,   180,   181,   182,   183,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   204,   206,   205,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   211,   212,   212,   213,   213,
     214,   214,   215,   215,   216,   216,   216,   216,   216,   216,
     217,   217,   217,   217,   217,   218,   219,   219,   220,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   222,   222,
     222,   223,   223,   225,   224,   227,   226,   228,   230,   229,
     231,   231,   232,   232,   233,   234,   234,   235,   235,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   237,   237,   238,
     240,   239,   239,   241,   242,   242,   243,   243,   244,   244,
     245,   245,   245,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   247,   247,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   252,   252,   253,   253,   254,   254,   255,
     256,   256,   256,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   259,   258,   258,   260,   260,   262,   261,   261,
     263,   264,   264,   265,   266,   266,   267,   267,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   269,   269,   270,   270,
     271,   271,   271
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       2,     1,     2,     0,     8,     0,     1,     0,     1,     0,
       1,     1,     2,     1,     1,     4,     0,     1,     0,     2,
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     2,     1,     3,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       3,     5,    11,     0,     7,     0,     3,     4,     0,     7,
       0,     2,     1,     3,     1,     0,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     2,     0,     1,    11,
       0,     3,     1,     9,     0,     5,     0,     6,     0,     1,
      13,    14,    13,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     1,     2,     2,     1,     2,     2,     2,
       1,     2,     0,     1,     0,     2,     0,     3,     1,     3,
       1,     3,     1,     1,     1,     0,     2,     0,     2,     1,
       0,     1,     3,     4,     4,     4,     3,     3,     6,     6,
       3,     2,     0,     3,     1,     1,     1,     0,     3,     1,
       7,     4,     3,     3,     0,     1,     0,     2,     1,     4,
       2,     2,     1,     1,     2,     1,     1,     2,     2,     3,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     4,
       0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
     168,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,   332,   322,   325,   326,   330,   331,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   137,
       0,   323,     0,     0,     0,    71,    65,     0,   276,     0,
       0,     0,   345,     0,     0,     5,    33,     9,    40,    31,
      32,    36,    15,    16,    14,    34,    35,    17,    18,    19,
       7,     8,     6,     0,    11,    12,    13,    10,    20,    21,
      45,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      42,   318,   166,    41,    37,    39,   185,    38,    43,    44,
       0,   316,    46,   131,   127,     0,   128,   135,   122,   123,
     124,   125,   120,   126,   105,     0,   276,   137,    96,    97,
      98,   106,   107,   108,    92,    93,    87,    88,   188,   183,
     328,   138,   276,   333,   321,   324,   327,   334,   316,     0,
      61,     0,     0,    70,     0,    84,     0,    48,     0,    85,
      86,    94,     0,     0,     0,     0,   276,     0,   314,   132,
     130,   136,     0,   320,    51,    77,     0,    81,     0,     0,
     190,   190,   133,   329,   314,   276,   316,     0,     0,     0,
     280,     0,   278,   290,     0,   276,   346,     0,    95,    89,
     167,     0,    53,   186,   290,     0,     0,     0,   244,     0,
     243,   245,   246,   248,   249,   263,   266,   270,     0,   247,
     250,     0,   317,   315,   312,   129,     0,    78,     0,    76,
     137,     0,   276,   276,     0,   311,     0,     0,     0,    75,
       0,    73,    69,     0,    67,     0,     0,   277,   137,   137,
     137,   137,   137,     0,     0,   137,     0,   289,   291,   137,
     150,     0,     0,     0,   187,   319,     0,     0,    99,   264,
     269,   254,   268,   253,   255,   256,   258,   259,   267,   251,
     271,   252,   265,   257,   260,   290,     0,    52,    79,     0,
      82,   194,   191,   192,   195,   195,   139,   181,     0,    63,
       0,   185,    72,    74,    66,    68,   283,   284,   282,   281,
     279,   276,   276,   276,   276,   276,   290,   290,   276,   272,
       0,   276,   160,   301,    49,   109,   347,    54,   272,     0,
     101,   261,   262,     0,     0,     0,     0,    56,    58,    80,
       0,   238,     0,     0,   148,   143,   144,     0,   140,   141,
       0,     0,    64,   150,   150,   150,   296,   297,     0,     0,
     300,   273,   348,   292,   313,   161,   163,   164,   162,   151,
       0,   152,   110,     0,   348,   100,     0,   103,   272,    59,
      60,     0,    57,   193,     0,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,   227,   227,
       0,   307,   302,   230,   204,   201,   199,   200,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   207,   206,
     205,   202,   203,   238,   197,   219,   218,   232,     0,   309,
     220,   304,   305,   306,   189,   184,   160,   276,     0,   142,
       0,    62,   293,   294,   295,   137,   137,     0,   274,   154,
     155,   156,   157,   158,   159,   160,   176,   172,   171,   177,
     173,   174,   175,   169,   165,     0,     0,     0,   274,   102,
       0,   310,   348,    55,   121,   290,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   222,   221,   228,     0,     0,
       0,   226,     0,     0,     0,   196,   198,     0,   149,   146,
     134,     0,   276,   276,   350,     0,   276,   153,   160,    50,
       0,   276,   104,   274,     0,   223,   224,   225,   308,     0,
     307,   303,     0,   231,     0,   147,   145,   276,   298,   299,
     351,     0,   275,   236,   179,     0,    47,   236,   276,   348,
       0,     0,     0,   349,     0,     0,     0,   170,   160,     0,
     236,   276,   348,   182,   352,     0,   285,   180,   285,     0,
     234,   274,   290,     0,   287,   287,   285,     0,     0,   276,
       0,   286,     0,   242,   240,   287,   290,   285,     0,     0,
     288,   241,     0,   233,   285,   237,     0,   287,   235,   229
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,     2,     3,    65,    66,    67,    68,   195,   467,
      69,   226,    70,   266,   287,   336,   337,    71,   187,   300,
      72,   152,   243,   244,    73,    74,   151,   240,   241,    75,
     177,   178,    76,    77,    78,    79,    80,    81,    82,    83,
     136,   199,    84,    85,    86,   330,   377,   471,    87,    88,
      89,    90,   373,   409,   410,   411,   412,   413,   414,   415,
     416,   417,    91,   418,    92,    93,    94,    95,    96,    97,
      98,    99,   114,   115,   100,   234,   172,   142,   347,   348,
     349,   526,   437,   323,   369,   455,   370,   371,   101,   102,
     464,   535,   103,   104,   181,   105,   165,   301,   107,   180,
     232,   292,   293,   342,   423,   424,   488,   425,   426,   494,
     427,   568,   546,   428,   108,   221,   362,   506,   155,   191,
     192,   309,   564,   573,   256,   257,   258,   430,   493,   431,
     432,   492,   109,   259,   260,   224,   168,   111,   197,   448,
     531
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -485
static const short int yypact[] =
{
    -485,    54,  -485,   467,  -485,  -485,    69,    83,    83,    86,
      83,    83,    83,    83,    83,    83,    83,   975,    70,  -485,
    -485,   165,   169,   177,    83,    83,    83,  -485,  -485,   132,
     132,   193,   193,  -485,  -485,  -485,   157,  -485,  -485,  -485,
    -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,   196,
     162,   137,   975,   949,   197,  -485,  -485,   204,   107,   949,
     193,   104,  -485,   132,   132,  -485,  -485,  -485,  -485,  -485,
    -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,  -485,  -485,   132,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,   -36,  -485,  -485,  -485,  -485,   214,  -485,  -485,  -485,
      12,  -485,  -485,  -485,  -485,    60,  -485,   210,  -485,  -485,
    -485,  -485,  -485,  -485,  -485,   193,   107,     8,  -485,  -485,
    -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,   158,     7,
    -485,  -485,   107,  -485,  -485,  -485,   176,  -485,  -485,     6,
    -485,   144,   148,  -485,   236,  -485,   150,     2,   949,  -485,
    -485,   173,   193,   949,   975,   215,   -35,   232,    66,  -485,
    -485,  -485,    83,   158,  -485,   151,   241,   188,   154,   153,
     143,   143,  -485,  -485,    66,   107,  -485,   163,   252,   253,
     159,    -1,  -485,   763,   193,   107,  -485,   -54,  -485,  -485,
    -485,   -15,  -485,  -485,   763,   166,   168,   161,   167,   171,
     175,   178,   179,   180,   182,  -485,    46,    22,   172,   186,
     187,   170,  -485,  -485,  -485,  -485,   185,  -485,    10,  -485,
     196,   193,   107,   107,   192,  -485,   174,     4,   709,  -485,
      11,  -485,  -485,    15,  -485,    20,   236,  -485,   196,   196,
     196,   196,   196,   194,   195,   196,   198,   189,  -485,   196,
     191,   -23,   200,   949,  -485,  -485,   185,   199,   272,  -485,
    -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,   202,
    -485,   203,  -485,  -485,  -485,   763,   116,  -485,  -485,   268,
    -485,   158,   201,  -485,   205,   205,   184,  -485,   209,  -485,
     181,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,   107,   107,   107,   107,   107,   763,   763,   107,   235,
     763,   107,    75,  -485,  -485,   249,  -485,  -485,   235,    83,
     302,  -485,  -485,   211,    83,    83,    19,  -485,  -485,  -485,
     193,   648,   212,   217,   208,  -485,  -485,   206,   184,  -485,
     218,   222,  -485,   191,   191,   191,  -485,  -485,   216,   221,
    -485,  -485,   237,  -485,  -485,  -485,  -485,  -485,  -485,    47,
     818,  -485,  -485,   238,   237,  -485,    83,   306,   235,  -485,
    -485,   224,  -485,  -485,    83,   226,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,   285,   285,   285,
     219,   220,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,  -485,  -485,   556,  -485,  -485,  -485,  -485,   240,  -485,
    -485,  -485,  -485,  -485,  -485,  -485,    75,   107,   231,  -485,
     949,  -485,  -485,  -485,  -485,   196,   196,   246,   243,  -485,
    -485,  -485,  -485,  -485,  -485,    75,  -485,  -485,  -485,  -485,
    -485,  -485,  -485,   -26,  -485,   254,    83,   255,   243,  -485,
      83,  -485,   237,  -485,  -485,   763,  -485,  -485,  -485,  -485,
    -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,   244,   245,
     247,  -485,   895,   869,   345,  -485,  -485,   347,  -485,   256,
    -485,   -17,   107,   107,   193,   287,   107,  -485,    63,  -485,
     264,   107,  -485,   243,   277,  -485,  -485,  -485,  -485,    14,
    -485,  -485,   226,  -485,   265,  -485,  -485,   107,  -485,  -485,
     158,    17,  -485,   266,    47,    67,  -485,   266,   107,   237,
     279,   281,   284,  -485,   193,   949,   286,  -485,    75,   288,
     266,   107,   237,  -485,   158,   280,   361,    47,   361,   289,
     271,   243,   763,    83,   379,   379,   361,   294,   296,   107,
     295,  -485,    83,  -485,  -485,   379,   763,   361,   298,   283,
    -485,  -485,   299,  -485,   361,  -485,   290,   379,  -485,  -485
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -485,  -485,   412,  -485,  -485,  -203,  -485,  -296,  -485,  -485,
    -485,  -485,  -485,  -485,   149,  -485,    78,  -283,  -485,  -485,
    -485,  -485,  -485,   190,  -485,  -485,  -485,  -485,   183,  -275,
    -485,  -485,  -272,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
     -16,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,  -266,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,  -485,    -8,  -485,  -281,  -485,  -485,  -114,  -485,  -485,
      68,  -485,  -485,  -132,  -456,  -485,  -485,  -375,   -22,   257,
    -485,  -485,  -277,  -273,  -485,  -485,  -485,   414,  -150,  -485,
     239,  -485,    82,   129,  -485,     5,  -191,  -485,  -485,  -485,
     -69,  -485,  -442,  -485,  -319,  -485,  -289,  -441,  -101,  -485,
     207,  -485,  -484,  -416,  -173,  -485,   109,  -485,  -485,   -66,
    -485,  -485,  -318,    -2,  -485,   248,   -99,    -6,  -151,  -355,
    -485
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -321
static const short int yytable[] =
{
     116,   110,   118,   119,   120,   121,   122,   123,   124,   138,
     139,   126,   201,   179,   137,   203,   131,   132,   133,   468,
     338,   345,   429,   433,   346,   174,   298,   511,   185,  -320,
     175,   267,   288,   239,   166,   299,   540,   242,   157,   374,
     162,   182,   134,   135,   306,   404,   148,   159,   160,   184,
     162,   149,   534,   162,     4,   334,   335,   156,   405,   372,
     419,   498,   263,    26,   420,   205,   406,   161,   421,   407,
     338,   264,   538,   345,   565,   408,   346,   204,   162,   169,
     507,   170,   575,   162,   236,   154,  -318,   237,   163,   472,
     324,   112,   557,   583,   262,   549,   527,   352,   163,   263,
     587,   263,   113,   173,   429,   433,  -320,   307,   559,   117,
     265,   167,   333,   167,   194,   246,   290,   513,   186,   247,
     569,   302,   176,   222,   289,   304,  -320,   404,  -320,   381,
     543,   294,   295,   544,   311,   312,   313,   314,   315,   280,
     405,   318,   419,   358,   359,   321,   420,   281,   406,   574,
     421,   407,   334,   335,   134,   135,   196,   408,   202,   581,
      26,   196,   449,   278,   225,   450,   451,   452,   453,   454,
     279,   589,   261,   518,   429,   433,  -178,   365,   366,  -178,
     547,   367,   127,   548,   551,   222,   368,   223,   128,   365,
     366,   422,   129,   367,   144,   145,   146,   561,   368,   147,
     130,    18,    19,    20,    18,    19,   344,   489,   490,   291,
     353,   354,   355,   356,   357,    20,   140,   360,   141,   150,
     364,   442,   443,   444,   143,    26,   153,   154,   158,   308,
      31,    32,   164,   171,   162,   183,   110,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,   188,    49,    50,    51,   189,   190,    52,
     198,   326,   193,   227,    31,   228,  -138,   229,   230,   231,
      53,    54,   238,   422,   239,   242,   245,   268,   270,   329,
      59,   269,   285,    60,   271,   297,    61,    62,   272,   501,
     339,   351,   273,    26,   286,   274,   275,   276,   110,   277,
     282,   296,   514,   283,   284,   320,   316,   317,   322,   325,
     376,   319,   328,   361,   341,   470,   438,   340,   291,   331,
     332,   375,   350,   434,   378,   436,   379,   380,   435,   445,
     440,   502,   503,   441,   446,   473,   499,   447,   475,   110,
     487,   466,   500,  -239,   206,   491,   207,   208,   463,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   504,   218,
     505,   219,   220,   497,   465,   510,   508,   522,   469,   524,
     515,   516,   525,   517,   532,   536,   474,   541,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   570,
     539,   204,   562,   545,   552,   553,   563,   556,   567,   558,
     566,   528,   529,   582,   572,   533,   576,   577,   579,   584,
     537,   585,   586,     5,   382,   327,   439,   106,   588,   200,
     233,   110,   383,   303,   343,   523,   542,   521,   496,   363,
       0,     0,   235,   305,     0,     0,     0,   550,   196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     560,     0,     0,   310,     0,     0,     0,     0,   509,     0,
       0,     0,   512,     0,     0,     0,     0,     0,   578,     0,
       6,     7,     8,     9,     0,     0,     0,    10,    11,    12,
      13,    14,   530,    15,    16,    17,     0,    18,    19,    20,
     519,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,   554,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,   555,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   571,    53,    54,    55,    56,
      57,    58,     0,     0,   580,     0,    59,     0,     0,    60,
       0,   384,    61,    62,    63,    64,    18,    19,   385,     0,
       0,     0,   386,   387,   388,   389,   390,   391,   392,   393,
     394,     0,     0,   395,   396,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,    31,    32,   397,   398,   399,
     400,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,   401,    49,
      50,    51,     0,     0,    52,   402,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,     0,     0,     0,
       0,     0,     0,     0,     0,    59,     0,     0,    60,     0,
     403,     0,    62,   384,     0,     0,   495,     0,    18,    19,
     385,     0,     0,     0,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,   395,   396,     0,     0,     0,
       0,     0,    26,     0,     0,     0,     0,    31,    32,   397,
     398,   399,   400,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
     401,    49,    50,    51,     0,     0,    52,   402,     0,    18,
      19,    20,     0,     0,     0,     0,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
      60,     0,   403,    26,    62,     0,     0,     0,    31,    32,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    20,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,    59,     0,
       0,    60,     0,   125,    61,    62,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,     0,    50,    51,     0,
      20,    52,   456,   248,   249,   250,   251,   252,   253,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,     0,     0,     0,   125,    62,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    20,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   457,   458,     0,     0,     0,
       0,     0,     0,   459,   460,   461,   462,    20,     0,   125,
       0,     0,     0,     0,    62,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,   520,     0,    50,    51,   125,     0,    52,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    59,    50,
      51,    20,     0,    52,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,    20,     0,   125,
       0,    62,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,     0,    50,    51,   125,     0,    52,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,     0,    50,
      51,     0,     0,     0,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62
};

static const short int yycheck[] =
{
       8,     3,    10,    11,    12,    13,    14,    15,    16,    31,
      32,    17,   163,   127,    30,   165,    24,    25,    26,   374,
     286,   296,   341,   341,   296,   126,    22,   468,    22,    22,
      22,   204,    22,    22,    22,   238,    22,    22,    60,   328,
      76,   142,    22,    23,    24,   341,    52,    63,    64,   148,
      76,    53,   508,    76,     0,    36,    37,    59,   341,   325,
     341,   436,   116,    44,   341,   166,   341,    83,   341,   341,
     336,   125,   513,   348,   558,   341,   348,   112,    76,    19,
     455,    21,   566,    76,   185,   120,   112,   186,   124,   378,
     113,    22,   548,   577,   195,   537,   113,   300,   124,   116,
     584,   116,    19,   125,   423,   423,    99,    87,   550,    23,
     125,    99,   285,    99,   112,   116,   230,   472,   112,   120,
     561,   110,   114,   119,   114,   110,   119,   423,   121,   110,
     113,   232,   233,   116,   248,   249,   250,   251,   252,   117,
     423,   255,   423,   316,   317,   259,   423,   125,   423,   565,
     423,   423,    36,    37,    22,    23,   158,   423,   164,   575,
      44,   163,   115,   117,   172,   118,   119,   120,   121,   122,
     124,   587,   194,   492,   493,   493,   113,   114,   115,   116,
     113,   118,   112,   116,   539,   119,   123,   121,    23,   114,
     115,   341,    23,   118,    57,    58,    59,   552,   123,    62,
      23,    20,    21,    22,    20,    21,    22,   398,   399,   231,
     311,   312,   313,   314,   315,    22,    59,   318,    22,    22,
     321,   353,   354,   355,    62,    44,    22,   120,   124,   245,
      49,    50,    18,    23,    76,    59,   238,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,   109,    73,    74,    75,   109,    22,    78,
      87,   263,   112,    22,    49,    77,   115,   113,   115,   126,
      89,    90,   109,   423,    22,    22,   117,   111,   117,     7,
      99,   113,   112,   102,   117,   111,   105,   106,   117,   440,
      22,   110,   117,    44,   109,   117,   117,   117,   300,   117,
     128,   109,   475,   117,   117,   116,   112,   112,   117,   109,
       8,   113,   113,    78,   109,     9,   110,   116,   340,   117,
     117,   329,   113,   111,   113,   117,   334,   335,   111,   113,
     112,   445,   446,   111,   113,   111,   437,   100,   112,   341,
      55,   103,   111,   123,   112,   126,   114,   115,   370,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   112,   127,
     117,   129,   130,   123,   370,   110,   112,    22,   376,    22,
     126,   126,   116,   126,    87,   111,   384,   112,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   562,
     113,   112,   112,   127,   113,   111,    35,   111,   127,   111,
     111,   502,   503,   576,    25,   506,   112,   111,   113,   111,
     511,   128,   113,     1,   336,   266,   348,     3,   128,   162,
     181,   423,   340,   240,   295,   494,   527,   493,   423,   320,
      -1,    -1,   184,   243,    -1,    -1,    -1,   538,   440,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     551,    -1,    -1,   246,    -1,    -1,    -1,    -1,   466,    -1,
      -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,   569,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    10,    11,    12,
      13,    14,   504,    16,    17,    18,    -1,    20,    21,    22,
     492,   493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,   544,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      73,    74,    75,   545,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   563,    89,    90,    91,    92,
      93,    94,    -1,    -1,   572,    -1,    99,    -1,    -1,   102,
      -1,    15,   105,   106,   107,   108,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,   102,    -1,
     104,    -1,   106,    15,    -1,    -1,   110,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    78,    79,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
     102,    -1,   104,    44,   106,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    73,    74,    75,    22,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,   102,    -1,    50,   105,   106,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    74,    75,    -1,
      22,    78,    24,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    50,   106,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      -1,    22,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    22,    -1,    50,
      -1,    -1,    -1,    -1,   106,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    74,    75,    50,    -1,    78,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    99,    74,
      75,    22,    -1,    78,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    22,    -1,    50,
      -1,   106,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    74,    75,    50,    -1,    78,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    74,
      75,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   132,   133,   134,     0,   133,     3,     4,     5,     6,
      10,    11,    12,    13,    14,    16,    17,    18,    20,    21,
      22,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    73,
      74,    75,    78,    89,    90,    91,    92,    93,    94,    99,
     102,   105,   106,   107,   108,   135,   136,   137,   138,   141,
     143,   148,   151,   155,   156,   160,   163,   164,   165,   166,
     167,   168,   169,   170,   173,   174,   175,   179,   180,   181,
     182,   193,   195,   196,   197,   198,   199,   200,   201,   202,
     205,   219,   220,   223,   224,   226,   228,   229,   245,   263,
     264,   268,    22,    19,   203,   204,   203,    23,   203,   203,
     203,   203,   203,   203,   203,    50,   268,   112,    23,    23,
      23,   203,   203,   203,    22,    23,   171,   171,   219,   219,
      59,    22,   208,    62,    57,    58,    59,    62,   268,   264,
      22,   157,   152,    22,   120,   249,   264,   219,   124,   171,
     171,   171,    76,   124,    18,   227,    22,    99,   267,    19,
      21,    23,   207,   219,   249,    22,   114,   161,   162,   208,
     230,   225,   249,    59,   267,    22,   112,   149,   109,   109,
      22,   250,   251,   112,   112,   139,   264,   269,    87,   172,
     220,   269,   268,   229,   112,   249,   112,   114,   115,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   127,   129,
     130,   246,   119,   121,   266,   203,   142,    22,    77,   113,
     115,   126,   231,   231,   206,   266,   249,   267,   109,    22,
     158,   159,    22,   153,   154,   117,   116,   120,    80,    81,
      82,    83,    84,    85,    86,   101,   255,   256,   257,   264,
     265,   219,   249,   116,   125,   125,   144,   255,   111,   113,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   124,
     117,   125,   128,   117,   117,   112,   109,   145,    22,   114,
     208,   219,   232,   233,   249,   249,   109,   111,    22,   136,
     150,   228,   110,   159,   110,   154,    24,    87,   171,   252,
     251,   208,   208,   208,   208,   208,   112,   112,   208,   113,
     116,   208,   117,   214,   113,   109,   264,   145,   113,     7,
     176,   117,   117,   255,    36,    37,   146,   147,   182,    22,
     116,   109,   234,   234,    22,   160,   163,   209,   210,   211,
     113,   110,   136,   249,   249,   249,   249,   249,   255,   255,
     249,    78,   247,   257,   249,   114,   115,   118,   123,   215,
     217,   218,   182,   183,   247,   203,     8,   177,   113,   203,
     203,   110,   147,   233,    15,    22,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    37,    38,    51,    52,    53,
      54,    72,    79,   104,   138,   148,   160,   163,   182,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   194,   205,
     223,   224,   229,   235,   236,   238,   239,   241,   244,   245,
     258,   260,   261,   263,   111,   111,   117,   213,   110,   211,
     112,   111,   214,   214,   214,   113,   113,   100,   270,   115,
     118,   119,   120,   121,   122,   216,    24,    87,    88,    95,
      96,    97,    98,   219,   221,   268,   103,   140,   270,   203,
       9,   178,   247,   111,   203,   112,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,    55,   237,   237,
     237,   126,   262,   259,   240,   110,   236,   123,   218,   249,
     111,   269,   208,   208,   112,   117,   248,   218,   112,   203,
     110,   248,   203,   270,   255,   126,   126,   126,   245,   264,
      72,   260,    22,   241,    22,   116,   212,   113,   249,   249,
     219,   271,    87,   249,   215,   222,   111,   249,   248,   113,
      22,   112,   249,   113,   116,   127,   243,   113,   116,   243,
     249,   270,   113,   111,   219,   264,   111,   215,   111,   243,
     249,   270,   112,    35,   253,   253,   111,   127,   242,   248,
     255,   203,    25,   254,   254,   253,   112,   111,   249,   113,
     203,   254,   255,   253,   111,   128,   113,   253,   128,   254
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
#line 321 "parser.y"
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
#line 354 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->exphdrcode, yyvsp[0].codeb);
        }
    break;

  case 21:
#line 358 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->hdrcode, yyvsp[0].codeb);
        }
    break;

  case 22:
#line 362 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->cppcode, yyvsp[0].codeb);
        }
    break;

  case 45:
#line 390 "parser.y"
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
#line 403 "parser.y"
    {
            appendString(&currentSpec->plugins, yyvsp[0].text);
        }
    break;

  case 47:
#line 408 "parser.y"
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
#line 443 "parser.y"
    {
            yyval.exceptionbase.bibase = NULL;
            yyval.exceptionbase.base = NULL;
        }
    break;

  case 49:
#line 447 "parser.y"
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
#line 521 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 51:
#line 526 "parser.y"
    {
            if (notSkipping())
                currentMappedType = newMappedType(currentSpec, &yyvsp[-1].memArg, &yyvsp[0].optflags);
        }
    break;

  case 53:
#line 532 "parser.y"
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
#line 581 "parser.y"
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
#line 599 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->iff->hdrcode, yyvsp[0].codeb);
        }
    break;

  case 59:
#line 603 "parser.y"
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
#line 612 "parser.y"
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
#line 623 "parser.y"
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
#line 638 "parser.y"
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
#line 658 "parser.y"
    {
            qualDef *qd;

            for (qd = currentModule -> qualifiers; qd != NULL; qd = qd -> next)
                if (qd -> qtype == platform_qualifier)
                    yyerror("%Platforms has already been defined for this module");
        }
    break;

  case 66:
#line 665 "parser.y"
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
#line 689 "parser.y"
    {
            newQualifier(currentModule,-1,-1,yyvsp[0].text,platform_qualifier);
        }
    break;

  case 70:
#line 694 "parser.y"
    {
            newQualifier(currentModule,-1,-1,yyvsp[0].text,feature_qualifier);
        }
    break;

  case 71:
#line 699 "parser.y"
    {
            currentTimelineOrder = 0;
        }
    break;

  case 72:
#line 702 "parser.y"
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
#line 728 "parser.y"
    {
            newQualifier(currentModule,currentModule -> nrtimelines,currentTimelineOrder++,yyvsp[0].text,time_qualifier);
        }
    break;

  case 76:
#line 733 "parser.y"
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
#line 746 "parser.y"
    {
            yyval.boolean = platOrFeature(yyvsp[0].text,FALSE);
        }
    break;

  case 78:
#line 749 "parser.y"
    {
            yyval.boolean = platOrFeature(yyvsp[0].text,TRUE);
        }
    break;

  case 79:
#line 752 "parser.y"
    {
            yyval.boolean = (platOrFeature(yyvsp[0].text,FALSE) || yyvsp[-2].boolean);
        }
    break;

  case 80:
#line 755 "parser.y"
    {
            yyval.boolean = (platOrFeature(yyvsp[0].text,TRUE) || yyvsp[-3].boolean);
        }
    break;

  case 82:
#line 761 "parser.y"
    {
            yyval.boolean = timePeriod(yyvsp[-2].text,yyvsp[0].text);
        }
    break;

  case 83:
#line 766 "parser.y"
    {
            if (skipStackPtr-- <= 0)
                yyerror("Too many %End directives");
        }
    break;

  case 84:
#line 772 "parser.y"
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
#line 799 "parser.y"
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
#line 810 "parser.y"
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
#line 821 "parser.y"
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
#line 834 "parser.y"
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
#line 847 "parser.y"
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
#line 880 "parser.y"
    {
            yyval.boolean = FALSE;
        }
    break;

  case 91:
#line 883 "parser.y"
    {
            yyval.boolean = TRUE;
        }
    break;

  case 93:
#line 889 "parser.y"
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
#line 905 "parser.y"
    {
            yyval.number = -1;
        }
    break;

  case 96:
#line 911 "parser.y"
    {
            parseFile(NULL, yyvsp[0].text, NULL, FALSE);
        }
    break;

  case 97:
#line 916 "parser.y"
    {
            parseFile(NULL, yyvsp[0].text, NULL, TRUE);
        }
    break;

  case 98:
#line 921 "parser.y"
    {
            newImport(yyvsp[0].text);
        }
    break;

  case 99:
#line 926 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 100:
#line 929 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 101:
#line 934 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 102:
#line 937 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 103:
#line 942 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 104:
#line 945 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 105:
#line 950 "parser.y"
    {
            appendCodeBlock(&currentModule->copying, yyvsp[0].codeb);
        }
    break;

  case 106:
#line 955 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 107:
#line 960 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 108:
#line 965 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 109:
#line 970 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 111:
#line 976 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 112:
#line 981 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 113:
#line 986 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 114:
#line 991 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 115:
#line 996 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 116:
#line 1001 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 117:
#line 1006 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 118:
#line 1011 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 119:
#line 1016 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 120:
#line 1021 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 121:
#line 1026 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 122:
#line 1031 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->preinitcode, yyvsp[0].codeb);
        }
    break;

  case 123:
#line 1037 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->initcode, yyvsp[0].codeb);
        }
    break;

  case 124:
#line 1043 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->postinitcode, yyvsp[0].codeb);
        }
    break;

  case 125:
#line 1049 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitcode, yyvsp[0].codeb);
        }
    break;

  case 126:
#line 1055 "parser.y"
    {
            /*
             * This is a no-op and is retained for compatibility
             * until the last use of it (by SIP v3) can be removed
             * from PyQt.
             */
        }
    break;

  case 127:
#line 1064 "parser.y"
    {
            if (inMainModule())
                appendCodeBlock(&currentSpec -> docs,yyvsp[0].codeb);
        }
    break;

  case 128:
#line 1070 "parser.y"
    {
            appendCodeBlock(&currentSpec -> docs,yyvsp[0].codeb);
        }
    break;

  case 129:
#line 1075 "parser.y"
    {
            if (inMainModule())
                yywarning("%Makefile is ignored, please use the -b flag instead");
        }
    break;

  case 132:
#line 1085 "parser.y"
    {
            yyval.codeb = yyvsp[-1].codeb;

            append(&yyval.codeb->frag, yyvsp[0].codeb->frag);

            free(yyvsp[0].codeb->frag);
            free((char *)yyvsp[0].codeb->filename);
            free(yyvsp[0].codeb);
        }
    break;

  case 133:
#line 1096 "parser.y"
    {
            if (notSkipping())
            {
                if (sectionFlags != 0 && (sectionFlags & ~(SECT_IS_PUBLIC | SECT_IS_PROT)) != 0)
                    yyerror("Class enums must be in the public or protected sections");

                currentEnum = newEnum(currentSpec,currentModule,yyvsp[-1].text,&yyvsp[0].optflags,sectionFlags);
            }
        }
    break;

  case 135:
#line 1107 "parser.y"
    {
            yyval.text = NULL;
        }
    break;

  case 136:
#line 1110 "parser.y"
    {
            yyval.text = yyvsp[0].text;
        }
    break;

  case 137:
#line 1115 "parser.y"
    {
            yyval.text = NULL;
        }
    break;

  case 138:
#line 1118 "parser.y"
    {
            yyval.text = yyvsp[0].text;
        }
    break;

  case 145:
#line 1133 "parser.y"
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

  case 150:
#line 1168 "parser.y"
    {
            yyval.valp = NULL;
        }
    break;

  case 151:
#line 1171 "parser.y"
    {
            yyval.valp = yyvsp[0].valp;
        }
    break;

  case 153:
#line 1177 "parser.y"
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

  case 154:
#line 1195 "parser.y"
    {
            yyval.qchar = '-';
        }
    break;

  case 155:
#line 1198 "parser.y"
    {
            yyval.qchar = '+';
        }
    break;

  case 156:
#line 1201 "parser.y"
    {
            yyval.qchar = '*';
        }
    break;

  case 157:
#line 1204 "parser.y"
    {
            yyval.qchar = '/';
        }
    break;

  case 158:
#line 1207 "parser.y"
    {
            yyval.qchar = '&';
        }
    break;

  case 159:
#line 1210 "parser.y"
    {
            yyval.qchar = '|';
        }
    break;

  case 160:
#line 1215 "parser.y"
    {
            yyval.qchar = '\0';
        }
    break;

  case 161:
#line 1218 "parser.y"
    {
            yyval.qchar = '!';
        }
    break;

  case 162:
#line 1221 "parser.y"
    {
            yyval.qchar = '~';
        }
    break;

  case 163:
#line 1224 "parser.y"
    {
            yyval.qchar = '-';
        }
    break;

  case 164:
#line 1227 "parser.y"
    {
            yyval.qchar = '+';
        }
    break;

  case 165:
#line 1232 "parser.y"
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

  case 167:
#line 1251 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("Scoped names are not allowed in a C module");

            appendScopedName(&yyvsp[-2].scpvalp,yyvsp[0].scpvalp);
        }
    break;

  case 168:
#line 1259 "parser.y"
    {
            yyval.scpvalp = text2scopePart(yyvsp[0].text);
        }
    break;

  case 169:
#line 1264 "parser.y"
    {
            /*
             * We let the C++ compiler decide if the value is a valid one - no
             * point in building a full C++ parser here.
             */

            yyval.value.vtype = scoped_value;
            yyval.value.u.vscp = yyvsp[0].scpvalp;
        }
    break;

  case 170:
#line 1273 "parser.y"
    {
            fcallDef *fcd;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = yyvsp[-1].fcall;
            fcd -> type = yyvsp[-3].memArg;

            yyval.value.vtype = fcall_value;
            yyval.value.u.fcd = fcd;
        }
    break;

  case 171:
#line 1283 "parser.y"
    {
            yyval.value.vtype = real_value;
            yyval.value.u.vreal = yyvsp[0].real;
        }
    break;

  case 172:
#line 1287 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = yyvsp[0].number;
        }
    break;

  case 173:
#line 1291 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = 1;
        }
    break;

  case 174:
#line 1295 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = 0;
        }
    break;

  case 175:
#line 1299 "parser.y"
    {
            yyval.value.vtype = numeric_value;
            yyval.value.u.vnum = 0;
        }
    break;

  case 176:
#line 1303 "parser.y"
    {
            yyval.value.vtype = string_value;
            yyval.value.u.vstr = yyvsp[0].text;
        }
    break;

  case 177:
#line 1307 "parser.y"
    {
            yyval.value.vtype = qchar_value;
            yyval.value.u.vqchar = yyvsp[0].qchar;
        }
    break;

  case 178:
#line 1313 "parser.y"
    {
            /* No values. */

            yyval.fcall.nrArgs = 0;
        }
    break;

  case 179:
#line 1318 "parser.y"
    {
            /* The single or first expression. */

            yyval.fcall.args[0] = yyvsp[0].valp;
            yyval.fcall.nrArgs = 1;
        }
    break;

  case 180:
#line 1324 "parser.y"
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

  case 181:
#line 1342 "parser.y"
    {
            if (notSkipping())
                newTypedef(currentSpec, currentModule, yyvsp[-2].text, &yyvsp[-3].memArg, &yyvsp[-1].optflags);
        }
    break;

  case 182:
#line 1346 "parser.y"
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

  case 183:
#line 1369 "parser.y"
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

  case 184:
#line 1378 "parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = completeClass(yyvsp[-5].scpvalp, &yyvsp[-2].optflags, yyvsp[-1].boolean);

                if (currentSpec -> genc && cd->supers != NULL)
                    yyerror("Super-classes not allowed in a C module struct");
            }
        }
    break;

  case 185:
#line 1389 "parser.y"
    {currentIsTemplate = TRUE;}
    break;

  case 186:
#line 1389 "parser.y"
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

  case 187:
#line 1416 "parser.y"
    {
            yyval.signature = yyvsp[-1].signature;
        }
    break;

  case 188:
#line 1421 "parser.y"
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

  case 189:
#line 1430 "parser.y"
    {
            if (notSkipping())
                yyval.klass = completeClass(yyvsp[-5].scpvalp, &yyvsp[-2].optflags, yyvsp[-1].boolean);
        }
    break;

  case 194:
#line 1444 "parser.y"
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

  case 195:
#line 1483 "parser.y"
    {
            yyval.boolean = FALSE;
        }
    break;

  case 196:
#line 1486 "parser.y"
    {
            yyval.boolean = TRUE;
        }
    break;

  case 207:
#line 1503 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->cppcode, yyvsp[0].codeb);
        }
    break;

  case 208:
#line 1507 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->iff->hdrcode, yyvsp[0].codeb);
        }
    break;

  case 209:
#line 1511 "parser.y"
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

  case 210:
#line 1522 "parser.y"
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

  case 211:
#line 1533 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->getbufcode != NULL)
                    yyerror("%BIGetBufferCode already given for class");

                scope->getbufcode = yyvsp[0].codeb;
            }
        }
    break;

  case 212:
#line 1544 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->releasebufcode != NULL)
                    yyerror("%BIReleaseBufferCode already given for class");

                scope->releasebufcode = yyvsp[0].codeb;
            }
        }
    break;

  case 213:
#line 1555 "parser.y"
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

  case 214:
#line 1566 "parser.y"
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

  case 215:
#line 1577 "parser.y"
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

  case 216:
#line 1588 "parser.y"
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

  case 217:
#line 1599 "parser.y"
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

  case 221:
#line 1613 "parser.y"
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

  case 222:
#line 1624 "parser.y"
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

  case 223:
#line 1635 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("public section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PUBLIC | yyvsp[-1].number;
        }
    break;

  case 224:
#line 1642 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("protected section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PROT | yyvsp[-1].number;
        }
    break;

  case 225:
#line 1649 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("private section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PRIVATE | yyvsp[-1].number;
        }
    break;

  case 226:
#line 1656 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("signals section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_SIGNAL;
        }
    break;

  case 227:
#line 1665 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 228:
#line 1668 "parser.y"
    {
            yyval.number = SECT_IS_SLOT;
        }
    break;

  case 229:
#line 1673 "parser.y"
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

  case 230:
#line 1722 "parser.y"
    {currentCtorIsExplicit = TRUE;}
    break;

  case 233:
#line 1726 "parser.y"
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

  case 234:
#line 1752 "parser.y"
    {
            yyval.optsignature = NULL;
        }
    break;

  case 235:
#line 1755 "parser.y"
    {
            yyval.optsignature = sipMalloc(sizeof (signatureDef));

            *yyval.optsignature = yyvsp[-2].signature;
        }
    break;

  case 236:
#line 1762 "parser.y"
    {
            yyval.optsignature = NULL;
        }
    break;

  case 237:
#line 1765 "parser.y"
    {
            yyval.optsignature = sipMalloc(sizeof (signatureDef));

            *yyval.optsignature = yyvsp[-2].signature;
            yyval.optsignature -> result = yyvsp[-4].memArg;
        }
    break;

  case 238:
#line 1773 "parser.y"
    {
            yyval.number = FALSE;
        }
    break;

  case 239:
#line 1776 "parser.y"
    {
            yyval.number = TRUE;
        }
    break;

  case 240:
#line 1781 "parser.y"
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

  case 241:
#line 1798 "parser.y"
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

  case 242:
#line 1823 "parser.y"
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

  case 243:
#line 1899 "parser.y"
    {yyval.text = "__add__";}
    break;

  case 244:
#line 1900 "parser.y"
    {yyval.text = "__sub__";}
    break;

  case 245:
#line 1901 "parser.y"
    {yyval.text = "__mul__";}
    break;

  case 246:
#line 1902 "parser.y"
    {yyval.text = "__div__";}
    break;

  case 247:
#line 1903 "parser.y"
    {yyval.text = "__mod__";}
    break;

  case 248:
#line 1904 "parser.y"
    {yyval.text = "__and__";}
    break;

  case 249:
#line 1905 "parser.y"
    {yyval.text = "__or__";}
    break;

  case 250:
#line 1906 "parser.y"
    {yyval.text = "__xor__";}
    break;

  case 251:
#line 1907 "parser.y"
    {yyval.text = "__lshift__";}
    break;

  case 252:
#line 1908 "parser.y"
    {yyval.text = "__rshift__";}
    break;

  case 253:
#line 1909 "parser.y"
    {yyval.text = "__iadd__";}
    break;

  case 254:
#line 1910 "parser.y"
    {yyval.text = "__isub__";}
    break;

  case 255:
#line 1911 "parser.y"
    {yyval.text = "__imul__";}
    break;

  case 256:
#line 1912 "parser.y"
    {yyval.text = "__idiv__";}
    break;

  case 257:
#line 1913 "parser.y"
    {yyval.text = "__imod__";}
    break;

  case 258:
#line 1914 "parser.y"
    {yyval.text = "__iand__";}
    break;

  case 259:
#line 1915 "parser.y"
    {yyval.text = "__ior__";}
    break;

  case 260:
#line 1916 "parser.y"
    {yyval.text = "__ixor__";}
    break;

  case 261:
#line 1917 "parser.y"
    {yyval.text = "__ilshift__";}
    break;

  case 262:
#line 1918 "parser.y"
    {yyval.text = "__irshift__";}
    break;

  case 263:
#line 1919 "parser.y"
    {yyval.text = "__invert__";}
    break;

  case 264:
#line 1920 "parser.y"
    {yyval.text = "__call__";}
    break;

  case 265:
#line 1921 "parser.y"
    {yyval.text = "__getitem__";}
    break;

  case 266:
#line 1922 "parser.y"
    {yyval.text = "__lt__";}
    break;

  case 267:
#line 1923 "parser.y"
    {yyval.text = "__le__";}
    break;

  case 268:
#line 1924 "parser.y"
    {yyval.text = "__eq__";}
    break;

  case 269:
#line 1925 "parser.y"
    {yyval.text = "__ne__";}
    break;

  case 270:
#line 1926 "parser.y"
    {yyval.text = "__gt__";}
    break;

  case 271:
#line 1927 "parser.y"
    {yyval.text = "__ge__";}
    break;

  case 272:
#line 1930 "parser.y"
    {
            yyval.number = FALSE;
        }
    break;

  case 273:
#line 1933 "parser.y"
    {
            yyval.number = TRUE;
        }
    break;

  case 274:
#line 1938 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 275:
#line 1941 "parser.y"
    {
            if (yyvsp[0].number != 0)
                yyerror("Abstract virtual function '= 0' expected");

            yyval.number = TRUE;
        }
    break;

  case 276:
#line 1949 "parser.y"
    {
            yyval.optflags.nrFlags = 0;
        }
    break;

  case 277:
#line 1952 "parser.y"
    {
            yyval.optflags = yyvsp[-1].optflags;
        }
    break;

  case 278:
#line 1958 "parser.y"
    {
            yyval.optflags.flags[0] = yyvsp[0].flag;
            yyval.optflags.nrFlags = 1;
        }
    break;

  case 279:
#line 1962 "parser.y"
    {
            /* Check there is room. */

            if (yyvsp[-2].optflags.nrFlags == MAX_NR_FLAGS)
                yyerror("Too many optional flags");

            yyval.optflags = yyvsp[-2].optflags;

            yyval.optflags.flags[yyval.optflags.nrFlags++] = yyvsp[0].flag;
        }
    break;

  case 280:
#line 1974 "parser.y"
    {
            yyval.flag.ftype = bool_flag;
            yyval.flag.fname = yyvsp[0].text;
        }
    break;

  case 281:
#line 1978 "parser.y"
    {
            yyval.flag = yyvsp[0].flag;
            yyval.flag.fname = yyvsp[-2].text;
        }
    break;

  case 282:
#line 1984 "parser.y"
    {
            yyval.flag.ftype = (strchr(yyvsp[0].text, '.') != NULL) ? dotted_name_flag : name_flag;
            yyval.flag.fvalue.sval = yyvsp[0].text;
        }
    break;

  case 283:
#line 1988 "parser.y"
    {
            yyval.flag.ftype = string_flag;
            yyval.flag.fvalue.sval = yyvsp[0].text;
        }
    break;

  case 284:
#line 1992 "parser.y"
    {
            yyval.flag.ftype = integer_flag;
            yyval.flag.fvalue.ival = yyvsp[0].number;
        }
    break;

  case 285:
#line 1998 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 286:
#line 2001 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 287:
#line 2006 "parser.y"
    {
            yyval.codeb = NULL;
        }
    break;

  case 288:
#line 2009 "parser.y"
    {
            yyval.codeb = yyvsp[0].codeb;
        }
    break;

  case 289:
#line 2014 "parser.y"
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

  case 290:
#line 2062 "parser.y"
    {
            /* No arguments. */

            yyval.signature.nrArgs = 0;
        }
    break;

  case 291:
#line 2067 "parser.y"
    {
            /* The single or first argument. */

            yyval.signature.args[0] = yyvsp[0].memArg;
            yyval.signature.nrArgs = 1;
        }
    break;

  case 292:
#line 2073 "parser.y"
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

  case 293:
#line 2100 "parser.y"
    {
            yyval.memArg.atype = signal_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-2].text;
            yyval.memArg.defval = yyvsp[0].valp;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 294:
#line 2109 "parser.y"
    {
            yyval.memArg.atype = slot_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-2].text;
            yyval.memArg.defval = yyvsp[0].valp;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 295:
#line 2118 "parser.y"
    {
            yyval.memArg.atype = anyslot_type;
            yyval.memArg.argflags = ARG_IS_CONST;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-2].text;
            yyval.memArg.defval = yyvsp[0].valp;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 296:
#line 2127 "parser.y"
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

  case 297:
#line 2138 "parser.y"
    {
            yyval.memArg.atype = rxdis_type;
            yyval.memArg.argflags = 0;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-1].text;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 298:
#line 2146 "parser.y"
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

  case 299:
#line 2161 "parser.y"
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

  case 300:
#line 2176 "parser.y"
    {
            yyval.memArg.atype = qobject_type;
            yyval.memArg.argflags = 0;
            yyval.memArg.nrderefs = 0;
            yyval.memArg.name = yyvsp[-1].text;
        }
    break;

  case 301:
#line 2182 "parser.y"
    {
            yyval.memArg = yyvsp[-1].memArg;
            yyval.memArg.defval = yyvsp[0].valp;
        }
    break;

  case 302:
#line 2188 "parser.y"
    {currentIsStatic = TRUE;}
    break;

  case 307:
#line 2196 "parser.y"
    {currentOverIsVirt = TRUE;}
    break;

  case 310:
#line 2200 "parser.y"
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

  case 311:
#line 2233 "parser.y"
    {
            yyval.memArg = yyvsp[-2].memArg;
            yyval.memArg.nrderefs += yyvsp[-1].number;
            yyval.memArg.argflags |= ARG_IS_CONST | yyvsp[0].number;
            yyval.memArg.name = NULL;
        }
    break;

  case 312:
#line 2239 "parser.y"
    {
            yyval.memArg = yyvsp[-2].memArg;
            yyval.memArg.nrderefs += yyvsp[-1].number;
            yyval.memArg.argflags |= yyvsp[0].number;
            yyval.memArg.name = NULL;
        }
    break;

  case 313:
#line 2247 "parser.y"
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

            if (findOptFlag(&yyvsp[0].optflags, "KeepReference", bool_flag) != NULL)
            {
                /* The wrapper is needed. */
                yyval.memArg.argflags |= ARG_GET_WRAPPER;
                yyval.memArg.key = currentModule->next_key++;
            }

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

  case 314:
#line 2314 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 315:
#line 2317 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("References not allowed in a C module");

            yyval.number = ARG_IS_REF;
        }
    break;

  case 316:
#line 2325 "parser.y"
    {
            yyval.number = 0;
        }
    break;

  case 317:
#line 2328 "parser.y"
    {
            yyval.number = yyvsp[-1].number + 1;
        }
    break;

  case 318:
#line 2333 "parser.y"
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

  case 319:
#line 2344 "parser.y"
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

  case 320:
#line 2358 "parser.y"
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

  case 321:
#line 2375 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ushort_type;
        }
    break;

  case 322:
#line 2382 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = short_type;
        }
    break;

  case 323:
#line 2389 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = uint_type;
        }
    break;

  case 324:
#line 2396 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = uint_type;
        }
    break;

  case 325:
#line 2403 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = int_type;
        }
    break;

  case 326:
#line 2410 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = long_type;
        }
    break;

  case 327:
#line 2417 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ulong_type;
        }
    break;

  case 328:
#line 2424 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = longlong_type;
        }
    break;

  case 329:
#line 2431 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ulonglong_type;
        }
    break;

  case 330:
#line 2438 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = float_type;
        }
    break;

  case 331:
#line 2445 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = double_type;
        }
    break;

  case 332:
#line 2452 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = bool_type;
        }
    break;

  case 333:
#line 2459 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = sstring_type;
        }
    break;

  case 334:
#line 2466 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ustring_type;
        }
    break;

  case 335:
#line 2473 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = string_type;
        }
    break;

  case 336:
#line 2480 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = wstring_type;
        }
    break;

  case 337:
#line 2487 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = void_type;
        }
    break;

  case 338:
#line 2494 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pyobject_type;
        }
    break;

  case 339:
#line 2501 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pytuple_type;
        }
    break;

  case 340:
#line 2508 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pylist_type;
        }
    break;

  case 341:
#line 2515 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pydict_type;
        }
    break;

  case 342:
#line 2522 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pycallable_type;
        }
    break;

  case 343:
#line 2529 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pyslice_type;
        }
    break;

  case 344:
#line 2536 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = pytype_type;
        }
    break;

  case 345:
#line 2543 "parser.y"
    {
            yyval.memArg.nrderefs = 0;
            yyval.memArg.argflags = 0;
            yyval.memArg.original_type = NULL;

            yyval.memArg.atype = ellipsis_type;
        }
    break;

  case 346:
#line 2552 "parser.y"
    {
            /* The single or first type. */

            yyval.signature.args[0] = yyvsp[0].memArg;
            yyval.signature.nrArgs = 1;
        }
    break;

  case 347:
#line 2558 "parser.y"
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

  case 348:
#line 2574 "parser.y"
    {
            yyval.throwlist = NULL;
        }
    break;

  case 349:
#line 2577 "parser.y"
    {
            if (currentSpec->genc)
                yyerror("Exceptions not allowed in a C module");

            yyval.throwlist = yyvsp[-1].throwlist;
        }
    break;

  case 350:
#line 2585 "parser.y"
    {
            /* Empty list so use a blank. */

            yyval.throwlist = sipMalloc(sizeof (throwArgs));
            yyval.throwlist -> nrArgs = 0;
        }
    break;

  case 351:
#line 2591 "parser.y"
    {
            /* The only or first exception. */

            yyval.throwlist = sipMalloc(sizeof (throwArgs));
            yyval.throwlist -> nrArgs = 1;
            yyval.throwlist -> args[0] = findException(currentSpec, yyvsp[0].scpvalp, FALSE);
        }
    break;

  case 352:
#line 2598 "parser.y"
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
#line 5022 "parser.c"

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


#line 2614 "parser.y"



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
    newmod->next_key = 1;

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
    cd->getbufcode = templateCode(pt, used, cd->getbufcode, type_names, type_values);
    cd->releasebufcode = templateCode(pt, used, cd->releasebufcode, type_names, type_values);
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

