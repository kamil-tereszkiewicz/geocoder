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

#ifndef YY_LWG_PARSE_YY_Y_TAB_H_INCLUDED
# define YY_LWG_PARSE_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int lwg_parse_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    POINT = 258,                   /* POINT  */
    LINESTRING = 259,              /* LINESTRING  */
    POLYGON = 260,                 /* POLYGON  */
    MULTIPOINT = 261,              /* MULTIPOINT  */
    MULTILINESTRING = 262,         /* MULTILINESTRING  */
    MULTIPOLYGON = 263,            /* MULTIPOLYGON  */
    GEOMETRYCOLLECTION = 264,      /* GEOMETRYCOLLECTION  */
    CIRCULARSTRING = 265,          /* CIRCULARSTRING  */
    COMPOUNDCURVE = 266,           /* COMPOUNDCURVE  */
    CURVEPOLYGON = 267,            /* CURVEPOLYGON  */
    MULTICURVE = 268,              /* MULTICURVE  */
    MULTISURFACE = 269,            /* MULTISURFACE  */
    POINTM = 270,                  /* POINTM  */
    LINESTRINGM = 271,             /* LINESTRINGM  */
    POLYGONM = 272,                /* POLYGONM  */
    MULTIPOINTM = 273,             /* MULTIPOINTM  */
    MULTILINESTRINGM = 274,        /* MULTILINESTRINGM  */
    MULTIPOLYGONM = 275,           /* MULTIPOLYGONM  */
    GEOMETRYCOLLECTIONM = 276,     /* GEOMETRYCOLLECTIONM  */
    CIRCULARSTRINGM = 277,         /* CIRCULARSTRINGM  */
    COMPOUNDCURVEM = 278,          /* COMPOUNDCURVEM  */
    CURVEPOLYGONM = 279,           /* CURVEPOLYGONM  */
    MULTICURVEM = 280,             /* MULTICURVEM  */
    MULTISURFACEM = 281,           /* MULTISURFACEM  */
    SRID = 282,                    /* SRID  */
    EMPTY = 283,                   /* EMPTY  */
    VALUE = 284,                   /* VALUE  */
    LPAREN = 285,                  /* LPAREN  */
    RPAREN = 286,                  /* RPAREN  */
    COMMA = 287,                   /* COMMA  */
    EQUALS = 288,                  /* EQUALS  */
    SEMICOLON = 289,               /* SEMICOLON  */
    WKB = 290                      /* WKB  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define POINT 258
#define LINESTRING 259
#define POLYGON 260
#define MULTIPOINT 261
#define MULTILINESTRING 262
#define MULTIPOLYGON 263
#define GEOMETRYCOLLECTION 264
#define CIRCULARSTRING 265
#define COMPOUNDCURVE 266
#define CURVEPOLYGON 267
#define MULTICURVE 268
#define MULTISURFACE 269
#define POINTM 270
#define LINESTRINGM 271
#define POLYGONM 272
#define MULTIPOINTM 273
#define MULTILINESTRINGM 274
#define MULTIPOLYGONM 275
#define GEOMETRYCOLLECTIONM 276
#define CIRCULARSTRINGM 277
#define COMPOUNDCURVEM 278
#define CURVEPOLYGONM 279
#define MULTICURVEM 280
#define MULTISURFACEM 281
#define SRID 282
#define EMPTY 283
#define VALUE 284
#define LPAREN 285
#define RPAREN 286
#define COMMA 287
#define EQUALS 288
#define SEMICOLON 289
#define WKB 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "wktparse.y"

	double value;
	const char* wkb;

#line 142 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE lwg_parse_yylval;
extern YYLTYPE lwg_parse_yylloc;

int lwg_parse_yyparse (void);


#endif /* !YY_LWG_PARSE_YY_Y_TAB_H_INCLUDED  */
