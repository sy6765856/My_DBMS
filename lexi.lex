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
%%
{select} { yylval = strdup(yytext);return SELECT; }
{from} { yylval = strdup(yytext);return FROM; }
{name} { yylval = strdup(yytext);return NAME; }
{space} { yylval = strdup(yytext);return SP; }
{where} { yylval = strdup(yytext);return WHERE; }
{gb} { yylval = strdup(yytext);return GB; }
{insert} { yylval = strdup(yytext);return INSERT; }
{delete} { yylval = strdup(yytext);return DELETE; }

%%
int yywrap()
{
    return 1;
}
