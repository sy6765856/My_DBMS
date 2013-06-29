#ifndef DBF_H
#define DBF_H

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include "types.h"

#define FIELD_NAME_LENGTH 256
#define TYPE_NAME_LENGTH 8
#define TABLE_NAME_LENGTH 256

typedef struct {
    char field_name[FIELD_NAME_LENGTH];
    ModeType type_name;
    int word_size;
    Boolean key;
    Boolean null_flag;
    Boolean valid_flag;
} Column, *p_Column;

typedef struct {
    Column table_mode;
    int next_column;
    int pre_column;
} ColumnNode, *p_ColumnNode;

typedef struct {
    char table_name[TABLE_NAME_LENGTH];
    int num_column;
} Table, *p_Table;

typedef struct {
    Table table;
    int pre_table;
    int next_table;
    int head_column;
    int tail_column;
    int pos;
} TableNode, *p_TableNode;

int create_database(char db_name[]);
int drop_database(char db_name[]);
int use_database(char db_name[]);

int show_tables();
int create_table(Table table, p_TableNode modes);
//int alter_table(char table_name[], Column, AlterMode);
int drop_table(char table_name[]);
int show_table(char table_name[]);
int rename_table(char table_name[], char new_name[]);

//int add_column(TableNode table_node, Column);
//int drop_column(TableNode table_node, Column);
//int alter_column(TableNode table_node, Column);

Boolean check_exist_db(char db_name[]);
Boolean check_exist_table(char table_name[]);
int gen_tables(Table tables[],FILE *fp);
int get_table_node(char table_name[], p_TableNode table_node);
int get_modes(TableNode table_node, p_Column columns);
char *add_dbf_ext(char db_name[], char db_file_name[]);

#endif
