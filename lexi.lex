%{
#include "y.tab.h"
#include <stdio.h>
#include <string.h>
extern char* yylval;
%}
exit {space}*(exit|EXIT)
char [A-Za-z]
num [0-9]+
name {char}+
space [ \t\n]
sp {space}+
from {sp}(FROM|from){sp}
where {sp}(where|WHERE){sp}
by (BY|by)
rename {space}*(rename|RENAME)
gb (group|GROUP){space}{by}
lp {space}*\({space}*
rp {space}*\){space}*
comma {space}*,{space}*
show {space}*(show|SHOW)
tables {sp}(tables|TABLES){space}*
commas \'
star \*
use {space}*(use|USE)
database {sp}(database|DATABASE){sp}
drop {space}*(drop|DROP)
semicolon {space}*;
having (having|HAVING)
ob (ORDER|order){space}{by}
into (INTO|into)
type (int|INT|char|CHAR|real|REAL)

/* table */
table {sp}(TABLE|table){sp}
create {space}*(CREATE|create)

/* constraint */
constraint (CONSTRAINT|constraint)

/* constraint types */
null null|NULL|NOT{sp}NULL|not{sp}null
unique (unique|UNIQUE)
key (KEY|key)
p_key (PRIMARY|primary){sp}{key}
f_key (FOREIGN|foreign){sp}{key}

/* op */
eq [=]
eql {space}*{eq}{space}*
nt [!]
opr1 [<>]
opr2 (({opr1}|{nt}){eq})|({nt}{opr1})|([<][>])
opr {space}*({opr2}|{opr1}){space}*

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

/* alter */
alter (alter|ALTER)
column {sp}(column|COLUMN){sp}
add {sp}(ADD|add){sp}

/* insert */
insert {space}*(INSERT|insert)
ins {insert}{sp}{into}{sp}
values (values|VALUES)

/* update */
update {space}*(update|UPDATE){space}*
set {sp}(set|SET){sp}

/* delete */
delete (DELETE|delete)

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
{commas} {yylval=strdup(yytext);return CS;}
{star} {yylval=strdup(yytext);return SR;}
{lp} {yylval = strdup(yytext);return LP;}
{rp} {yylval = strdup(yytext);return RP;}
{semicolon} {yylval = strdup(yytext);return SN;}
{select} { yylval = strdup(yytext);return ST; }
{ins} { yylval = strdup(yytext);return IT; }
{from} { yylval = strdup(yytext);return FM; }
{where} { yylval = strdup(yytext);return WE; }
{sp} { yylval = strdup(yytext);return SP; }
{gb} { yylval = strdup(yytext);return GY; }
{tables} {yylval = strdup(yytext);return TBS;}
{table} {yylval = strdup(yytext);return TB;}

{create} {yylval = strdup(yytext);return CT;}
{constraint} {yylval = strdup(yytext);return CST;}

{eql} {yylval = strdup(yytext);return EQ;}
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
{alter} { yylval = strdup(yytext);return AT; }
{column} { yylval = strdup(yytext);return CN; }
{add} { yylval = strdup(yytext);return AD; }
{drop} { yylval = strdup(yytext);return DP; }
{values} { yylval = strdup(yytext);return VA; }
{update} { yylval = strdup(yytext);return UE; }
{set} { yylval = strdup(yytext);return SET; }
{delete} { yylval = strdup(yytext);return DE; }

{any} { yylval = strdup(yytext);return AY; }
{all} { yylval = strdup(yytext);return AL; }
{exists} { yylval = strdup(yytext);return EX; }
{union} { yylval = strdup(yytext);return UN; }
{exit} { yylval = strdup(yytext);return EXIT; }
{use} { yylval = strdup(yytext);return USE; }
{rename} { yylval = strdup(yytext);return RE; }
{show} { yylval = strdup(yytext);return SW; }
{database} { yylval = strdup(yytext);return DB; }
{name} { yylval = strdup(yytext);return NE; }
%%
int yywrap()
{
    return 1;
}

