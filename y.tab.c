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
typedef char* string;
#define YYSTYPE string
#line 22 "y.tab.c"

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
#define DPC 283
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
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    9,    2,    2,   10,    6,   11,   11,   12,   12,   13,
   13,   13,    3,   14,   14,   16,   16,   15,   15,   17,
   18,   18,    4,   19,   19,    5,   20,   20,   21,   21,
   22,   22,    7,   23,    8,    8,   25,   24,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    2,    1,    8,    7,    1,    3,    3,    4,    3,
    2,    4,    7,    2,    4,    1,    3,    3,    5,    3,
    1,    3,    3,    1,    3,    5,    1,    3,    5,    3,
    1,    3,    4,    1,    1,    1,    2,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   11,
    0,    1,    3,    4,    5,    6,    7,    8,    9,   10,
   13,   45,   46,    0,   12,    0,    0,    0,    0,    0,
    0,   47,   48,    2,    0,   24,    0,    0,    0,   34,
   33,    0,    0,   44,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   43,    0,    0,   25,    0,
    0,    0,   35,    0,   36,    0,    0,    0,   16,    0,
   27,    0,    0,    0,   31,    0,   30,    0,   41,    0,
   40,   38,    0,    0,    0,    0,   28,   23,    0,    0,
    0,    0,    0,   15,   17,   14,    0,   32,   39,   42,
    0,    0,   19,   29,   21,    0,    0,   22,
};
static const short yydgoto[] = {                         11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,
   68,   69,  103,   27,   61,   48,   51,   77,   41,   53,
   54,   81,   45,   22,   23,
};
static const short yysindex[] = {                      -257,
 -245, -229, -254, -228, -227, -269, -265, -231, -230,    0,
 -257,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -221,    0, -259, -247, -253, -246, -215,
 -220,    0,    0,    0, -216,    0, -212, -244, -210,    0,
    0, -209, -241,    0, -214, -207, -240, -238, -242, -213,
 -208, -211, -206, -201, -197,    0, -198, -212,    0, -195,
 -275, -284,    0, -256,    0, -210, -196, -273,    0, -193,
    0, -226, -199, -225,    0, -191,    0, -200,    0, -190,
    0,    0, -224, -192, -197, -189,    0,    0, -184, -222,
 -281, -219, -255,    0,    0,    0, -218,    0,    0,    0,
 -205, -203,    0,    0,    0, -204, -202,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -194,    0,    0,    0,
    0,    0,    0, -188,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -271,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -268,    0,
};
static const short yygindex[] = {                         0,
   69,    0,    0,    0,    0,    0,    0,    0,    0,   79,
    0,   -3,    0,    0,    0,   25,   18,    0,    0,    0,
    0,   -6,    0,    0,    0,
};
#define YYTABLESIZE 98
static const short yytable[] = {                          1,
   36,   78,    2,   26,  101,    3,    4,   39,    5,    6,
   75,   40,   76,   79,   24,   80,   73,   74,   84,   85,
   18,   18,    7,   20,   20,    8,    9,    1,   30,   28,
   29,   37,   31,   32,   33,  102,   35,   38,   79,   42,
   80,   10,   43,   46,   44,   47,   49,   50,   52,   55,
   56,   57,   58,   59,   60,   62,   63,   64,   65,   66,
   67,   70,   72,   83,   86,   88,   90,   92,   91,   93,
   87,   89,   94,   97,   98,   96,   37,  100,  104,   34,
   25,   95,   71,   82,   99,    0,    0,  107,    0,    0,
  105,  106,    0,  108,    0,    0,    0,   26,
};
static const short yycheck[] = {                        257,
  260,  258,  260,  258,  260,  263,  264,  261,  266,  267,
  295,  265,  297,  295,  260,  297,  292,  293,  292,  293,
  292,  293,  280,  292,  293,  283,  284,  257,  298,  258,
  258,  291,  298,  265,  265,  291,  258,  285,  295,  286,
  297,  299,  258,  260,  265,  258,  291,  258,  258,  291,
  265,  259,  293,  292,  297,  269,  265,  269,  265,  261,
  258,  260,  258,  260,  258,  265,  258,  258,  269,  294,
  297,  297,  265,  258,  297,  265,  265,  297,  297,   11,
    2,   85,   58,   66,   91,   -1,   -1,  292,   -1,   -1,
  296,  295,   -1,  296,   -1,   -1,   -1,  292,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 299
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
"IN","LE","JN","AT","CN","AD","DPC","DPT","VA","SET","AY","AL","EX","UN","LP",
"RP","CA","TE","NM","NL","CS","TB","EXIT",
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
"exit : EXIT",
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
"alert : AT TB aler SN",
"aler : SN",
"drop : drop_table",
"drop : drop_column",
"drop_column : DPC SN",
"drop_table : DPT SN",

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
#line 69 "paser.y"
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
#line 305 "y.tab.c"

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
case 11:
#line 10 "paser.y"
	{puts("Exit Successfully!!");return 0;}
break;
case 14:
#line 14 "paser.y"
	{
    printf("YES!\n");
    printf("%s is %s years old!!!\n", yystack.l_mark[-7], yystack.l_mark[-5]);
}
break;
case 15:
#line 20 "paser.y"
	{
    printf("create!\n");
}
break;
case 23:
#line 29 "paser.y"
	{
    printf("Insert\n");
}
break;
case 33:
#line 40 "paser.y"
	{
    printf("delete\n");
}
break;
case 36:
#line 46 "paser.y"
	{
    printf("update\n");
}
break;
case 43:
#line 54 "paser.y"
	{
    printf ("alert\n");
}
break;
case 47:
#line 61 "paser.y"
	{
    printf ("drop\n");
 }
break;
case 48:
#line 65 "paser.y"
	{
    printf("drpp\n");
 }
break;
#line 564 "y.tab.c"
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
