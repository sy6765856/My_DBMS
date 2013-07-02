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
#define RE 305
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    9,   10,   11,   12,   14,
   13,    2,    2,   15,   16,   17,   17,   17,    6,   18,
   19,   19,   20,   20,   21,   21,   21,    3,   22,   24,
   24,   25,   25,   23,   26,   26,   26,   26,   27,   28,
   28,   29,   29,    4,   30,   31,   31,    5,   32,   32,
   33,   35,   35,   36,   36,   34,    7,   37,   37,   38,
   39,   40,   40,    8,   41,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    4,    4,    4,    6,
    3,    2,    1,    6,    1,    1,    1,    3,    7,    1,
    1,    3,    3,    4,    3,    2,    4,    8,    1,    1,
    3,    1,    3,    1,    1,    3,    5,    3,    3,    1,
    1,    1,    3,    4,    1,    1,    3,    7,    3,    1,
    1,    3,    1,    1,    1,    1,    5,    1,    1,    2,
    2,    1,    3,    1,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   16,    0,
    0,    0,    0,    1,    3,    4,    5,    6,    7,    8,
    9,   10,   11,   12,   13,   14,   15,   23,   74,    0,
   22,    0,    0,    0,    0,    0,    0,   75,    0,    0,
    0,    0,    2,    0,   26,    0,   25,   40,    0,    0,
   39,    0,    0,    0,    0,    0,    0,    0,   21,    0,
    0,    0,   42,    0,    0,    0,   56,   54,   55,    0,
    0,   18,    0,    0,    0,   68,   69,   19,   17,    0,
   28,    0,   41,    0,    0,    0,    0,    0,    0,    0,
    0,   31,    0,    0,   71,   67,    0,   24,   43,   45,
    0,    0,    0,   51,   50,    0,   57,   65,   52,    0,
   64,    0,    0,   61,    0,    0,    0,    0,    0,   20,
    0,    0,    0,   49,    0,   58,    0,    0,    0,   29,
   32,   73,   46,   38,   48,    0,   53,   66,   59,   62,
    0,    0,   34,    0,   36,    0,   47,    0,   37,
};
static const short yydgoto[] = {                         13,
   14,   15,   16,   17,   18,   19,   20,   21,   22,   23,
   24,   25,   26,   27,   28,   46,   47,   90,   91,   92,
  143,   50,  102,   51,   64,  103,   87,  106,  111,   68,
   69,  112,  113,  139,  114,  115,   75,   76,   77,   95,
   29,
};
static const short yysindex[] = {                      -257,
 -236, -229, -228, -224, -220, -280, -258, -264,    0, -245,
 -235, -244, -257,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -254,
    0, -255, -203, -227, -201, -200, -198,    0, -197, -196,
 -202, -194,    0, -226,    0, -193,    0,    0, -190, -216,
    0, -253, -188, -219, -192, -251, -191, -189,    0, -195,
 -254, -187,    0, -259, -214, -183,    0,    0,    0, -225,
 -179,    0, -179, -178, -184,    0,    0,    0,    0, -176,
    0, -182,    0, -174, -281, -252, -180, -256, -173, -206,
 -205,    0, -205, -204,    0,    0, -175,    0,    0,    0,
 -167, -199, -186,    0,    0, -275,    0,    0,    0, -166,
    0, -171, -165,    0, -172, -185, -170, -179, -178,    0,
 -181, -164, -268,    0, -177,    0, -183, -256, -247,    0,
    0,    0,    0,    0,    0, -160,    0,    0,    0,    0,
 -169, -163,    0, -168,    0, -162,    0, -161,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -159,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -158,    0, -157, -192,    0,    0,    0,    0,    0,    0,
    0,    0, -156,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -155,    0, -250,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -246,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -240,    0,
};
static const short yygindex[] = {                         0,
   86,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  100,    0,   42,    0,   31,  -13,
    0,    0,    0,    0,    0,    0,  -21,    0,    5,    0,
    0,    0,    0,    0,    0,  -16,    0,    0,    0,   -6,
    0,
};
#define YYTABLESIZE 136
static const short yytable[] = {                          1,
   38,  108,    2,   44,   48,    3,    4,   66,    5,    6,
   63,   67,  141,  100,   63,  101,  104,   35,   33,  109,
   36,  110,    7,   30,   35,    8,  135,    1,  136,   32,
   73,   74,   83,   84,   33,   49,   39,   34,  109,   37,
  110,    9,   10,  142,   11,   33,   33,   12,   41,   45,
  105,   35,   35,   42,   52,   40,   54,   55,   53,   56,
   57,   58,   59,   60,   80,   62,   61,   63,   65,   70,
   82,   71,   72,   78,   86,   79,   85,   88,   89,   94,
   96,   97,   98,   99,  107,  117,  116,  118,  119,  120,
  121,  125,  122,  126,  130,  127,  128,  144,   43,   27,
  134,   31,   81,   93,  131,  138,  123,   70,  129,   60,
  124,  140,  132,    0,    0,  133,    0,    0,    0,  137,
    0,    0,    0,    0,    0,    0,  145,    0,  147,  148,
    0,  146,    0,   30,  149,   44,
};
static const short yycheck[] = {                        257,
  265,  258,  260,  258,  260,  263,  264,  261,  266,  267,
  261,  265,  260,  295,  265,  297,  269,  298,  265,  295,
  301,  297,  280,  260,  265,  283,  295,  257,  297,  258,
  282,  283,  292,  293,  259,  291,  301,  258,  295,  298,
  297,  299,  300,  291,  302,  292,  293,  305,  284,  304,
  303,  292,  293,  298,  258,  301,  258,  258,  286,  258,
  258,  258,  265,  258,  260,  259,  293,  258,  285,  258,
  258,  291,  265,  265,  258,  265,  291,  303,  258,  258,
  265,  258,  265,  258,  265,  292,  260,  293,  293,  265,
  258,  258,  292,  265,  265,  261,  269,  258,   13,  259,
  265,    2,   61,   73,  118,  127,  293,  265,  294,  265,
  106,  128,  119,   -1,   -1,  297,   -1,   -1,   -1,  297,
   -1,   -1,   -1,   -1,   -1,   -1,  296,   -1,  297,  292,
   -1,  295,   -1,  292,  296,  292,
};
#define YYFINAL 13
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 305
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
"RP","CA","TE","NM","NL","CS","TB","EXIT","USE","DB","SW","EQ","SR","RE",
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
"Statement : alter",
"Statement : drop",
"Statement : exit",
"Statement : use_db",
"Statement : crt_db",
"Statement : drp_db",
"Statement : show",
"Statement : rename",
"exit : EXIT",
"use_db : USE DB NE SN",
"crt_db : CT DB NE SN",
"drp_db : DP DB NE SN",
"rename : RE TB NE SP NE SN",
"show : SW TBS SN",
"select : SP st",
"select : st",
"st : ST SP col_na FM NE SN",
"col_na : col_name",
"col_name : SR",
"col_name : NE",
"col_name : NE CA col_name",
"create : CT TB NE LP col_deff RP SN",
"col_deff : col_def",
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
"i_f : i_f CA NE",
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
"alter : AT TB NE aler SN",
"aler : add",
"aler : drr",
"add : AD col_def",
"drr : DP cll",
"cll : NE",
"cll : NE CA cll",
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
#line 128 "paser.y"
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
#line 390 "y.tab.c"

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
case 16:
#line 20 "paser.y"
	{close_db();puts("Exit Successfully!!");return 0;}
break;
case 17:
#line 23 "paser.y"
	{
    use_db(yystack.l_mark[-1]);
}
break;
case 18:
#line 27 "paser.y"
	{
    crt_db(yystack.l_mark[-1]);
}
break;
case 19:
#line 31 "paser.y"
	{
    drp_db(yystack.l_mark[-1]);
 }
break;
case 20:
#line 36 "paser.y"
	{
    ren_tb(yystack.l_mark[-3],yystack.l_mark[-1]);
}
break;
case 21:
#line 41 "paser.y"
	{
    shw_tb();
 }
break;
case 24:
#line 47 "paser.y"
	{
    selec(yystack.l_mark[-1],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 25:
#line 50 "paser.y"
	{st_init();}
break;
case 26:
#line 51 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 27:
#line 51 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 28:
#line 51 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 29:
#line 54 "paser.y"
	{
    crt_tb(yystack.l_mark[-4],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 30:
#line 58 "paser.y"
	{st_init();}
break;
case 33:
#line 60 "paser.y"
	{st_push(yystack.l_mark[-2]);st_push(yystack.l_mark[0]);}
break;
case 34:
#line 60 "paser.y"
	{st_push(yystack.l_mark[-3]);st_push(yystack.l_mark[-1]);}
break;
case 38:
#line 65 "paser.y"
	{
    insert(yystack.l_mark[-6],st[(k+1)%3],cp[(k+1)%3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 39:
#line 70 "paser.y"
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
	{st_push(yystack.l_mark[0]);}
break;
case 44:
#line 78 "paser.y"
	{
    st_init();
}
break;
case 45:
#line 82 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 46:
#line 82 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 47:
#line 82 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 48:
#line 82 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 49:
#line 85 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 50:
#line 86 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 51:
#line 86 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 52:
#line 87 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 53:
#line 87 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 54:
#line 91 "paser.y"
	{
    puts("fdfd");
    delet(yystack.l_mark[-1],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 55:
#line 95 "paser.y"
	{st_init();}
break;
case 58:
#line 100 "paser.y"
	{
    update(yystack.l_mark[-5],yystack.l_mark[-3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 61:
#line 105 "paser.y"
	{st_init();}
break;
case 62:
#line 106 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 65:
#line 107 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 66:
#line 109 "paser.y"
	{st_init();}
break;
case 67:
#line 113 "paser.y"
	{
    /* alt_tb($3);*/
}
break;
case 68:
#line 116 "paser.y"
	{st_init();}
break;
case 69:
#line 116 "paser.y"
	{st_init();}
break;
case 72:
#line 119 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 73:
#line 119 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 75:
#line 123 "paser.y"
	{
    printf ("drop\n");
}
break;
#line 793 "y.tab.c"
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
