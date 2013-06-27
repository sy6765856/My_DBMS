#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20110908

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "paser.y"
#include "stdio.h"
#include "dbf.h"
#include "def.h"
typedef char* string;
#define YYSTYPE string
#line 25 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#define YYERROR_DECL() yyerror(const char *s)
#define YYERROR_CALL(msg) yyerror(msg)

extern int YYPARSE_DECL();

#define ST 257
#define NE 258
#define FM 259
#define SP 260
#define WE 261
#define GY 262
#define IT 263
#define DE 264
#define SN 265
#define UE 266
#define CT 267
#define CST 268
#define OPR 269
#define OPR_EN 270
#define AS 271
#define WN 272
#define TN 273
#define ELSE 274
#define TP 275
#define BN 276
#define IN 277
#define LE 278
#define JN 279
#define AT 280
#define CN 281
#define AD 282
#define DP 283
#define DPT 284
#define VA 285
#define SET 286
#define AY 287
#define AL 288
#define EX 289
#define UN 290
#define LP 291
#define RP 292
#define CA 293
#define TE 294
#define NM 295
#define NL 296
#define CS 297
#define TB 298
#define EXIT 299
#define USE 300
#define DB 301
#define SW 302
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    9,   10,   11,   12,    2,    2,   13,
    6,   14,   14,   15,   15,   16,   16,   16,    3,   17,
   17,   19,   19,   18,   18,   20,   21,   21,    4,   22,
   22,    5,   23,   23,   24,   24,   25,   25,    7,   26,
   26,   27,   28,    8,   29,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    4,    4,    4,    2,    1,    8,
    7,    1,    3,    3,    4,    3,    2,    4,    7,    2,
    4,    1,    3,    3,    5,    3,    1,    3,    3,    1,
    3,    5,    1,    3,    5,    3,    1,    3,    5,    1,
    1,    2,    3,    1,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   14,    0,
    0,    1,    3,    4,    5,    6,    7,    8,    9,   10,
   11,   12,   13,   19,   54,    0,   18,    0,    0,    0,
    0,    0,    0,    0,   55,    0,    0,    2,    0,   30,
    0,    0,    0,   40,   39,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   16,    0,    0,    0,   50,   51,   17,   15,    0,
    0,   31,    0,    0,    0,   41,    0,   42,    0,    0,
    0,   22,    0,    0,   49,    0,   33,    0,    0,    0,
   37,    0,   36,    0,   47,    0,   46,   44,    0,    0,
    0,   53,    0,   34,   29,    0,    0,    0,    0,    0,
   21,   23,   20,    0,   38,   45,   48,    0,    0,   25,
   35,   27,    0,    0,   28,
};
static const short yydgoto[] = {                         11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,
   22,   23,   24,   81,   82,  120,   29,   74,   54,   57,
   93,   45,   59,   60,   97,   65,   66,   67,   25,
};
static const short yysindex[] = {                      -257,
 -239, -229, -228, -223, -220, -284, -258, -264,    0, -252,
 -257,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -213,    0, -255, -237, -253,
 -236, -207, -206, -205,    0, -204, -203,    0, -202,    0,
 -201, -235, -199,    0,    0, -198, -230, -200, -262, -197,
 -196, -195, -231, -226, -234, -194, -193, -192, -191, -190,
 -188,    0, -214, -188, -189,    0,    0,    0,    0, -187,
 -201,    0, -180, -277, -273,    0, -256,    0, -199, -181,
 -259,    0, -188, -212,    0, -178,    0, -215, -182, -211,
    0, -174,    0, -184,    0, -171,    0,    0, -186, -177,
 -188,    0, -176,    0,    0, -168, -185, -270, -183, -247,
    0,    0,    0, -179,    0,    0,    0, -175, -173,    0,
    0,    0, -172, -170,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -169,    0,    0,    0,    0,    0,    0, -167,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -166,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -261,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -246,    0,
};
static const short yygindex[] = {                         0,
   80,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   90,   29,  -72,    0,    0,    0,   23,   16,
    0,    0,    0,    0,  -12,    0,    0,    0,    0,
};
#define YYTABLESIZE 126
static const short yytable[] = {                          1,
   35,   94,    2,   24,   40,    3,    4,   43,    5,    6,
  102,   44,  118,   32,   89,   90,   33,   63,   26,   64,
   26,   91,    7,   92,   95,    8,   96,    1,  112,   28,
   24,   24,  100,  101,   30,   41,   36,   31,   95,   34,
   96,    9,   10,  119,   39,   26,   26,   42,   37,   46,
   47,   48,   49,   50,   51,   55,   53,   52,   56,   58,
   61,   71,   73,   70,   62,   72,   83,   68,   69,   80,
   79,   76,   86,   78,   75,   85,   77,   88,   99,  103,
  101,  104,  105,  107,  108,  106,  109,  111,  113,  114,
   38,   27,   84,   87,   98,  116,    0,   43,   52,    0,
    0,    0,    0,    0,    0,    0,    0,  110,    0,    0,
    0,  115,    0,  117,    0,    0,    0,  121,    0,  124,
  122,  123,   32,    0,    0,  125,
};
static const short yycheck[] = {                        257,
  265,  258,  260,  265,  260,  263,  264,  261,  266,  267,
   83,  265,  260,  298,  292,  293,  301,  280,  265,  282,
  260,  295,  280,  297,  295,  283,  297,  257,  101,  258,
  292,  293,  292,  293,  258,  291,  301,  258,  295,  298,
  297,  299,  300,  291,  258,  292,  293,  285,  301,  286,
  258,  258,  258,  258,  258,  291,  258,  260,  258,  258,
  291,  293,  297,  259,  265,  292,  281,  265,  265,  258,
  261,  265,  260,  265,  269,  265,  269,  258,  260,  258,
  293,  297,  265,  258,  269,  297,  258,  265,  265,  258,
   11,    2,   64,   71,   79,  108,   -1,  265,  265,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  294,   -1,   -1,
   -1,  297,   -1,  297,   -1,   -1,   -1,  297,   -1,  292,
  296,  295,  292,   -1,   -1,  296,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 302
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ST","NE","FM","SP","WE","GY",
"IT","DE","SN","UE","CT","CST","OPR","OPR_EN","AS","WN","TN","ELSE","TP","BN",
"IN","LE","JN","AT","CN","AD","DP","DPT","VA","SET","AY","AL","EX","UN","LP",
"RP","CA","TE","NM","NL","CS","TB","EXIT","USE","DB","SW",
};
static const char *yyrule[] = {
"$accept : Sql",
"Sql : Statement",
"Sql : Sql Statement",
"Statement : select",
"Statement : insert",
"Statement : delete",
"Statement : update",
"Statement : create",
"Statement : alert",
"Statement : drop",
"Statement : exit",
"Statement : use_db",
"Statement : crt_db",
"Statement : drp_db",
"exit : EXIT",
"use_db : USE DB NE SN",
"crt_db : CT DB NE SN",
"drp_db : DP DB NE SN",
"select : SP st",
"select : st",
"st : ST SP NE SP FM SP NE SN",
"create : CT TB NE LP col_def RP SN",
"col_def : col",
"col_def : col_def CA col",
"col : NE SP TE",
"col : NE SP TE cl",
"cl : LP NM RP",
"cl : SP NL",
"cl : LP NM RP NL",
"insert : IT in_f VA LP in_v RP SN",
"in_f : NE SP",
"in_f : NE LP i_f RP",
"i_f : NE",
"i_f : NE CA i_f",
"in_v : CS NE CS",
"in_v : in_v CA CS NE CS",
"condition : NE OPR condic",
"condic : NM",
"condic : CS NE CS",
"delete : DE NE del",
"del : SN",
"del : WE condition SN",
"update : UE NE SET exp SN",
"exp : ep",
"exp : ep WE condition",
"ep : NE OPR NE OPR it",
"ep : NE OPR it",
"it : NM",
"it : CS NE CS",
"alert : AT TB NE aler SN",
"aler : add",
"aler : alc",
"add : AD col_def",
"alc : AT CN col",
"drop : drop_column",
"drop_column : DP SN",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 83 "paser.y"
int main()
{
    printf("\e[1;32m");
    yyparse();
    printf("\e[0m");
    return 0;
}
int yyerror(char *msg)
{
    printf("\e[1;31mError encountered: \e[1;32m%s\e[0m \n", msg);
}
#line 332 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 14:
#line 13 "paser.y"
	{puts("Exit Successfully!!");return 0;}
break;
case 15:
#line 15 "paser.y"
	{
    use_db(yystack.l_mark[-1]);
}
break;
case 16:
#line 18 "paser.y"
	{
    crt_db(yystack.l_mark[-1]);
 }
break;
case 17:
#line 22 "paser.y"
	{
    drp_db(yystack.l_mark[-1]);
 }
break;
case 20:
#line 28 "paser.y"
	{
    printf("YES!\n");
    printf("%s is %s years old!!!\n", yystack.l_mark[-7], yystack.l_mark[-5]);
}
break;
case 21:
#line 34 "paser.y"
	{
    printf("create!\n");
}
break;
case 29:
#line 43 "paser.y"
	{
    printf("Insert\n");
}
break;
case 39:
#line 54 "paser.y"
	{
    printf("delete\n");
}
break;
case 42:
#line 60 "paser.y"
	{
    printf("update\n");
}
break;
case 49:
#line 69 "paser.y"
	{
    printf ("alert\n");
}
break;
case 55:
#line 78 "paser.y"
	{
    printf ("drop\n");
 }
break;
#line 603 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
