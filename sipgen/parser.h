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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 122 "parser.y"
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
#line 274 "parser.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



