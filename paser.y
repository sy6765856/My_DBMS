%{
typedef char* string;
#define YYSTYPE string
%}
%token ST NE FM SP WE GY IT DE SN UE CT CST OPR OPR_EN AS WN TN ELSE TP BN IN LE JN ATB ATC AD DPC DPT VA SET AY AL EX UN LP RP CA TE NM NL
%%
/* sql statement */
Sql : Statement | Sql Statement
Statement : select|insert|delete|update|create|alert|drop

/* select */
select: SP st|st
st:ST SP NE SP FM SP NE SN{
    printf("YES!\n");
    printf("%s is %s years old!!!\n", $1, $3);
}

/* create table */
create : CT SP NE LP col_def RP SN {
    printf("create!\n");
}

col_def: col | col_def CA col
col: NE SP TE|NE SP TE cl
cl: LP NM RP|SP NL|LP NM RP NL

/* insert */
insert: IT SN{
    printf("Insert\n");
}

/* delete */
delete: DE SN{
    printf("delete\n");
}

/* update */
update: UE SN{
    printf("update\n");
}

/* alert */
alert: alert_table|alert_column
alert_table : ATB SN{
    printf ("alert\n");
 }
alert_column: ATC SN{
    printf("alert\n");
}

/* drop */
drop: drop_table|drop_column
drop_column: DPC SN{
    printf ("drop\n");
 }

drop_table: DPT SN{
    printf("drpp\n");
 }
%%
int main()
{
    yyparse();
    return 0;
}
int yyerror(char *msg)
{
    printf("Error encountered: %s \n", msg);
}
