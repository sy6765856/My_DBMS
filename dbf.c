#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "dbf.h"
#include "types.h"
#include "tools.h"

char g_db_file_name[260];
p_TableNode g_tables;
int g_num_table = 0;

/* create database database_name; */
int create_database(char db_name[])
{
    FILE *fp;
    char db_file_name[260];
    int a = 0;
    if (check_exist_db(db_name) == TRUE) {
        printf("Database %s already exists!\n", db_name);
        return -1;
    }
    fp = fopen(add_dbf_ext(db_name, db_file_name), "w");
    fwrite(&a, sizeof(int), 1, fp);
    fclose(fp);
    fp = fopen(add_dat_ext(db_name, dt_file_name)m "w");
    fwrite(&a, sizeof(int), 1, fp);
    fclose(fp);
    return 0;
}

/* drop database database_name; */
int drop_database(char db_name[])
{
    char db_file_name[260];
    if (check_exist_db(db_name) == FALSE) {
        printf("Database %s not exists!\n", db_name);
        return -1;
    }
    if (remove(add_dbf_ext(db_name, db_file_name)) == -1) {
        printf("drop ERROR!\n", db_name);
        return -1;
    }
    remove(add_dat_ext(db_name, db_file_name));
    return 0;
}

/* use database_name; */
int use_database(char db_name[])
{
    FILE *fp;
    if (check_exist_db(db_name) == FALSE) {
        printf("Database %s not exists!\n", db_name);
        return -1;
    }
    free(g_tables);

    add_dbf_ext(db_name, g_db_file_name);
    fp = fopen(g_db_file_name, "r");
    fscanf(fp, "%d", &g_num_table);
    if (g_num_table == 0) {
        return 0;
    }
    gen_tables(fp);
    fclose(fp);
    return 0;
}

/* show tables; */
int show_tables()
{
    int i = 0;
    for (i = 0; i < g_num_table; i++) {
        printf("%s\n", g_tables[i].table.table_name);
    }
    return 0;
}

/* create table table_name; */
int create_table(TableNode table_node, p_ColumnNode column_node) {
    FILE *fp;
    int i = 0;
    if (check_exist_table(table_node.table.table_name) == TRUE) {
        printf("Table %s already exists!\n", table_node.table.table_name);
        return -1;
    }
    fp = fopen(g_db_file_name, "a");
    printf("Creating Table %s...\n", table_node.table.table_name);
    fwrite(&table_node, sizeof(TableNode), 1, fp);

    fwrite(column_node, sizeof(ColumnNode), table_node.table.num_column, fp);
    fclose(fp);
    return 0;
}

/* alter table table_name                           *
 * [add column_name column_type] or                 *
 * [drop / alter COLUMN column_name column_type];   */
int alter_table(char table_name[], Column column, AlterMode alter_mode) {
    TableNode table_node;
    if (get_table_node(table_name, &table_node) == -1) {
        printf("Table %s not exists!\n", table_name);
        return -1;
    }
    switch(alter_mode) {
        case ADD:
            add_column(table_node, column);
            break;
        case DROP:
            drop_column(table_node, column);
            break;
        case ALTER:
            alter_column(table_node, column);
            break;
        default:
            printf("Not alter anything!\n");
            break;
    }
    return 0;
}

/* drop table table_name; */
int drop_table(char table_name[])
{
    return 0;
}

/* get table schema by table_name */
int show_table(char table_name[]) {
    FILE *fp;
    int i = 0;
    TableNode table_node;
    
    if (check_exist_table(table_name) == FALSE) {
        printf("Table %s not exits!\n", table_name);
        return -1;
    }
    get_table_node(table_name, &table_node);
    Column columns[table_node.table.num_column];
    get_columns(table_node, columns);
    printf("%s\n", table_name);
    printf("%-20s%-20s%-20s%-20s%-20s%-20s\n",
            "field_name",
            "filed_type",
            "word_size",
            "is_key",
            "allow null",
            "valid_flag");
    for (i = 0; i < table_node.table.num_column; i++) {
        printf("%-20s%-20s%-20d%-20s%-20s%-20s\n",
                columns[i].field_name,
                modetype_2_string(columns[i].type_name),
                columns[i].word_size,
                boolean_2_string(columns[i].key),
                boolean_2_string(columns[i].null_flag),
                boolean_2_string(columns[i].valid_flag));
    }
    return 0;
}

int rename_table(char table_name[], char new_name[])
{
    return 0;
}

/* add column_name column_type; */
int add_column(TableNode table_node, Column column)
{
    FILE *fp;
    fp = fopen(g_db_file_name, "r+");
    Table table;
    fseek(fp, table_node.own_offset, SEEK_SET);
    fread(&table, sizeof(Table), 1, fp);
    table.num_column += 1;
    fseek(fp, -sizeof(Table), SEEK_CUR);
    fwi

    return 0;
}

/* drop COLUMN column_name; */
int drop_column(TableNode table_node, Column column)
{
    return 0;
}

/* alter COLUMN column_name column_type; */
int alter_column(TableNode table_node, Column column)
{
    return 0;
}

Boolean check_exist_db(char db_name[])
{
    char db_file_name[260];
    add_dbf_ext(db_name, db_file_name);
    if (access(db_file_name, F_OK) == -1) {
        return FALSE;
    }
    return TRUE;
}

Boolean check_exist_table(char table_name[])
{
    int i = 0;
    for (i = 0; i < g_num_table; i++) {
        if (strcmp(table_name, g_tables[i].table.table_name) == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

int gen_tables(FILE *fp)
{
    int i = 0;
    g_tables = (p_TableNode)calloc(g_num_table, sizeof(TableNode));
    for (i = 0; i < g_num_table; i++) {
        fread(&g_tables[i], sizeof(TableNode), 1, fp);
        g_tables[i].head_column += ftell(fp);
        fseek(fp, g_tables[i].next_table, SEEK_CUR);
    }
    return 0;
}

int get_table_node(char table_name[], p_TableNode table_node)
{
    int i = 0;
    for (; i < g_num_table; i++) {
        if (strcmp(table_name, g_tables[i].table.table_name) == 0) {
            table_node = &g_tables[i];
            return 0;
        }
    }
    return -1;
}

int get_columns(TableNode table_node, p_Column columns)
{
    FILE *fp;
    int i = 0;
    int next_column;
    fopen(g_db_file_name, "r");
    fseek(fp, table_node.head_column, SEEK_SET);
    for (; i < table_node.table.num_column; i++) {
        fread(&columns[i], sizeof(Column), 1, fp);
        fscanf(fp, "%d", &next_column);
        fseek(fp, next_column, SEEK_CUR);
    }
    fclose(fp);
    return 0;
}

int add_column_count(long offset, fp)
{
    long pre_offset = ftell(fp);
    Table table
    fseek(fp, offset, SEEK_SET);
    fread(&table, sizeof(Table), 1, fp);
    table.num_column += 1;
    fseek(fp, -sizeof(Table), SEEK_SET);
    fwrite(&table, sizeof(Table), 1, fp);
    fseek(fp, pre_offset, SEEK_SET);
    return 0;
}

char *add_dbf_ext(char db_name[], char db_file_name[])
{
    return add_ext(db_name, ".dbf", db_file_name);
}

char *add_dat_ext(char db_name[], char db_file_name[])
{
    return add_ext(db_name, ".dat", db_file_name);
}


