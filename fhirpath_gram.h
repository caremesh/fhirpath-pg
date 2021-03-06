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
     WHERE_P = 258,
     NULL_P = 259,
     TRUE_P = 260,
     FALSE_P = 261,
     NUMERIC_T = 262,
     OBJECT_T = 263,
     STRING_T = 264,
     BOOLEAN_T = 265,
     PIPE_P = 266,
     EXISTS_P = 267,
     STRING_P = 268,
     NUMERIC_P = 269,
     OR_P = 270,
     AND_P = 271,
     NOT_P = 272,
     IS_P = 273,
     IN_P = 274
   };
#endif
/* Tokens.  */
#define WHERE_P 258
#define NULL_P 259
#define TRUE_P 260
#define FALSE_P 261
#define NUMERIC_T 262
#define OBJECT_T 263
#define STRING_T 264
#define BOOLEAN_T 265
#define PIPE_P 266
#define EXISTS_P 267
#define STRING_P 268
#define NUMERIC_P 269
#define OR_P 270
#define AND_P 271
#define NOT_P 272
#define IS_P 273
#define IN_P 274




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 169 "fhirpath_gram.y"
{
	string 				str;
	List				*elems; /* list of FhirpathParseItem */

	FhirpathParseItem	*value;
}
/* Line 1529 of yacc.c.  */
#line 94 "fhirpath_gram.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



