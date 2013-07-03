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
#define RL 306
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    9,   10,   11,   12,   14,
   13,   15,   16,   16,   17,   17,    2,   18,   20,   20,
   20,   19,   21,   21,   21,    6,   22,   23,   23,   24,
   24,   25,   25,   25,    3,   26,   28,   28,   29,   29,
   27,   30,   30,   30,   30,    4,   31,   32,   32,   32,
    5,   34,   35,   35,   33,   36,   36,   37,   37,    7,
   38,   39,   39,   40,   41,   42,   42,    8,   43,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    4,    4,    4,    6,
    3,    3,    1,    1,    1,    3,    6,    1,    1,    1,
    3,    1,    1,    3,    5,    7,    1,    1,    3,    3,
    4,    3,    2,    4,    8,    1,    1,    3,    1,    3,
    1,    1,    3,    5,    3,    4,    1,    1,    3,    5,
    7,    1,    3,    1,    1,    3,    1,    1,    1,    5,
    1,    1,    1,    2,    3,    1,    3,    1,    4,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,   16,    0,    0,
    0,    0,    1,    3,    4,    5,    6,    7,    8,    9,
   10,   11,   12,   13,   14,   15,   78,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    2,
    0,   29,    0,   28,   47,    0,    0,   46,    0,    0,
    0,    0,    0,    0,    0,    0,   21,    0,    0,    0,
   49,    0,    0,    0,   58,   56,   57,    0,    0,   18,
    0,    0,    0,   71,   72,   73,   79,   19,   17,    0,
   31,    0,   48,    0,    0,    0,    0,    0,    0,    0,
    0,   38,    0,    0,   70,    0,    0,   33,   27,   32,
   50,    0,   52,    0,    0,   24,   23,    0,   59,   69,
    0,   25,   68,    0,   65,    0,    0,    0,    0,    0,
   75,   20,    0,    0,    0,    0,    0,    0,   22,    0,
    0,   64,   61,   62,    0,    0,   36,   39,    0,    0,
   34,   53,   45,    0,   55,   60,   26,    0,    0,   66,
    0,    0,   41,   77,    0,    0,    0,   63,   43,    0,
   35,   54,    0,   44,
};
static const short yydgoto[] = {                         12,
   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,
   23,   24,   25,   26,   87,  108,  129,   43,   99,   44,
  100,   90,   91,   92,  153,   47,  104,   48,   62,  105,
   66,   67,  114,  133,  134,  115,  116,   73,   74,   75,
   76,  121,   27,
};
static const short yysindex[] = {                      -257,
 -246, -241, -223, -221, -267, -244, -231,    0, -240, -222,
 -230, -257,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -255, -239, -189,
 -215, -186, -185, -184, -183, -182, -181, -187, -179,    0,
 -213,    0, -178,    0,    0, -176, -200,    0, -233, -175,
 -207, -177, -263, -174, -173, -172,    0, -171, -255, -168,
    0, -227, -205, -164,    0,    0,    0, -216, -163,    0,
 -163, -162, -169,    0,    0,    0,    0,    0,    0, -161,
    0, -232,    0, -159, -284, -268, -165, -256, -158, -191,
 -190,    0, -190, -154,    0, -160, -152,    0,    0,    0,
    0, -151,    0, -180, -170,    0,    0, -253,    0,    0,
 -150,    0,    0, -202,    0, -156, -167, -155, -163, -157,
    0,    0, -268, -149, -188, -148, -281, -147,    0, -166,
 -144,    0,    0,    0, -256, -236,    0,    0, -154, -250,
    0,    0,    0, -143,    0,    0,    0, -268, -146,    0,
 -153, -195,    0,    0, -145, -142, -279,    0,    0, -141,
    0,    0, -140,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -223,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -139,    0, -137,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -138,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -201,    0,    0,    0, -136,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -254,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -235,    0,
};
static const short yygindex[] = {                         0,
  109,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -85, -108,  -84,    0,    0,   63,
    0,    0,   53,    6,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   -9,    0,    0,    0,
    0,   -7,    0,
};
#define YYTABLESIZE 156
static const short yytable[] = {                          1,
  106,  110,   41,  113,  128,    2,    3,  155,    4,    5,
   40,  124,  102,   28,  140,  144,   29,  111,   71,   72,
   45,  103,    6,  151,  145,    7,  112,   64,   97,   42,
   32,   65,   98,   33,  107,   30,   31,   40,   40,  157,
  111,    8,    9,  111,   10,  149,  111,   11,   42,  112,
  113,   46,  112,   34,  152,  112,   42,   42,  131,   67,
   37,   38,  132,   67,   83,   84,   35,   39,   49,   36,
   50,   51,   52,   53,   54,   55,   56,   57,   58,   59,
   60,   61,   68,   69,   63,   85,   88,   70,   80,   82,
   77,   78,   79,   86,   89,   95,   96,   94,  101,  109,
  118,  117,  119,  120,  122,  123,  125,  130,  142,  137,
  160,  126,  135,  148,  156,  141,  143,  146,  158,  161,
   40,   81,  127,   93,  138,  150,  136,   74,   76,    0,
  147,  154,    0,    0,    0,  139,    0,    0,    0,    0,
    0,    0,  159,    0,    0,    0,    0,    0,    0,    0,
  163,    0,   37,   51,  162,  164,
};
static const short yycheck[] = {                        257,
  269,  258,  258,   88,  258,  263,  264,  258,  266,  267,
  265,   97,  297,  260,  123,  297,  258,  297,  282,  283,
  260,  306,  280,  260,  306,  283,  306,  261,  261,  265,
  298,  265,  265,  301,  303,  259,  258,  292,  293,  148,
  297,  299,  300,  297,  302,  131,  297,  305,  304,  306,
  135,  291,  306,  298,  291,  306,  292,  293,  261,  261,
  301,  284,  265,  265,  292,  293,  298,  298,  258,  301,
  286,  258,  258,  258,  258,  258,  258,  265,  258,  293,
  259,  258,  258,  291,  285,  291,  303,  265,  260,  258,
  265,  265,  265,  258,  258,  265,  258,  260,  258,  265,
  292,  260,  293,  258,  265,  258,  258,  258,  297,  265,
  306,  292,  269,  258,  258,  265,  265,  265,  265,  265,
   12,   59,  293,   71,  119,  135,  294,  265,  265,   -1,
  297,  139,   -1,   -1,   -1,  293,   -1,   -1,   -1,   -1,
   -1,   -1,  296,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  292,   -1,  292,  292,  297,  296,
};
#define YYFINAL 12
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 306
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
"RP","CA","TE","NM","NL","CS","TB","EXIT","USE","DB","SW","EQ","SR","RE","RL",
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
"condition : NE coo condic",
"coo : EQ",
"coo : OPR",
"condic : RL",
"condic : CS NE CS",
"select : ST SP col_na FM NE sell",
"col_na : col_name",
"col_name : SR",
"col_name : NE",
"col_name : NE CA col_name",
"sell : sel",
"sel : SN",
"sel : WE condition SN",
"sel : WE NE coo NE SN",
"create : CT TB NE LP col_deff RP SN",
"col_deff : col_def",
"col_def : col",
"col_def : col_def CA col",
"col : NE SP TE",
"col : NE SP TE cl",
"cl : LP RL RP",
"cl : SP NL",
"cl : LP RL RP NL",
"insert : IT NE in_f VA LP in_v RP SN",
"in_f : in_ff",
"in_ff : SP",
"in_ff : LP i_f RP",
"i_f : NE",
"i_f : i_f CA NE",
"in_v : in_vv",
"in_vv : RL",
"in_vv : CS NE CS",
"in_vv : in_vv CA CS NE CS",
"in_vv : in_vv CA RL",
"delete : DE FM NE dell",
"dell : del",
"del : SN",
"del : WE condition SN",
"del : WE NE coo NE SN",
"update : UE NE SET NE EQ eppp expp",
"expp : exp",
"exp : WE condition SN",
"exp : SN",
"eppp : epp",
"epp : con OPR con",
"epp : con",
"con : condic",
"con : NE",
"alter : AT TB NE alerr SN",
"alerr : aler",
"aler : add",
"aler : drr",
"add : AD col_def",
"drr : DP SP cll",
"cll : NE",
"cll : NE CA cll",
"drop : drop_column",
"drop_column : DP TB NE SN",

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
#line 131 "paser.y"
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
#line 405 "y.tab.c"

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
case 22:
#line 45 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 23:
#line 46 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 24:
#line 46 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 25:
#line 47 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 26:
#line 47 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 27:
#line 51 "paser.y"
	{
    selec(yystack.l_mark[-1],st[(k+1)%3],cp[(k+1)%3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 28:
#line 54 "paser.y"
	{st_init();}
break;
case 29:
#line 55 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 30:
#line 55 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 31:
#line 55 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 32:
#line 57 "paser.y"
	{st_init();}
break;
case 34:
#line 58 "paser.y"
	{st_push("exp\0");}
break;
case 35:
#line 58 "paser.y"
	{st_push(yystack.l_mark[-1]);st_push(yystack.l_mark[-3]);st_push("name\0");}
break;
case 36:
#line 61 "paser.y"
	{
    crt_tb(yystack.l_mark[-4],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 37:
#line 65 "paser.y"
	{st_init();}
break;
case 40:
#line 67 "paser.y"
	{st_push(yystack.l_mark[-2]);st_push(yystack.l_mark[0]);}
break;
case 41:
#line 67 "paser.y"
	{st_push(yystack.l_mark[-3]);st_push(yystack.l_mark[-1]);}
break;
case 45:
#line 72 "paser.y"
	{
    insert(yystack.l_mark[-6],st[(k+1)%3],cp[(k+1)%3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 46:
#line 77 "paser.y"
	{
    st_init();
}
break;
case 49:
#line 82 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 50:
#line 82 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 51:
#line 85 "paser.y"
	{
    st_init();
}
break;
case 52:
#line 89 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 53:
#line 89 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 54:
#line 89 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 55:
#line 89 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 56:
#line 94 "paser.y"
	{
    delet(yystack.l_mark[-1],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 57:
#line 97 "paser.y"
	{st_init();}
break;
case 59:
#line 98 "paser.y"
	{st_push("exp\0");}
break;
case 60:
#line 98 "paser.y"
	{st_push(yystack.l_mark[-1]);st_push(yystack.l_mark[-3]);st_push("name\0");}
break;
case 61:
#line 102 "paser.y"
	{
    update(yystack.l_mark[-5],yystack.l_mark[-3],st[(k+1)%3],cp[(k+1)%3],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 62:
#line 106 "paser.y"
	{st_init();}
break;
case 63:
#line 107 "paser.y"
	{st_push("exp\0");}
break;
case 65:
#line 109 "paser.y"
	{st_init();}
break;
case 66:
#line 110 "paser.y"
	{st_push(yystack.l_mark[-1]);}
break;
case 69:
#line 111 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 70:
#line 115 "paser.y"
	{
    alt_tb(yystack.l_mark[-2],st[(k+2)%3],cp[(k+2)%3]);
}
break;
case 71:
#line 118 "paser.y"
	{st_init();}
break;
case 72:
#line 119 "paser.y"
	{st_push("add\0");}
break;
case 73:
#line 119 "paser.y"
	{st_push("drop\0");}
break;
case 76:
#line 122 "paser.y"
	{st_push(yystack.l_mark[0]);}
break;
case 77:
#line 122 "paser.y"
	{st_push(yystack.l_mark[-2]);}
break;
case 79:
#line 126 "paser.y"
	{
    drop_table(yystack.l_mark[-1]);
}
break;
#line 835 "y.tab.c"
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
