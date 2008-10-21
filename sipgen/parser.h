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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 120 "parser.y"
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
#line 266 "parser.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



