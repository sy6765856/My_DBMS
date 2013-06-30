#!/bin/sh
flex lexi.lex
yacc paser.y
gcc -o run y.tab.c lex.yy.c dat.c mmap_dbf.c tools.c types.c