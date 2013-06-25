#!/bin/sh
flex lexi.lex
yacc paser.y
gcc -o run y.tab.c lex.yy.c
