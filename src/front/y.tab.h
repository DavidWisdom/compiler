/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "yacc.y"

#include "syntax.h"
#include <iostream>
#include <string>
#include <cassert>
#include <cstring>
#include <memory>
Front::CompUnit* root = nullptr;

#line 59 "y.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    INT_CONST = 259,               /* INT_CONST  */
    FLOAT_CONST = 260,             /* FLOAT_CONST  */
    CONST = 261,                   /* CONST  */
    INTT = 262,                    /* INTT  */
    FLOATT = 263,                  /* FLOATT  */
    COMMA = 264,                   /* COMMA  */
    SEMICOLON = 265,               /* SEMICOLON  */
    LBRACE = 266,                  /* LBRACE  */
    RBRACE = 267,                  /* RBRACE  */
    LBRACKET = 268,                /* LBRACKET  */
    RBRACKET = 269,                /* RBRACKET  */
    LPAREN = 270,                  /* LPAREN  */
    RPAREN = 271,                  /* RPAREN  */
    ASSIGNN = 272,                 /* ASSIGNN  */
    VOID = 273,                    /* VOID  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    WHILE = 276,                   /* WHILE  */
    BREAK = 277,                   /* BREAK  */
    CONTINUE = 278,                /* CONTINUE  */
    RETURN = 279,                  /* RETURN  */
    ADDD = 280,                    /* ADDD  */
    SUBB = 281,                    /* SUBB  */
    MULL = 282,                    /* MULL  */
    DIVV = 283,                    /* DIVV  */
    MODD = 284,                    /* MODD  */
    GTT = 285,                     /* GTT  */
    GEQQ = 286,                    /* GEQQ  */
    LTT = 287,                     /* LTT  */
    LEQQ = 288,                    /* LEQQ  */
    EQQ = 289,                     /* EQQ  */
    NEQQ = 290,                    /* NEQQ  */
    ANDD = 291,                    /* ANDD  */
    ORR = 292,                     /* ORR  */
    NOTT = 293,                    /* NOTT  */
    LOWER_THAN_ELSE = 294          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENT 258
#define INT_CONST 259
#define FLOAT_CONST 260
#define CONST 261
#define INTT 262
#define FLOATT 263
#define COMMA 264
#define SEMICOLON 265
#define LBRACE 266
#define RBRACE 267
#define LBRACKET 268
#define RBRACKET 269
#define LPAREN 270
#define RPAREN 271
#define ASSIGNN 272
#define VOID 273
#define IF 274
#define ELSE 275
#define WHILE 276
#define BREAK 277
#define CONTINUE 278
#define RETURN 279
#define ADDD 280
#define SUBB 281
#define MULL 282
#define DIVV 283
#define MODD 284
#define GTT 285
#define GEQQ 286
#define LTT 287
#define LEQQ 288
#define EQQ 289
#define NEQQ 290
#define ANDD 291
#define ORR 292
#define NOTT 293
#define LOWER_THAN_ELSE 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "yacc.y"

    Front::CompUnit* compUnit;
    Front::Stmt* stmt;
    char* data;
    char* name;
    int type;
    int op;

#line 166 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */