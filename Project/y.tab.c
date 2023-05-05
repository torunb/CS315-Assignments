/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "boy2.y"

    #include <stdio.h>
    int yylex();
    int yyerror(char *s);
    int numberoferrors = 0;

#line 77 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COMMENT = 258,
    INT_LITERAL = 259,
    FLOAT_LITERAL = 260,
    BOOL_LITERAL = 261,
    CHAR_LITERAL = 262,
    STRING_LITERAL = 263,
    ADDITION_OP = 264,
    SUBTRACTION_OP = 265,
    MULTIPLICATION_OP = 266,
    DIVISION_OP = 267,
    LESS_THAN_OP = 268,
    GREATER_THAN_OP = 269,
    LESS_THAN_OR_EQUAL_OP = 270,
    GREATER_THAN_OR_EQUAL_OP = 271,
    EQUALITY_OP = 272,
    ASSIGNMENT_OP = 273,
    SEMI_COLON = 274,
    COMMA = 275,
    DOT = 276,
    NOT_OP = 277,
    NOT_EQUAL_OP = 278,
    LOGICAL_AND_OP = 279,
    LOGICAL_OR_OP = 280,
    INCREMENT_OP = 281,
    DECREMENT_OP = 282,
    DO = 283,
    FOR = 284,
    WHILE = 285,
    BREAK = 286,
    CONTINUE = 287,
    RETURN = 288,
    READ_DATA_FUNC_CALL = 289,
    GET_TIMESTAMP_FUNC_CALL = 290,
    DISPLAY_FUNC_CALL = 291,
    CONNECT_URL_FUNC_CALL = 292,
    SEND_INT_TO_CONNECTION_FUNC_CALL = 293,
    RECEIVE_INT_FROM_CONNECTION_FUNC_CALL = 294,
    SET_SWITCH_FUNC_CALL = 295,
    FUNCTION_DEF = 296,
    IF = 297,
    ELSE = 298,
    LEFT_PARANTHESIS = 299,
    RIGHT_PARANTHESIS = 300,
    LEFT_CURLY_BRACKET = 301,
    RIGHT_CURLY_BRACKET = 302,
    TYPE_ID = 303,
    IDENTIFIER = 304,
    VOID_TYPE = 305
  };
#endif
/* Tokens.  */
#define COMMENT 258
#define INT_LITERAL 259
#define FLOAT_LITERAL 260
#define BOOL_LITERAL 261
#define CHAR_LITERAL 262
#define STRING_LITERAL 263
#define ADDITION_OP 264
#define SUBTRACTION_OP 265
#define MULTIPLICATION_OP 266
#define DIVISION_OP 267
#define LESS_THAN_OP 268
#define GREATER_THAN_OP 269
#define LESS_THAN_OR_EQUAL_OP 270
#define GREATER_THAN_OR_EQUAL_OP 271
#define EQUALITY_OP 272
#define ASSIGNMENT_OP 273
#define SEMI_COLON 274
#define COMMA 275
#define DOT 276
#define NOT_OP 277
#define NOT_EQUAL_OP 278
#define LOGICAL_AND_OP 279
#define LOGICAL_OR_OP 280
#define INCREMENT_OP 281
#define DECREMENT_OP 282
#define DO 283
#define FOR 284
#define WHILE 285
#define BREAK 286
#define CONTINUE 287
#define RETURN 288
#define READ_DATA_FUNC_CALL 289
#define GET_TIMESTAMP_FUNC_CALL 290
#define DISPLAY_FUNC_CALL 291
#define CONNECT_URL_FUNC_CALL 292
#define SEND_INT_TO_CONNECTION_FUNC_CALL 293
#define RECEIVE_INT_FROM_CONNECTION_FUNC_CALL 294
#define SET_SWITCH_FUNC_CALL 295
#define FUNCTION_DEF 296
#define IF 297
#define ELSE 298
#define LEFT_PARANTHESIS 299
#define RIGHT_PARANTHESIS 300
#define LEFT_CURLY_BRACKET 301
#define RIGHT_CURLY_BRACKET 302
#define TYPE_ID 303
#define IDENTIFIER 304
#define VOID_TYPE 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   772

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  328

#define YYUNDEFTOK  2
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    17,    17,    24,    25,    25,    26,    26,    27,    27,
      27,    29,    29,    30,    30,    32,    33,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    43,    43,    43,    43,
      43,    43,    44,    44,    45,    46,    47,    47,    48,    49,
      50,    52,    52,    53,    53,    53,    54,    54,    55,    55,
      58,    59,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    72,    72,    73,    73,    74,    74,    74,    75,
      75,    75,    77,    77,    77,    78,    78,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    95,    95,    95,    96,    97,    99,   100,
     102,   103,   105,   105,   106,   106,   106,   108,   109,   110,
     111,   112,   116,   116,   117,   117,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMENT", "INT_LITERAL",
  "FLOAT_LITERAL", "BOOL_LITERAL", "CHAR_LITERAL", "STRING_LITERAL",
  "ADDITION_OP", "SUBTRACTION_OP", "MULTIPLICATION_OP", "DIVISION_OP",
  "LESS_THAN_OP", "GREATER_THAN_OP", "LESS_THAN_OR_EQUAL_OP",
  "GREATER_THAN_OR_EQUAL_OP", "EQUALITY_OP", "ASSIGNMENT_OP", "SEMI_COLON",
  "COMMA", "DOT", "NOT_OP", "NOT_EQUAL_OP", "LOGICAL_AND_OP",
  "LOGICAL_OR_OP", "INCREMENT_OP", "DECREMENT_OP", "DO", "FOR", "WHILE",
  "BREAK", "CONTINUE", "RETURN", "READ_DATA_FUNC_CALL",
  "GET_TIMESTAMP_FUNC_CALL", "DISPLAY_FUNC_CALL", "CONNECT_URL_FUNC_CALL",
  "SEND_INT_TO_CONNECTION_FUNC_CALL",
  "RECEIVE_INT_FROM_CONNECTION_FUNC_CALL", "SET_SWITCH_FUNC_CALL",
  "FUNCTION_DEF", "IF", "ELSE", "LEFT_PARANTHESIS", "RIGHT_PARANTHESIS",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "TYPE_ID", "IDENTIFIER",
  "VOID_TYPE", "$accept", "start", "program", "stmt_list", "block_stmt",
  "stmt", "matched_list", "unmatched_list", "func_def", "matched",
  "unmatched", "matched_first", "matched_stmt", "argument_list",
  "unconditional_stmt", "increment_stmt", "decrement_stmt", "assign_stmt",
  "declaration_stmt", "identifier_list", "expression", "block_expression",
  "type_def", "func_call", "arguments", "reserved_stmt", "const",
  "numeric_const", "non_numeric_const", "arith_op", "term", "factor",
  "primitive_function_call", "loop", "do_while", "while_loop", "for_loop",
  "for_update", "condition_list", "and_term", "condition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF (-225)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-5)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     523,  -225,  -225,   -25,   -19,     9,    67,    77,   235,    59,
      69,    87,    92,   123,   128,   131,   145,   101,   211,   219,
    -225,   182,   163,  -225,  -225,  -225,   184,   605,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
     523,   179,    38,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,   116,   186,   212,  -225,  -225,  -225,   144,    37,  -225,
      25,   245,    32,   244,    39,   103,    40,    79,   233,   107,
     644,   237,   246,   100,  -225,   -26,  -225,  -225,   221,   545,
     275,  -225,  -225,   297,   262,   112,  -225,   239,   438,   334,
     396,   -10,   267,  -225,  -225,    88,  -225,   116,   116,   116,
     116,   241,   247,   274,   249,   250,   277,   279,   298,   307,
     322,   333,   310,    55,   101,   644,  -225,   336,  -225,  -225,
    -225,   339,   311,   344,  -225,  -225,  -225,  -225,   329,  -225,
     360,  -225,  -225,   184,   627,  -225,  -225,   353,   361,   143,
      79,   334,   358,   177,   202,   240,   537,   619,   666,   690,
     695,   700,   705,   712,   717,    46,   368,   438,  -225,    37,
      37,  -225,  -225,   397,   398,  -225,   402,   404,    14,    22,
     407,   426,    24,    30,    79,   369,  -225,   446,  -225,  -225,
     100,   447,   100,   374,    79,   423,    79,   391,    74,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,   165,   267,   523,  -225,  -225,  -225,
    -225,  -225,   440,   443,   457,   459,  -225,  -225,   460,   462,
     482,   484,   110,   605,  -225,  -225,  -225,  -225,   435,   134,
     723,   236,   714,   488,   243,   490,   337,   487,   509,   516,
     517,   518,   519,   520,   521,   522,   567,   359,   497,   504,
     542,   506,   271,   161,   644,   515,  -225,  -225,   100,   543,
     314,   544,   376,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,   546,   564,   627,    79,   548,   391,
    -225,  -225,  -225,   144,  -225,   524,   523,   228,   267,   523,
      -4,   435,   523,   276,  -225,   566,  -225,   399,   547,   421,
     568,  -225,   461,   316,   571,  -225,   376,  -225,  -225,  -225,
     549,   523,   106,  -225,   483,   573,  -225,  -225
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    10,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     0,     6,     8,     9,    18,     0,    17,    31,
      32,    26,    27,    28,    30,    51,    29,    93,    94,    95,
       0,     0,     0,    60,    61,    64,    65,    66,    68,    67,
      57,     0,    76,     0,    59,    75,    46,    47,    71,    74,
       0,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,    55,     1,     0,     5,     7,     0,     0,
       0,    11,    13,     0,     0,     0,   116,     0,     0,   115,
       0,     0,   107,   112,    76,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,    37,    34,
      35,    52,     0,    53,    62,    63,    48,    49,     0,    22,
       0,    16,    12,     0,     0,    20,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    69,
      70,    72,    73,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    40,    36,
      55,     0,    55,     0,     0,     0,     0,     0,     0,   113,
     117,   135,   118,   136,   119,   137,   120,   138,   121,   139,
     122,   140,   123,   129,   124,   130,   125,   131,   126,   132,
     127,   133,   128,   134,     0,   108,     0,   114,    80,    81,
      78,    82,     0,     0,     0,     0,    87,    88,     0,     0,
       0,     0,     0,     0,    39,    54,    50,    56,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,    55,     0,
       0,     0,     0,    98,    84,    83,    86,    85,    89,    91,
      90,    92,    21,    19,    23,     0,     0,     0,     0,     0,
     102,    45,    43,    44,   104,     0,     0,     0,   109,     0,
       0,    25,     0,     0,    96,     0,   103,     0,     0,     0,
       0,    24,     0,     0,     0,   100,     0,    99,   111,    15,
       0,     0,     0,    97,     0,     0,   101,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,  -225,  -225,  -225,   -39,   -22,  -224,   379,  -225,   -20,
     -17,   -68,   -66,   318,  -225,  -225,  -225,   579,  -225,   507,
    -225,   -43,  -225,     0,  -166,  -225,   328,    -6,    -5,   -47,
      60,   122,  -225,  -225,  -225,  -225,  -225,   340,   -62,  -143,
     -82
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    79,    80,    76,    24,
      25,    26,    27,   259,    28,    29,    30,    31,    32,    69,
     290,    53,   128,    33,   122,    34,   123,    90,   125,    57,
      58,    59,    35,    36,    37,    38,    39,   243,    91,    92,
      93
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,    83,    55,    56,    95,   113,   142,    81,    54,   256,
      82,   133,   215,   134,   235,   155,   237,   101,   222,   104,
     157,    40,   126,   139,   127,    41,   224,   117,   228,    45,
      46,    47,    48,    49,   230,   156,    45,    46,    47,    48,
      49,   310,    45,    46,    86,    55,   110,   106,    99,   100,
      45,    46,    86,    42,    55,    56,    55,    56,   136,   132,
      87,    77,   256,   223,    55,    56,   133,   124,   134,    51,
     118,   225,   177,   229,    94,   217,    51,   103,   188,   231,
     155,    94,    88,    45,    46,    86,    43,    89,   107,   111,
     214,    55,    55,    55,    55,    89,    44,    97,    98,   155,
     175,   112,   295,    60,    45,    46,    47,    48,    49,    55,
      56,   108,   232,    61,    81,   178,    45,    46,    86,   244,
      45,    46,   239,    88,   241,   115,   116,   298,    89,   300,
     157,    62,   142,   158,   138,   155,    63,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   121,
      68,   325,   109,    97,    98,   255,    88,   159,   160,   155,
      51,    89,   187,    -4,     1,    94,     2,    64,   155,    45,
      46,    86,    65,   322,   124,    66,   124,   246,   262,   260,
     289,    45,    46,    47,    48,    49,   270,   245,   133,    67,
     134,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -4,    16,    45,    46,    47,    48,
      49,    17,    18,    81,   141,   142,    82,   293,   133,    74,
     134,   161,   162,    75,    77,   303,   190,    78,    84,    70,
      73,    96,    45,    46,    86,   136,   132,    71,    72,    45,
      46,    47,    48,    49,    45,    46,    47,    48,    49,   102,
     308,   192,   105,   114,    50,    73,   119,   307,    55,   292,
     309,   155,   124,   312,   291,   120,    81,   129,   270,     9,
      10,    11,    12,    13,    14,    15,     1,   141,     2,    51,
      70,   263,   324,   140,    52,    77,   163,    77,   271,   194,
      77,   157,   164,   165,   166,   167,   155,   168,     1,   169,
       2,   155,    77,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   288,    16,    45,    46,
      86,   313,   135,    17,    18,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     1,    16,
       2,   270,   172,   170,   137,    17,    18,   143,   144,   145,
     146,   147,   171,   173,   174,   179,   181,   148,   297,   180,
       1,   320,     2,    89,   182,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   183,    16,
      45,    46,    86,   185,   273,    17,    18,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       1,    16,     2,   189,   184,   186,   283,    17,    18,   149,
     150,   151,   152,   153,   216,   233,   218,   219,   238,   154,
      88,   220,     1,   221,     2,    89,   226,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
     242,    16,    45,    46,    86,   227,   315,    17,    18,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     1,    16,     2,   234,   236,   240,   317,    17,
      18,   191,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   258,     1,   247,     2,   141,   248,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,   249,    16,   250,   251,   274,   252,   319,    17,
      18,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     1,    16,     2,   253,   275,   254,
     326,    17,    18,   269,   272,   276,   277,   278,   279,   280,
     281,    45,    46,    47,    48,    49,   284,   270,     2,   285,
     287,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   294,    16,   301,   304,   323,   306,
       2,    17,    18,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   196,   130,   286,   296,
     299,   316,   131,    17,    18,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     2,   130,
     302,   314,   257,   318,   282,    17,    18,   321,   327,   311,
      85,   176,     0,    45,    46,    47,    48,    49,     0,   305,
       2,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,    16,    45,    46,
      47,    48,    49,    17,    18,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   198,   130,
      45,    46,    47,    48,    49,    17,    18,     0,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    51,     0,
       0,     0,     0,    52,    45,    46,    47,    48,    49,    45,
      46,    47,    48,    49,    45,    46,    47,    48,    49,    45,
      46,    47,    48,    49,     0,   200,    45,    46,    47,    48,
      49,    45,    46,    47,    48,    49,     0,    45,    46,    86,
       0,     0,   264,     0,     0,   265,     0,     0,     0,   202,
     266,   267,     0,     0,   204,   261,     0,     0,     0,   206,
       0,     0,     0,     0,   208,     0,     0,     0,   268,     0,
       0,   210,     0,     0,     0,     0,   212,    88,     0,     0,
       0,     0,    89
};

static const yytype_int16 yycheck[] =
{
      22,    40,     8,     8,    51,    67,    88,    27,     8,   233,
      27,    79,   155,    79,   180,    25,   182,    60,     4,    62,
      24,    46,    48,    85,    50,    44,     4,    70,     4,     4,
       5,     6,     7,     8,     4,    45,     4,     5,     6,     7,
       8,    45,     4,     5,     6,    51,     6,     8,    11,    12,
       4,     5,     6,    44,    60,    60,    62,    62,    80,    79,
      22,    83,   286,    49,    70,    70,   134,    73,   134,    44,
      70,    49,   115,    49,    49,   157,    44,    45,   140,    49,
      25,    49,    44,     4,     5,     6,    19,    49,    49,    49,
      44,    97,    98,    99,   100,    49,    19,     9,    10,    25,
      45,    22,   268,    44,     4,     5,     6,     7,     8,   115,
     115,     8,   174,    44,   134,   115,     4,     5,     6,    45,
       4,     5,   184,    44,   186,    18,    19,   270,    49,   272,
      24,    44,   214,    45,    22,    25,    44,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    49,
      49,    45,    49,     9,    10,    45,    44,    97,    98,    25,
      44,    49,    19,     0,     1,    49,     3,    44,    25,     4,
       5,     6,    44,   316,   180,    44,   182,   216,   240,    45,
      19,     4,     5,     6,     7,     8,    25,    22,   256,    44,
     256,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     4,     5,     6,     7,
       8,    48,    49,   233,    49,   297,   233,   264,   286,     0,
     286,    99,   100,    41,   246,   287,    49,    43,    49,    18,
      44,    19,     4,     5,     6,   257,   256,    26,    27,     4,
       5,     6,     7,     8,     4,     5,     6,     7,     8,     4,
      22,    49,     8,    20,    19,    44,    19,   296,   264,   264,
     299,    25,   268,   302,   264,    19,   286,    46,    25,    34,
      35,    36,    37,    38,    39,    40,     1,    49,     3,    44,
      18,    45,   321,    44,    49,   307,    45,   309,    45,    49,
     312,    24,    45,    19,    45,    45,    25,    20,     1,    20,
       3,    25,   324,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    45,    42,     4,     5,
       6,    45,    47,    48,    49,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     1,    42,
       3,    25,    20,    45,    47,    48,    49,    13,    14,    15,
      16,    17,    45,    20,    44,    19,    45,    23,    44,    20,
       1,    45,     3,    49,    20,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    49,    42,
       4,     5,     6,    30,    47,    48,    49,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       1,    42,     3,    45,    44,    44,    47,    48,    49,    13,
      14,    15,    16,    17,    46,    46,    19,    19,    44,    23,
      44,    19,     1,    19,     3,    49,    19,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      49,    42,     4,     5,     6,    19,    47,    48,    49,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     1,    42,     3,    19,    19,    44,    47,    48,
      49,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    48,     1,    45,     3,    49,    45,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    45,    42,    45,    45,    19,    45,    47,    48,
      49,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     1,    42,     3,    45,    19,    45,
      47,    48,    49,    45,    44,    19,    19,    19,    19,    19,
      19,     4,     5,     6,     7,     8,    49,    25,     3,    45,
      44,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    49,    42,    20,    19,    19,    45,
       3,    48,    49,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    49,    42,    46,    46,
      46,    44,    47,    48,    49,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     3,    42,
      46,    45,   233,    45,    47,    48,    49,    46,    45,   301,
      41,   114,    -1,     4,     5,     6,     7,     8,    -1,   289,
       3,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,     4,     5,
       6,     7,     8,    48,    49,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    49,    42,
       4,     5,     6,     7,     8,    48,    49,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,     4,     5,     6,     7,     8,     4,
       5,     6,     7,     8,     4,     5,     6,     7,     8,     4,
       5,     6,     7,     8,    -1,    49,     4,     5,     6,     7,
       8,     4,     5,     6,     7,     8,    -1,     4,     5,     6,
      -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,    49,
      26,    27,    -1,    -1,    49,    22,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    44,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    49,    44,    -1,    -1,
      -1,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    42,    48,    49,    52,
      53,    54,    55,    56,    60,    61,    62,    63,    65,    66,
      67,    68,    69,    74,    76,    83,    84,    85,    86,    87,
      46,    44,    44,    19,    19,     4,     5,     6,     7,     8,
      19,    44,    49,    72,    74,    78,    79,    80,    81,    82,
      44,    44,    44,    44,    44,    44,    44,    44,    49,    70,
      18,    26,    27,    44,     0,    41,    59,    56,    43,    57,
      58,    60,    61,    55,    49,    68,     6,    22,    44,    49,
      78,    89,    90,    91,    49,    80,    19,     9,    10,    11,
      12,    72,     4,    45,    72,     8,     8,    49,     8,    49,
       6,    49,    22,    89,    20,    18,    19,    72,    74,    19,
      19,    49,    75,    77,    78,    79,    48,    50,    73,    46,
      42,    47,    60,    62,    63,    47,    56,    47,    22,    89,
      44,    49,    91,    13,    14,    15,    16,    17,    23,    13,
      14,    15,    16,    17,    23,    25,    45,    24,    45,    81,
      81,    82,    82,    45,    45,    19,    45,    45,    20,    20,
      45,    45,    20,    20,    44,    45,    70,    72,    74,    19,
      20,    45,    20,    49,    44,    30,    44,    19,    89,    45,
      49,    77,    49,    77,    49,    77,    49,    77,    49,    77,
      49,    77,    49,    77,    49,    77,    49,    77,    49,    77,
      49,    77,    49,    77,    44,    90,    46,    91,    19,    19,
      19,    19,     4,    49,     4,    49,    19,    19,     4,    49,
       4,    49,    89,    46,    19,    75,    19,    75,    44,    89,
      44,    89,    49,    88,    45,    22,    55,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    57,    58,    48,    64,
      45,    22,    89,    45,    18,    21,    26,    27,    44,    45,
      25,    45,    44,    47,    19,    19,    19,    19,    19,    19,
      19,    19,    47,    47,    49,    45,    46,    44,    45,    19,
      71,    74,    79,    80,    49,    75,    46,    44,    90,    46,
      90,    20,    46,    89,    19,    88,    45,    55,    22,    55,
      45,    64,    55,    45,    45,    47,    44,    47,    45,    47,
      45,    46,    90,    19,    55,    45,    47,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    56,    56,
      56,    57,    57,    58,    58,    59,    60,    60,    61,    61,
      61,    62,    63,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    67,    68,    68,    69,    69,
      69,    70,    70,    71,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    77,    77,    78,    78,    79,    79,    79,    80,
      80,    80,    81,    81,    81,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     2,     1,     2,     9,     3,     1,     1,     7,
       3,     7,     3,     2,     4,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     3,     3,     5,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     1,     1,     3,     0,     3,     2,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     1,     1,     1,     3,     5,     4,
       5,     5,     5,     7,     7,     7,     7,     5,     5,     7,
       7,     7,     7,     1,     1,     1,     9,    12,     7,    10,
      10,    13,     3,     4,     3,     2,     2,     1,     3,     6,
      11,     8,     1,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 17 "boy2.y"
               {
       if (numberoferrors == 0) {
              printf("Input program is valid\n");
       }
       return 0;
}
#line 1718 "y.tab.c"
    break;

  case 10:
#line 27 "boy2.y"
                                   { numberoferrors++; }
#line 1724 "y.tab.c"
    break;


#line 1728 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 144 "boy2.y"

#include "lex.yy.c"
int lineno = 0;
int yyerror(char* s) { printf("Syntax error on line %d\n", lineno);}
int main() {
    return yyparse();
}
