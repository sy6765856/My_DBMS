%{
typedef char* string;
#define YYSTYPE string
%}
%token ST NE FM SP WE GY IT DE SN
%%
Sql : Statement | Sql SN Statement | SN
Statement : select|insert|delete|update
select:ST SP NE SP FM SP NE {
    printf("YES!\n");
    printf("%s is %s years old!!!\n", $1, $3);
}
insert: IT {
    printf("Insert\n");
}

delete: DE {
    printf("delete\n");
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
