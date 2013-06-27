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
#include "string.h"
#include "dbf.h"
#include "dat.h"
#include "def.h"
typedef char* string;
#define YYSTYPE string
#define LEN 1000
#define M 10000
 char st[3][LEN][M];
 int cp[3];
 int k=0;
#line 32 "y.tab.c"

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
    3,   18,   20,   20,   21,   21,   19,   22,   22,   22,
   22,   23,   24,   24,    4,   25,   25,    5,   26,   26,
   27,   27,   28,   28,    7,   29,   29,   30,   31,    8,
   32,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    4,    4,    4,    3,    2,
    1,    8,    7,    1,    3,    3,    4,    3,    2,    4,
    8,    1,    1,    3,    1,    3,    1,    1,    3,    5,
    3,    3,    1,    3,    3,    1,    3,    5,    1,    3,
    5,    3,    1,    3,    5,    1,    1,    2,    3,    1,
    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   15,    0,
    0,    0,    1,    3,    4,    5,    6,    7,    8,    9,
   10,   11,   12,   13,   14,   21,   60,    0,   20,    0,
    0,    0,    0,    0,    0,   61,    0,    0,    0,    2,
    0,   33,    0,    0,   32,    0,   46,   45,    0,    0,
    0,    0,    0,    0,   19,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   17,    0,    0,    0,   56,
   57,   18,   16,    0,    0,   34,    0,    0,   47,    0,
   48,    0,    0,    0,   24,    0,    0,   55,    0,   36,
   38,    0,    0,    0,   43,    0,   42,    0,   53,    0,
   52,   50,    0,    0,    0,   59,    0,    0,    0,    0,
    0,    0,    0,    0,   23,   25,   22,   39,   31,   41,
    0,   44,   51,   54,    0,    0,   27,    0,   29,    0,
   40,    0,   30,
};
static const short yydgoto[] = {                         12,
   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,
   23,   24,   25,   26,   84,   85,  127,   44,   93,   45,
   58,   94,   61,   97,   48,   63,   64,  101,   69,   70,
   71,   27,
};
static const short yysindex[] = {                      -257,
 -248, -241, -237, -233, -229, -284, -263, -264,    0, -253,
 -235, -257,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -220,    0, -255,
 -250, -232, -218, -203, -202,    0, -201, -200, -206,    0,
 -199,    0, -198, -223,    0, -195,    0,    0, -194, -226,
 -197, -262, -196, -193,    0, -192, -227, -222, -217, -191,
 -190, -189, -188, -185, -187,    0, -208, -187, -186,    0,
    0,    0,    0, -179, -198,    0, -273, -267,    0, -256,
    0, -195, -178, -259,    0, -187, -210,    0, -174,    0,
    0, -173, -205, -207,    0, -170,    0, -180,    0, -168,
    0,    0, -184, -172, -187,    0, -171, -183, -169, -245,
 -182, -244, -181, -247,    0,    0,    0,    0,    0,    0,
 -167,    0,    0,    0, -204, -177,    0, -176,    0, -175,
    0, -166,    0,
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
    0,    0,    0,    0,    0,    0, -163,    0,    0,    0,
    0,    0,    0, -161,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -261,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -246,    0,
};
static const short yygindex[] = {                         0,
   83,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   95,   30,  -78,    0,    0,    0,    0,
   24,    0,   18,    0,    0,    0,    0,   -9,    0,    0,
    0,    0,
};
#define YYTABLESIZE 131
static const short yytable[] = {                          1,
   36,   98,    2,   26,   42,    3,    4,  106,    5,    6,
   46,   28,  125,   33,   47,    1,   34,   67,   28,   68,
   30,   91,    7,   92,   31,    8,  116,   95,   32,   96,
   26,   26,  104,  105,   35,   43,   37,   41,   99,   50,
  100,    9,   10,  126,   11,   28,   28,   38,   39,  120,
   99,  121,  100,   49,   51,   52,   53,   54,   55,   57,
   56,   59,   60,   62,   65,   75,   74,   66,   72,   76,
   83,   73,   86,   77,   79,   82,   81,   78,   88,   80,
   89,  103,  105,  107,  108,  110,  109,  111,  112,  113,
  128,  129,  115,  117,   40,  119,   29,   87,   90,  102,
   49,   58,  123,    0,    0,    0,    0,    0,    0,  114,
    0,    0,    0,  118,  122,  124,  132,  130,    0,    0,
  131,    0,    0,    0,    0,    0,   35,    0,    0,  133,
   37,
};
static const short yycheck[] = {                        257,
  265,  258,  260,  265,  260,  263,  264,   86,  266,  267,
  261,  260,  260,  298,  265,  257,  301,  280,  265,  282,
  258,  295,  280,  297,  258,  283,  105,  295,  258,  297,
  292,  293,  292,  293,  298,  291,  301,  258,  295,  258,
  297,  299,  300,  291,  302,  292,  293,  301,  284,  295,
  295,  297,  297,  286,  258,  258,  258,  258,  265,  258,
  260,  285,  258,  258,  291,  293,  259,  265,  265,  292,
  258,  265,  281,  291,  265,  261,  265,  269,  265,  269,
  260,  260,  293,  258,  258,  293,  292,  258,  269,  258,
  258,  296,  265,  265,   12,  265,    2,   68,   75,   82,
  265,  265,  112,   -1,   -1,   -1,   -1,   -1,   -1,  294,
   -1,   -1,   -1,  297,  297,  297,  292,  295,   -1,   -1,
  297,   -1,   -1,   -1,   -1,   -1,  292,   -1,   -1,  296,
  292,
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
"insert : IT NE in_f VA LP in_v RP SN",
"in_f : in_ff",
"in_ff : SP",
"in_ff : LP i_f RP",
"i_f : NE",
"i_f : NE CA i_f",
"in_v : in_vv",
"in_vv : NM",
"in_vv : CS NE CS",
"in_vv : in_vv CA CS NE CS",
"in_vv : in_vv CA NM",
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
#line 107 "paser.y"
int main()
{
    memset(cp,0,sizeof(cp));
    printf("\e[1;32m");
    yyparse();
    printf("\e[0m");
    return 0;
}
int st_init()
{
    k=(k+1)%3;
    cp[k]=0;
    return 1;
}
int st_push(char a[])
{
    strcpy(st[k][cp[k]],a);cp[k]++;
    return 1;
}
int yyerror(char *msg)
{
    printf("\e[1;31mError encountered: \e[1;32m%s\e[0m \n", msg);
}
#line 366 "y.tab.c"

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
#line 20 "paser.y"
	{puts("Exit Successfully!!");return 0;}
break;
case 16:
#line 22 "paser.y"
	{
    use_db(yystack.l_mark[-1]);
 }
break;
case 17:
#line 25 "paser.y"
	{
    crt_db(yystack.l_mark[-1]);
 }
break;
case 18:
#line 29 "paser.y"
	{
    drp_db(yystack.l_mark[-1]);
 }
break;
case 19:
#line 33 "paser.y"
	{
    shw_tb();
 }
break;
case 22:
#line 38 "paser.y"
	{
    printf("YES!\n");
    printf("%s is %s years old!!!\n", yystack.l_mark[-7], yystack.l_mark[-5]);
}
break;
case 23:
#line 44 "paser.y"
	{
    crt_tb();
}
break;
case 31:
#line 53 "paser.y"
	{
    insert(yystack.l_mark[-6],st[(k+1)%3],cp[(k+1)%3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 32:
#line 58 "paser.y"
	{
    st_init();
 }
break;
case 35:
#line 63 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 36:
#line 63 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 37:
#line 66 "paser.y"
	{
    st_init();
}
break;
case 38:
#line 70 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 39:
#line 70 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 40:
#line 70 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 41:
#line 70 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 45:
#line 78 "paser.y"
	{
    printf("delete\n");
}
break;
case 48:
#line 84 "paser.y"
	{
    printf("update\n");
}
break;
case 55:
#line 93 "paser.y"
	{
    printf ("alert\n");
}
break;
case 61:
#line 102 "paser.y"
	{
    printf ("drop\n");
 }
break;
#line 679 "y.tab.c"
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
