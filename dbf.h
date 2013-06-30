#ifndef DBF_H
#define DBF_H

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include "types.h"

#define FIELD_NAME_LENGTH 256
#define TYPE_NAME_LENGTH 8
#define TABLE_NAME_LENGTH 256

#define V(_bufele, _type) *(_type *)(&_bufele)
#define INT(_bufele) V(_bufele, int)

#define VP(_bufele, _type) (_type *)(&_bufele)
#define PTNODE(_bufele) VP(_bufele, TableNode)
#define PCNODE(_bufele) VP(_bufele, ColumnNode)

typedef struct {
    char field_name[FIELD_NAME_LENGTH];
    ModeType type_name;
    int word_size;
    Boolean key;
    Boolean null_flag;
    Boolean valid_flag;
} Column, *p_Column;

typedef struct {
    Column column;
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
    int dat_index;
} TableNode, *p_TableNode;

/* create database db_name; */
int create_database(char db_name[]);

/* drop database db_name */
int drop_database(char db_name[]);

/* use db_name; */
int use_database(char db_name[]);

/* show tables; */
int show_tables();

/* create table table_name  *
 * id int ...               *
 * ...                      */
int create_table(char table_name[], int num_column, p_Column);

/* alter table table_name               *
 * add column_name column_type ... OR   *
 * drop column column_name OR           *
 * alter column column_name column_type */
int alter_table(char table_name[], Column, AlterMode);
int add_column(p_TableNode table_node, Column);
int drop_column(p_TableNode table_node, Column);
int alter_column(p_TableNode table_node, Column);

/* drop table table_name */
int drop_table(char table_name[]);

//int show_table(char table_name[]);

/* rename table table_name new_name */
int rename_table(char table_name[], char new_name[]);


Boolean check_exist_db(char db_name[]);
Boolean check_exist_table(char table_name[]);
p_ColumnNode get_col_node(p_TableNode, char column_name[]);
p_TableNode get_table_node(char table_name[]);
p_Column get_columns(p_TableNode table_node, p_TableNode *tp);
int open_db();
int close_db();
int close_mmap(int fd, int size, char *membuf);
int open_mmap(int *fd, struct stat *fi, char *membuf, char db_name[]);

char *add_dbf_ext(char db_name[], char db_file_name[]);
char *add_dat_ext(char db_name[], char db_file_name[]);
int safe_add_space(int size);

#endif
