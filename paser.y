%{
typedef char* string;
#define YYSTYPE string
%}
%token SELECT NAME FROM SP WHERE GB INSERT DELETE
%%
Statement : SELECT SP NAME SP FROM SP NAME {
    printf("YES!\n");
    printf("%s is %s years old!!!\n", $1, $3);
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
