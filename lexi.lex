%{
#include "stdio.h"
#define ENDMARK -10
    int linenum=0;
%}
whitespace      [ ]
number [0-9]+
%%
{whitespace} {
    printf("whitespace");
}
{number} {
    printf("number");
}
%%
int main()
{
    linenum=0;
    yylex();
    printf("\nLine Count: %d\n",linenum);
    return 0;
}
int yywrap()
{
    return 1;
}
