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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_API = 258,
     TK_DEFENCODING = 259,
     TK_PLUGIN = 260,
     TK_DOC = 261,
     TK_EXPORTEDDOC = 262,
     TK_MAKEFILE = 263,
     TK_ACCESSCODE = 264,
     TK_GETCODE = 265,
     TK_SETCODE = 266,
     TK_PREINITCODE = 267,
     TK_INITCODE = 268,
     TK_POSTINITCODE = 269,
     TK_UNITCODE = 270,
     TK_MODCODE = 271,
     TK_TYPECODE = 272,
     TK_PREPYCODE = 273,
     TK_COPYING = 274,
     TK_MAPPEDTYPE = 275,
     TK_CODELINE = 276,
     TK_IF = 277,
     TK_END = 278,
     TK_NAME = 279,
     TK_PATHNAME = 280,
     TK_STRING = 281,
     TK_VIRTUALCATCHERCODE = 282,
     TK_TRAVERSECODE = 283,
     TK_CLEARCODE = 284,
     TK_GETBUFFERCODE = 285,
     TK_RELEASEBUFFERCODE = 286,
     TK_READBUFFERCODE = 287,
     TK_WRITEBUFFERCODE = 288,
     TK_SEGCOUNTCODE = 289,
     TK_CHARBUFFERCODE = 290,
     TK_PICKLECODE = 291,
     TK_METHODCODE = 292,
     TK_FROMTYPE = 293,
     TK_TOTYPE = 294,
     TK_TOSUBCLASS = 295,
     TK_INCLUDE = 296,
     TK_OPTINCLUDE = 297,
     TK_IMPORT = 298,
     TK_EXPHEADERCODE = 299,
     TK_MODHEADERCODE = 300,
     TK_TYPEHEADERCODE = 301,
     TK_MODULE = 302,
     TK_CMODULE = 303,
     TK_CONSMODULE = 304,
     TK_COMPOMODULE = 305,
     TK_CLASS = 306,
     TK_STRUCT = 307,
     TK_PUBLIC = 308,
     TK_PROTECTED = 309,
     TK_PRIVATE = 310,
     TK_SIGNALS = 311,
     TK_SLOTS = 312,
     TK_BOOL = 313,
     TK_SHORT = 314,
     TK_INT = 315,
     TK_LONG = 316,
     TK_FLOAT = 317,
     TK_DOUBLE = 318,
     TK_CHAR = 319,
     TK_WCHAR_T = 320,
     TK_VOID = 321,
     TK_PYOBJECT = 322,
     TK_PYTUPLE = 323,
     TK_PYLIST = 324,
     TK_PYDICT = 325,
     TK_PYCALLABLE = 326,
     TK_PYSLICE = 327,
     TK_PYTYPE = 328,
     TK_VIRTUAL = 329,
     TK_ENUM = 330,
     TK_SIGNED = 331,
     TK_UNSIGNED = 332,
     TK_SCOPE = 333,
     TK_LOGICAL_OR = 334,
     TK_CONST = 335,
     TK_STATIC = 336,
     TK_SIPSIGNAL = 337,
     TK_SIPSLOT = 338,
     TK_SIPANYSLOT = 339,
     TK_SIPRXCON = 340,
     TK_SIPRXDIS = 341,
     TK_SIPSLOTCON = 342,
     TK_SIPSLOTDIS = 343,
     TK_NUMBER = 344,
     TK_REAL = 345,
     TK_TYPEDEF = 346,
     TK_NAMESPACE = 347,
     TK_TIMELINE = 348,
     TK_PLATFORMS = 349,
     TK_FEATURE = 350,
     TK_LICENSE = 351,
     TK_QCHAR = 352,
     TK_TRUE = 353,
     TK_FALSE = 354,
     TK_NULL = 355,
     TK_OPERATOR = 356,
     TK_THROW = 357,
     TK_QOBJECT = 358,
     TK_EXCEPTION = 359,
     TK_RAISECODE = 360,
     TK_EXPLICIT = 361,
     TK_TEMPLATE = 362,
     TK_ELLIPSIS = 363,
     TK_DEFMETATYPE = 364,
     TK_DEFSUPERTYPE = 365
   };
#endif
#define TK_API 258
#define TK_DEFENCODING 259
#define TK_PLUGIN 260
#define TK_DOC 261
#define TK_EXPORTEDDOC 262
#define TK_MAKEFILE 263
#define TK_ACCESSCODE 264
#define TK_GETCODE 265
#define TK_SETCODE 266
#define TK_PREINITCODE 267
#define TK_INITCODE 268
#define TK_POSTINITCODE 269
#define TK_UNITCODE 270
#define TK_MODCODE 271
#define TK_TYPECODE 272
#define TK_PREPYCODE 273
#define TK_COPYING 274
#define TK_MAPPEDTYPE 275
#define TK_CODELINE 276
#define TK_IF 277
#define TK_END 278
#define TK_NAME 279
#define TK_PATHNAME 280
#define TK_STRING 281
#define TK_VIRTUALCATCHERCODE 282
#define TK_TRAVERSECODE 283
#define TK_CLEARCODE 284
#define TK_GETBUFFERCODE 285
#define TK_RELEASEBUFFERCODE 286
#define TK_READBUFFERCODE 287
#define TK_WRITEBUFFERCODE 288
#define TK_SEGCOUNTCODE 289
#define TK_CHARBUFFERCODE 290
#define TK_PICKLECODE 291
#define TK_METHODCODE 292
#define TK_FROMTYPE 293
#define TK_TOTYPE 294
#define TK_TOSUBCLASS 295
#define TK_INCLUDE 296
#define TK_OPTINCLUDE 297
#define TK_IMPORT 298
#define TK_EXPHEADERCODE 299
#define TK_MODHEADERCODE 300
#define TK_TYPEHEADERCODE 301
#define TK_MODULE 302
#define TK_CMODULE 303
#define TK_CONSMODULE 304
#define TK_COMPOMODULE 305
#define TK_CLASS 306
#define TK_STRUCT 307
#define TK_PUBLIC 308
#define TK_PROTECTED 309
#define TK_PRIVATE 310
#define TK_SIGNALS 311
#define TK_SLOTS 312
#define TK_BOOL 313
#define TK_SHORT 314
#define TK_INT 315
#define TK_LONG 316
#define TK_FLOAT 317
#define TK_DOUBLE 318
#define TK_CHAR 319
#define TK_WCHAR_T 320
#define TK_VOID 321
#define TK_PYOBJECT 322
#define TK_PYTUPLE 323
#define TK_PYLIST 324
#define TK_PYDICT 325
#define TK_PYCALLABLE 326
#define TK_PYSLICE 327
#define TK_PYTYPE 328
#define TK_VIRTUAL 329
#define TK_ENUM 330
#define TK_SIGNED 331
#define TK_UNSIGNED 332
#define TK_SCOPE 333
#define TK_LOGICAL_OR 334
#define TK_CONST 335
#define TK_STATIC 336
#define TK_SIPSIGNAL 337
#define TK_SIPSLOT 338
#define TK_SIPANYSLOT 339
#define TK_SIPRXCON 340
#define TK_SIPRXDIS 341
#define TK_SIPSLOTCON 342
#define TK_SIPSLOTDIS 343
#define TK_NUMBER 344
#define TK_REAL 345
#define TK_TYPEDEF 346
#define TK_NAMESPACE 347
#define TK_TIMELINE 348
#define TK_PLATFORMS 349
#define TK_FEATURE 350
#define TK_LICENSE 351
#define TK_QCHAR 352
#define TK_TRUE 353
#define TK_FALSE 354
#define TK_NULL 355
#define TK_OPERATOR 356
#define TK_THROW 357
#define TK_QOBJECT 358
#define TK_EXCEPTION 359
#define TK_RAISECODE 360
#define TK_EXPLICIT 361
#define TK_TEMPLATE 362
#define TK_ELLIPSIS 363
#define TK_DEFMETATYPE 364
#define TK_DEFSUPERTYPE 365




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 138 "parser.y"
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
/* Line 1241 of yacc.c.  */
#line 278 "parser.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



