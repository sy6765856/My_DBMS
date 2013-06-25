%{
#include "y.tab.h"
#include <stdio.h>
#include <string.h>
extern char* yylval;
%}
char [A-Za-z]
num [0-9]
eq [=]
select (SELECT|select)
name {char}+
from   (FROM|from)
space  [ /n/t]
where  (where|WHERE)
gb     (group|GROUP)
insert    (INSERT|insert)
delete   (DELETE|delete)
semicolon  ;
%%
{semicolon} {yylval = strdup(yytext);return SN;}
{select} { yylval = strdup(yytext);return ST; }
{insert} { yylval = strdup(yytext);return IT; }
{delete} { yylval = strdup(yytext);return DE; }
{from} { yylval = strdup(yytext);return FM; }
{where} { yylval = strdup(yytext);return WE; }
{space} { yylval = strdup(yytext);return SP; }
{gb} { yylval = strdup(yytext);return GY; }
{name} { yylval = strdup(yytext);return NE; }
%%
int yywrap()
{
    return 1;
}
