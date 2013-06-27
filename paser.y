%{
#include "stdio.h"
#include "dbf.h"
typedef char* string;
#define YYSTYPE string
%}
%token ST NE FM SP WE GY IT DE SN UE CT CST OPR OPR_EN AS WN TN ELSE TP BN IN LE JN AT CN AD DP DPT VA SET AY AL EX UN LP RP CA TE NM NL CS TB EXIT USE DB
%%
/* sql statement */
Sql : Statement | Sql Statement
Statement : select|insert|delete|update|create|alert|drop|exit|use
exit : EXIT{puts("Exit Successfully!!");return 0;}
/* USE */
use:USE DB NE SN{
    use_database($3);
    printf ("use db %s\n",$3);
 }
/* select */
select: SP st|st
st:ST SP NE SP FM SP NE SN{
    printf("YES!\n");
    printf("%s is %s years old!!!\n", $1, $3);
}

/* create table */
create : CT TB NE LP col_def RP SN {
    printf("create!\n");
}

col_def: col | col_def CA col
col: NE SP TE|NE SP TE cl
cl: LP NM RP|SP NL|LP NM RP NL

/* insert */
insert: IT in_f VA LP in_v RP SN{
    printf("Insert\n");
}
in_f:NE SP|NE LP i_f RP
i_f:NE|NE CA i_f
in_v:CS NE CS|in_v CA CS NE CS 
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
    printf("\e[1;32m");
    yyparse();
    printf("\e[0m");
    return 0;
}
int yyerror(char *msg)
{
    printf("\e[1;31mError encountered: \e[1;32m%s\e[0m \n", msg);
}
