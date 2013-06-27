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
#define TBS 284
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
    1,    1,    1,    1,    9,   10,   11,   12,   13,    2,
    2,   14,    6,   15,   15,   16,   16,   17,   17,   17,
    3,   18,   18,   20,   20,   19,   19,   21,   22,   22,
    4,   23,   23,    5,   24,   24,   25,   25,   26,   26,
    7,   27,   27,   28,   29,    8,   30,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    4,    4,    4,    3,    2,
    1,    8,    7,    1,    3,    3,    4,    3,    2,    4,
    7,    2,    4,    1,    3,    3,    5,    3,    1,    3,
    3,    1,    3,    5,    1,    3,    5,    3,    1,    3,
    5,    1,    1,    2,    3,    1,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   15,    0,
    0,    0,    1,    3,    4,    5,    6,    7,    8,    9,
   10,   11,   12,   13,   14,   21,   56,    0,   20,    0,
    0,    0,    0,    0,    0,    0,   57,    0,    0,    0,
    2,    0,   32,    0,    0,    0,   42,   41,    0,    0,
    0,    0,    0,    0,   19,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   17,    0,    0,    0,   52,
   53,   18,   16,    0,    0,   33,    0,    0,    0,   43,
    0,   44,    0,    0,    0,   24,    0,    0,   51,    0,
   35,    0,    0,    0,   39,    0,   38,    0,   49,    0,
   48,   46,    0,    0,    0,   55,    0,   36,   31,    0,
    0,    0,    0,    0,   23,   25,   22,    0,   40,   47,
   50,    0,    0,   27,   37,   29,    0,    0,   30,
};
static const short yydgoto[] = {                         12,
   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,
   23,   24,   25,   26,   85,   86,  124,   31,   78,   58,
   61,   97,   48,   63,   64,  101,   69,   70,   71,   27,
};
static const short yysindex[] = {                      -257,
 -239, -229, -228, -223, -220, -284, -258, -264,    0, -252,
 -236, -257,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -208,    0, -255,
 -234, -253, -233, -206, -204, -203,    0, -202, -201, -207,
    0, -200,    0, -199, -230, -196,    0,    0, -195, -227,
 -198, -262, -197, -194,    0, -193, -224, -222, -232, -192,
 -191, -190, -189, -188, -186,    0, -187, -186, -185,    0,
    0,    0,    0, -182, -199,    0, -183, -277, -273,    0,
 -256,    0, -196, -179, -259,    0, -186, -211,    0, -175,
    0, -213, -180, -210,    0, -172,    0, -181,    0, -169,
    0,    0, -184, -174, -186,    0, -173,    0,    0, -168,
 -178, -270, -177, -247,    0,    0,    0, -176,    0,    0,
    0, -171, -167,    0,    0,    0, -170, -166,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -165,    0,    0,    0,
    0,    0,    0, -164,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -163,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -261,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -246,    0,
};
static const short yygindex[] = {                         0,
   81,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   93,   28,  -76,    0,    0,    0,   22,
   15,    0,    0,    0,    0,  -13,    0,    0,    0,    0,
};
#define YYTABLESIZE 130
static const short yytable[] = {                          1,
   37,   98,    2,   26,   43,    3,    4,   46,    5,    6,
  106,   47,  122,   34,   93,   94,   35,   67,   28,   68,
   28,   95,    7,   96,   99,    8,  100,    1,  116,   30,
   26,   26,  104,  105,   32,   44,   38,   33,   99,   36,
  100,    9,   10,  123,   11,   28,   28,   40,   39,   42,
   45,   50,   49,   51,   52,   53,   54,   55,   57,   56,
   59,   60,   62,   65,   77,   74,   66,   72,   75,   76,
   73,   84,   83,   80,   92,   82,   79,   90,   81,   89,
  103,  105,  107,  108,  109,  111,  110,  112,  113,  118,
  115,  117,   41,   87,   29,   88,   91,  102,  120,    0,
   45,   54,    0,    0,    0,    0,    0,    0,    0,  114,
    0,    0,    0,    0,    0,    0,    0,    0,  119,  121,
  125,  128,    0,    0,  126,    0,   34,  127,    0,  129,
};
static const short yycheck[] = {                        257,
  265,  258,  260,  265,  260,  263,  264,  261,  266,  267,
   87,  265,  260,  298,  292,  293,  301,  280,  265,  282,
  260,  295,  280,  297,  295,  283,  297,  257,  105,  258,
  292,  293,  292,  293,  258,  291,  301,  258,  295,  298,
  297,  299,  300,  291,  302,  292,  293,  284,  301,  258,
  285,  258,  286,  258,  258,  258,  258,  265,  258,  260,
  291,  258,  258,  291,  297,  259,  265,  265,  293,  292,
  265,  258,  261,  265,  258,  265,  269,  260,  269,  265,
  260,  293,  258,  297,  265,  258,  297,  269,  258,  258,
  265,  265,   12,  281,    2,   68,   75,   83,  112,   -1,
  265,  265,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  294,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  297,  297,
  297,  292,   -1,   -1,  296,   -1,  292,  295,   -1,  296,
};
#define YYFINAL 12
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
"IN","LE","JN","AT","CN","AD","DP","TBS","VA","SET","AY","AL","EX","UN","LP",
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
"Statement : show",
"exit : EXIT",
"use_db : USE DB NE SN",
"crt_db : CT DB NE SN",
"drp_db : DP DB NE SN",
"show : SW TBS SN",
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
#line 86 "paser.y"
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
#line 334 "y.tab.c"

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
case 15:
#line 13 "paser.y"
	{puts("Exit Successfully!!");return 0;}
break;
case 16:
#line 15 "paser.y"
	{
    use_db(yystack.l_mark[-1]);
 }
break;
case 17:
#line 18 "paser.y"
	{
    crt_db(yystack.l_mark[-1]);
 }
break;
case 18:
#line 22 "paser.y"
	{
    drp_db(yystack.l_mark[-1]);
 }
break;
case 19:
#line 26 "paser.y"
	{
    shw_tb();
 }
break;
case 22:
#line 31 "paser.y"
	{
    printf("YES!\n");
    printf("%s is %s years old!!!\n", yystack.l_mark[-7], yystack.l_mark[-5]);
}
break;
case 23:
#line 37 "paser.y"
	{
    crt_tb();
}
break;
case 31:
#line 46 "paser.y"
	{
    printf("Insert\n");
}
break;
case 41:
#line 57 "paser.y"
	{
    printf("delete\n");
}
break;
case 44:
#line 63 "paser.y"
	{
    printf("update\n");
}
break;
case 51:
#line 72 "paser.y"
	{
    printf ("alert\n");
}
break;
case 57:
#line 81 "paser.y"
	{
    printf ("drop\n");
 }
break;
#line 611 "y.tab.c"
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
