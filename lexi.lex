%{
#include "y.tab.h"
#include <stdio.h>
#include <string.h>
extern char* yylval;
%}
char [A-Za-z]
num [0-9]+
name {char}+|\*
from   (FROM|from)
space  [ /n/t]
sp     {space}+
where  (where|WHERE)
by     (BY|by)
gb     (group|GROUP){space}{by}
lp     {space}*\({space}*
rp     {space}*\){space}*
comma  {space}*,{space}*
drop (drop|DROP)
semicolon  {space}*;{space}*
having (having|HAVING)
ob (ORDER|order){space}{by}
into     (INTO|into)
type     (int|INT|char|CHAR|real|REAL)

/* table */
table (TABLE|table)
create_table (CREATE|create){sp}{table}

/* constraint */
constraint  (CONSTRAINT|constraint)

/* constraint types */
null null|NULL|NOT{sp}NULL|not{sp}null
unique (unique|UNIQUE)
key   (KEY|key)
p_key (PRIMARY|primary){sp}{key}
f_key (FOREIGN|foreign){sp}{key}

/* op */
eq   [=]
nt  [!]
opr1 [<>]
opr2 (({opr1}|{nt}){eq})|({nt}{opr1})|([<][>])
opr  {opr2}|{opr1}|{eq}|{nt}

/* op_en */
not (not|NOT)
and (and|AND)
or (or|OR)

/* select */
select (SELECT|select)
as (as|AS)
when (when|WHEN)
then (then|THEN)
els (else|ELSE)
distinct (distinct|DISTINCT)
top (top|TOP)
between (between|BETWEEN)
in (in|IN)
like (like|LIKE)

/* join */
join (join|JOIN)

/* alert */
alert (alert|ALERT)
column (column|COLUMN)
alert_table {alert}{sp}{table}
add (ADD|add)
alert_column {alert}{sp}{column}
drop_column {drop}{sp}{column}
drop_table {drop}{sp}{table}

/* insert */
insert    (INSERT|insert)
ins {insert}{sp}{into}
values (values|VALUES)

/* update */
update (update|UPDATE)
set (set|SET)

/* delete */
delete   (DELETE|delete)

/* Nested query */
any (any|ANY)
all (all|ALL)
exists (exists|EXISTS)

/* union */
union (union|UNION)
%%
{null} {yylval=strdup(yytext);return NL;}
{num} {yylval=strdup(yytext);return NM;}
{type} {yylval=strdup(yytext);return TE;}
{comma} {yylval=strdup(yytext);return CA;}
{lp} {yylval = strdup(yytext);return LP;}
{rp} {yylval = strdup(yytext);return RP;}
{semicolon} {yylval = strdup(yytext);return SN;}
{select} { yylval = strdup(yytext);return ST; }
{ins} { yylval = strdup(yytext);return IT; }
{from} { yylval = strdup(yytext);return FM; }
{where} { yylval = strdup(yytext);return WE; }
{sp} { yylval = strdup(yytext);return SP; }
{gb} { yylval = strdup(yytext);return GY; }

{create_table} {yylval = strdup(yytext);return CT;}
{constraint} {yylval = strdup(yytext);return CST;}

{opr} {yylval = strdup(yytext);return OPR;}
{not} {yylval = strdup(yytext);return OPR_EN;}
{and} {yylval = strdup(yytext);return OPR_EN;}
{or} {yylval = strdup(yytext);return OPR_EN;}
{as} { yylval = strdup(yytext);return AS; }
{when} { yylval = strdup(yytext);return WN; }
{then} { yylval = strdup(yytext);return TN; }
{els} { yylval = strdup(yytext);return ELSE; }
{top} { yylval = strdup(yytext);return TP; }
{between} { yylval = strdup(yytext);return BN; }
{in} { yylval = strdup(yytext);return IN; }
{like} { yylval = strdup(yytext);return LE; }
{join} { yylval = strdup(yytext);return JN; }
{alert_table} { yylval = strdup(yytext);return ATB; }
{alert_column} { yylval = strdup(yytext);return ATC; }
{add} { yylval = strdup(yytext);return AD; }
{drop_column} { yylval = strdup(yytext);return DPC; }
{drop_table} { yylval = strdup(yytext);return DPT; }
{values} { yylval = strdup(yytext);return VA; }
{update} { yylval = strdup(yytext);return UE; }
{set} { yylval = strdup(yytext);return SET; }
{delete} { yylval = strdup(yytext);return DE; }

{any} { yylval = strdup(yytext);return AY; }
{all} { yylval = strdup(yytext);return AL; }
{exists} { yylval = strdup(yytext);return EX; }
{union} { yylval = strdup(yytext);return UN; }
{name} { yylval = strdup(yytext);return NE; }
%%
int yywrap()
{
    return 1;
}
