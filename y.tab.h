/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ERROR = 258,
     IF = 259,
     ELSE = 260,
     WHILE = 261,
     RETURN = 262,
     INT = 263,
     VOID = 264,
     ID = 265,
     NUM = 266,
     ASSIGN = 267,
     EQ = 268,
     NE = 269,
     LT = 270,
     LE = 271,
     GT = 272,
     GE = 273,
     PLUS = 274,
     MINUS = 275,
     TIMES = 276,
     OVER = 277,
     SEMI = 278,
     COMMA = 279,
     LPAREN = 280,
     RPAREN = 281,
     LBRACE = 282,
     RBRACE = 283,
     LCURLY = 284,
     RCURLY = 285
   };
#endif
/* Tokens.  */
#define ERROR 258
#define IF 259
#define ELSE 260
#define WHILE 261
#define RETURN 262
#define INT 263
#define VOID 264
#define ID 265
#define NUM 266
#define ASSIGN 267
#define EQ 268
#define NE 269
#define LT 270
#define LE 271
#define GT 272
#define GE 273
#define PLUS 274
#define MINUS 275
#define TIMES 276
#define OVER 277
#define SEMI 278
#define COMMA 279
#define LPAREN 280
#define RPAREN 281
#define LBRACE 282
#define RBRACE 283
#define LCURLY 284
#define RCURLY 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

