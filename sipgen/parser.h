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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 124 "parser.y"
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
#line 276 "parser.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



