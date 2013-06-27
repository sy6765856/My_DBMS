#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "dbf.h"
#include "types.h"

extern char g_db_file_name[260];
p_Table g_tables;
int g_num_table = 0;
struct nd
{
    int a;
}p_TabelMode;
/* create database database_name; */
int create_database(char db_name[])
{
    puts("create!");
    return 0;
}

/* drop database database_name; */
int drop_database(char db_name[])
{
    puts("drop!!");
    return 0;
}

/* use database_name; */
int use_database(char db_name[])
{
    puts("use");
    return 0;
}

/* show tables; */
int show_tables()
{
    return 0;
}

/* create table table_name; */
int create_table(Table table, p_TableMode modes)
{
    return 0;
}

/* alter table table_name                           *
 * [add column_name column_type] or                 *
 * [drop / alter COLUMN column_name column_type];   */
int alter_table(char table_name[], TableMode table_mode, AlterMode alter_mode)
{
    return 0;
}

/* drop table table_name; */
int drop_table(char table_name[])
{
    return 0;
}

/* get table schema by table_name */
int show_table(char table_name[])
{
    return 0;
}

int rename_table(char table_name[], char new_name[])
{
    return 0;
}

/* add column_name column_type; */
int add_column(Table table, TableMode table_mode)
{

    return 0;
}

/* drop COLUMN column_name; */
int drop_column(Table table, TableMode table_mode)
{
    return 0;
}

/* alter COLUMN column_name column_type; */
int alter_column(Table table, TableMode table_mode)
{
    return 0;
}

Boolean check_exist_db(char db_name[])
{
    return TRUE;
}


int gen_tables(Table tables[], FILE *fp)
{
    return 0;
}

