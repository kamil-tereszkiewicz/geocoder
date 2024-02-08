/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         lwg_parse_yyparse
#define yylex           lwg_parse_yylex
#define yyerror         lwg_parse_yyerror
#define yydebug         lwg_parse_yydebug
#define yynerrs         lwg_parse_yynerrs
#define yylval          lwg_parse_yylval
#define yychar          lwg_parse_yychar
#define yylloc          lwg_parse_yylloc

/* First part of user prologue.  */
#line 9 "wktparse.y"

#include "wktparse.h"
#include <unistd.h>
#include <stdio.h>

void set_zm(char z, char m);
int lwg_parse_yylex(void);

#line 88 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 216 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_POINT = 3,                      /* POINT  */
  YYSYMBOL_LINESTRING = 4,                 /* LINESTRING  */
  YYSYMBOL_POLYGON = 5,                    /* POLYGON  */
  YYSYMBOL_MULTIPOINT = 6,                 /* MULTIPOINT  */
  YYSYMBOL_MULTILINESTRING = 7,            /* MULTILINESTRING  */
  YYSYMBOL_MULTIPOLYGON = 8,               /* MULTIPOLYGON  */
  YYSYMBOL_GEOMETRYCOLLECTION = 9,         /* GEOMETRYCOLLECTION  */
  YYSYMBOL_CIRCULARSTRING = 10,            /* CIRCULARSTRING  */
  YYSYMBOL_COMPOUNDCURVE = 11,             /* COMPOUNDCURVE  */
  YYSYMBOL_CURVEPOLYGON = 12,              /* CURVEPOLYGON  */
  YYSYMBOL_MULTICURVE = 13,                /* MULTICURVE  */
  YYSYMBOL_MULTISURFACE = 14,              /* MULTISURFACE  */
  YYSYMBOL_POINTM = 15,                    /* POINTM  */
  YYSYMBOL_LINESTRINGM = 16,               /* LINESTRINGM  */
  YYSYMBOL_POLYGONM = 17,                  /* POLYGONM  */
  YYSYMBOL_MULTIPOINTM = 18,               /* MULTIPOINTM  */
  YYSYMBOL_MULTILINESTRINGM = 19,          /* MULTILINESTRINGM  */
  YYSYMBOL_MULTIPOLYGONM = 20,             /* MULTIPOLYGONM  */
  YYSYMBOL_GEOMETRYCOLLECTIONM = 21,       /* GEOMETRYCOLLECTIONM  */
  YYSYMBOL_CIRCULARSTRINGM = 22,           /* CIRCULARSTRINGM  */
  YYSYMBOL_COMPOUNDCURVEM = 23,            /* COMPOUNDCURVEM  */
  YYSYMBOL_CURVEPOLYGONM = 24,             /* CURVEPOLYGONM  */
  YYSYMBOL_MULTICURVEM = 25,               /* MULTICURVEM  */
  YYSYMBOL_MULTISURFACEM = 26,             /* MULTISURFACEM  */
  YYSYMBOL_SRID = 27,                      /* SRID  */
  YYSYMBOL_EMPTY = 28,                     /* EMPTY  */
  YYSYMBOL_VALUE = 29,                     /* VALUE  */
  YYSYMBOL_LPAREN = 30,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 31,                    /* RPAREN  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_EQUALS = 33,                    /* EQUALS  */
  YYSYMBOL_SEMICOLON = 34,                 /* SEMICOLON  */
  YYSYMBOL_WKB = 35,                       /* WKB  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_geometry = 37,                  /* geometry  */
  YYSYMBOL_38_1 = 38,                      /* $@1  */
  YYSYMBOL_39_2 = 39,                      /* $@2  */
  YYSYMBOL_geometry_int = 40,              /* geometry_int  */
  YYSYMBOL_srid = 41,                      /* srid  */
  YYSYMBOL_geom_wkb = 42,                  /* geom_wkb  */
  YYSYMBOL_geom_point = 43,                /* geom_point  */
  YYSYMBOL_44_3 = 44,                      /* $@3  */
  YYSYMBOL_point = 45,                     /* point  */
  YYSYMBOL_empty_point = 46,               /* empty_point  */
  YYSYMBOL_47_4 = 47,                      /* $@4  */
  YYSYMBOL_nonempty_point = 48,            /* nonempty_point  */
  YYSYMBOL_49_5 = 49,                      /* $@5  */
  YYSYMBOL_point_int = 50,                 /* point_int  */
  YYSYMBOL_geom_multipoint = 51,           /* geom_multipoint  */
  YYSYMBOL_52_6 = 52,                      /* $@6  */
  YYSYMBOL_53_7 = 53,                      /* $@7  */
  YYSYMBOL_multipoint = 54,                /* multipoint  */
  YYSYMBOL_55_8 = 55,                      /* $@8  */
  YYSYMBOL_multipoint_int = 56,            /* multipoint_int  */
  YYSYMBOL_mpoint_element = 57,            /* mpoint_element  */
  YYSYMBOL_58_9 = 58,                      /* $@9  */
  YYSYMBOL_geom_linestring = 59,           /* geom_linestring  */
  YYSYMBOL_60_10 = 60,                     /* $@10  */
  YYSYMBOL_linestring = 61,                /* linestring  */
  YYSYMBOL_empty_linestring = 62,          /* empty_linestring  */
  YYSYMBOL_63_11 = 63,                     /* $@11  */
  YYSYMBOL_nonempty_linestring = 64,       /* nonempty_linestring  */
  YYSYMBOL_65_12 = 65,                     /* $@12  */
  YYSYMBOL_nonempty_linestring_closed = 66, /* nonempty_linestring_closed  */
  YYSYMBOL_67_13 = 67,                     /* $@13  */
  YYSYMBOL_linestring_1 = 68,              /* linestring_1  */
  YYSYMBOL_69_14 = 69,                     /* $@14  */
  YYSYMBOL_linestring_int = 70,            /* linestring_int  */
  YYSYMBOL_geom_circularstring = 71,       /* geom_circularstring  */
  YYSYMBOL_72_15 = 72,                     /* $@15  */
  YYSYMBOL_geom_circularstring_closed = 73, /* geom_circularstring_closed  */
  YYSYMBOL_74_16 = 74,                     /* $@16  */
  YYSYMBOL_circularstring = 75,            /* circularstring  */
  YYSYMBOL_circularstring_closed = 76,     /* circularstring_closed  */
  YYSYMBOL_empty_circularstring = 77,      /* empty_circularstring  */
  YYSYMBOL_78_17 = 78,                     /* $@17  */
  YYSYMBOL_nonempty_circularstring = 79,   /* nonempty_circularstring  */
  YYSYMBOL_80_18 = 80,                     /* $@18  */
  YYSYMBOL_nonempty_circularstring_closed = 81, /* nonempty_circularstring_closed  */
  YYSYMBOL_82_19 = 82,                     /* $@19  */
  YYSYMBOL_circularstring_1 = 83,          /* circularstring_1  */
  YYSYMBOL_84_20 = 84,                     /* $@20  */
  YYSYMBOL_circularstring_int = 85,        /* circularstring_int  */
  YYSYMBOL_geom_compoundcurve = 86,        /* geom_compoundcurve  */
  YYSYMBOL_87_21 = 87,                     /* $@21  */
  YYSYMBOL_88_22 = 88,                     /* $@22  */
  YYSYMBOL_compoundcurve = 89,             /* compoundcurve  */
  YYSYMBOL_90_23 = 90,                     /* $@23  */
  YYSYMBOL_compoundcurve_int = 91,         /* compoundcurve_int  */
  YYSYMBOL_geom_multilinestring = 92,      /* geom_multilinestring  */
  YYSYMBOL_93_24 = 93,                     /* $@24  */
  YYSYMBOL_94_25 = 94,                     /* $@25  */
  YYSYMBOL_multilinestring = 95,           /* multilinestring  */
  YYSYMBOL_96_26 = 96,                     /* $@26  */
  YYSYMBOL_multilinestring_int = 97,       /* multilinestring_int  */
  YYSYMBOL_geom_multicurve = 98,           /* geom_multicurve  */
  YYSYMBOL_99_27 = 99,                     /* $@27  */
  YYSYMBOL_100_28 = 100,                   /* $@28  */
  YYSYMBOL_multicurve = 101,               /* multicurve  */
  YYSYMBOL_102_29 = 102,                   /* $@29  */
  YYSYMBOL_multicurve_int = 103,           /* multicurve_int  */
  YYSYMBOL_geom_polygon = 104,             /* geom_polygon  */
  YYSYMBOL_105_30 = 105,                   /* $@30  */
  YYSYMBOL_polygon = 106,                  /* polygon  */
  YYSYMBOL_empty_polygon = 107,            /* empty_polygon  */
  YYSYMBOL_108_31 = 108,                   /* $@31  */
  YYSYMBOL_nonempty_polygon = 109,         /* nonempty_polygon  */
  YYSYMBOL_110_32 = 110,                   /* $@32  */
  YYSYMBOL_polygon_1 = 111,                /* polygon_1  */
  YYSYMBOL_112_33 = 112,                   /* $@33  */
  YYSYMBOL_polygon_int = 113,              /* polygon_int  */
  YYSYMBOL_geom_curvepolygon = 114,        /* geom_curvepolygon  */
  YYSYMBOL_115_34 = 115,                   /* $@34  */
  YYSYMBOL_116_35 = 116,                   /* $@35  */
  YYSYMBOL_curvepolygon = 117,             /* curvepolygon  */
  YYSYMBOL_118_36 = 118,                   /* $@36  */
  YYSYMBOL_curvepolygon_int = 119,         /* curvepolygon_int  */
  YYSYMBOL_geom_multipolygon = 120,        /* geom_multipolygon  */
  YYSYMBOL_121_37 = 121,                   /* $@37  */
  YYSYMBOL_122_38 = 122,                   /* $@38  */
  YYSYMBOL_multipolygon = 123,             /* multipolygon  */
  YYSYMBOL_124_39 = 124,                   /* $@39  */
  YYSYMBOL_multipolygon_int = 125,         /* multipolygon_int  */
  YYSYMBOL_geom_multisurface = 126,        /* geom_multisurface  */
  YYSYMBOL_127_40 = 127,                   /* $@40  */
  YYSYMBOL_128_41 = 128,                   /* $@41  */
  YYSYMBOL_multisurface = 129,             /* multisurface  */
  YYSYMBOL_130_42 = 130,                   /* $@42  */
  YYSYMBOL_multisurface_int = 131,         /* multisurface_int  */
  YYSYMBOL_geom_geometrycollection = 132,  /* geom_geometrycollection  */
  YYSYMBOL_133_43 = 133,                   /* $@43  */
  YYSYMBOL_134_44 = 134,                   /* $@44  */
  YYSYMBOL_geometrycollection = 135,       /* geometrycollection  */
  YYSYMBOL_136_45 = 136,                   /* $@45  */
  YYSYMBOL_geometrycollection_int = 137,   /* geometrycollection_int  */
  YYSYMBOL_a_point = 138,                  /* a_point  */
  YYSYMBOL_point_2d = 139,                 /* point_2d  */
  YYSYMBOL_point_3d = 140,                 /* point_3d  */
  YYSYMBOL_point_4d = 141,                 /* point_4d  */
  YYSYMBOL_empty = 142                     /* empty  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   180

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  169
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    38,    38,    38,    40,    40,    43,    45,    47,    49,
      51,    53,    55,    57,    59,    61,    63,    65,    67,    70,
      73,    79,    81,    81,    84,    86,    89,    89,    92,    92,
      95,   100,   100,   102,   102,   105,   107,   107,   110,   112,
     115,   118,   118,   124,   126,   126,   129,   131,   134,   134,
     137,   137,   140,   140,   143,   143,   146,   148,   153,   155,
     155,   158,   160,   160,   163,   165,   168,   170,   173,   173,
     176,   176,   179,   179,   182,   182,   185,   187,   192,   192,
     194,   194,   197,   199,   199,   202,   204,   206,   208,   213,
     213,   216,   216,   220,   222,   222,   225,   227,   232,   232,
     235,   235,   239,   241,   241,   244,   246,   248,   250,   255,
     257,   257,   260,   262,   265,   265,   268,   268,   271,   271,
     274,   276,   281,   281,   283,   283,   287,   289,   289,   292,
     294,   296,   298,   303,   303,   305,   305,   309,   311,   311,
     314,   316,   321,   321,   323,   323,   327,   329,   329,   332,
     334,   336,   338,   343,   343,   346,   346,   350,   352,   352,
     356,   358,   360,   364,   366,   368,   371,   374,   377,   380
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "POINT", "LINESTRING",
  "POLYGON", "MULTIPOINT", "MULTILINESTRING", "MULTIPOLYGON",
  "GEOMETRYCOLLECTION", "CIRCULARSTRING", "COMPOUNDCURVE", "CURVEPOLYGON",
  "MULTICURVE", "MULTISURFACE", "POINTM", "LINESTRINGM", "POLYGONM",
  "MULTIPOINTM", "MULTILINESTRINGM", "MULTIPOLYGONM",
  "GEOMETRYCOLLECTIONM", "CIRCULARSTRINGM", "COMPOUNDCURVEM",
  "CURVEPOLYGONM", "MULTICURVEM", "MULTISURFACEM", "SRID", "EMPTY",
  "VALUE", "LPAREN", "RPAREN", "COMMA", "EQUALS", "SEMICOLON", "WKB",
  "$accept", "geometry", "$@1", "$@2", "geometry_int", "srid", "geom_wkb",
  "geom_point", "$@3", "point", "empty_point", "$@4", "nonempty_point",
  "$@5", "point_int", "geom_multipoint", "$@6", "$@7", "multipoint", "$@8",
  "multipoint_int", "mpoint_element", "$@9", "geom_linestring", "$@10",
  "linestring", "empty_linestring", "$@11", "nonempty_linestring", "$@12",
  "nonempty_linestring_closed", "$@13", "linestring_1", "$@14",
  "linestring_int", "geom_circularstring", "$@15",
  "geom_circularstring_closed", "$@16", "circularstring",
  "circularstring_closed", "empty_circularstring", "$@17",
  "nonempty_circularstring", "$@18", "nonempty_circularstring_closed",
  "$@19", "circularstring_1", "$@20", "circularstring_int",
  "geom_compoundcurve", "$@21", "$@22", "compoundcurve", "$@23",
  "compoundcurve_int", "geom_multilinestring", "$@24", "$@25",
  "multilinestring", "$@26", "multilinestring_int", "geom_multicurve",
  "$@27", "$@28", "multicurve", "$@29", "multicurve_int", "geom_polygon",
  "$@30", "polygon", "empty_polygon", "$@31", "nonempty_polygon", "$@32",
  "polygon_1", "$@33", "polygon_int", "geom_curvepolygon", "$@34", "$@35",
  "curvepolygon", "$@36", "curvepolygon_int", "geom_multipolygon", "$@37",
  "$@38", "multipolygon", "$@39", "multipolygon_int", "geom_multisurface",
  "$@40", "$@41", "multisurface", "$@42", "multisurface_int",
  "geom_geometrycollection", "$@43", "$@44", "geometrycollection", "$@45",
  "geometrycollection_int", "a_point", "point_2d", "point_3d", "point_4d",
  "empty", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-166)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-117)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,   -14,    21,   145,    -7,     5,  -166,    29,    30,    40,
    -166,  -166,  -166,  -166,    51,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
      23,  -166,    53,  -166,  -166,    23,  -166,  -166,  -166,  -166,
      23,  -166,  -166,    23,    23,    23,    23,  -166,  -166,    23,
    -166,  -166,    23,    23,    23,    23,    29,    30,    40,    23,
      23,    23,    23,    51,    23,    23,    23,    23,   145,  -166,
    -166,    55,  -166,  -166,  -166,    56,  -166,  -166,    57,  -166,
      58,  -166,  -166,    59,  -166,  -166,    61,  -166,  -166,    62,
    -166,  -166,  -166,    63,  -166,    64,  -166,  -166,    65,  -166,
    -166,    66,  -166,  -166,    67,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,    70,
      54,  -166,  -166,  -166,    55,  -166,    72,  -166,  -166,   112,
      55,     8,    19,     8,    28,    73,  -166,   -18,  -166,  -166,
      16,  -166,    18,  -166,    55,  -166,    24,  -166,    31,  -166,
      33,  -166,    35,  -166,  -166,  -166,    42,    74,  -166,  -166,
    -166,  -166,    44,  -166,  -166,    46,  -166,  -166,    48,    76,
    -166,    55,  -166,  -166,  -166,    72,  -166,  -166,  -166,  -166,
    -166,  -166,   145,  -166,    55,  -166,     8,  -166,  -166,  -166,
    -166,    74,  -166,  -166,    19,  -166,     8,  -166,    28,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,     0,     1,    26,    48,   114,
      31,    89,   133,   153,    68,    78,   122,    98,   142,    22,
      44,   110,    33,    91,   135,   155,    59,    80,   124,   100,
     144,    20,     5,     6,     7,    13,     8,     9,    11,    14,
      15,    10,    12,    16,    17,    18,     2,    19,    21,    24,
       0,    25,     0,    43,    46,     0,    47,    54,   109,   112,
       0,   113,   118,    36,    94,   138,   158,    58,    64,     0,
      65,    74,    83,   127,   103,   147,    26,    48,   114,    36,
      94,   138,   158,    68,    83,   127,   103,   147,     0,   169,
      27,     0,    29,    49,    51,     0,   115,   117,     0,    32,
       0,    35,    90,     0,    93,   134,     0,   137,   154,     0,
     157,    69,    71,     0,    79,     0,    82,   123,     0,   126,
      99,     0,   102,   143,     0,   146,    23,    45,   111,    34,
      92,   136,   156,    60,    81,   125,   101,   145,     3,     0,
       0,   163,   164,   165,     0,    54,    28,    50,   116,     0,
       0,    50,    52,    50,   116,   166,    30,     0,    56,   120,
       0,    40,     0,    38,     0,    96,     0,   140,     0,   161,
       0,   160,     0,    76,    85,    86,     0,    68,    62,   129,
      54,   130,     0,   105,   106,     0,   149,   150,     0,   167,
      55,     0,   119,    54,    37,    28,    42,    95,    50,   139,
     116,   159,     0,    75,     0,    84,    50,    61,    66,    67,
      74,    68,    53,   128,    52,   104,    50,   148,   116,   168,
      57,   121,    39,    97,   141,   162,    77,    87,    88,    73,
      63,   131,   132,   107,   108,   151,   152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,  -166,   -88,  -166,  -166,  -166,  -166,    27,
    -166,  -166,  -142,  -166,  -166,  -166,  -166,  -166,    32,  -166,
    -166,   -89,  -166,  -166,  -166,    36,  -166,  -166,  -108,  -166,
    -107,  -166,  -136,  -166,  -166,  -148,  -166,  -105,  -166,    60,
    -101,  -165,  -166,  -166,  -166,  -166,  -166,   -98,  -166,  -166,
    -166,  -166,  -166,    88,  -166,  -166,  -166,  -166,  -166,    93,
    -166,  -166,  -166,  -166,  -166,    89,  -166,  -166,  -166,  -166,
      68,  -166,  -166,  -146,  -166,  -166,  -166,  -166,  -147,  -166,
    -166,    91,  -166,  -166,  -166,  -166,  -166,    96,  -166,  -166,
    -166,  -166,  -166,    52,  -166,  -166,  -166,  -166,  -166,    92,
    -166,  -166,  -122,  -166,  -166,  -166,   -49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    88,     3,    32,     4,    33,    34,    76,    48,
      49,    50,    51,    52,    92,    35,    63,    79,    99,   100,
     162,   163,   164,    36,    77,    53,    54,    55,    56,    57,
     179,   180,    94,    95,   157,    37,    83,   181,   211,    67,
     207,    68,    69,    70,    71,   209,   210,   112,   113,   172,
      38,    72,    84,   114,   115,   176,    39,    64,    80,   102,
     103,   166,    40,    74,    86,   120,   121,   185,    41,    78,
      58,    59,    60,    61,    62,    97,    98,   160,    42,    73,
      85,   117,   118,   182,    43,    65,    81,   105,   106,   168,
      44,    75,    87,   123,   124,   188,    45,    66,    82,   108,
     109,   170,   140,   141,   142,   143,   101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     138,    90,   167,   175,   161,   184,    93,   187,   186,   159,
       1,    96,   208,   190,   191,   104,   107,   110,    14,     5,
     111,     6,   158,   116,   119,   122,   125,    46,   173,   177,
      26,   104,   107,   110,    47,   116,   119,   122,   125,   165,
      16,   178,   196,   174,   212,   183,   208,   192,   193,   194,
     195,    89,    28,   161,   224,   197,   198,   221,   228,   -28,
     -50,   169,   199,   200,   201,   202,   203,   204,   234,   220,
    -116,   236,   235,   205,   206,   213,   214,   215,   216,   217,
     218,   -70,   226,    91,   139,   156,   144,   145,   146,   147,
     223,   148,   149,   150,   151,   152,   153,   154,   227,   155,
     171,   -41,   189,   126,   -72,   219,   222,   231,   233,   232,
     230,   129,   229,   127,   225,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   137,
      89,     0,     0,   133,     0,     0,   128,    31,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   134,   130,   132,   136,   135,   131,     0,     0,
      31
};

static const yytype_int16 yycheck[] =
{
      88,    50,   148,   151,   146,   153,    55,   154,   154,   145,
      27,    60,   177,    31,    32,    64,    65,    66,    10,    33,
      69,     0,   144,    72,    73,    74,    75,    34,   150,    10,
      22,    80,    81,    82,    29,    84,    85,    86,    87,   147,
      12,    22,   164,   151,   180,   153,   211,    31,    32,    31,
      32,    28,    24,   195,   200,    31,    32,   193,   206,    30,
      30,   149,    31,    32,    31,    32,    31,    32,   216,   191,
      30,   218,   218,    31,    32,    31,    32,    31,    32,    31,
      32,    30,   204,    30,    29,    31,    30,    30,    30,    30,
     198,    30,    30,    30,    30,    30,    30,    30,   206,    29,
     149,    29,    29,    76,    30,    29,   195,   214,   216,   214,
     211,    79,   210,    77,   202,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    87,
      28,    -1,    -1,    83,    -1,    -1,    78,    35,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    84,    80,    82,    86,    85,    81,    -1,    -1,
      35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    37,    39,    41,    33,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    35,    40,    42,    43,    51,    59,    71,    86,    92,
      98,   104,   114,   120,   126,   132,    34,    29,    45,    46,
      47,    48,    49,    61,    62,    63,    64,    65,   106,   107,
     108,   109,   110,    52,    93,   121,   133,    75,    77,    78,
      79,    80,    87,   115,    99,   127,    44,    60,   105,    53,
      94,   122,   134,    72,    88,   116,   100,   128,    38,    28,
     142,    30,    50,   142,    68,    69,   142,   111,   112,    54,
      55,   142,    95,    96,   142,   123,   124,   142,   135,   136,
     142,   142,    83,    84,    89,    90,   142,   117,   118,   142,
     101,   102,   142,   129,   130,   142,    45,    61,   106,    54,
      95,   123,   135,    75,    89,   117,   101,   129,    40,    29,
     138,   139,   140,   141,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    29,    31,    70,   138,    68,
     113,    48,    56,    57,    58,    64,    97,   109,   125,    40,
     137,   142,    85,   138,    64,    71,    91,    10,    22,    66,
      67,    73,   119,    64,    71,   103,   109,   114,   131,    29,
      31,    32,    31,    32,    31,    32,   138,    31,    32,    31,
      32,    31,    32,    31,    32,    31,    32,    76,    77,    81,
      82,    74,    68,    31,    32,    31,    32,    31,    32,    29,
     138,    68,    57,    64,   109,    40,   138,    64,    71,    83,
      76,    66,    73,    64,    71,   109,   114
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    38,    37,    39,    37,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    41,
      42,    43,    44,    43,    45,    45,    47,    46,    49,    48,
      50,    52,    51,    53,    51,    54,    55,    54,    56,    56,
      57,    58,    57,    59,    60,    59,    61,    61,    63,    62,
      65,    64,    67,    66,    69,    68,    70,    70,    71,    72,
      71,    73,    74,    73,    75,    75,    76,    76,    78,    77,
      80,    79,    82,    81,    84,    83,    85,    85,    87,    86,
      88,    86,    89,    90,    89,    91,    91,    91,    91,    93,
      92,    94,    92,    95,    96,    95,    97,    97,    99,    98,
     100,    98,   101,   102,   101,   103,   103,   103,   103,   104,
     105,   104,   106,   106,   108,   107,   110,   109,   112,   111,
     113,   113,   115,   114,   116,   114,   117,   118,   117,   119,
     119,   119,   119,   121,   120,   122,   120,   123,   124,   123,
     125,   125,   127,   126,   128,   126,   129,   130,   129,   131,
     131,   131,   131,   133,   132,   134,   132,   135,   136,   135,
     137,   137,   137,   138,   138,   138,   139,   140,   141,   142
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     0,     3,     1,     1,     0,     2,     0,     2,
       3,     0,     3,     0,     3,     1,     0,     4,     1,     3,
       1,     0,     2,     2,     0,     3,     1,     1,     0,     2,
       0,     2,     0,     2,     0,     4,     1,     3,     2,     0,
       3,     2,     0,     3,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     2,     0,     4,     1,     3,     0,     3,
       0,     3,     1,     0,     4,     1,     1,     3,     3,     0,
       3,     0,     3,     1,     0,     4,     1,     3,     0,     3,
       0,     3,     1,     0,     4,     1,     1,     3,     3,     2,
       0,     3,     1,     1,     0,     2,     0,     2,     0,     4,
       1,     3,     0,     3,     0,     3,     1,     0,     4,     1,
       1,     3,     3,     0,     3,     0,     3,     1,     0,     4,
       1,     3,     0,     3,     0,     3,     1,     0,     4,     1,
       1,     3,     3,     0,     3,     0,     3,     1,     0,     4,
       1,     1,     3,     1,     1,     1,     2,     3,     4,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 38 "wktparse.y"
                         { alloc_lwgeom(srid); }
#line 1659 "y.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 40 "wktparse.y"
        { alloc_lwgeom(-1); }
#line 1665 "y.tab.c"
    break;

  case 19: /* srid: SRID EQUALS VALUE  */
#line 70 "wktparse.y"
                          { set_srid((yyvsp[0].value)); }
#line 1671 "y.tab.c"
    break;

  case 20: /* geom_wkb: WKB  */
#line 73 "wktparse.y"
            { alloc_wkb((yyvsp[0].wkb)); }
#line 1677 "y.tab.c"
    break;

  case 22: /* $@3: %empty  */
#line 81 "wktparse.y"
               { set_zm(0, 1); }
#line 1683 "y.tab.c"
    break;

  case 26: /* $@4: %empty  */
#line 89 "wktparse.y"
        { alloc_point(); }
#line 1689 "y.tab.c"
    break;

  case 27: /* empty_point: $@4 empty  */
#line 89 "wktparse.y"
                                 { pop(); }
#line 1695 "y.tab.c"
    break;

  case 28: /* $@5: %empty  */
#line 92 "wktparse.y"
        { alloc_point(); }
#line 1701 "y.tab.c"
    break;

  case 29: /* nonempty_point: $@5 point_int  */
#line 92 "wktparse.y"
                                     { pop(); }
#line 1707 "y.tab.c"
    break;

  case 31: /* $@6: %empty  */
#line 100 "wktparse.y"
                   { alloc_multipoint(); }
#line 1713 "y.tab.c"
    break;

  case 32: /* geom_multipoint: MULTIPOINT $@6 multipoint  */
#line 100 "wktparse.y"
                                                       { pop(); }
#line 1719 "y.tab.c"
    break;

  case 33: /* $@7: %empty  */
#line 102 "wktparse.y"
                    { set_zm(0, 1); alloc_multipoint(); }
#line 1725 "y.tab.c"
    break;

  case 34: /* geom_multipoint: MULTIPOINTM $@7 multipoint  */
#line 102 "wktparse.y"
                                                                     {pop(); }
#line 1731 "y.tab.c"
    break;

  case 36: /* $@8: %empty  */
#line 107 "wktparse.y"
        { alloc_counter(); }
#line 1737 "y.tab.c"
    break;

  case 37: /* multipoint: $@8 LPAREN multipoint_int RPAREN  */
#line 107 "wktparse.y"
                                                          { pop(); }
#line 1743 "y.tab.c"
    break;

  case 41: /* $@9: %empty  */
#line 118 "wktparse.y"
        { alloc_point(); }
#line 1749 "y.tab.c"
    break;

  case 42: /* mpoint_element: $@9 a_point  */
#line 118 "wktparse.y"
                                   { pop(); }
#line 1755 "y.tab.c"
    break;

  case 44: /* $@10: %empty  */
#line 126 "wktparse.y"
                    { set_zm(0, 1); }
#line 1761 "y.tab.c"
    break;

  case 48: /* $@11: %empty  */
#line 134 "wktparse.y"
        { alloc_linestring(); }
#line 1767 "y.tab.c"
    break;

  case 49: /* empty_linestring: $@11 empty  */
#line 134 "wktparse.y"
                                      { pop(); }
#line 1773 "y.tab.c"
    break;

  case 50: /* $@12: %empty  */
#line 137 "wktparse.y"
        { alloc_linestring(); }
#line 1779 "y.tab.c"
    break;

  case 51: /* nonempty_linestring: $@12 linestring_1  */
#line 137 "wktparse.y"
                                             { pop(); }
#line 1785 "y.tab.c"
    break;

  case 52: /* $@13: %empty  */
#line 140 "wktparse.y"
        { alloc_linestring_closed(); }
#line 1791 "y.tab.c"
    break;

  case 53: /* nonempty_linestring_closed: $@13 linestring_1  */
#line 140 "wktparse.y"
                                                    { pop(); }
#line 1797 "y.tab.c"
    break;

  case 54: /* $@14: %empty  */
#line 143 "wktparse.y"
        { alloc_counter(); }
#line 1803 "y.tab.c"
    break;

  case 55: /* linestring_1: $@14 LPAREN linestring_int RPAREN  */
#line 143 "wktparse.y"
                                                          { popc(); }
#line 1809 "y.tab.c"
    break;

  case 59: /* $@15: %empty  */
#line 155 "wktparse.y"
                        {set_zm(0, 1); }
#line 1815 "y.tab.c"
    break;

  case 62: /* $@16: %empty  */
#line 160 "wktparse.y"
                        {set_zm(0, 1); }
#line 1821 "y.tab.c"
    break;

  case 68: /* $@17: %empty  */
#line 173 "wktparse.y"
        { alloc_circularstring(); }
#line 1827 "y.tab.c"
    break;

  case 69: /* empty_circularstring: $@17 empty  */
#line 173 "wktparse.y"
                                          { pop(); }
#line 1833 "y.tab.c"
    break;

  case 70: /* $@18: %empty  */
#line 176 "wktparse.y"
        { alloc_circularstring(); }
#line 1839 "y.tab.c"
    break;

  case 71: /* nonempty_circularstring: $@18 circularstring_1  */
#line 176 "wktparse.y"
                                                     { pop(); }
#line 1845 "y.tab.c"
    break;

  case 72: /* $@19: %empty  */
#line 179 "wktparse.y"
        { alloc_circularstring_closed(); }
#line 1851 "y.tab.c"
    break;

  case 73: /* nonempty_circularstring_closed: $@19 circularstring_1  */
#line 179 "wktparse.y"
                                                            { pop(); }
#line 1857 "y.tab.c"
    break;

  case 74: /* $@20: %empty  */
#line 182 "wktparse.y"
        { alloc_counter(); }
#line 1863 "y.tab.c"
    break;

  case 75: /* circularstring_1: $@20 LPAREN circularstring_int RPAREN  */
#line 182 "wktparse.y"
                                                              { popc(); }
#line 1869 "y.tab.c"
    break;

  case 78: /* $@21: %empty  */
#line 192 "wktparse.y"
                      { alloc_compoundcurve(); }
#line 1875 "y.tab.c"
    break;

  case 79: /* geom_compoundcurve: COMPOUNDCURVE $@21 compoundcurve  */
#line 192 "wktparse.y"
                                                               { pop(); }
#line 1881 "y.tab.c"
    break;

  case 80: /* $@22: %empty  */
#line 194 "wktparse.y"
                       {set_zm(0, 1); alloc_compoundcurve(); }
#line 1887 "y.tab.c"
    break;

  case 81: /* geom_compoundcurve: COMPOUNDCURVEM $@22 compoundcurve  */
#line 194 "wktparse.y"
                                                                             { pop(); }
#line 1893 "y.tab.c"
    break;

  case 83: /* $@23: %empty  */
#line 199 "wktparse.y"
        { alloc_counter(); }
#line 1899 "y.tab.c"
    break;

  case 84: /* compoundcurve: $@23 LPAREN compoundcurve_int RPAREN  */
#line 199 "wktparse.y"
                                                             { pop(); }
#line 1905 "y.tab.c"
    break;

  case 89: /* $@24: %empty  */
#line 213 "wktparse.y"
                        { alloc_multilinestring(); }
#line 1911 "y.tab.c"
    break;

  case 90: /* geom_multilinestring: MULTILINESTRING $@24 multilinestring  */
#line 214 "wktparse.y"
                                 { pop(); }
#line 1917 "y.tab.c"
    break;

  case 91: /* $@25: %empty  */
#line 216 "wktparse.y"
                         { set_zm(0, 1); alloc_multilinestring(); }
#line 1923 "y.tab.c"
    break;

  case 92: /* geom_multilinestring: MULTILINESTRINGM $@25 multilinestring  */
#line 217 "wktparse.y"
                                { pop(); }
#line 1929 "y.tab.c"
    break;

  case 94: /* $@26: %empty  */
#line 222 "wktparse.y"
        { alloc_counter(); }
#line 1935 "y.tab.c"
    break;

  case 95: /* multilinestring: $@26 LPAREN multilinestring_int RPAREN  */
#line 222 "wktparse.y"
                                                              { pop();}
#line 1941 "y.tab.c"
    break;

  case 98: /* $@27: %empty  */
#line 232 "wktparse.y"
                   { alloc_multicurve(); }
#line 1947 "y.tab.c"
    break;

  case 99: /* geom_multicurve: MULTICURVE $@27 multicurve  */
#line 233 "wktparse.y"
                           { pop(); }
#line 1953 "y.tab.c"
    break;

  case 100: /* $@28: %empty  */
#line 235 "wktparse.y"
                    { set_zm(0, 1); alloc_multicurve(); }
#line 1959 "y.tab.c"
    break;

  case 101: /* geom_multicurve: MULTICURVEM $@28 multicurve  */
#line 236 "wktparse.y"
                           { pop(); }
#line 1965 "y.tab.c"
    break;

  case 103: /* $@29: %empty  */
#line 241 "wktparse.y"
        { alloc_counter(); }
#line 1971 "y.tab.c"
    break;

  case 104: /* multicurve: $@29 LPAREN multicurve_int RPAREN  */
#line 241 "wktparse.y"
                                                          { pop(); }
#line 1977 "y.tab.c"
    break;

  case 110: /* $@30: %empty  */
#line 257 "wktparse.y"
                 { set_zm(0, 1); }
#line 1983 "y.tab.c"
    break;

  case 114: /* $@31: %empty  */
#line 265 "wktparse.y"
        { alloc_polygon(); }
#line 1989 "y.tab.c"
    break;

  case 115: /* empty_polygon: $@31 empty  */
#line 265 "wktparse.y"
                                    { pop(); }
#line 1995 "y.tab.c"
    break;

  case 116: /* $@32: %empty  */
#line 268 "wktparse.y"
        { alloc_polygon(); }
#line 2001 "y.tab.c"
    break;

  case 117: /* nonempty_polygon: $@32 polygon_1  */
#line 268 "wktparse.y"
                                        { pop(); }
#line 2007 "y.tab.c"
    break;

  case 118: /* $@33: %empty  */
#line 271 "wktparse.y"
        { alloc_counter(); }
#line 2013 "y.tab.c"
    break;

  case 119: /* polygon_1: $@33 LPAREN polygon_int RPAREN  */
#line 271 "wktparse.y"
                                                       { pop();}
#line 2019 "y.tab.c"
    break;

  case 122: /* $@34: %empty  */
#line 281 "wktparse.y"
                     { alloc_curvepolygon(); }
#line 2025 "y.tab.c"
    break;

  case 123: /* geom_curvepolygon: CURVEPOLYGON $@34 curvepolygon  */
#line 281 "wktparse.y"
                                                            { pop(); }
#line 2031 "y.tab.c"
    break;

  case 124: /* $@35: %empty  */
#line 283 "wktparse.y"
                      { set_zm(0, 1); alloc_curvepolygon(); }
#line 2037 "y.tab.c"
    break;

  case 125: /* geom_curvepolygon: CURVEPOLYGONM $@35 curvepolygon  */
#line 284 "wktparse.y"
                                     { pop(); }
#line 2043 "y.tab.c"
    break;

  case 127: /* $@36: %empty  */
#line 289 "wktparse.y"
        { alloc_counter(); }
#line 2049 "y.tab.c"
    break;

  case 128: /* curvepolygon: $@36 LPAREN curvepolygon_int RPAREN  */
#line 289 "wktparse.y"
                                                            { pop(); }
#line 2055 "y.tab.c"
    break;

  case 133: /* $@37: %empty  */
#line 303 "wktparse.y"
                     { alloc_multipolygon(); }
#line 2061 "y.tab.c"
    break;

  case 134: /* geom_multipolygon: MULTIPOLYGON $@37 multipolygon  */
#line 303 "wktparse.y"
                                                            { pop(); }
#line 2067 "y.tab.c"
    break;

  case 135: /* $@38: %empty  */
#line 305 "wktparse.y"
                      { set_zm(0, 1); alloc_multipolygon(); }
#line 2073 "y.tab.c"
    break;

  case 136: /* geom_multipolygon: MULTIPOLYGONM $@38 multipolygon  */
#line 306 "wktparse.y"
                             { pop();}
#line 2079 "y.tab.c"
    break;

  case 138: /* $@39: %empty  */
#line 311 "wktparse.y"
        { alloc_counter(); }
#line 2085 "y.tab.c"
    break;

  case 139: /* multipolygon: $@39 LPAREN multipolygon_int RPAREN  */
#line 311 "wktparse.y"
                                                            { pop(); }
#line 2091 "y.tab.c"
    break;

  case 142: /* $@40: %empty  */
#line 321 "wktparse.y"
                     {alloc_multisurface(); }
#line 2097 "y.tab.c"
    break;

  case 143: /* geom_multisurface: MULTISURFACE $@40 multisurface  */
#line 321 "wktparse.y"
                                                           { pop(); }
#line 2103 "y.tab.c"
    break;

  case 144: /* $@41: %empty  */
#line 323 "wktparse.y"
                      { set_zm(0, 1); alloc_multisurface(); }
#line 2109 "y.tab.c"
    break;

  case 145: /* geom_multisurface: MULTISURFACEM $@41 multisurface  */
#line 324 "wktparse.y"
                             { pop(); }
#line 2115 "y.tab.c"
    break;

  case 147: /* $@42: %empty  */
#line 329 "wktparse.y"
        { alloc_counter(); }
#line 2121 "y.tab.c"
    break;

  case 148: /* multisurface: $@42 LPAREN multisurface_int RPAREN  */
#line 329 "wktparse.y"
                                                            { pop(); }
#line 2127 "y.tab.c"
    break;

  case 153: /* $@43: %empty  */
#line 343 "wktparse.y"
                           { alloc_geomertycollection(); }
#line 2133 "y.tab.c"
    break;

  case 154: /* geom_geometrycollection: GEOMETRYCOLLECTION $@43 geometrycollection  */
#line 344 "wktparse.y"
                                   { pop(); }
#line 2139 "y.tab.c"
    break;

  case 155: /* $@44: %empty  */
#line 346 "wktparse.y"
                            { set_zm(0, 1); alloc_geomertycollection(); }
#line 2145 "y.tab.c"
    break;

  case 156: /* geom_geometrycollection: GEOMETRYCOLLECTIONM $@44 geometrycollection  */
#line 347 "wktparse.y"
                                   { pop();}
#line 2151 "y.tab.c"
    break;

  case 158: /* $@45: %empty  */
#line 352 "wktparse.y"
        { alloc_counter(); }
#line 2157 "y.tab.c"
    break;

  case 159: /* geometrycollection: $@45 LPAREN geometrycollection_int RPAREN  */
#line 352 "wktparse.y"
                                                                  { pop(); }
#line 2163 "y.tab.c"
    break;

  case 166: /* point_2d: VALUE VALUE  */
#line 371 "wktparse.y"
                    {alloc_point_2d((yyvsp[-1].value),(yyvsp[0].value)); }
#line 2169 "y.tab.c"
    break;

  case 167: /* point_3d: VALUE VALUE VALUE  */
#line 374 "wktparse.y"
                          {alloc_point_3d((yyvsp[-2].value),(yyvsp[-1].value),(yyvsp[0].value)); }
#line 2175 "y.tab.c"
    break;

  case 168: /* point_4d: VALUE VALUE VALUE VALUE  */
#line 377 "wktparse.y"
                                {alloc_point_4d((yyvsp[-3].value),(yyvsp[-2].value),(yyvsp[-1].value),(yyvsp[0].value)); }
#line 2181 "y.tab.c"
    break;

  case 169: /* empty: EMPTY  */
#line 380 "wktparse.y"
              { alloc_empty(); }
#line 2187 "y.tab.c"
    break;


#line 2191 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval, &yylloc);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 381 "wktparse.y"





