%{
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
%}
%token ST NE FM SP WE GY IT DE SN UE CT CST OPR OPR_EN AS WN TN ELSE TP BN IN LE JN AT CN AD DP TBS VA SET AY AL EX UN LP RP CA TE NM NL CS TB EXIT USE DB SW
%%
/* sql statement */
Sql : Statement | Sql Statement
Statement : select|insert|delete|update|create|alert|drop|exit|use_db|crt_db|drp_db|show
exit : EXIT{puts("Exit Successfully!!");return 0;}
/* database */
use_db:USE DB NE SN{
    use_db($3);
 }
crt_db:CT DB NE SN{
    crt_db($3);
 }

drp_db:DP DB NE SN{
    drp_db($3);
 }
/* show */
show: SW TBS SN{
    shw_tb();
 }
/* select */
select: SP st|st
st:ST SP NE SP FM SP NE SN{
    printf("YES!\n");
    printf("%s is %s years old!!!\n", $1, $3);
}

/* create table */
create : CT TB NE LP col_def RP SN {
    crt_tb();
}

col_def: col | col_def CA col
col: NE SP TE|NE SP TE cl
cl: LP NM RP|SP NL|LP NM RP NL

/* insert */
insert: IT NE in_f VA LP in_v RP SN{
    insert($2,st[(k+1)%3],cp[(k+1)%3],st[(k+2)%3],cp[(k+2)%3]);
}


in_f:in_ff{
    st_init();
 }

in_ff:SP|LP i_f RP
i_f:NE{st_push($1);}|NE CA i_f{st_push($1);}


in_v:in_vv{
    st_init();
}

in_vv:NM{st_push($1);}|CS NE CS{st_push($2);}|in_vv CA CS NE CS{st_push($4);} | in_vv CA NM{st_push($3);}


/* condition */
condition : NE OPR condic
condic:NM|CS NE CS

/* delete */
delete: DE NE del{
    printf("delete\n");
}
del:SN|WE condition SN

/* update */
update: UE NE SET exp SN{
    printf("update\n");
}
exp:ep |ep WE condition
    /* expression */
ep:NE OPR NE OPR it|NE OPR it
it:NM|CS NE CS

/* alert */
alert: AT TB NE aler SN{
    printf ("alert\n");
}
aler:add|alc
add:AD col_def
alc:AT CN col

/* drop */
drop: drop_column
drop_column: DP SN{
    printf ("drop\n");
 }

%%
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
