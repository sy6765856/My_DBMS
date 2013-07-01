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
%token ST NE FM SP WE GY IT DE SN UE CT CST OPR OPR_EN AS WN TN ELSE TP BN IN LE JN AT CN AD DP TBS VA SET AY AL EX UN LP RP CA TE NM NL CS TB EXIT USE DB SW EQ SR RE
%%
/* sql statement */
Sql : Statement | Sql Statement
Statement : select|insert|delete|update|create|alter|drop|exit|use_db|crt_db|drp_db|show|rename
exit : EXIT{close_db();puts("Exit Successfully!!");return 0;}
/* database */
use_db:USE DB NE SN
{
    use_db($3);
}
crt_db:CT DB NE SN
{
    crt_db($3);
}

drp_db:DP DB NE SN{
    drp_db($3);
 }
/* rename */
rename : RE TB NE SP NE SN
{
    ren_tb($3,$5);
}

/* show */
show: SW TBS SN{
    shw_tb();
 }
/* select */
select: SP st|st
st:ST SP col_na FM NE SN
{
    selec($5,st[(k+2)%3],cp[(k+2)%3]);
}
col_na:col_name{st_init();}
col_name : SR{st_push($1);}|NE{st_push($1);} |NE CA col_name {st_push($1);}

/* create table */
create : CT TB NE LP col_deff RP SN {
    crt_tb($3,st[(k+2)%3],cp[(k+2)%3]);
}

col_deff :col_def{st_init();}
col_def: col | col_def CA col
col: NE SP TE{st_push($1);st_push($3);}|NE SP TE cl{st_push($1);st_push($3);}
cl: LP NM RP|SP NL|LP NM RP NL

/* insert */
insert: IT NE in_f VA LP in_v RP SN
{
    insert($2,st[(k+1)%3],cp[(k+1)%3],st[(k+2)%3],cp[(k+2)%3]);
}

in_f:in_ff
{
    st_init();
}

in_ff:SP|LP i_f RP
i_f:NE{st_push($1);}|i_f CA NE{st_push($3);}

in_v:in_vv
{
    st_init();
}

in_vv:NM{st_push($1);}|CS NE CS{st_push($2);}|in_vv CA CS NE CS{st_push($4);} | in_vv CA NM{st_push($3);}

/* condition */
condition : NE coo condic{st_push($1);}
coo: EQ{st_push($1);} | OPR{st_push($1);}
condic:NM{st_push($1);}|CS NE CS{st_push($2);}

/* delete */
delete: DE FM NE dell
{
    delet($3,st[(k+2)%3],cp[(k+2)%3]);
}
dell:del{st_init();}
del:SN|WE condition SN

/* update */
update: UE NE SET NE EQ exp SN
{
    update($2,$4,st[(k+2)%3],cp[(k+2)%3]);
}
/* expression */
exp:epp WE conditio|epp
epp:ep{st_init();}
ep:con OPR con{st_push($2);}|con
con:condic|NE{st_push($1);}

conditio :condition{st_init();}

/* alter */
alter: AT TB NE aler SN
{
    // alt_tb($3);
}
aler:add{st_init();}|drr{st_init();}
add:AD col_def
drr:DP cll
cll: NE{st_push($1);} |NE CA cll {st_push($1);}

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
