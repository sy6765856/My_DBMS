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
#define EQ 303
#define SR 304
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    9,   10,   11,   12,   13,    2,
    2,   14,   15,   16,   16,   16,    6,   17,   17,   18,
   18,   19,   19,   19,    3,   20,   22,   22,   23,   23,
   21,   24,   24,   24,   24,   25,   26,   26,   27,   27,
    4,   28,   29,   29,    5,   30,   30,   31,   33,   33,
   34,   34,   32,    7,   35,   35,   36,   37,    8,   38,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    4,    4,    4,    3,    2,
    1,    6,    1,    1,    1,    3,    7,    1,    3,    3,
    4,    3,    2,    4,    8,    1,    1,    3,    1,    3,
    1,    1,    3,    5,    3,    3,    1,    1,    1,    3,
    4,    1,    1,    3,    7,    3,    1,    1,    3,    1,
    1,    1,    1,    5,    1,    1,    2,    3,    1,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   15,    0,
    0,    0,    1,    3,    4,    5,    6,    7,    8,    9,
   10,   11,   12,   13,   14,   21,   69,    0,   20,    0,
    0,    0,    0,    0,    0,   70,    0,    0,    0,    2,
    0,   24,    0,   23,   37,    0,    0,   36,    0,    0,
    0,    0,    0,    0,    0,   19,    0,    0,    0,    0,
    0,    0,   53,   51,   52,    0,    0,   17,    0,    0,
    0,   65,   66,   18,   16,   26,    0,    0,   38,    0,
    0,    0,    0,    0,    0,   28,    0,    0,   64,   22,
   40,   42,    0,    0,    0,   48,   47,    0,   54,   62,
   49,    0,   61,    0,    0,   58,    0,    0,    0,    0,
   68,    0,    0,    0,   46,    0,   55,    0,    0,    0,
   27,   29,   43,   35,   45,    0,   50,   63,   56,   59,
    0,    0,   31,    0,   33,    0,   44,    0,   34,
};
static const short yydgoto[] = {                         12,
   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,
   23,   24,   25,   26,   43,   44,   85,   86,  133,   47,
   94,   48,   60,   95,   82,   98,  103,   64,   65,  104,
  105,  129,  106,  107,   71,   72,   73,   27,
};
static const short yysindex[] = {                      -255,
 -239, -221, -216, -222, -215, -282, -245, -262,    0, -253,
 -229, -255,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -258,    0, -256,
 -202, -228, -201, -199, -198,    0, -197, -196, -200,    0,
 -230,    0, -195,    0,    0, -192, -218,    0, -248, -190,
 -220, -193, -260, -191, -189,    0, -258, -188, -224, -219,
 -214, -183,    0,    0,    0, -225, -179,    0, -194, -179,
 -185,    0,    0,    0,    0,    0, -184, -192,    0, -271,
 -254, -182, -257, -178, -261,    0, -179, -209,    0,    0,
    0,    0, -173, -206, -205,    0,    0, -268,    0,    0,
    0, -169,    0, -175, -170,    0, -177, -187, -172, -179,
    0, -203, -168, -243,    0, -186,    0, -183, -257, -250,
    0,    0,    0,    0,    0, -163,    0,    0,    0,    0,
 -181, -176,    0, -180,    0, -174,    0, -171,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -161,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -166,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -165,    0,    0,
    0,    0,    0,    0, -164,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -162,    0, -247,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -259,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -242,    0,
};
static const short yygindex[] = {                         0,
   84,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   97,    0,   44,   32,  -80,    0,    0,
    0,    0,   26,    0,  -13,    0,    8,    0,    0,    0,
    0,    0,    0,  -11,    0,    0,    0,    0,
};
#define YYTABLESIZE 128
static const short yytable[] = {                         41,
  100,    1,   36,   45,    2,   30,  111,    3,    4,  131,
    5,    6,   62,   60,   96,   33,   63,   60,   34,   69,
   28,   70,   32,   92,    7,   93,  101,    8,  102,  122,
  109,  110,   30,   30,   46,    1,   31,  101,   37,  102,
  132,   30,   32,    9,   10,   42,   11,   38,   97,   32,
   32,  125,   35,  126,   39,   49,   51,   50,   52,   53,
   54,   55,   57,   58,   56,   59,   61,   66,   78,   77,
   67,   68,   79,   74,   81,   75,   80,   83,   84,   89,
   90,  108,   99,  110,  112,  113,   87,  114,  116,  117,
  118,  119,  121,  123,  134,   40,  124,   25,   29,   67,
   76,   88,   57,   91,  128,  115,  120,  130,    0,    0,
  127,    0,    0,    0,  135,    0,  137,  138,  136,    0,
    0,    0,    0,    0,  139,   39,    0,   41,
};
static const short yycheck[] = {                        258,
  258,  257,  265,  260,  260,  265,   87,  263,  264,  260,
  266,  267,  261,  261,  269,  298,  265,  265,  301,  280,
  260,  282,  265,  295,  280,  297,  295,  283,  297,  110,
  292,  293,  292,  293,  291,  257,  259,  295,  301,  297,
  291,  258,  258,  299,  300,  304,  302,  301,  303,  292,
  293,  295,  298,  297,  284,  258,  258,  286,  258,  258,
  258,  258,  293,  259,  265,  258,  285,  258,  293,  258,
  291,  265,  292,  265,  258,  265,  291,  303,  258,  265,
  265,  260,  265,  293,  258,  292,  281,  293,  258,  265,
  261,  269,  265,  297,  258,   12,  265,  259,    2,  265,
   57,   70,  265,   78,  118,   98,  294,  119,   -1,   -1,
  297,   -1,   -1,   -1,  296,   -1,  297,  292,  295,   -1,
   -1,   -1,   -1,   -1,  296,  292,   -1,  292,
};
#define YYFINAL 12
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 304
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
"RP","CA","TE","NM","NL","CS","TB","EXIT","USE","DB","SW","EQ","SR",
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
"st : ST SP col_na FM NE SN",
"col_na : col_name",
"col_name : SR",
"col_name : NE",
"col_name : NE CA col_name",
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
"condition : NE coo condic",
"coo : EQ",
"coo : OPR",
"condic : NM",
"condic : CS NE CS",
"delete : DE FM NE dell",
"dell : del",
"del : SN",
"del : WE condition SN",
"update : UE NE SET NE EQ exp SN",
"exp : epp WE conditio",
"exp : epp",
"epp : ep",
"ep : con OPR con",
"ep : con",
"con : condic",
"con : NE",
"conditio : condition",
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
#line 120 "paser.y"
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
#line 375 "y.tab.c"

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
#line 39 "paser.y"
	{
    selec(yystack.l_mark[-1],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 23:
#line 42 "paser.y"
	{st_init();}
break;
case 24:
#line 43 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 25:
#line 43 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 26:
#line 43 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 27:
#line 46 "paser.y"
	{
    crt_tb();
}
break;
case 35:
#line 56 "paser.y"
	{
    insert(yystack.l_mark[-6],st[(k+1)%3],cp[(k+1)%3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 36:
#line 62 "paser.y"
	{
    st_init();
}
break;
case 39:
#line 67 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 40:
#line 67 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 41:
#line 71 "paser.y"
	{
    st_init();
}
break;
case 42:
#line 75 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 43:
#line 75 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 44:
#line 75 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 45:
#line 75 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 46:
#line 79 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 47:
#line 80 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 48:
#line 80 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 49:
#line 81 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 50:
#line 81 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 51:
#line 85 "paser.y"
	{
    delete(yystack.l_mark[-1],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 52:
#line 88 "paser.y"
	{st_init();}
break;
case 55:
#line 93 "paser.y"
	{
    update(yystack.l_mark[-5],yystack.l_mark[-3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 58:
#line 98 "paser.y"
	{st_init();}
break;
case 59:
#line 99 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 62:
#line 100 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 63:
#line 102 "paser.y"
	{st_init();}
break;
case 64:
#line 106 "paser.y"
	{
    printf ("alert\n");
}
break;
case 70:
#line 115 "paser.y"
	{
    printf ("drop\n");
}
break;
#line 743 "y.tab.c"
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
