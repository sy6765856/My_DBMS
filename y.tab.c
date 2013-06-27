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
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    9,   10,   11,   12,   13,    2,
    2,   14,    6,   15,   15,   16,   16,   17,   17,   17,
    3,   18,   20,   20,   21,   21,   19,   22,   22,   22,
   22,   23,   24,   24,   25,   25,    4,   26,   26,    5,
   27,   27,   28,   30,   30,   31,   31,   29,    7,   32,
   32,   33,   34,    8,   35,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    4,    4,    4,    3,    2,
    1,    6,    7,    1,    3,    3,    4,    3,    2,    4,
    8,    1,    1,    3,    1,    3,    1,    1,    3,    5,
    3,    3,    1,    1,    1,    3,    4,    1,    3,    7,
    3,    1,    1,    3,    1,    1,    1,    1,    5,    1,
    1,    2,    3,    1,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,   15,    0,
    0,    0,    1,    3,    4,    5,    6,    7,    8,    9,
   10,   11,   12,   13,   14,   21,   64,    0,   20,    0,
    0,    0,    0,    0,    0,   65,    0,    0,    0,    2,
    0,   33,    0,    0,   32,    0,    0,    0,    0,    0,
    0,    0,   19,    0,    0,    0,    0,    0,   48,   47,
    0,    0,   17,    0,    0,    0,   60,   61,   18,   16,
    0,    0,   34,    0,    0,    0,    0,    0,    0,   24,
    0,    0,   59,   22,   36,   38,    0,    0,    0,   44,
   43,    0,   49,   57,   45,    0,   56,    0,    0,   53,
    0,    0,    0,    0,   63,    0,    0,    0,   42,    0,
   50,    0,    0,    0,   23,   25,   39,   31,   41,    0,
   46,   58,   51,   54,    0,    0,   27,    0,   29,    0,
   40,    0,   30,
};
static const short yydgoto[] = {                         12,
   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,
   23,   24,   25,   26,   79,   80,  127,   44,   88,   45,
   56,   89,   76,   92,   97,   60,   98,   99,  123,  100,
  101,   66,   67,   68,   27,
};
static const short yysindex[] = {                      -257,
 -231, -223, -218, -224, -208, -284, -245, -264,    0, -243,
 -233, -257,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -206,    0, -255,
 -204, -230, -203, -201, -199,    0, -198, -197, -202,    0,
 -195,    0, -196, -220,    0, -250, -192, -222, -194, -262,
 -193, -191,    0, -190, -226, -219, -221, -183,    0,    0,
 -227, -181,    0, -200, -181, -187,    0,    0,    0,    0,
 -186, -196,    0, -273, -265, -185, -256, -178, -260,    0,
 -181, -210,    0,    0,    0,    0, -174, -207, -205,    0,
    0, -270,    0,    0,    0, -172,    0, -176, -171,    0,
 -182, -189, -173, -181,    0, -188, -170, -267,    0, -184,
    0, -183, -256, -247,    0,    0,    0,    0,    0, -167,
    0,    0,    0,    0, -180, -177,    0, -175,    0, -169,
    0, -179,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -168,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -166,    0,    0,    0,    0,    0,    0, -165,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -164,    0,
 -249,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -246,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -244,    0,
};
static const short yygindex[] = {                         0,
   81,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   92,   31,  -73,    0,    0,    0,    0,
   25,    0,  -14,    0,    8,    0,    0,    0,    0,    0,
  -11,    0,    0,    0,    0,
};
#define YYTABLESIZE 127
static const short yytable[] = {                          1,
   36,   94,    2,   90,   42,    3,    4,  105,    5,    6,
   58,   55,  125,   33,   59,   55,   34,   64,   26,   65,
   28,   86,    7,   87,   95,    8,   96,  119,   28,  120,
  116,  103,  104,    1,   31,   43,   37,   91,   95,   30,
   96,    9,   10,  126,   11,   26,   26,   28,   28,   32,
   39,   41,   35,   46,   48,   47,   49,   38,   50,   51,
   52,   55,   53,   54,   57,   61,   72,   71,   62,   74,
   63,   69,   73,   70,   75,   77,   78,   83,   84,   93,
   81,  102,  104,  106,  107,  110,  113,  108,  111,  112,
  128,  115,   40,   29,  118,   82,   85,  122,   62,  109,
   52,  124,    0,    0,  114,    0,    0,    0,  117,    0,
    0,    0,  121,    0,    0,  129,  133,  130,    0,    0,
    0,  131,  132,   35,    0,    0,   37,
};
static const short yycheck[] = {                        257,
  265,  258,  260,  269,  260,  263,  264,   81,  266,  267,
  261,  261,  260,  298,  265,  265,  301,  280,  265,  282,
  265,  295,  280,  297,  295,  283,  297,  295,  260,  297,
  104,  292,  293,  257,  259,  291,  301,  303,  295,  258,
  297,  299,  300,  291,  302,  292,  293,  292,  293,  258,
  284,  258,  298,  258,  258,  286,  258,  301,  258,  258,
  258,  258,  265,  259,  285,  258,  293,  258,  291,  291,
  265,  265,  292,  265,  258,  303,  258,  265,  265,  265,
  281,  260,  293,  258,  292,  258,  269,  293,  265,  261,
  258,  265,   12,    2,  265,   65,   72,  112,  265,   92,
  265,  113,   -1,   -1,  294,   -1,   -1,   -1,  297,   -1,
   -1,   -1,  297,   -1,   -1,  296,  296,  295,   -1,   -1,
   -1,  297,  292,  292,   -1,   -1,  292,
};
#define YYFINAL 12
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 303
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
"RP","CA","TE","NM","NL","CS","TB","EXIT","USE","DB","SW","EQ",
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
"st : ST SP NE FM NE SN",
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
"delete : DE FM NE del",
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
#line 116 "paser.y"
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
#line 369 "y.tab.c"

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
    printf("%s is %s years old!!!\n", yystack.l_mark[-5], yystack.l_mark[-3]);
}
break;
case 23:
#line 44 "paser.y"
	{
    crt_tb();
}
break;
case 31:
#line 54 "paser.y"
	{
    insert(yystack.l_mark[-6],st[(k+1)%3],cp[(k+1)%3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 32:
#line 60 "paser.y"
	{
    st_init();
}
break;
case 35:
#line 65 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 36:
#line 65 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 37:
#line 69 "paser.y"
	{
    st_init();
}
break;
case 38:
#line 73 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 39:
#line 73 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 40:
#line 73 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 41:
#line 73 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 42:
#line 77 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 43:
#line 78 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 44:
#line 78 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 45:
#line 79 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 46:
#line 79 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 47:
#line 83 "paser.y"
	{
    delete(yystack.l_mark[-1]);
}
break;
case 50:
#line 90 "paser.y"
	{
    update(yystack.l_mark[-5],yystack.l_mark[-3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 53:
#line 95 "paser.y"
	{st_init();}
break;
case 54:
#line 96 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 57:
#line 97 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 58:
#line 99 "paser.y"
	{st_init();}
break;
case 59:
#line 102 "paser.y"
	{
    printf ("alert\n");
}
break;
case 65:
#line 111 "paser.y"
	{
    printf ("drop\n");
 }
break;
#line 718 "y.tab.c"
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
