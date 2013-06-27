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
typedef char* string;
#define YYSTYPE string
#line 24 "y.tab.c"

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
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    9,   10,    2,    2,   11,    6,   12,   12,   13,
   13,   14,   14,   14,    3,   15,   15,   17,   17,   16,
   16,   18,   19,   19,    4,   20,   20,    5,   21,   21,
   22,   22,   23,   23,    7,   24,   24,   25,   26,    8,
   27,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    4,    2,    1,    8,    7,    1,    3,    3,
    4,    3,    2,    4,    7,    2,    4,    1,    3,    3,
    5,    3,    1,    3,    3,    1,    3,    5,    1,    3,
    5,    3,    1,    3,    5,    1,    1,    2,    3,    1,
    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   12,    0,
    0,    1,    3,    4,    5,    6,    7,    8,    9,   10,
   11,   15,   50,    0,   14,    0,    0,    0,    0,    0,
    0,   51,    0,    2,    0,   26,    0,    0,    0,   36,
   35,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   46,   47,
   13,    0,    0,   27,    0,    0,    0,   37,    0,   38,
    0,    0,    0,   18,    0,    0,   45,    0,   29,    0,
    0,    0,   33,    0,   32,    0,   43,    0,   42,   40,
    0,    0,    0,   49,    0,   30,   25,    0,    0,    0,
    0,    0,   17,   19,   16,    0,   34,   41,   44,    0,
    0,   21,   31,   23,    0,    0,   24,
};
static const short yydgoto[] = {                         11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,
   22,   73,   74,  112,   27,   66,   48,   51,   85,   41,
   53,   54,   89,   58,   59,   60,   23,
};
static const short yysindex[] = {                      -257,
 -245, -236, -229, -228, -227, -264, -263, -232,    0, -261,
 -257,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -221,    0, -259, -247, -253, -238, -209,
 -208,    0, -207,    0, -206,    0, -205, -239, -203,    0,
    0, -202, -234, -269, -204, -201, -233, -230, -231, -210,
 -200, -199, -198, -197, -195, -213, -195, -196,    0,    0,
    0, -189, -205,    0, -186, -268, -281,    0, -256,    0,
 -203, -187, -265,    0, -195, -219,    0, -183,    0, -220,
 -185, -218,    0, -182,    0, -191,    0, -177,    0,    0,
 -212, -181, -195,    0, -180,    0,    0, -175, -211, -277,
 -194, -255,    0,    0,    0, -193,    0,    0,    0, -190,
 -188,    0,    0,    0, -192, -184,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -179,    0,    0,    0,
    0,    0,    0, -178,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -176,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -248,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -246,    0,
};
static const short yygindex[] = {                         0,
   77,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   88,   34,  -71,    0,    0,    0,   29,   22,    0,    0,
    0,    0,   -6,    0,    0,    0,    0,
};
#define YYTABLESIZE 113
static const short yytable[] = {                          1,
   36,   86,    2,   94,  110,    3,    4,   39,    5,    6,
   56,   40,   57,   83,   24,   84,   20,   87,   22,   88,
    1,  104,    7,   81,   82,    8,   92,   93,   26,   28,
   29,   37,   32,   30,   31,  111,   35,   38,   87,   33,
   88,    9,   10,   20,   20,   22,   22,   42,   43,   44,
   45,   49,   47,   46,   50,   52,   55,   62,   67,   63,
   61,   64,   72,   71,   68,   65,   70,   75,   77,   69,
   78,   80,   91,   93,   95,   99,   96,  100,   98,   97,
  101,  102,  106,  103,  105,  107,   39,   34,   48,   25,
   76,   79,   90,  108,    0,    0,    0,    0,    0,  116,
    0,    0,  109,  113,    0,  114,  115,    0,    0,    0,
    0,  117,   28,
};
static const short yycheck[] = {                        257,
  260,  258,  260,   75,  260,  263,  264,  261,  266,  267,
  280,  265,  282,  295,  260,  297,  265,  295,  265,  297,
  257,   93,  280,  292,  293,  283,  292,  293,  258,  258,
  258,  291,  265,  298,  298,  291,  258,  285,  295,  301,
  297,  299,  300,  292,  293,  292,  293,  286,  258,  258,
  258,  291,  258,  260,  258,  258,  291,  259,  269,  293,
  265,  292,  258,  261,  265,  297,  265,  281,  265,  269,
  260,  258,  260,  293,  258,  258,  297,  269,  297,  265,
  258,  294,  258,  265,  265,  297,  265,   11,  265,    2,
   57,   63,   71,  100,   -1,   -1,   -1,   -1,   -1,  292,
   -1,   -1,  297,  297,   -1,  296,  295,   -1,   -1,   -1,
   -1,  296,  292,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 301
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
"RP","CA","TE","NM","NL","CS","TB","EXIT","USE","DB",
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
"Statement : use",
"exit : EXIT",
"use : USE DB NE SN",
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
#line 75 "paser.y"
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
#line 321 "y.tab.c"

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
case 12:
#line 12 "paser.y"
	{puts("Exit Successfully!!");return 0;}
break;
case 13:
#line 14 "paser.y"
	{
    use_database(yystack.l_mark[-1]);
    printf ("use db %s\n",yystack.l_mark[-1]);
 }
break;
case 16:
#line 20 "paser.y"
	{
    printf("YES!\n");
    printf("%s is %s years old!!!\n", yystack.l_mark[-7], yystack.l_mark[-5]);
}
break;
case 17:
#line 26 "paser.y"
	{
    printf("create!\n");
}
break;
case 25:
#line 35 "paser.y"
	{
    printf("Insert\n");
}
break;
case 35:
#line 46 "paser.y"
	{
    printf("delete\n");
}
break;
case 38:
#line 52 "paser.y"
	{
    printf("update\n");
}
break;
case 45:
#line 61 "paser.y"
	{
    printf ("alert\n");
}
break;
case 51:
#line 70 "paser.y"
	{
    printf ("drop\n");
 }
break;
#line 581 "y.tab.c"
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
