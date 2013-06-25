%{
typedef char* string;
#define YYSTYPE string
%}
%token ST NE FM SP WE GY IT DE SN UE CT
%%
Sql : Statement | Sql Statement
Statement : select|insert|delete|update|create

select: SP st|st
st:ST SP NE SP FM SP NE SN{
    printf("YES!\n");
    printf("%s is %s years old!!!\n", $1, $3);
}
create : CT SN {
    printf("create!\n");
 }
insert: IT SN{
    printf("Insert\n");
}

delete: DE SN{
    printf("delete\n");
}

update: UE SN{
    printf("update\n");
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
