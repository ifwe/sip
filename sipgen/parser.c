/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

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
     TK_DEFENCODING = 258,
     TK_PLUGIN = 259,
     TK_DOC = 260,
     TK_EXPORTEDDOC = 261,
     TK_MAKEFILE = 262,
     TK_ACCESSCODE = 263,
     TK_GETCODE = 264,
     TK_SETCODE = 265,
     TK_PREINITCODE = 266,
     TK_INITCODE = 267,
     TK_POSTINITCODE = 268,
     TK_UNITCODE = 269,
     TK_MODCODE = 270,
     TK_TYPECODE = 271,
     TK_PREPYCODE = 272,
     TK_COPYING = 273,
     TK_MAPPEDTYPE = 274,
     TK_CODELINE = 275,
     TK_IF = 276,
     TK_END = 277,
     TK_NAME = 278,
     TK_PATHNAME = 279,
     TK_STRING = 280,
     TK_VIRTUALCATCHERCODE = 281,
     TK_TRAVERSECODE = 282,
     TK_CLEARCODE = 283,
     TK_GETBUFFERCODE = 284,
     TK_RELEASEBUFFERCODE = 285,
     TK_READBUFFERCODE = 286,
     TK_WRITEBUFFERCODE = 287,
     TK_SEGCOUNTCODE = 288,
     TK_CHARBUFFERCODE = 289,
     TK_PICKLECODE = 290,
     TK_METHODCODE = 291,
     TK_FROMTYPE = 292,
     TK_TOTYPE = 293,
     TK_TOSUBCLASS = 294,
     TK_INCLUDE = 295,
     TK_OPTINCLUDE = 296,
     TK_IMPORT = 297,
     TK_EXPHEADERCODE = 298,
     TK_MODHEADERCODE = 299,
     TK_TYPEHEADERCODE = 300,
     TK_MODULE = 301,
     TK_CMODULE = 302,
     TK_CONSMODULE = 303,
     TK_COMPOMODULE = 304,
     TK_CLASS = 305,
     TK_STRUCT = 306,
     TK_PUBLIC = 307,
     TK_PROTECTED = 308,
     TK_PRIVATE = 309,
     TK_SIGNALS = 310,
     TK_SLOTS = 311,
     TK_BOOL = 312,
     TK_SHORT = 313,
     TK_INT = 314,
     TK_LONG = 315,
     TK_FLOAT = 316,
     TK_DOUBLE = 317,
     TK_CHAR = 318,
     TK_WCHAR_T = 319,
     TK_VOID = 320,
     TK_PYOBJECT = 321,
     TK_PYTUPLE = 322,
     TK_PYLIST = 323,
     TK_PYDICT = 324,
     TK_PYCALLABLE = 325,
     TK_PYSLICE = 326,
     TK_PYTYPE = 327,
     TK_VIRTUAL = 328,
     TK_ENUM = 329,
     TK_SIGNED = 330,
     TK_UNSIGNED = 331,
     TK_SCOPE = 332,
     TK_LOGICAL_OR = 333,
     TK_CONST = 334,
     TK_STATIC = 335,
     TK_SIPSIGNAL = 336,
     TK_SIPSLOT = 337,
     TK_SIPANYSLOT = 338,
     TK_SIPRXCON = 339,
     TK_SIPRXDIS = 340,
     TK_SIPSLOTCON = 341,
     TK_SIPSLOTDIS = 342,
     TK_NUMBER = 343,
     TK_REAL = 344,
     TK_TYPEDEF = 345,
     TK_NAMESPACE = 346,
     TK_TIMELINE = 347,
     TK_PLATFORMS = 348,
     TK_FEATURE = 349,
     TK_LICENSE = 350,
     TK_QCHAR = 351,
     TK_TRUE = 352,
     TK_FALSE = 353,
     TK_NULL = 354,
     TK_OPERATOR = 355,
     TK_THROW = 356,
     TK_QOBJECT = 357,
     TK_EXCEPTION = 358,
     TK_RAISECODE = 359,
     TK_EXPLICIT = 360,
     TK_TEMPLATE = 361,
     TK_ELLIPSIS = 362,
     TK_DEFMETATYPE = 363,
     TK_DEFSUPERTYPE = 364
   };
#endif
/* Tokens.  */
#define TK_DEFENCODING 258
#define TK_PLUGIN 259
#define TK_DOC 260
#define TK_EXPORTEDDOC 261
#define TK_MAKEFILE 262
#define TK_ACCESSCODE 263
#define TK_GETCODE 264
#define TK_SETCODE 265
#define TK_PREINITCODE 266
#define TK_INITCODE 267
#define TK_POSTINITCODE 268
#define TK_UNITCODE 269
#define TK_MODCODE 270
#define TK_TYPECODE 271
#define TK_PREPYCODE 272
#define TK_COPYING 273
#define TK_MAPPEDTYPE 274
#define TK_CODELINE 275
#define TK_IF 276
#define TK_END 277
#define TK_NAME 278
#define TK_PATHNAME 279
#define TK_STRING 280
#define TK_VIRTUALCATCHERCODE 281
#define TK_TRAVERSECODE 282
#define TK_CLEARCODE 283
#define TK_GETBUFFERCODE 284
#define TK_RELEASEBUFFERCODE 285
#define TK_READBUFFERCODE 286
#define TK_WRITEBUFFERCODE 287
#define TK_SEGCOUNTCODE 288
#define TK_CHARBUFFERCODE 289
#define TK_PICKLECODE 290
#define TK_METHODCODE 291
#define TK_FROMTYPE 292
#define TK_TOTYPE 293
#define TK_TOSUBCLASS 294
#define TK_INCLUDE 295
#define TK_OPTINCLUDE 296
#define TK_IMPORT 297
#define TK_EXPHEADERCODE 298
#define TK_MODHEADERCODE 299
#define TK_TYPEHEADERCODE 300
#define TK_MODULE 301
#define TK_CMODULE 302
#define TK_CONSMODULE 303
#define TK_COMPOMODULE 304
#define TK_CLASS 305
#define TK_STRUCT 306
#define TK_PUBLIC 307
#define TK_PROTECTED 308
#define TK_PRIVATE 309
#define TK_SIGNALS 310
#define TK_SLOTS 311
#define TK_BOOL 312
#define TK_SHORT 313
#define TK_INT 314
#define TK_LONG 315
#define TK_FLOAT 316
#define TK_DOUBLE 317
#define TK_CHAR 318
#define TK_WCHAR_T 319
#define TK_VOID 320
#define TK_PYOBJECT 321
#define TK_PYTUPLE 322
#define TK_PYLIST 323
#define TK_PYDICT 324
#define TK_PYCALLABLE 325
#define TK_PYSLICE 326
#define TK_PYTYPE 327
#define TK_VIRTUAL 328
#define TK_ENUM 329
#define TK_SIGNED 330
#define TK_UNSIGNED 331
#define TK_SCOPE 332
#define TK_LOGICAL_OR 333
#define TK_CONST 334
#define TK_STATIC 335
#define TK_SIPSIGNAL 336
#define TK_SIPSLOT 337
#define TK_SIPANYSLOT 338
#define TK_SIPRXCON 339
#define TK_SIPRXDIS 340
#define TK_SIPSLOTCON 341
#define TK_SIPSLOTDIS 342
#define TK_NUMBER 343
#define TK_REAL 344
#define TK_TYPEDEF 345
#define TK_NAMESPACE 346
#define TK_TIMELINE 347
#define TK_PLATFORMS 348
#define TK_FEATURE 349
#define TK_LICENSE 350
#define TK_QCHAR 351
#define TK_TRUE 352
#define TK_FALSE 353
#define TK_NULL 354
#define TK_OPERATOR 355
#define TK_THROW 356
#define TK_QOBJECT 357
#define TK_EXCEPTION 358
#define TK_RAISECODE 359
#define TK_EXPLICIT 360
#define TK_TEMPLATE 361
#define TK_ELLIPSIS 362
#define TK_DEFMETATYPE 363
#define TK_DEFSUPERTYPE 364




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
void addVariable(sipSpec *pt, varDef *vd);
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags);
static argType convertEncoding(const char *encoding);


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 123 "parser.y"
{
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
}
/* Line 187 of yacc.c.  */
#line 443 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 456 "parser.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1083

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  132
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  354
/* YYNRULES -- Number of states.  */
#define YYNSTATES  593

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   364

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   115,     2,     2,     2,   130,   122,     2,
     113,   114,   120,   119,   117,   116,     2,   121,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   127,   112,
     125,   118,   126,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   128,     2,   129,   131,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   110,   123,   111,   124,     2,     2,     2,
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
     105,   106,   107,   108,   109
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    97,   100,
     110,   111,   115,   118,   119,   125,   126,   132,   137,   139,
     142,   144,   147,   150,   151,   159,   161,   164,   165,   171,
     173,   176,   178,   181,   182,   188,   190,   193,   195,   200,
     202,   205,   209,   214,   216,   220,   222,   225,   228,   231,
     234,   237,   241,   243,   245,   247,   249,   250,   252,   255,
     258,   261,   262,   265,   266,   269,   270,   273,   276,   279,
     282,   285,   286,   288,   291,   294,   297,   300,   303,   306,
     309,   312,   315,   318,   321,   324,   327,   330,   333,   336,
     339,   342,   347,   350,   352,   355,   356,   365,   366,   368,
     369,   371,   372,   374,   376,   379,   381,   383,   388,   389,
     391,   392,   395,   396,   399,   401,   405,   407,   409,   411,
     413,   415,   417,   418,   420,   422,   424,   426,   429,   431,
     435,   437,   439,   444,   446,   448,   450,   452,   454,   456,
     458,   459,   461,   465,   471,   483,   484,   492,   493,   497,
     502,   503,   511,   512,   515,   517,   521,   523,   524,   528,
     530,   533,   535,   537,   539,   541,   543,   545,   547,   549,
     551,   553,   555,   557,   559,   561,   563,   565,   567,   569,
     571,   573,   575,   577,   580,   583,   587,   591,   595,   598,
     599,   601,   613,   614,   618,   620,   630,   631,   637,   638,
     645,   646,   648,   662,   677,   691,   693,   695,   697,   699,
     701,   703,   705,   707,   710,   713,   716,   719,   722,   725,
     728,   731,   734,   737,   741,   745,   747,   750,   753,   755,
     758,   761,   764,   766,   769,   770,   772,   773,   776,   777,
     781,   783,   787,   789,   793,   795,   797,   799,   800,   803,
     804,   807,   809,   810,   812,   816,   821,   826,   831,   835,
     839,   846,   853,   857,   860,   861,   865,   867,   869,   871,
     872,   876,   878,   886,   891,   895,   899,   900,   902,   903,
     906,   908,   913,   916,   919,   921,   923,   926,   928,   930,
     933,   936,   940,   942,   944,   946,   949,   952,   954,   956,
     958,   960,   962,   964,   966,   968,   970,   972,   974,   976,
     980,   981,   986,   987,   989
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     133,     0,    -1,   134,    -1,   133,   134,    -1,    -1,   135,
     136,    -1,   171,    -1,   169,    -1,   170,    -1,   139,    -1,
     181,    -1,   175,    -1,   176,    -1,   177,    -1,   158,    -1,
     153,    -1,   157,    -1,   166,    -1,   138,    -1,   167,    -1,
     168,    -1,   182,    -1,   183,    -1,   195,    -1,   197,    -1,
     198,    -1,   199,    -1,   200,    -1,   201,    -1,   202,    -1,
     203,    -1,   204,    -1,   143,    -1,   145,    -1,   137,    -1,
     162,    -1,   165,    -1,   150,    -1,   226,    -1,   231,    -1,
     228,    -1,   140,    -1,   225,    -1,   207,    -1,   247,    -1,
     265,    -1,   184,    -1,     3,    25,    -1,     4,    23,    -1,
     103,   221,   141,   251,   110,   185,   142,   111,   112,    -1,
      -1,   113,   221,   114,    -1,   104,   205,    -1,    -1,    19,
     270,   251,   144,   147,    -1,    -1,   230,    19,   270,   146,
     147,    -1,   110,   148,   111,   112,    -1,   149,    -1,   148,
     149,    -1,   184,    -1,    37,   205,    -1,    38,   205,    -1,
      -1,    91,    23,   151,   110,   152,   111,   112,    -1,   137,
      -1,   152,   137,    -1,    -1,    93,   154,   110,   155,   111,
      -1,   156,    -1,   155,   156,    -1,    23,    -1,    94,    23,
      -1,    -1,    92,   159,   110,   160,   111,    -1,   161,    -1,
     160,   161,    -1,    23,    -1,    21,   113,   164,   114,    -1,
      23,    -1,   115,    23,    -1,   163,    78,    23,    -1,   163,
      78,   115,    23,    -1,   163,    -1,   210,   116,   210,    -1,
      22,    -1,    95,   251,    -1,   108,   173,    -1,   109,   173,
      -1,    48,   173,    -1,    49,   173,    -1,   172,   173,   174,
      -1,    46,    -1,    47,    -1,    23,    -1,    24,    -1,    -1,
      88,    -1,    40,    24,    -1,    41,    24,    -1,    42,    24,
      -1,    -1,     8,   205,    -1,    -1,     9,   205,    -1,    -1,
      10,   205,    -1,    18,   205,    -1,    43,   205,    -1,    44,
     205,    -1,    45,   205,    -1,    -1,   184,    -1,    27,   205,
      -1,    28,   205,    -1,    29,   205,    -1,    30,   205,    -1,
      31,   205,    -1,    32,   205,    -1,    33,   205,    -1,    34,
     205,    -1,    35,   205,    -1,    15,   205,    -1,    16,   205,
      -1,    11,   205,    -1,    12,   205,    -1,    13,   205,    -1,
      14,   205,    -1,    17,   205,    -1,     5,   205,    -1,     6,
     205,    -1,     7,    24,   209,   205,    -1,   206,    22,    -1,
      20,    -1,   206,    20,    -1,    -1,    74,   210,   251,   208,
     110,   211,   111,   112,    -1,    -1,    24,    -1,    -1,    23,
      -1,    -1,   212,    -1,   213,    -1,   212,   213,    -1,   162,
      -1,   165,    -1,    23,   215,   251,   214,    -1,    -1,   117,
      -1,    -1,   118,   220,    -1,    -1,   118,   217,    -1,   220,
      -1,   217,   218,   220,    -1,   116,    -1,   119,    -1,   120,
      -1,   121,    -1,   122,    -1,   123,    -1,    -1,   115,    -1,
     124,    -1,   116,    -1,   119,    -1,   219,   223,    -1,   222,
      -1,   221,    77,   222,    -1,    23,    -1,   221,    -1,   270,
     113,   224,   114,    -1,    89,    -1,    88,    -1,    97,    -1,
      98,    -1,    99,    -1,    25,    -1,    96,    -1,    -1,   217,
      -1,   224,   117,   217,    -1,    90,   266,    23,   251,   112,
      -1,    90,   266,   113,   269,    23,   114,   113,   271,   114,
     251,   112,    -1,    -1,    51,   221,   227,   233,   251,   236,
     112,    -1,    -1,   230,   229,   231,    -1,   106,   125,   271,
     126,    -1,    -1,    50,   221,   232,   233,   251,   236,   112,
      -1,    -1,   127,   234,    -1,   235,    -1,   234,   117,   235,
      -1,   221,    -1,    -1,   110,   237,   111,    -1,   238,    -1,
     237,   238,    -1,   162,    -1,   165,    -1,   150,    -1,   226,
      -1,   231,    -1,   140,    -1,   225,    -1,   207,    -1,   196,
      -1,   184,    -1,   186,    -1,   187,    -1,   188,    -1,   189,
      -1,   190,    -1,   191,    -1,   192,    -1,   193,    -1,   194,
      -1,   241,    -1,   240,    -1,   260,    -1,    39,   205,    -1,
      38,   205,    -1,    52,   239,   127,    -1,    53,   239,   127,
      -1,    54,   239,   127,    -1,    55,   127,    -1,    -1,    56,
      -1,   246,   124,    23,   113,   114,   272,   250,   251,   112,
     255,   256,    -1,    -1,   105,   242,   243,    -1,   243,    -1,
      23,   113,   257,   114,   272,   251,   244,   112,   255,    -1,
      -1,   128,   113,   257,   114,   129,    -1,    -1,   128,   266,
     113,   257,   114,   129,    -1,    -1,    73,    -1,   266,    23,
     113,   257,   114,   249,   272,   250,   251,   245,   112,   255,
     256,    -1,   266,   100,   248,   113,   257,   114,   249,   272,
     250,   251,   245,   112,   255,   256,    -1,   100,   266,   113,
     257,   114,   249,   272,   250,   251,   245,   112,   255,   256,
      -1,   119,    -1,   116,    -1,   120,    -1,   121,    -1,   130,
      -1,   122,    -1,   123,    -1,   131,    -1,   125,   125,    -1,
     126,   126,    -1,   119,   118,    -1,   116,   118,    -1,   120,
     118,    -1,   121,   118,    -1,   130,   118,    -1,   122,   118,
      -1,   123,   118,    -1,   131,   118,    -1,   125,   125,   118,
      -1,   126,   126,   118,    -1,   124,    -1,   113,   114,    -1,
     128,   129,    -1,   125,    -1,   125,   118,    -1,   118,   118,
      -1,   115,   118,    -1,   126,    -1,   126,   118,    -1,    -1,
      79,    -1,    -1,   118,    88,    -1,    -1,   121,   252,   121,
      -1,   253,    -1,   252,   117,   253,    -1,    23,    -1,    23,
     118,   254,    -1,   173,    -1,    25,    -1,    88,    -1,    -1,
      36,   205,    -1,    -1,    26,   205,    -1,   258,    -1,    -1,
     259,    -1,   258,   117,   259,    -1,    81,   210,   251,   216,
      -1,    82,   210,   251,   216,    -1,    83,   210,   251,   216,
      -1,    84,   210,   251,    -1,    85,   210,   251,    -1,    86,
     113,   257,   114,   210,   251,    -1,    87,   113,   257,   114,
     210,   251,    -1,   102,   210,   251,    -1,   267,   216,    -1,
      -1,    80,   261,   262,    -1,   262,    -1,   263,    -1,   265,
      -1,    -1,    73,   264,   247,    -1,   247,    -1,   266,    23,
     251,   112,   178,   179,   180,    -1,    79,   270,   269,   268,
      -1,   270,   269,   268,    -1,   266,   210,   251,    -1,    -1,
     122,    -1,    -1,   269,   120,    -1,   221,    -1,   221,   125,
     271,   126,    -1,    51,   221,    -1,    76,    58,    -1,    58,
      -1,    76,    -1,    76,    59,    -1,    59,    -1,    60,    -1,
      76,    60,    -1,    60,    60,    -1,    76,    60,    60,    -1,
      61,    -1,    62,    -1,    57,    -1,    75,    63,    -1,    76,
      63,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,   107,    -1,   266,    -1,   271,   117,   266,    -1,
      -1,   101,   113,   273,   114,    -1,    -1,   221,    -1,   273,
     117,   221,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   320,   320,   321,   324,   324,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   362,   366,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   407,   416,   421,
     456,   460,   534,   539,   539,   545,   545,   594,   608,   609,
     612,   616,   625,   636,   636,   667,   668,   671,   671,   698,
     699,   702,   707,   712,   712,   737,   738,   741,   746,   759,
     762,   765,   768,   773,   774,   779,   785,   812,   823,   834,
     847,   860,   893,   896,   901,   902,   918,   921,   924,   929,
     934,   939,   942,   947,   950,   955,   958,   963,   968,   973,
     978,   983,   986,   989,   994,   999,  1004,  1009,  1014,  1019,
    1024,  1029,  1034,  1039,  1044,  1050,  1056,  1062,  1068,  1077,
    1083,  1088,  1094,  1097,  1098,  1109,  1109,  1120,  1123,  1128,
    1131,  1136,  1137,  1140,  1141,  1144,  1145,  1146,  1173,  1174,
    1177,  1178,  1181,  1184,  1189,  1190,  1208,  1211,  1214,  1217,
    1220,  1223,  1228,  1231,  1234,  1237,  1240,  1245,  1263,  1264,
    1272,  1277,  1286,  1296,  1300,  1304,  1308,  1312,  1316,  1320,
    1326,  1331,  1337,  1355,  1362,  1387,  1387,  1407,  1407,  1434,
    1439,  1439,  1454,  1455,  1458,  1459,  1462,  1501,  1504,  1509,
    1510,  1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,
    1525,  1529,  1540,  1551,  1562,  1573,  1584,  1595,  1606,  1617,
    1628,  1629,  1630,  1631,  1642,  1653,  1660,  1667,  1674,  1683,
    1686,  1691,  1740,  1740,  1741,  1744,  1770,  1773,  1780,  1783,
    1791,  1794,  1799,  1818,  1845,  1923,  1924,  1925,  1926,  1927,
    1928,  1929,  1930,  1931,  1932,  1933,  1934,  1935,  1936,  1937,
    1938,  1939,  1940,  1941,  1942,  1943,  1944,  1945,  1946,  1947,
    1948,  1949,  1950,  1951,  1954,  1957,  1962,  1965,  1973,  1976,
    1982,  1986,  1998,  2002,  2008,  2012,  2016,  2022,  2025,  2030,
    2033,  2038,  2086,  2091,  2097,  2124,  2133,  2142,  2151,  2162,
    2170,  2185,  2200,  2206,  2212,  2212,  2213,  2216,  2217,  2220,
    2220,  2221,  2224,  2259,  2265,  2273,  2341,  2344,  2352,  2355,
    2360,  2371,  2385,  2402,  2409,  2416,  2423,  2430,  2437,  2444,
    2451,  2458,  2465,  2472,  2479,  2486,  2493,  2500,  2507,  2514,
    2521,  2528,  2535,  2542,  2549,  2556,  2563,  2570,  2579,  2585,
    2601,  2604,  2612,  2618,  2625
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_DEFENCODING", "TK_PLUGIN", "TK_DOC",
  "TK_EXPORTEDDOC", "TK_MAKEFILE", "TK_ACCESSCODE", "TK_GETCODE",
  "TK_SETCODE", "TK_PREINITCODE", "TK_INITCODE", "TK_POSTINITCODE",
  "TK_UNITCODE", "TK_MODCODE", "TK_TYPECODE", "TK_PREPYCODE", "TK_COPYING",
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
  "nsstatement", "defencoding", "plugin", "exception", "baseexception",
  "raisecode", "mappedtype", "@2", "mappedtypetmpl", "@3", "mtdefinition",
  "mtbody", "mtline", "namespace", "@4", "nsbody", "platforms", "@5",
  "platformlist", "platform", "feature", "timeline", "@6", "qualifierlist",
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
static const yytype_uint16 yytoknum[] =
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     123,   125,    59,    40,    41,    33,    45,    44,    61,    43,
      42,    47,    38,   124,   126,    60,    62,    58,    91,    93,
      37,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   132,   133,   133,   135,   134,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   138,   139,   140,
     141,   141,   142,   144,   143,   146,   145,   147,   148,   148,
     149,   149,   149,   151,   150,   152,   152,   154,   153,   155,
     155,   156,   157,   159,   158,   160,   160,   161,   162,   163,
     163,   163,   163,   164,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   172,   173,   173,   174,   174,   175,   176,
     177,   178,   178,   179,   179,   180,   180,   181,   182,   183,
     184,   185,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   206,   208,   207,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   213,   214,   214,
     215,   215,   216,   216,   217,   217,   218,   218,   218,   218,
     218,   218,   219,   219,   219,   219,   219,   220,   221,   221,
     222,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     224,   224,   224,   225,   225,   227,   226,   229,   228,   230,
     232,   231,   233,   233,   234,   234,   235,   236,   236,   237,
     237,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   239,
     239,   240,   242,   241,   241,   243,   244,   244,   245,   245,
     246,   246,   247,   247,   247,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   249,   249,   250,   250,   251,   251,
     252,   252,   253,   253,   254,   254,   254,   255,   255,   256,
     256,   257,   258,   258,   258,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   261,   260,   260,   262,   262,   264,
     263,   263,   265,   266,   266,   267,   268,   268,   269,   269,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   271,   271,
     272,   272,   273,   273,   273
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     9,
       0,     3,     2,     0,     5,     0,     5,     4,     1,     2,
       1,     2,     2,     0,     7,     1,     2,     0,     5,     1,
       2,     1,     2,     0,     5,     1,     2,     1,     4,     1,
       2,     3,     4,     1,     3,     1,     2,     2,     2,     2,
       2,     3,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     0,     2,     0,     2,     0,     2,     2,     2,     2,
       2,     0,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     2,     1,     2,     0,     8,     0,     1,     0,
       1,     0,     1,     1,     2,     1,     1,     4,     0,     1,
       0,     2,     0,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     2,     1,     3,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     3,     5,    11,     0,     7,     0,     3,     4,
       0,     7,     0,     2,     1,     3,     1,     0,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     3,     2,     0,
       1,    11,     0,     3,     1,     9,     0,     5,     0,     6,
       0,     1,    13,    14,    13,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     1,     2,     2,     1,     2,
       2,     2,     1,     2,     0,     1,     0,     2,     0,     3,
       1,     3,     1,     3,     1,     1,     1,     0,     2,     0,
       2,     1,     0,     1,     3,     4,     4,     4,     3,     3,
       6,     6,     3,     2,     0,     3,     1,     1,     1,     0,
       3,     1,     7,     4,     3,     3,     0,     1,     0,     2,
       1,     4,     2,     2,     1,     1,     2,     1,     1,     2,
       2,     3,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     4,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   170,     0,     0,     0,     0,     0,     0,    92,    93,
       0,     0,     0,     0,   334,   324,   327,   328,   332,   333,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     139,     0,   325,     0,     0,     0,    73,    67,     0,   278,
       0,     0,     0,   347,     0,     0,     5,    34,    18,     9,
      41,    32,    33,    37,    15,    16,    14,    35,    36,    17,
      19,    20,     7,     8,     6,     0,    11,    12,    13,    10,
      21,    22,    46,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    43,   320,   168,    42,    38,    40,   187,    39,
      44,    45,     0,   318,    47,    48,   133,   129,     0,   130,
     137,   124,   125,   126,   127,   122,   128,   107,     0,   278,
     139,    98,    99,   100,   108,   109,   110,    94,    95,    89,
      90,   190,   185,   330,   140,   278,   335,   323,   326,   329,
     336,   318,     0,    63,     0,     0,    72,     0,    86,     0,
      50,     0,    87,    88,    96,     0,     0,     0,     0,   278,
       0,   316,   134,   132,   138,     0,   322,    53,    79,     0,
      83,     0,     0,   192,   192,   135,   331,   316,   278,   318,
       0,     0,     0,   282,     0,   280,   292,     0,   278,   348,
       0,    97,    91,   169,     0,    55,   188,   292,     0,     0,
       0,   246,     0,   245,   247,   248,   250,   251,   265,   268,
     272,     0,   249,   252,     0,   319,   317,   314,   131,     0,
      80,     0,    78,   139,     0,   278,   278,     0,   313,     0,
       0,     0,    77,     0,    75,    71,     0,    69,     0,     0,
     279,   139,   139,   139,   139,   139,     0,     0,   139,     0,
     291,   293,   139,   152,     0,     0,     0,   189,   321,     0,
       0,   101,   266,   271,   256,   270,   255,   257,   258,   260,
     261,   269,   253,   273,   254,   267,   259,   262,   292,     0,
      54,    81,     0,    84,   196,   193,   194,   197,   197,   141,
     183,     0,    65,     0,   187,    74,    76,    68,    70,   285,
     286,   284,   283,   281,   278,   278,   278,   278,   278,   292,
     292,   278,   274,     0,   278,   162,   303,    51,   111,   349,
      56,   274,     0,   103,   263,   264,     0,     0,     0,     0,
      58,    60,    82,     0,   240,     0,     0,   150,   145,   146,
       0,   142,   143,     0,     0,    66,   152,   152,   152,   298,
     299,     0,     0,   302,   275,   350,   294,   315,   163,   165,
     166,   164,   153,     0,   154,   112,     0,   350,   102,     0,
     105,   274,    61,    62,     0,    59,   195,     0,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,   229,   229,     0,   309,   304,   232,   206,   203,   201,
     202,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   209,   208,   207,   204,   205,   240,   199,   221,   220,
     234,     0,   311,   222,   306,   307,   308,   191,   186,   162,
     278,     0,   144,     0,    64,   295,   296,   297,   139,   139,
       0,   276,   156,   157,   158,   159,   160,   161,   162,   178,
     174,   173,   179,   175,   176,   177,   171,   167,     0,     0,
       0,   276,   104,     0,   312,   350,    57,   123,   292,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   224,   223,
     230,     0,     0,     0,   228,     0,     0,     0,   198,   200,
       0,   151,   148,   136,     0,   278,   278,   352,     0,   278,
     155,   162,    52,     0,   278,   106,   276,     0,   225,   226,
     227,   310,     0,   309,   305,     0,   233,     0,   149,   147,
     278,   300,   301,   353,     0,   277,   238,   181,     0,    49,
     238,   278,   350,     0,     0,     0,   351,     0,     0,     0,
     172,   162,     0,   238,   278,   350,   184,   354,     0,   287,
     182,   287,     0,   236,   276,   292,     0,   289,   289,   287,
       0,     0,   278,     0,   288,     0,   244,   242,   289,   292,
     287,     0,     0,   290,   243,     0,   235,   287,   239,     0,
     289,   237,   231
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    66,    67,    68,    69,    70,   198,
     470,    71,   229,    72,   269,   290,   339,   340,    73,   190,
     303,    74,   155,   246,   247,    75,    76,   154,   243,   244,
      77,   180,   181,    78,    79,    80,    81,    82,    83,    84,
      85,   139,   202,    86,    87,    88,   333,   380,   474,    89,
      90,    91,    92,   376,   412,   413,   414,   415,   416,   417,
     418,   419,   420,    93,   421,    94,    95,    96,    97,    98,
      99,   100,   101,   117,   118,   102,   237,   175,   145,   350,
     351,   352,   529,   440,   326,   372,   458,   373,   374,   103,
     104,   467,   538,   105,   106,   184,   107,   168,   304,   109,
     183,   235,   295,   296,   345,   426,   427,   491,   428,   429,
     497,   430,   571,   549,   431,   110,   224,   365,   509,   158,
     194,   195,   312,   567,   576,   259,   260,   261,   433,   496,
     434,   435,   495,   111,   262,   263,   227,   171,   113,   200,
     451,   534
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -489
static const yytype_int16 yypact[] =
{
    -489,    66,  -489,   468,  -489,  -489,    65,    71,    95,    95,
     119,    95,    95,    95,    95,    95,    95,    95,   976,    37,
    -489,  -489,   133,   160,   162,    95,    95,    95,  -489,  -489,
     173,   173,   167,   167,  -489,  -489,  -489,   139,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
     185,   146,   214,   976,   950,   193,  -489,  -489,   196,   108,
     950,   167,   106,  -489,   173,   173,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,   173,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,   -28,  -489,  -489,  -489,  -489,   215,  -489,
    -489,  -489,    13,  -489,  -489,  -489,  -489,  -489,   153,  -489,
     211,  -489,  -489,  -489,  -489,  -489,  -489,  -489,   167,   108,
       5,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,   161,     9,  -489,  -489,   108,  -489,  -489,  -489,   177,
    -489,  -489,    11,  -489,   136,   137,  -489,   245,  -489,   156,
     -17,   950,  -489,  -489,   187,   167,   950,   976,   226,   -45,
     102,    61,  -489,  -489,  -489,    95,   161,  -489,   168,   260,
     207,   172,   171,   163,   163,  -489,  -489,    61,   108,  -489,
     178,   270,   272,   181,   -52,  -489,   764,   167,   108,  -489,
     -10,  -489,  -489,  -489,    23,  -489,  -489,   764,   184,   186,
     188,   189,   190,   192,   194,   195,   197,   198,  -489,   -15,
     -18,   174,   199,   200,   201,  -489,  -489,  -489,  -489,   209,
    -489,    10,  -489,   185,   167,   108,   108,   212,  -489,   213,
      -1,   710,  -489,    12,  -489,  -489,    16,  -489,    64,   245,
    -489,   185,   185,   185,   185,   185,   208,   217,   185,   210,
     218,  -489,   185,   216,   -16,   221,   950,  -489,  -489,   209,
     223,   296,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,   220,  -489,   225,  -489,  -489,  -489,   764,    25,
    -489,  -489,   282,  -489,   161,   219,  -489,   229,   229,   222,
    -489,   227,  -489,   191,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,   108,   108,   108,   108,   108,   764,
     764,   108,   230,   764,   108,    32,  -489,  -489,   266,  -489,
    -489,   230,    95,   318,  -489,  -489,   231,    95,    95,     3,
    -489,  -489,  -489,   167,   649,   228,   232,   233,  -489,  -489,
     235,   222,  -489,   234,   236,  -489,   216,   216,   216,  -489,
    -489,   238,   239,  -489,  -489,   248,  -489,  -489,  -489,  -489,
    -489,  -489,    72,   819,  -489,  -489,   250,   248,  -489,    95,
     345,   230,  -489,  -489,   244,  -489,  -489,    95,   246,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
     301,   301,   301,   237,   241,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,   557,  -489,  -489,  -489,
    -489,   243,  -489,  -489,  -489,  -489,  -489,  -489,  -489,    32,
     108,   249,  -489,   950,  -489,  -489,  -489,  -489,   185,   185,
     247,   240,  -489,  -489,  -489,  -489,  -489,  -489,    32,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,   -30,  -489,   255,    95,
     251,   240,  -489,    95,  -489,   248,  -489,  -489,   764,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,   242,   267,   269,  -489,   896,   870,   340,  -489,  -489,
     348,  -489,   256,  -489,    44,   108,   108,   167,   284,   108,
    -489,    63,  -489,   262,   108,  -489,   240,   261,  -489,  -489,
    -489,  -489,    28,  -489,  -489,   246,  -489,   263,  -489,  -489,
     108,  -489,  -489,   161,    51,  -489,   271,    72,    55,  -489,
     271,   108,   248,   264,   283,   286,  -489,   167,   950,   289,
    -489,    32,   290,   271,   108,   248,  -489,   161,   291,   367,
      72,   367,   293,   278,   240,   764,    95,   381,   381,   367,
     295,   297,   108,   298,  -489,    95,  -489,  -489,   381,   764,
     367,   299,   281,  -489,  -489,   300,  -489,   367,  -489,   288,
     381,  -489,  -489
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -489,  -489,   412,  -489,  -489,  -199,  -489,  -489,  -315,  -489,
    -489,  -489,  -489,  -489,  -489,   149,  -489,    76,  -314,  -489,
    -489,  -489,  -489,  -489,   175,  -489,  -489,  -489,  -489,   176,
    -273,  -489,  -489,  -272,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,    -8,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -264,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,    -9,  -489,  -300,  -489,  -489,  -116,  -489,
    -489,    69,  -489,  -489,   -78,  -466,  -489,  -489,  -295,   -23,
     257,  -489,  -489,  -294,  -285,  -489,  -489,  -489,   420,  -155,
    -489,   252,  -489,    82,   128,  -489,     2,  -196,  -489,  -489,
    -489,   -68,  -489,  -486,  -489,  -325,  -489,  -288,  -434,  -114,
    -489,   182,  -489,  -488,  -423,  -186,  -489,   107,  -489,  -489,
     -64,  -489,  -489,  -320,    -2,  -489,   258,   -98,    -7,  -154,
    -357,  -489
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -323
static const yytype_int16 yytable[] =
{
     119,   112,   121,   122,   123,   124,   125,   126,   127,   141,
     142,   129,   204,   206,   182,   177,   134,   135,   136,   432,
     471,   270,   301,   140,   436,   341,   348,   349,   178,   407,
     408,   185,  -322,   291,   188,   242,   169,   514,   160,   245,
     337,   338,   302,   377,   422,   537,   151,   165,    27,   165,
     423,   543,   152,   187,   552,   208,   162,   163,   159,   424,
     165,   165,   337,   338,   375,   249,     4,   562,   207,   250,
      27,   409,   410,   568,   239,   341,   157,   164,   348,   349,
     411,   578,   541,  -320,   265,   560,   165,   137,   138,   309,
     114,   240,   586,   475,   115,   166,   197,   166,   327,   590,
     283,   432,   336,   281,   355,   176,   436,   266,   284,  -322,
     282,   407,   408,   170,   384,   116,   267,   293,   516,   225,
     179,   297,   298,   305,   189,   292,   422,   307,   170,  -322,
     572,  -322,   423,   361,   362,   314,   315,   316,   317,   318,
     266,   424,   321,   120,   501,   577,   324,   368,   369,   268,
     130,   370,   310,   409,   410,   584,   371,   131,   530,   199,
     205,   266,   411,   510,   199,   546,   228,   592,   547,   550,
     521,   432,   551,   172,   264,   173,   436,  -180,   368,   369,
    -180,   225,   370,   226,   132,   554,   133,   371,   452,   425,
      21,   453,   454,   455,   456,   457,   137,   138,   564,   143,
     356,   357,   358,   359,   360,   492,   493,   363,   144,   146,
     367,   294,    19,    20,    21,   209,   153,   210,   211,   156,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   157,
     221,   161,   222,   223,   167,   174,    27,   186,   165,   112,
     311,    32,    33,    19,    20,   347,   191,   192,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,   329,    50,    51,    52,   193,   196,
      53,   425,   147,   148,   149,   201,    32,   150,   445,   446,
     447,    54,    55,   230,  -140,   231,   232,   233,   241,   504,
     234,    60,   517,   242,    61,   245,   271,    62,    63,   248,
     272,   112,   354,   285,   332,   342,   273,   274,   275,   364,
     276,    27,   277,   278,   288,   279,   280,   286,   287,   289,
     294,   319,   299,   378,   322,   300,   502,   379,   382,   383,
     320,   328,   505,   506,   325,   323,   343,   331,   334,   344,
     437,   353,   112,   335,   438,   381,   441,   443,   444,   450,
     466,   439,   448,   449,   469,   473,   476,   490,   508,   478,
     507,   503,   513,   525,   494,  -241,   468,   500,   511,   518,
     472,   527,   535,   528,   539,   542,   544,   207,   477,   573,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   531,   532,   585,   519,   536,   520,   555,   556,   548,
     540,   559,   561,   566,   565,   569,   570,   575,   579,   580,
     588,   587,   582,     5,   589,   385,   545,   591,   330,   306,
     442,   308,   203,   108,   112,   386,   346,   553,   499,   526,
     366,   313,   524,     0,     0,     0,   236,     0,     0,     0,
     563,   199,     0,     0,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   581,     0,
     512,     0,     0,     0,   515,     0,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,     0,     0,     0,    11,
      12,    13,    14,    15,   533,    16,    17,    18,     0,    19,
      20,    21,     0,   522,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
       0,     0,     0,     0,   557,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,     0,    50,    51,    52,     0,   558,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   574,    54,    55,
      56,    57,    58,    59,     0,     0,   583,     0,    60,     0,
       0,    61,     0,   387,    62,    63,    64,    65,    19,    20,
     388,     0,     0,     0,   389,   390,   391,   392,   393,   394,
     395,   396,   397,     0,     0,   398,   399,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,    32,    33,   400,
     401,   402,   403,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     404,    50,    51,    52,     0,     0,    53,   405,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
      61,     0,   406,     0,    63,   387,     0,     0,   498,     0,
      19,    20,   388,     0,     0,     0,   389,   390,   391,   392,
     393,   394,   395,   396,   397,     0,     0,   398,   399,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,    32,
      33,   400,   401,   402,   403,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   404,    50,    51,    52,     0,     0,    53,   405,
       0,    19,    20,    21,     0,     0,     0,     0,     0,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,    61,     0,   406,    27,    63,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,     0,    50,    51,    52,    21,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,    61,     0,   128,    62,    63,     0,     0,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     0,     0,    51,
      52,     0,    21,    53,   459,   251,   252,   253,   254,   255,
     256,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,     0,     0,     0,
     128,    63,     0,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,    21,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   460,   461,     0,
       0,     0,     0,     0,     0,   462,   463,   464,   465,    21,
       0,   128,     0,     0,     0,     0,    63,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,   523,     0,    51,    52,   128,     0,    53,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     0,
      60,    51,    52,    21,     0,    53,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,    21,
       0,   128,     0,    63,     0,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,     0,     0,    51,    52,   128,     0,    53,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     0,
       0,    51,    52,     0,     0,     0,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63
};

static const yytype_int16 yycheck[] =
{
       9,     3,    11,    12,    13,    14,    15,    16,    17,    32,
      33,    18,   166,   168,   130,   129,    25,    26,    27,   344,
     377,   207,    23,    31,   344,   289,   299,   299,    23,   344,
     344,   145,    23,    23,    23,    23,    23,   471,    61,    23,
      37,    38,   241,   331,   344,   511,    53,    77,    45,    77,
     344,    23,    54,   151,   540,   169,    64,    65,    60,   344,
      77,    77,    37,    38,   328,   117,     0,   553,   113,   121,
      45,   344,   344,   561,   188,   339,   121,    85,   351,   351,
     344,   569,   516,   113,   198,   551,    77,    23,    24,    25,
      25,   189,   580,   381,    23,   125,   113,   125,   114,   587,
     118,   426,   288,   118,   303,   128,   426,   117,   126,   100,
     125,   426,   426,   100,   111,    20,   126,   233,   475,   120,
     115,   235,   236,   111,   113,   115,   426,   111,   100,   120,
     564,   122,   426,   319,   320,   251,   252,   253,   254,   255,
     117,   426,   258,    24,   439,   568,   262,   115,   116,   126,
     113,   119,    88,   426,   426,   578,   124,    24,   114,   161,
     167,   117,   426,   458,   166,   114,   175,   590,   117,   114,
     495,   496,   117,    20,   197,    22,   496,   114,   115,   116,
     117,   120,   119,   122,    24,   542,    24,   124,   116,   344,
      23,   119,   120,   121,   122,   123,    23,    24,   555,    60,
     314,   315,   316,   317,   318,   401,   402,   321,    23,    63,
     324,   234,    21,    22,    23,   113,    23,   115,   116,    23,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   121,
     128,   125,   130,   131,    19,    24,    45,    60,    77,   241,
     248,    50,    51,    21,    22,    23,   110,   110,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,   266,    74,    75,    76,    23,   113,
      79,   426,    58,    59,    60,    88,    50,    63,   356,   357,
     358,    90,    91,    23,   116,    78,   114,   116,   110,   443,
     127,   100,   478,    23,   103,    23,   112,   106,   107,   118,
     114,   303,   111,   129,     8,    23,   118,   118,   118,    79,
     118,    45,   118,   118,   113,   118,   118,   118,   118,   110,
     343,   113,   110,   332,   114,   112,   440,     9,   337,   338,
     113,   110,   448,   449,   118,   117,   117,   114,   118,   110,
     112,   114,   344,   118,   112,   114,   111,   113,   112,   101,
     373,   118,   114,   114,   104,    10,   112,    56,   118,   113,
     113,   112,   111,    23,   127,   124,   373,   124,   113,   127,
     379,    23,    88,   117,   112,   114,   113,   113,   387,   565,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   505,   506,   579,   127,   509,   127,   114,   112,   128,
     514,   112,   112,    36,   113,   112,   128,    26,   113,   112,
     129,   112,   114,     1,   114,   339,   530,   129,   269,   243,
     351,   246,   165,     3,   426,   343,   298,   541,   426,   497,
     323,   249,   496,    -1,    -1,    -1,   184,    -1,    -1,    -1,
     554,   443,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   572,    -1,
     469,    -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,   507,    17,    18,    19,    -1,    21,
      22,    23,    -1,   495,   496,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,   547,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    74,    75,    76,    -1,   548,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   566,    90,    91,
      92,    93,    94,    95,    -1,    -1,   575,    -1,   100,    -1,
      -1,   103,    -1,    16,   106,   107,   108,   109,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
     103,    -1,   105,    -1,   107,    16,    -1,    -1,   111,    -1,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    79,    80,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,   103,    -1,   105,    45,   107,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    74,    75,    76,    23,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,   103,    -1,    51,   106,   107,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    -1,    75,
      76,    -1,    23,    79,    25,    81,    82,    83,    84,    85,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      51,   107,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    23,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,    23,
      -1,    51,    -1,    -1,    -1,    -1,   107,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    75,    76,    51,    -1,    79,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
     100,    75,    76,    23,    -1,    79,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    23,
      -1,    51,    -1,   107,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    -1,    75,    76,    51,    -1,    79,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   133,   134,   135,     0,   134,     3,     4,     5,     6,
       7,    11,    12,    13,    14,    15,    17,    18,    19,    21,
      22,    23,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      74,    75,    76,    79,    90,    91,    92,    93,    94,    95,
     100,   103,   106,   107,   108,   109,   136,   137,   138,   139,
     140,   143,   145,   150,   153,   157,   158,   162,   165,   166,
     167,   168,   169,   170,   171,   172,   175,   176,   177,   181,
     182,   183,   184,   195,   197,   198,   199,   200,   201,   202,
     203,   204,   207,   221,   222,   225,   226,   228,   230,   231,
     247,   265,   266,   270,    25,    23,    20,   205,   206,   205,
      24,   205,   205,   205,   205,   205,   205,   205,    51,   270,
     113,    24,    24,    24,   205,   205,   205,    23,    24,   173,
     173,   221,   221,    60,    23,   210,    63,    58,    59,    60,
      63,   270,   266,    23,   159,   154,    23,   121,   251,   266,
     221,   125,   173,   173,   173,    77,   125,    19,   229,    23,
     100,   269,    20,    22,    24,   209,   221,   251,    23,   115,
     163,   164,   210,   232,   227,   251,    60,   269,    23,   113,
     151,   110,   110,    23,   252,   253,   113,   113,   141,   266,
     271,    88,   174,   222,   271,   270,   231,   113,   251,   113,
     115,   116,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   128,   130,   131,   248,   120,   122,   268,   205,   144,
      23,    78,   114,   116,   127,   233,   233,   208,   268,   251,
     269,   110,    23,   160,   161,    23,   155,   156,   118,   117,
     121,    81,    82,    83,    84,    85,    86,    87,   102,   257,
     258,   259,   266,   267,   221,   251,   117,   126,   126,   146,
     257,   112,   114,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   125,   118,   126,   129,   118,   118,   113,   110,
     147,    23,   115,   210,   221,   234,   235,   251,   251,   110,
     112,    23,   137,   152,   230,   111,   161,   111,   156,    25,
      88,   173,   254,   253,   210,   210,   210,   210,   210,   113,
     113,   210,   114,   117,   210,   118,   216,   114,   110,   266,
     147,   114,     8,   178,   118,   118,   257,    37,    38,   148,
     149,   184,    23,   117,   110,   236,   236,    23,   162,   165,
     211,   212,   213,   114,   111,   137,   251,   251,   251,   251,
     251,   257,   257,   251,    79,   249,   259,   251,   115,   116,
     119,   124,   217,   219,   220,   184,   185,   249,   205,     9,
     179,   114,   205,   205,   111,   149,   235,    16,    23,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    38,    39,
      52,    53,    54,    55,    73,    80,   105,   140,   150,   162,
     165,   184,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   196,   207,   225,   226,   231,   237,   238,   240,   241,
     243,   246,   247,   260,   262,   263,   265,   112,   112,   118,
     215,   111,   213,   113,   112,   216,   216,   216,   114,   114,
     101,   272,   116,   119,   120,   121,   122,   123,   218,    25,
      88,    89,    96,    97,    98,    99,   221,   223,   270,   104,
     142,   272,   205,    10,   180,   249,   112,   205,   113,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
      56,   239,   239,   239,   127,   264,   261,   242,   111,   238,
     124,   220,   251,   112,   271,   210,   210,   113,   118,   250,
     220,   113,   205,   111,   250,   205,   272,   257,   127,   127,
     127,   247,   266,    73,   262,    23,   243,    23,   117,   214,
     114,   251,   251,   221,   273,    88,   251,   217,   224,   112,
     251,   250,   114,    23,   113,   251,   114,   117,   128,   245,
     114,   117,   245,   251,   272,   114,   112,   221,   266,   112,
     217,   112,   245,   251,   272,   113,    36,   255,   255,   112,
     128,   244,   250,   257,   205,    26,   256,   256,   255,   113,
     112,   251,   114,   205,   256,   257,   255,   112,   129,   114,
     255,   129,   256
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 4:
#line 324 "parser.y"
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
    ;}
    break;

  case 21:
#line 358 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->exphdrcode, (yyvsp[(1) - (1)].codeb));
        ;}
    break;

  case 22:
#line 362 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->hdrcode, (yyvsp[(1) - (1)].codeb));
        ;}
    break;

  case 23:
#line 366 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->cppcode, (yyvsp[(1) - (1)].codeb));
        ;}
    break;

  case 46:
#line 394 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope == NULL)
                    yyerror("%TypeHeaderCode can only be used in a namespace, class or mapped type");

                appendCodeBlock(&scope->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
            }
        ;}
    break;

  case 47:
#line 407 "parser.y"
    {
            if (notSkipping())
            {
                if ((currentModule->encoding = convertEncoding((yyvsp[(2) - (2)].text))) == no_type)
                    yyerror("The value of %DefaultEncoding must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
            }
        ;}
    break;

  case 48:
#line 416 "parser.y"
    {
            appendString(&currentSpec->plugins, (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 49:
#line 421 "parser.y"
    {
            if (notSkipping())
            {
                exceptionDef *xd;
                char *pyname;

                if (currentSpec->genc)
                    yyerror("%Exception not allowed in a C module");

                pyname = getPythonName(&(yyvsp[(4) - (9)].optflags), scopedNameTail((yyvsp[(2) - (9)].scpvalp)));

                checkAttributes(currentSpec, currentModule, NULL, pyname, FALSE);

                xd = findException(currentSpec, (yyvsp[(2) - (9)].scpvalp), TRUE);

                if (xd->cd != NULL)
                    yyerror("%Exception name has already been seen as a class name - it must be defined before being used");

                if (xd->iff->module != NULL)
                    yyerror("The %Exception has already been defined");

                /* Complete the definition. */
                xd->iff->module = currentModule;
                xd->iff->hdrcode = (yyvsp[(6) - (9)].codeb);
                xd->pyname = pyname;
                xd->bibase = (yyvsp[(3) - (9)].exceptionbase).bibase;
                xd->base = (yyvsp[(3) - (9)].exceptionbase).base;
                xd->raisecode = (yyvsp[(7) - (9)].codeb);

                if (xd->bibase != NULL || xd->base != NULL)
                    xd->exceptionnr = currentModule->nrexceptions++;
            }
        ;}
    break;

  case 50:
#line 456 "parser.y"
    {
            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;
        ;}
    break;

  case 51:
#line 460 "parser.y"
    {
            exceptionDef *xd;

            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;

            /* See if it is a defined exception. */
            for (xd = currentSpec->exceptions; xd != NULL; xd = xd->next)
                if (compareScopedNames(xd->iff->fqcname, (yyvsp[(2) - (3)].scpvalp)) == 0)
                {
                    (yyval.exceptionbase).base = xd;
                    break;
                }

            if (xd == NULL && (yyvsp[(2) - (3)].scpvalp)->next == NULL && strncmp((yyvsp[(2) - (3)].scpvalp)->name, "SIP_", 4) == 0)
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
                    if (strcmp((yyvsp[(2) - (3)].scpvalp)->name + 4, *cp) == 0)
                    {
                        (yyval.exceptionbase).bibase = *cp;
                        break;
                    }
            }

            if ((yyval.exceptionbase).bibase == NULL && (yyval.exceptionbase).base == NULL)
                yyerror("Unknown exception base type");
        ;}
    break;

  case 52:
#line 534 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 53:
#line 539 "parser.y"
    {
            if (notSkipping())
                currentMappedType = newMappedType(currentSpec, &(yyvsp[(2) - (3)].memArg), &(yyvsp[(3) - (3)].optflags));
        ;}
    break;

  case 55:
#line 545 "parser.y"
    {
            int a;

            if (currentSpec->genc)
                yyerror("%MappedType templates not allowed in a C module");

            /* Check the template arguments are basic types or simple names. */
            for (a = 0; a < (yyvsp[(1) - (3)].signature).nrArgs; ++a)
            {
                argDef *ad = &(yyvsp[(1) - (3)].signature).args[a];

                if (ad->atype == defined_type && ad->u.snd->next != NULL)
                    yyerror("%MappedType template arguments must be simple names");
            }

            if ((yyvsp[(3) - (3)].memArg).atype != template_type)
                yyerror("%MappedType template must map a template type");

            if (notSkipping())
            {
                mappedTypeTmplDef *mtt;
                ifaceFileDef *iff;

                /* Check a template hasn't already been provided. */
                for (mtt = currentSpec->mappedtypetemplates; mtt != NULL; mtt = mtt->next)
                    if (compareScopedNames(mtt->mt->type.u.td->fqname, (yyvsp[(3) - (3)].memArg).u.td->fqname) == 0 && sameTemplateSignature(&mtt->mt->type.u.td->types, &(yyvsp[(3) - (3)].memArg).u.td->types, TRUE))
                        yyerror("%MappedType template for this type has already been defined");

                (yyvsp[(3) - (3)].memArg).nrderefs = 0;
                (yyvsp[(3) - (3)].memArg).argflags = 0;

                mtt = sipMalloc(sizeof (mappedTypeTmplDef));

                mtt->sig = (yyvsp[(1) - (3)].signature);
                mtt->mt = allocMappedType(currentSpec, &(yyvsp[(3) - (3)].memArg));
                mtt->next = currentSpec->mappedtypetemplates;

                currentSpec->mappedtypetemplates = mtt;

                currentMappedType = mtt->mt;

                /* Create a dummy interface file. */
                iff = sipMalloc(sizeof (ifaceFileDef));
                iff->hdrcode = NULL;
                mtt->mt->iff = iff;
            }
        ;}
    break;

  case 57:
#line 594 "parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convfromcode == NULL)
                    yyerror("%MappedType must have a %ConvertFromTypeCode directive");

                if (currentMappedType->convtocode == NULL)
                    yyerror("%MappedType must have a %ConvertToTypeCode directive");

                currentMappedType = NULL;
            }
        ;}
    break;

  case 60:
#line 612 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        ;}
    break;

  case 61:
#line 616 "parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType -> convfromcode != NULL)
                    yyerror("%MappedType has more than one %ConvertFromTypeCode directive");

                currentMappedType -> convfromcode = (yyvsp[(2) - (2)].codeb);
            }
        ;}
    break;

  case 62:
#line 625 "parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType -> convtocode != NULL)
                    yyerror("%MappedType has more than one %ConvertToTypeCode directive");

                currentMappedType -> convtocode = (yyvsp[(2) - (2)].codeb);
            }
        ;}
    break;

  case 63:
#line 636 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("namespace definition not allowed in a C module");

            if (notSkipping())
            {
                classDef *ns;

                ns = newClass(currentSpec, namespace_iface,
                        text2scopedName(currentScope(), (yyvsp[(2) - (2)].text)));

                pushScope(ns);

                sectionFlags = 0;
            }
        ;}
    break;

  case 64:
#line 651 "parser.y"
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
        ;}
    break;

  case 67:
#line 671 "parser.y"
    {
            qualDef *qd;

            for (qd = currentModule -> qualifiers; qd != NULL; qd = qd -> next)
                if (qd -> qtype == platform_qualifier)
                    yyerror("%Platforms has already been defined for this module");
        ;}
    break;

  case 68:
#line 678 "parser.y"
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
        ;}
    break;

  case 71:
#line 702 "parser.y"
    {
            newQualifier(currentModule,-1,-1,(yyvsp[(1) - (1)].text),platform_qualifier);
        ;}
    break;

  case 72:
#line 707 "parser.y"
    {
            newQualifier(currentModule,-1,-1,(yyvsp[(2) - (2)].text),feature_qualifier);
        ;}
    break;

  case 73:
#line 712 "parser.y"
    {
            currentTimelineOrder = 0;
        ;}
    break;

  case 74:
#line 715 "parser.y"
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
        ;}
    break;

  case 77:
#line 741 "parser.y"
    {
            newQualifier(currentModule,currentModule -> nrtimelines,currentTimelineOrder++,(yyvsp[(1) - (1)].text),time_qualifier);
        ;}
    break;

  case 78:
#line 746 "parser.y"
    {
            if (skipStackPtr >= MAX_NESTED_IF)
                yyerror("Internal error: increase the value of MAX_NESTED_IF");

            /* Nested %Ifs are implicit logical ands. */

            if (skipStackPtr > 0)
                (yyvsp[(3) - (4)].boolean) = ((yyvsp[(3) - (4)].boolean) && skipStack[skipStackPtr - 1]);

            skipStack[skipStackPtr++] = (yyvsp[(3) - (4)].boolean);
        ;}
    break;

  case 79:
#line 759 "parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(1) - (1)].text),FALSE);
        ;}
    break;

  case 80:
#line 762 "parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(2) - (2)].text),TRUE);
        ;}
    break;

  case 81:
#line 765 "parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(3) - (3)].text),FALSE) || (yyvsp[(1) - (3)].boolean));
        ;}
    break;

  case 82:
#line 768 "parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(4) - (4)].text),TRUE) || (yyvsp[(1) - (4)].boolean));
        ;}
    break;

  case 84:
#line 774 "parser.y"
    {
            (yyval.boolean) = timePeriod((yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].text));
        ;}
    break;

  case 85:
#line 779 "parser.y"
    {
            if (skipStackPtr-- <= 0)
                yyerror("Too many %End directives");
        ;}
    break;

  case 86:
#line 785 "parser.y"
    {
            optFlag *of;

            if ((yyvsp[(2) - (2)].optflags).nrFlags == 0)
                yyerror("%License details not specified");

            if ((of = findOptFlag(&(yyvsp[(2) - (2)].optflags),"Type",string_flag)) == NULL)
                yyerror("%License type not specified");

            currentModule -> license = sipMalloc(sizeof (licenseDef));

            currentModule -> license -> type = of -> fvalue.sval;

            currentModule -> license -> licensee = 
                ((of = findOptFlag(&(yyvsp[(2) - (2)].optflags),"Licensee",string_flag)) != NULL)
                    ? of -> fvalue.sval : NULL;

            currentModule -> license -> timestamp = 
                ((of = findOptFlag(&(yyvsp[(2) - (2)].optflags),"Timestamp",string_flag)) != NULL)
                    ? of -> fvalue.sval : NULL;

            currentModule -> license -> sig = 
                ((of = findOptFlag(&(yyvsp[(2) - (2)].optflags),"Signature",string_flag)) != NULL)
                    ? of -> fvalue.sval : NULL;
        ;}
    break;

  case 87:
#line 812 "parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defmetatype != NULL)
                    yyerror("%DefaultMetatype has already been defined for this module");

                currentModule->defmetatype = cacheName(currentSpec, (yyvsp[(2) - (2)].text));
            }
        ;}
    break;

  case 88:
#line 823 "parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defsupertype != NULL)
                    yyerror("%DefaultSupertype has already been defined for this module");

                currentModule->defsupertype = cacheName(currentSpec, (yyvsp[(2) - (2)].text));
            }
        ;}
    break;

  case 89:
#line 834 "parser.y"
    {
            /* Make sure this is the first mention of a module. */
            if (currentSpec->module != currentModule)
                yyerror("A %ConsolidatedModule cannot be %Imported");

            if (currentModule->fullname != NULL)
                yyerror("%ConsolidatedModule must appear before any %Module or %CModule directive");

            setModuleName(currentSpec, currentModule, (yyvsp[(2) - (2)].text));
            setIsConsolidated(currentModule);
        ;}
    break;

  case 90:
#line 847 "parser.y"
    {
            /* Make sure this is the first mention of a module. */
            if (currentSpec->module != currentModule)
                yyerror("A %CompositeModule cannot be %Imported");

            if (currentModule->fullname != NULL)
                yyerror("%CompositeModule must appear before any %Module or %CModule directive");

            setModuleName(currentSpec, currentModule, (yyvsp[(2) - (2)].text));
            setIsComposite(currentModule);
        ;}
    break;

  case 91:
#line 860 "parser.y"
    {
            /* Check the module hasn't already been defined. */

            moduleDef *mod;

            for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
                if (mod->fullname != NULL && strcmp(mod->fullname->text, (yyvsp[(2) - (3)].text)) == 0)
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

            setModuleName(currentSpec, currentModule, (yyvsp[(2) - (3)].text));
            currentModule->version = (yyvsp[(3) - (3)].number);

            if (currentSpec->genc < 0)
                currentSpec->genc = (yyvsp[(1) - (3)].boolean);
            else if (currentSpec->genc != (yyvsp[(1) - (3)].boolean))
                yyerror("Cannot mix C and C++ modules");
        ;}
    break;

  case 92:
#line 893 "parser.y"
    {
            (yyval.boolean) = FALSE;
        ;}
    break;

  case 93:
#line 896 "parser.y"
    {
            (yyval.boolean) = TRUE;
        ;}
    break;

  case 95:
#line 902 "parser.y"
    {
            /*
             * The grammar design is a bit broken and this is the easiest way
             * to allow periods in names.
             */

            char *cp;

            for (cp = (yyvsp[(1) - (1)].text); *cp != '\0'; ++cp)
                if (*cp != '.' && *cp != '_' && !isalnum(*cp))
                    yyerror("Invalid character in name");

            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 96:
#line 918 "parser.y"
    {
            (yyval.number) = -1;
        ;}
    break;

  case 98:
#line 924 "parser.y"
    {
            parseFile(NULL, (yyvsp[(2) - (2)].text), NULL, FALSE);
        ;}
    break;

  case 99:
#line 929 "parser.y"
    {
            parseFile(NULL, (yyvsp[(2) - (2)].text), NULL, TRUE);
        ;}
    break;

  case 100:
#line 934 "parser.y"
    {
            newImport((yyvsp[(2) - (2)].text));
        ;}
    break;

  case 101:
#line 939 "parser.y"
    {
            (yyval.codeb) = NULL;
        ;}
    break;

  case 102:
#line 942 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 103:
#line 947 "parser.y"
    {
            (yyval.codeb) = NULL;
        ;}
    break;

  case 104:
#line 950 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 105:
#line 955 "parser.y"
    {
            (yyval.codeb) = NULL;
        ;}
    break;

  case 106:
#line 958 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 107:
#line 963 "parser.y"
    {
            appendCodeBlock(&currentModule->copying, (yyvsp[(2) - (2)].codeb));
        ;}
    break;

  case 108:
#line 968 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 109:
#line 973 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 110:
#line 978 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 111:
#line 983 "parser.y"
    {
            (yyval.codeb) = NULL;
        ;}
    break;

  case 113:
#line 989 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 114:
#line 994 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 115:
#line 999 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 116:
#line 1004 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 117:
#line 1009 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 118:
#line 1014 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 119:
#line 1019 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 120:
#line 1024 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 121:
#line 1029 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 122:
#line 1034 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 123:
#line 1039 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 124:
#line 1044 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->preinitcode, (yyvsp[(2) - (2)].codeb));
        ;}
    break;

  case 125:
#line 1050 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->initcode, (yyvsp[(2) - (2)].codeb));
        ;}
    break;

  case 126:
#line 1056 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->postinitcode, (yyvsp[(2) - (2)].codeb));
        ;}
    break;

  case 127:
#line 1062 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitcode, (yyvsp[(2) - (2)].codeb));
        ;}
    break;

  case 128:
#line 1068 "parser.y"
    {
            /*
             * This is a no-op and is retained for compatibility
             * until the last use of it (by SIP v3) can be removed
             * from PyQt.
             */
        ;}
    break;

  case 129:
#line 1077 "parser.y"
    {
            if (inMainModule())
                appendCodeBlock(&currentSpec -> docs,(yyvsp[(2) - (2)].codeb));
        ;}
    break;

  case 130:
#line 1083 "parser.y"
    {
            appendCodeBlock(&currentSpec -> docs,(yyvsp[(2) - (2)].codeb));
        ;}
    break;

  case 131:
#line 1088 "parser.y"
    {
            if (inMainModule())
                yywarning("%Makefile is ignored, please use the -b flag instead");
        ;}
    break;

  case 134:
#line 1098 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(1) - (2)].codeb);

            append(&(yyval.codeb)->frag, (yyvsp[(2) - (2)].codeb)->frag);

            free((yyvsp[(2) - (2)].codeb)->frag);
            free((char *)(yyvsp[(2) - (2)].codeb)->filename);
            free((yyvsp[(2) - (2)].codeb));
        ;}
    break;

  case 135:
#line 1109 "parser.y"
    {
            if (notSkipping())
            {
                if (sectionFlags != 0 && (sectionFlags & ~(SECT_IS_PUBLIC | SECT_IS_PROT)) != 0)
                    yyerror("Class enums must be in the public or protected sections");

                currentEnum = newEnum(currentSpec,currentModule,(yyvsp[(2) - (3)].text),&(yyvsp[(3) - (3)].optflags),sectionFlags);
            }
        ;}
    break;

  case 137:
#line 1120 "parser.y"
    {
            (yyval.text) = NULL;
        ;}
    break;

  case 138:
#line 1123 "parser.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 139:
#line 1128 "parser.y"
    {
            (yyval.text) = NULL;
        ;}
    break;

  case 140:
#line 1131 "parser.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 147:
#line 1146 "parser.y"
    {
            if (notSkipping())
            {
                enumMemberDef *emd, **tail;

                /* Note that we don't use the assigned value. */
                emd = sipMalloc(sizeof (enumMemberDef));

                emd -> pyname = cacheName(currentSpec, getPythonName(&(yyvsp[(3) - (4)].optflags), (yyvsp[(1) - (4)].text)));
                emd -> cname = (yyvsp[(1) - (4)].text);
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
        ;}
    break;

  case 152:
#line 1181 "parser.y"
    {
            (yyval.valp) = NULL;
        ;}
    break;

  case 153:
#line 1184 "parser.y"
    {
            (yyval.valp) = (yyvsp[(2) - (2)].valp);
        ;}
    break;

  case 155:
#line 1190 "parser.y"
    {
            valueDef *vd;
 
            if ((yyvsp[(1) - (3)].valp) -> vtype == string_value || (yyvsp[(3) - (3)].valp) -> vtype == string_value)
                yyerror("Invalid binary operator for string");
 
            /* Find the last value in the existing expression. */
 
            for (vd = (yyvsp[(1) - (3)].valp); vd -> next != NULL; vd = vd -> next)
                ;
 
            vd -> vbinop = (yyvsp[(2) - (3)].qchar);
            vd -> next = (yyvsp[(3) - (3)].valp);

            (yyval.valp) = (yyvsp[(1) - (3)].valp);
        ;}
    break;

  case 156:
#line 1208 "parser.y"
    {
            (yyval.qchar) = '-';
        ;}
    break;

  case 157:
#line 1211 "parser.y"
    {
            (yyval.qchar) = '+';
        ;}
    break;

  case 158:
#line 1214 "parser.y"
    {
            (yyval.qchar) = '*';
        ;}
    break;

  case 159:
#line 1217 "parser.y"
    {
            (yyval.qchar) = '/';
        ;}
    break;

  case 160:
#line 1220 "parser.y"
    {
            (yyval.qchar) = '&';
        ;}
    break;

  case 161:
#line 1223 "parser.y"
    {
            (yyval.qchar) = '|';
        ;}
    break;

  case 162:
#line 1228 "parser.y"
    {
            (yyval.qchar) = '\0';
        ;}
    break;

  case 163:
#line 1231 "parser.y"
    {
            (yyval.qchar) = '!';
        ;}
    break;

  case 164:
#line 1234 "parser.y"
    {
            (yyval.qchar) = '~';
        ;}
    break;

  case 165:
#line 1237 "parser.y"
    {
            (yyval.qchar) = '-';
        ;}
    break;

  case 166:
#line 1240 "parser.y"
    {
            (yyval.qchar) = '+';
        ;}
    break;

  case 167:
#line 1245 "parser.y"
    {
            if ((yyvsp[(1) - (2)].qchar) != '\0' && (yyvsp[(2) - (2)].value).vtype == string_value)
                yyerror("Invalid unary operator for string");
 
            /*
             * Convert the value to a simple expression on the
             * heap.
             */
 
            (yyval.valp) = sipMalloc(sizeof (valueDef));
 
            *(yyval.valp) = (yyvsp[(2) - (2)].value);
            (yyval.valp) -> vunop = (yyvsp[(1) - (2)].qchar);
            (yyval.valp) -> vbinop = '\0';
            (yyval.valp) -> next = NULL;
        ;}
    break;

  case 169:
#line 1264 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("Scoped names are not allowed in a C module");

            appendScopedName(&(yyvsp[(1) - (3)].scpvalp),(yyvsp[(3) - (3)].scpvalp));
        ;}
    break;

  case 170:
#line 1272 "parser.y"
    {
            (yyval.scpvalp) = text2scopePart((yyvsp[(1) - (1)].text));
        ;}
    break;

  case 171:
#line 1277 "parser.y"
    {
            /*
             * We let the C++ compiler decide if the value is a valid one - no
             * point in building a full C++ parser here.
             */

            (yyval.value).vtype = scoped_value;
            (yyval.value).u.vscp = (yyvsp[(1) - (1)].scpvalp);
        ;}
    break;

  case 172:
#line 1286 "parser.y"
    {
            fcallDef *fcd;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = (yyvsp[(3) - (4)].fcall);
            fcd -> type = (yyvsp[(1) - (4)].memArg);

            (yyval.value).vtype = fcall_value;
            (yyval.value).u.fcd = fcd;
        ;}
    break;

  case 173:
#line 1296 "parser.y"
    {
            (yyval.value).vtype = real_value;
            (yyval.value).u.vreal = (yyvsp[(1) - (1)].real);
        ;}
    break;

  case 174:
#line 1300 "parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = (yyvsp[(1) - (1)].number);
        ;}
    break;

  case 175:
#line 1304 "parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = 1;
        ;}
    break;

  case 176:
#line 1308 "parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = 0;
        ;}
    break;

  case 177:
#line 1312 "parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = 0;
        ;}
    break;

  case 178:
#line 1316 "parser.y"
    {
            (yyval.value).vtype = string_value;
            (yyval.value).u.vstr = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 179:
#line 1320 "parser.y"
    {
            (yyval.value).vtype = qchar_value;
            (yyval.value).u.vqchar = (yyvsp[(1) - (1)].qchar);
        ;}
    break;

  case 180:
#line 1326 "parser.y"
    {
            /* No values. */

            (yyval.fcall).nrArgs = 0;
        ;}
    break;

  case 181:
#line 1331 "parser.y"
    {
            /* The single or first expression. */

            (yyval.fcall).args[0] = (yyvsp[(1) - (1)].valp);
            (yyval.fcall).nrArgs = 1;
        ;}
    break;

  case 182:
#line 1337 "parser.y"
    {
            /* Check that it wasn't ...(,expression...). */

            if ((yyval.fcall).nrArgs == 0)
                yyerror("First argument to function call is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].fcall).nrArgs == MAX_NR_ARGS)
                yyerror("Too many arguments to function call");

            (yyval.fcall) = (yyvsp[(1) - (3)].fcall);

            (yyval.fcall).args[(yyval.fcall).nrArgs] = (yyvsp[(3) - (3)].valp);
            (yyval.fcall).nrArgs++;
        ;}
    break;

  case 183:
#line 1355 "parser.y"
    {
            if (notSkipping())
            {
                applyTypeFlags(currentModule, &(yyvsp[(2) - (5)].memArg), &(yyvsp[(4) - (5)].optflags));
                newTypedef(currentSpec, currentModule, (yyvsp[(3) - (5)].text), &(yyvsp[(2) - (5)].memArg), &(yyvsp[(4) - (5)].optflags));
            }
        ;}
    break;

  case 184:
#line 1362 "parser.y"
    {
            if (notSkipping())
            {
                signatureDef *sig;
                argDef ftype;

                applyTypeFlags(currentModule, &(yyvsp[(2) - (11)].memArg), &(yyvsp[(10) - (11)].optflags));

                memset(&ftype, 0, sizeof (argDef));

                /* Create the full signature on the heap. */
                sig = sipMalloc(sizeof (signatureDef));
                *sig = (yyvsp[(8) - (11)].signature);
                sig->result = (yyvsp[(2) - (11)].memArg);

                /* Create the full type. */
                ftype.atype = function_type;
                ftype.nrderefs = (yyvsp[(4) - (11)].number);
                ftype.u.sa = sig;

                newTypedef(currentSpec, currentModule, (yyvsp[(5) - (11)].text), &ftype, &(yyvsp[(10) - (11)].optflags));
            }
        ;}
    break;

  case 185:
#line 1387 "parser.y"
    {
            if (currentSpec -> genc && (yyvsp[(2) - (2)].scpvalp)->next != NULL)
                yyerror("Namespaces not allowed in a C module");

            if (notSkipping())
            {
                defineClass((yyvsp[(2) - (2)].scpvalp));
                sectionFlags = SECT_IS_PUBLIC;
            }
        ;}
    break;

  case 186:
#line 1396 "parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = completeClass((yyvsp[(2) - (7)].scpvalp), &(yyvsp[(5) - (7)].optflags), (yyvsp[(6) - (7)].boolean));

                if (currentSpec -> genc && cd->supers != NULL)
                    yyerror("Super-classes not allowed in a C module struct");
            }
        ;}
    break;

  case 187:
#line 1407 "parser.y"
    {currentIsTemplate = TRUE;;}
    break;

  case 188:
#line 1407 "parser.y"
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
                if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                    yyerror("Internal error - increase the value of MAX_NR_ARGS");

                tcd = sipMalloc(sizeof (classTmplDef));
                tcd->sig = (yyvsp[(1) - (3)].signature);
                tcd->cd = (yyvsp[(3) - (3)].klass);
                tcd->next = currentSpec->classtemplates;

                currentSpec->classtemplates = tcd;
            }

            currentIsTemplate = FALSE;
        ;}
    break;

  case 189:
#line 1434 "parser.y"
    {
            (yyval.signature) = (yyvsp[(3) - (4)].signature);
        ;}
    break;

  case 190:
#line 1439 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("Class definition not allowed in a C module");

            if (notSkipping())
            {
                defineClass((yyvsp[(2) - (2)].scpvalp));
                sectionFlags = SECT_IS_PRIVATE;
            }
        ;}
    break;

  case 191:
#line 1448 "parser.y"
    {
            if (notSkipping())
                (yyval.klass) = completeClass((yyvsp[(2) - (7)].scpvalp), &(yyvsp[(5) - (7)].optflags), (yyvsp[(6) - (7)].boolean));
        ;}
    break;

  case 196:
#line 1462 "parser.y"
    {
            if (notSkipping())
            {
                argDef ad;
                classDef *super;
                scopedNameDef *snd = (yyvsp[(1) - (1)].scpvalp);

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
        ;}
    break;

  case 197:
#line 1501 "parser.y"
    {
            (yyval.boolean) = FALSE;
        ;}
    break;

  case 198:
#line 1504 "parser.y"
    {
            (yyval.boolean) = TRUE;
        ;}
    break;

  case 209:
#line 1521 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->cppcode, (yyvsp[(1) - (1)].codeb));
        ;}
    break;

  case 210:
#line 1525 "parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        ;}
    break;

  case 211:
#line 1529 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->travcode != NULL)
                    yyerror("%GCTraverseCode already given for class");

                scope->travcode = (yyvsp[(1) - (1)].codeb);
            }
        ;}
    break;

  case 212:
#line 1540 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->clearcode != NULL)
                    yyerror("%GCClearCode already given for class");

                scope->clearcode = (yyvsp[(1) - (1)].codeb);
            }
        ;}
    break;

  case 213:
#line 1551 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->getbufcode != NULL)
                    yyerror("%BIGetBufferCode already given for class");

                scope->getbufcode = (yyvsp[(1) - (1)].codeb);
            }
        ;}
    break;

  case 214:
#line 1562 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->releasebufcode != NULL)
                    yyerror("%BIReleaseBufferCode already given for class");

                scope->releasebufcode = (yyvsp[(1) - (1)].codeb);
            }
        ;}
    break;

  case 215:
#line 1573 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->readbufcode != NULL)
                    yyerror("%BIGetReadBufferCode already given for class");

                scope->readbufcode = (yyvsp[(1) - (1)].codeb);
            }
        ;}
    break;

  case 216:
#line 1584 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->writebufcode != NULL)
                    yyerror("%BIGetWriteBufferCode already given for class");

                scope->writebufcode = (yyvsp[(1) - (1)].codeb);
            }
        ;}
    break;

  case 217:
#line 1595 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->segcountcode != NULL)
                    yyerror("%BIGetSegCountCode already given for class");

                scope->segcountcode = (yyvsp[(1) - (1)].codeb);
            }
        ;}
    break;

  case 218:
#line 1606 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->charbufcode != NULL)
                    yyerror("%BIGetCharBufferCode already given for class");

                scope->charbufcode = (yyvsp[(1) - (1)].codeb);
            }
        ;}
    break;

  case 219:
#line 1617 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->picklecode != NULL)
                    yyerror("%PickleCode already given for class");

                scope->picklecode = (yyvsp[(1) - (1)].codeb);
            }
        ;}
    break;

  case 223:
#line 1631 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtosubcode != NULL)
                    yyerror("Class has more than one %ConvertToSubClassCode directive");

                scope->convtosubcode = (yyvsp[(2) - (2)].codeb);
            }
        ;}
    break;

  case 224:
#line 1642 "parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtocode != NULL)
                    yyerror("Class has more than one %ConvertToTypeCode directive");

                scope->convtocode = (yyvsp[(2) - (2)].codeb);
            }
        ;}
    break;

  case 225:
#line 1653 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("public section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PUBLIC | (yyvsp[(2) - (3)].number);
        ;}
    break;

  case 226:
#line 1660 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("protected section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PROT | (yyvsp[(2) - (3)].number);
        ;}
    break;

  case 227:
#line 1667 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("private section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PRIVATE | (yyvsp[(2) - (3)].number);
        ;}
    break;

  case 228:
#line 1674 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("signals section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_SIGNAL;
        ;}
    break;

  case 229:
#line 1683 "parser.y"
    {
            (yyval.number) = 0;
        ;}
    break;

  case 230:
#line 1686 "parser.y"
    {
            (yyval.number) = SECT_IS_SLOT;
        ;}
    break;

  case 231:
#line 1691 "parser.y"
    {
            /* Note that we allow non-virtual dtors in C modules. */

            if (notSkipping())
            {
                classDef *cd = currentScope();

                if (strcmp(classBaseName(cd),(yyvsp[(3) - (11)].text)) != 0)
                    yyerror("Destructor doesn't have the same name as its class");

                if (isDtor(cd))
                    yyerror("Destructor has already been defined");

                if (currentSpec -> genc && (yyvsp[(10) - (11)].codeb) == NULL)
                    yyerror("Destructor in C modules must include %MethodCode");

                cd -> dealloccode = (yyvsp[(10) - (11)].codeb);
                cd -> dtorcode = (yyvsp[(11) - (11)].codeb);
                cd -> dtorexceptions = (yyvsp[(6) - (11)].throwlist);
                cd -> classflags |= sectionFlags;

                if ((yyvsp[(7) - (11)].number))
                {
                    if (!(yyvsp[(1) - (11)].number))
                        yyerror("Abstract destructor must be virtual");

                    setIsAbstractClass(cd);
                }

                /*
                 * The class has a shadow if we have a virtual dtor or some
                 * dtor code.
                 */
                if ((yyvsp[(1) - (11)].number) || (yyvsp[(11) - (11)].codeb) != NULL)
                {
                    if (currentSpec -> genc)
                        yyerror("Virtual destructor or %VirtualCatcherCode not allowed in a C module");

                    setHasShadow(cd);
                }

                if (getReleaseGIL(&(yyvsp[(8) - (11)].optflags)))
                    setIsReleaseGILDtor(cd);
                else if (getHoldGIL(&(yyvsp[(8) - (11)].optflags)))
                    setIsHoldGILDtor(cd);
            }
        ;}
    break;

  case 232:
#line 1740 "parser.y"
    {currentCtorIsExplicit = TRUE;;}
    break;

  case 235:
#line 1744 "parser.y"
    {
            /* Note that we allow ctors in C modules. */

            if (notSkipping())
            {
                if (currentSpec -> genc)
                {
                    if ((yyvsp[(9) - (9)].codeb) == NULL && (yyvsp[(3) - (9)].signature).nrArgs != 0)
                        yyerror("Constructors with arguments in C modules must include %MethodCode");

                    if (currentCtorIsExplicit)
                        yyerror("Explicit constructors not allowed in a C module");
                }

                if ((sectionFlags & (SECT_IS_PUBLIC | SECT_IS_PROT | SECT_IS_PRIVATE)) == 0)
                    yyerror("Constructor must be in the public, private or protected sections");

                newCtor((yyvsp[(1) - (9)].text),sectionFlags,&(yyvsp[(3) - (9)].signature),&(yyvsp[(6) - (9)].optflags),(yyvsp[(9) - (9)].codeb),(yyvsp[(5) - (9)].throwlist),(yyvsp[(7) - (9)].optsignature),currentCtorIsExplicit);
            }

            free((yyvsp[(1) - (9)].text));

            currentCtorIsExplicit = FALSE;
        ;}
    break;

  case 236:
#line 1770 "parser.y"
    {
            (yyval.optsignature) = NULL;
        ;}
    break;

  case 237:
#line 1773 "parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(3) - (5)].signature);
        ;}
    break;

  case 238:
#line 1780 "parser.y"
    {
            (yyval.optsignature) = NULL;
        ;}
    break;

  case 239:
#line 1783 "parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(4) - (6)].signature);
            (yyval.optsignature) -> result = (yyvsp[(2) - (6)].memArg);
        ;}
    break;

  case 240:
#line 1791 "parser.y"
    {
            (yyval.number) = FALSE;
        ;}
    break;

  case 241:
#line 1794 "parser.y"
    {
            (yyval.number) = TRUE;
        ;}
    break;

  case 242:
#line 1799 "parser.y"
    {
            if (notSkipping())
            {
                if (sectionFlags != 0 && (sectionFlags & (SECT_IS_PUBLIC | SECT_IS_PROT | SECT_IS_PRIVATE | SECT_IS_SLOT | SECT_IS_SIGNAL)) == 0)
                    yyerror("Class function must be in the public, private, protected, slot or signal sections");

                applyTypeFlags(currentModule, &(yyvsp[(1) - (13)].memArg), &(yyvsp[(9) - (13)].optflags));

                (yyvsp[(4) - (13)].signature).result = (yyvsp[(1) - (13)].memArg);

                newFunction(currentSpec,currentModule,
                        sectionFlags,currentIsStatic,
                        currentOverIsVirt,
                        (yyvsp[(2) - (13)].text),&(yyvsp[(4) - (13)].signature),(yyvsp[(6) - (13)].number),(yyvsp[(8) - (13)].number),&(yyvsp[(9) - (13)].optflags),(yyvsp[(12) - (13)].codeb),(yyvsp[(13) - (13)].codeb),(yyvsp[(7) - (13)].throwlist),(yyvsp[(10) - (13)].optsignature));
            }

            currentIsStatic = FALSE;
            currentOverIsVirt = FALSE;
        ;}
    break;

  case 243:
#line 1818 "parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = currentScope();

                applyTypeFlags(currentModule, &(yyvsp[(1) - (14)].memArg), &(yyvsp[(10) - (14)].optflags));

                /* Handle the unary '+' and '-' operators. */
                if ((cd != NULL && (yyvsp[(5) - (14)].signature).nrArgs == 0) || (cd == NULL && (yyvsp[(5) - (14)].signature).nrArgs == 1))
                {
                    if (strcmp((yyvsp[(3) - (14)].text), "__add__") == 0)
                        (yyvsp[(3) - (14)].text) = "__pos__";
                    else if (strcmp((yyvsp[(3) - (14)].text), "__sub__") == 0)
                        (yyvsp[(3) - (14)].text) = "__neg__";
                }

                (yyvsp[(5) - (14)].signature).result = (yyvsp[(1) - (14)].memArg);

                newFunction(currentSpec,currentModule,
                        sectionFlags,currentIsStatic,
                        currentOverIsVirt,
                        (yyvsp[(3) - (14)].text),&(yyvsp[(5) - (14)].signature),(yyvsp[(7) - (14)].number),(yyvsp[(9) - (14)].number),&(yyvsp[(10) - (14)].optflags),(yyvsp[(13) - (14)].codeb),(yyvsp[(14) - (14)].codeb),(yyvsp[(8) - (14)].throwlist),(yyvsp[(11) - (14)].optsignature));
            }

            currentIsStatic = FALSE;
            currentOverIsVirt = FALSE;
        ;}
    break;

  case 244:
#line 1845 "parser.y"
    {
            if (notSkipping())
            {
                char *sname;
                classDef *scope = currentScope();

                if (scope == NULL || (yyvsp[(4) - (13)].signature).nrArgs != 0)
                    yyerror("Operator casts must be specified in a class and have no arguments");

                applyTypeFlags(currentModule, &(yyvsp[(2) - (13)].memArg), &(yyvsp[(9) - (13)].optflags));

                switch ((yyvsp[(2) - (13)].memArg).atype)
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
                    (yyvsp[(4) - (13)].signature).result = (yyvsp[(2) - (13)].memArg);

                    newFunction(currentSpec, currentModule,
                            sectionFlags,
                            currentIsStatic,
                            currentOverIsVirt, sname,
                            &(yyvsp[(4) - (13)].signature), (yyvsp[(6) - (13)].number), (yyvsp[(8) - (13)].number), &(yyvsp[(9) - (13)].optflags), (yyvsp[(12) - (13)].codeb), (yyvsp[(13) - (13)].codeb),
                            (yyvsp[(7) - (13)].throwlist), (yyvsp[(10) - (13)].optsignature));
                }
                else
                {
                    argList *al;

                    /* Check it doesn't already exist. */
                    for (al = scope->casts; al != NULL; al = al->next)
                        if (compareScopedNames((yyvsp[(2) - (13)].memArg).u.snd, al->arg.u.snd) == 0)
                            yyerror("This operator cast has already been specified in this class");

                    al = sipMalloc(sizeof (argList));
                    al->arg = (yyvsp[(2) - (13)].memArg);
                    al->next = scope->casts;

                    scope->casts = al;
                }
            }

            currentIsStatic = FALSE;
            currentOverIsVirt = FALSE;
        ;}
    break;

  case 245:
#line 1923 "parser.y"
    {(yyval.text) = "__add__";;}
    break;

  case 246:
#line 1924 "parser.y"
    {(yyval.text) = "__sub__";;}
    break;

  case 247:
#line 1925 "parser.y"
    {(yyval.text) = "__mul__";;}
    break;

  case 248:
#line 1926 "parser.y"
    {(yyval.text) = "__div__";;}
    break;

  case 249:
#line 1927 "parser.y"
    {(yyval.text) = "__mod__";;}
    break;

  case 250:
#line 1928 "parser.y"
    {(yyval.text) = "__and__";;}
    break;

  case 251:
#line 1929 "parser.y"
    {(yyval.text) = "__or__";;}
    break;

  case 252:
#line 1930 "parser.y"
    {(yyval.text) = "__xor__";;}
    break;

  case 253:
#line 1931 "parser.y"
    {(yyval.text) = "__lshift__";;}
    break;

  case 254:
#line 1932 "parser.y"
    {(yyval.text) = "__rshift__";;}
    break;

  case 255:
#line 1933 "parser.y"
    {(yyval.text) = "__iadd__";;}
    break;

  case 256:
#line 1934 "parser.y"
    {(yyval.text) = "__isub__";;}
    break;

  case 257:
#line 1935 "parser.y"
    {(yyval.text) = "__imul__";;}
    break;

  case 258:
#line 1936 "parser.y"
    {(yyval.text) = "__idiv__";;}
    break;

  case 259:
#line 1937 "parser.y"
    {(yyval.text) = "__imod__";;}
    break;

  case 260:
#line 1938 "parser.y"
    {(yyval.text) = "__iand__";;}
    break;

  case 261:
#line 1939 "parser.y"
    {(yyval.text) = "__ior__";;}
    break;

  case 262:
#line 1940 "parser.y"
    {(yyval.text) = "__ixor__";;}
    break;

  case 263:
#line 1941 "parser.y"
    {(yyval.text) = "__ilshift__";;}
    break;

  case 264:
#line 1942 "parser.y"
    {(yyval.text) = "__irshift__";;}
    break;

  case 265:
#line 1943 "parser.y"
    {(yyval.text) = "__invert__";;}
    break;

  case 266:
#line 1944 "parser.y"
    {(yyval.text) = "__call__";;}
    break;

  case 267:
#line 1945 "parser.y"
    {(yyval.text) = "__getitem__";;}
    break;

  case 268:
#line 1946 "parser.y"
    {(yyval.text) = "__lt__";;}
    break;

  case 269:
#line 1947 "parser.y"
    {(yyval.text) = "__le__";;}
    break;

  case 270:
#line 1948 "parser.y"
    {(yyval.text) = "__eq__";;}
    break;

  case 271:
#line 1949 "parser.y"
    {(yyval.text) = "__ne__";;}
    break;

  case 272:
#line 1950 "parser.y"
    {(yyval.text) = "__gt__";;}
    break;

  case 273:
#line 1951 "parser.y"
    {(yyval.text) = "__ge__";;}
    break;

  case 274:
#line 1954 "parser.y"
    {
            (yyval.number) = FALSE;
        ;}
    break;

  case 275:
#line 1957 "parser.y"
    {
            (yyval.number) = TRUE;
        ;}
    break;

  case 276:
#line 1962 "parser.y"
    {
            (yyval.number) = 0;
        ;}
    break;

  case 277:
#line 1965 "parser.y"
    {
            if ((yyvsp[(2) - (2)].number) != 0)
                yyerror("Abstract virtual function '= 0' expected");

            (yyval.number) = TRUE;
        ;}
    break;

  case 278:
#line 1973 "parser.y"
    {
            (yyval.optflags).nrFlags = 0;
        ;}
    break;

  case 279:
#line 1976 "parser.y"
    {
            (yyval.optflags) = (yyvsp[(2) - (3)].optflags);
        ;}
    break;

  case 280:
#line 1982 "parser.y"
    {
            (yyval.optflags).flags[0] = (yyvsp[(1) - (1)].flag);
            (yyval.optflags).nrFlags = 1;
        ;}
    break;

  case 281:
#line 1986 "parser.y"
    {
            /* Check there is room. */

            if ((yyvsp[(1) - (3)].optflags).nrFlags == MAX_NR_FLAGS)
                yyerror("Too many optional flags");

            (yyval.optflags) = (yyvsp[(1) - (3)].optflags);

            (yyval.optflags).flags[(yyval.optflags).nrFlags++] = (yyvsp[(3) - (3)].flag);
        ;}
    break;

  case 282:
#line 1998 "parser.y"
    {
            (yyval.flag).ftype = bool_flag;
            (yyval.flag).fname = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 283:
#line 2002 "parser.y"
    {
            (yyval.flag) = (yyvsp[(3) - (3)].flag);
            (yyval.flag).fname = (yyvsp[(1) - (3)].text);
        ;}
    break;

  case 284:
#line 2008 "parser.y"
    {
            (yyval.flag).ftype = (strchr((yyvsp[(1) - (1)].text), '.') != NULL) ? dotted_name_flag : name_flag;
            (yyval.flag).fvalue.sval = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 285:
#line 2012 "parser.y"
    {
            (yyval.flag).ftype = string_flag;
            (yyval.flag).fvalue.sval = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 286:
#line 2016 "parser.y"
    {
            (yyval.flag).ftype = integer_flag;
            (yyval.flag).fvalue.ival = (yyvsp[(1) - (1)].number);
        ;}
    break;

  case 287:
#line 2022 "parser.y"
    {
            (yyval.codeb) = NULL;
        ;}
    break;

  case 288:
#line 2025 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 289:
#line 2030 "parser.y"
    {
            (yyval.codeb) = NULL;
        ;}
    break;

  case 290:
#line 2033 "parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        ;}
    break;

  case 291:
#line 2038 "parser.y"
    {
            int a, nrrxcon, nrrxdis, nrslotcon, nrslotdis, nrarray, nrarraysize;

            nrrxcon = nrrxdis = nrslotcon = nrslotdis = nrarray = nrarraysize = 0;

            for (a = 0; a < (yyvsp[(1) - (1)].signature).nrArgs; ++a)
            {
                argDef *ad = &(yyvsp[(1) - (1)].signature).args[a];

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

            (yyval.signature) = (yyvsp[(1) - (1)].signature);
        ;}
    break;

  case 292:
#line 2086 "parser.y"
    {
            /* No arguments. */

            (yyval.signature).nrArgs = 0;
        ;}
    break;

  case 293:
#line 2091 "parser.y"
    {
            /* The single or first argument. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        ;}
    break;

  case 294:
#line 2097 "parser.y"
    {
            /* Check that it wasn't ...(,arg...). */
            if ((yyvsp[(1) - (3)].signature).nrArgs == 0)
                yyerror("First argument of the list is missing");

            /* Check there is nothing after an ellipsis. */
            if ((yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /*
             * If this argument has no default value, then the
             * previous one mustn't either.
             */
            if ((yyvsp[(3) - (3)].memArg).defval == NULL && (yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].defval != NULL)
                yyerror("Compulsory argument given after optional argument");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        ;}
    break;

  case 295:
#line 2124 "parser.y"
    {
            (yyval.memArg).atype = signal_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = (yyvsp[(2) - (4)].text);
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        ;}
    break;

  case 296:
#line 2133 "parser.y"
    {
            (yyval.memArg).atype = slot_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = (yyvsp[(2) - (4)].text);
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        ;}
    break;

  case 297:
#line 2142 "parser.y"
    {
            (yyval.memArg).atype = anyslot_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = (yyvsp[(2) - (4)].text);
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        ;}
    break;

  case 298:
#line 2151 "parser.y"
    {
            (yyval.memArg).atype = rxcon_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = (yyvsp[(2) - (3)].text);

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags), "SingleShot", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_SINGLE_SHOT;

            currentSpec -> sigslots = TRUE;
        ;}
    break;

  case 299:
#line 2162 "parser.y"
    {
            (yyval.memArg).atype = rxdis_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = (yyvsp[(2) - (3)].text);

            currentSpec -> sigslots = TRUE;
        ;}
    break;

  case 300:
#line 2170 "parser.y"
    {
            (yyval.memArg).atype = slotcon_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = (yyvsp[(5) - (6)].text);

            (yyvsp[(3) - (6)].signature).result.atype = void_type;
            (yyvsp[(3) - (6)].signature).result.argflags = 0;
            (yyvsp[(3) - (6)].signature).result.nrderefs = 0;

            (yyval.memArg).u.sa = sipMalloc(sizeof (signatureDef));
            *(yyval.memArg).u.sa = (yyvsp[(3) - (6)].signature);

            currentSpec -> sigslots = TRUE;
        ;}
    break;

  case 301:
#line 2185 "parser.y"
    {
            (yyval.memArg).atype = slotdis_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = (yyvsp[(5) - (6)].text);

            (yyvsp[(3) - (6)].signature).result.atype = void_type;
            (yyvsp[(3) - (6)].signature).result.argflags = 0;
            (yyvsp[(3) - (6)].signature).result.nrderefs = 0;

            (yyval.memArg).u.sa = sipMalloc(sizeof (signatureDef));
            *(yyval.memArg).u.sa = (yyvsp[(3) - (6)].signature);

            currentSpec -> sigslots = TRUE;
        ;}
    break;

  case 302:
#line 2200 "parser.y"
    {
            (yyval.memArg).atype = qobject_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = (yyvsp[(2) - (3)].text);
        ;}
    break;

  case 303:
#line 2206 "parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (2)].memArg);
            (yyval.memArg).defval = (yyvsp[(2) - (2)].valp);
        ;}
    break;

  case 304:
#line 2212 "parser.y"
    {currentIsStatic = TRUE;;}
    break;

  case 309:
#line 2220 "parser.y"
    {currentOverIsVirt = TRUE;;}
    break;

  case 312:
#line 2224 "parser.y"
    {
            if (notSkipping())
            {
                /* Check the section. */

                if (sectionFlags != 0)
                {
                    if ((sectionFlags & SECT_IS_PUBLIC) == 0)
                        yyerror("Class variables must be in the public section");

                    if (!currentIsStatic && (yyvsp[(5) - (7)].codeb) != NULL)
                        yyerror("%AccessCode cannot be specified for non-static class variables");
                }

                if (currentIsStatic && currentSpec -> genc)
                    yyerror("Cannot have static members in a C structure");

                applyTypeFlags(currentModule, &(yyvsp[(1) - (7)].memArg), &(yyvsp[(3) - (7)].optflags));

                if ((yyvsp[(6) - (7)].codeb) != NULL || (yyvsp[(7) - (7)].codeb) != NULL)
                {
                    if ((yyvsp[(5) - (7)].codeb) != NULL)
                        yyerror("Cannot mix %AccessCode and %GetCode or %SetCode");

                    if (currentScope() == NULL)
                        yyerror("Cannot specify %GetCode or %SetCode for global variables");
                }

                newVar(currentSpec,currentModule,(yyvsp[(2) - (7)].text),currentIsStatic,&(yyvsp[(1) - (7)].memArg),&(yyvsp[(3) - (7)].optflags),(yyvsp[(5) - (7)].codeb),(yyvsp[(6) - (7)].codeb),(yyvsp[(7) - (7)].codeb));
            }

            currentIsStatic = FALSE;
        ;}
    break;

  case 313:
#line 2259 "parser.y"
    {
            (yyval.memArg) = (yyvsp[(2) - (4)].memArg);
            (yyval.memArg).nrderefs += (yyvsp[(3) - (4)].number);
            (yyval.memArg).argflags |= ARG_IS_CONST | (yyvsp[(4) - (4)].number);
            (yyval.memArg).name = NULL;
        ;}
    break;

  case 314:
#line 2265 "parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            (yyval.memArg).nrderefs += (yyvsp[(2) - (3)].number);
            (yyval.memArg).argflags |= (yyvsp[(3) - (3)].number);
            (yyval.memArg).name = NULL;
        ;}
    break;

  case 315:
#line 2273 "parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            (yyval.memArg).name = (yyvsp[(2) - (3)].text);

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags),"AllowNone",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ALLOW_NONE;

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags),"GetWrapper",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_GET_WRAPPER;

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags),"Array",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY;

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags),"ArraySize",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY_SIZE;

            if (getTransfer(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_XFERRED;

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferThis",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_THIS_XFERRED;

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferBack",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_XFERRED_BACK;

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags), "KeepReference", bool_flag) != NULL)
            {
                (yyval.memArg).argflags |= ARG_KEEP_REF;
                (yyval.memArg).key = currentModule->next_key++;
            }

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags),"In",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_IN;

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags),"Out",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_OUT;

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags), "ResultSize", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_RESULT_SIZE;

            if (findOptFlag(&(yyvsp[(3) - (3)].optflags),"Constrained",bool_flag) != NULL)
            {
                (yyval.memArg).argflags |= ARG_CONSTRAINED;

                switch ((yyval.memArg).atype)
                {
                case bool_type:
                    (yyval.memArg).atype = cbool_type;
                    break;

                case int_type:
                    (yyval.memArg).atype = cint_type;
                    break;

                case float_type:
                    (yyval.memArg).atype = cfloat_type;
                    break;

                case double_type:
                    (yyval.memArg).atype = cdouble_type;
                    break;
                }
            }

            applyTypeFlags(currentModule, &(yyval.memArg), &(yyvsp[(3) - (3)].optflags));
        ;}
    break;

  case 316:
#line 2341 "parser.y"
    {
            (yyval.number) = 0;
        ;}
    break;

  case 317:
#line 2344 "parser.y"
    {
            if (currentSpec -> genc)
                yyerror("References not allowed in a C module");

            (yyval.number) = ARG_IS_REF;
        ;}
    break;

  case 318:
#line 2352 "parser.y"
    {
            (yyval.number) = 0;
        ;}
    break;

  case 319:
#line 2355 "parser.y"
    {
            (yyval.number) = (yyvsp[(1) - (2)].number) + 1;
        ;}
    break;

  case 320:
#line 2360 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = defined_type;
            (yyval.memArg).u.snd = (yyvsp[(1) - (1)].scpvalp);

            /* Try and resolve typedefs as early as possible. */
            resolveAnyTypedef(currentSpec, &(yyval.memArg));
        ;}
    break;

  case 321:
#line 2371 "parser.y"
    {
            templateDef *td;

            td = sipMalloc(sizeof(templateDef));
            td->fqname = (yyvsp[(1) - (4)].scpvalp);
            td->types = (yyvsp[(3) - (4)].signature);

            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = template_type;
            (yyval.memArg).u.td = td;
        ;}
    break;

  case 322:
#line 2385 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            /* In a C module all structures must be defined. */
            if (currentSpec -> genc)
            {
                (yyval.memArg).atype = defined_type;
                (yyval.memArg).u.snd = (yyvsp[(2) - (2)].scpvalp);
            }
            else
            {
                (yyval.memArg).atype = struct_type;
                (yyval.memArg).u.sname = (yyvsp[(2) - (2)].scpvalp);
            }
        ;}
    break;

  case 323:
#line 2402 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = ushort_type;
        ;}
    break;

  case 324:
#line 2409 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = short_type;
        ;}
    break;

  case 325:
#line 2416 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = uint_type;
        ;}
    break;

  case 326:
#line 2423 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = uint_type;
        ;}
    break;

  case 327:
#line 2430 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = int_type;
        ;}
    break;

  case 328:
#line 2437 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = long_type;
        ;}
    break;

  case 329:
#line 2444 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = ulong_type;
        ;}
    break;

  case 330:
#line 2451 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = longlong_type;
        ;}
    break;

  case 331:
#line 2458 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = ulonglong_type;
        ;}
    break;

  case 332:
#line 2465 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = float_type;
        ;}
    break;

  case 333:
#line 2472 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = double_type;
        ;}
    break;

  case 334:
#line 2479 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = bool_type;
        ;}
    break;

  case 335:
#line 2486 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = sstring_type;
        ;}
    break;

  case 336:
#line 2493 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = ustring_type;
        ;}
    break;

  case 337:
#line 2500 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = string_type;
        ;}
    break;

  case 338:
#line 2507 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = wstring_type;
        ;}
    break;

  case 339:
#line 2514 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = void_type;
        ;}
    break;

  case 340:
#line 2521 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = pyobject_type;
        ;}
    break;

  case 341:
#line 2528 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = pytuple_type;
        ;}
    break;

  case 342:
#line 2535 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = pylist_type;
        ;}
    break;

  case 343:
#line 2542 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = pydict_type;
        ;}
    break;

  case 344:
#line 2549 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = pycallable_type;
        ;}
    break;

  case 345:
#line 2556 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = pyslice_type;
        ;}
    break;

  case 346:
#line 2563 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = pytype_type;
        ;}
    break;

  case 347:
#line 2570 "parser.y"
    {
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).original_type = NULL;

            (yyval.memArg).atype = ellipsis_type;
        ;}
    break;

  case 348:
#line 2579 "parser.y"
    {
            /* The single or first type. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        ;}
    break;

  case 349:
#line 2585 "parser.y"
    {
            /* Check there is nothing after an ellipsis. */
            if ((yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        ;}
    break;

  case 350:
#line 2601 "parser.y"
    {
            (yyval.throwlist) = NULL;
        ;}
    break;

  case 351:
#line 2604 "parser.y"
    {
            if (currentSpec->genc)
                yyerror("Exceptions not allowed in a C module");

            (yyval.throwlist) = (yyvsp[(3) - (4)].throwlist);
        ;}
    break;

  case 352:
#line 2612 "parser.y"
    {
            /* Empty list so use a blank. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 0;
        ;}
    break;

  case 353:
#line 2618 "parser.y"
    {
            /* The only or first exception. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 1;
            (yyval.throwlist) -> args[0] = findException(currentSpec, (yyvsp[(1) - (1)].scpvalp), FALSE);
        ;}
    break;

  case 354:
#line 2625 "parser.y"
    {
            /* Check that it wasn't ...(,arg...). */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == 0)
                yyerror("First exception of throw specifier is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.throwlist) = (yyvsp[(1) - (3)].throwlist);
            (yyval.throwlist) -> args[(yyval.throwlist) -> nrArgs++] = findException(currentSpec, (yyvsp[(3) - (3)].scpvalp), FALSE);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5386 "parser.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 2641 "parser.y"



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
    moduleDef *importing_module = currentModule;

    parseFile(fp, filename, currentModule, FALSE);
    currentModule = allocModule();
    currentModule->file = filename;

    /* Inherit from any importing module. */
    if (importing_module != NULL)
    {
        currentModule->encoding = importing_module->encoding;
    }
}


/*
 * Allocate and initialise the memory for a new module.
 */
static moduleDef *allocModule()
{
    moduleDef *newmod, **tailp;

    newmod = sipMalloc(sizeof (moduleDef));

    newmod->version = -1;
    newmod->encoding = string_type;
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

            /*
             * This is a bit of a cheat.  With consolidated modules it's
             * possible to have two implementations of a mapped type in
             * different branches of the module hierarchy.  We assume that, if
             * there really are multiple implementations in the same branch,
             * then it will be picked up in a non-consolidated build.
             */
            if (isConsolidated(pt->module))
                continue;

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

        case ascii_string_type:
        case latin1_string_type:
        case utf8_string_type:
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
    var -> getter = NULL;
    var -> setter = NULL;

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
    else if ((1 || stringFind(currentSpec, "RenameWx")) &&
             strlen(cname) > 2 &&
             cname[0] == 'w' && cname[1] == 'x')
        pname = cname + 2;
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
 * Return TRUE if automatic property generation was enabled.
 */
int optAutoProperties(sipSpec *pt)
{
    return 1; // stringFind(pt, "AutoProperties");
}

/*
 * Return TRUE if the ThreadChecking option was specified.
 */
int optThreadChecking(sipSpec *pt)
{
    return 0; // stringFind(pt, "ThreadChecking");
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
void addVariable(sipSpec *pt, varDef *vd)
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


/*
 * Update a type according to optional flags.
 */
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags)
{
    if (ad->atype == string_type && !isArray(ad) && !isReference(ad))
    {
        optFlag *of;

        if ((of = findOptFlag(flags, "Encoding", string_flag)) == NULL)
            ad->atype = mod->encoding;
        else if ((ad->atype = convertEncoding(of->fvalue.sval)) == no_type)
            yyerror("The value of the /Encoding/ annotation must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
    }
}


/*
 * Return the argument type for a string with the given encoding or no_type if
 * the encoding was invalid.
 */
static argType convertEncoding(const char *encoding)
{
    if (strcmp(encoding, "ASCII") == 0)
        return ascii_string_type;

    if (strcmp(encoding, "Latin-1") == 0)
        return latin1_string_type;

    if (strcmp(encoding, "UTF-8") == 0)
        return utf8_string_type;

    if (strcmp(encoding, "None") == 0)
        return string_type;

    return no_type;
}

