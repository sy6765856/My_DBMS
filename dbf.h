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
} TableMode, *p_TableMode;

typedef struct {
    char table_name[TABLE_NAME_LENGTH];
    int num_table_mode;
    int offset;
} Table, *p_Table;

int create_database(char db_name[]);
int drop_database(char db_name[]);
int use_database(char db_name[]);

int show_tables();
int create_table(Table, p_TableMode);
int alter_table(char table_name[], TableMode, AlterMode);
int drop_table(char table_name[]);
int show_table(char table_name[]);
int rename_table(char table_name[], char new_name[]);

int add_column(Table table, TableMode);
int drop_column(Table table, TableMode);
int alter_column(Table table, TableMode);

Boolean check_exist_db(char db_name[]);
Boolean check_exist_table(char *, FILE*);
int gen_tables(Table tables[], FILE *fp);
int get_table(char table_name[], p_Table table);
int get_modes(Table table, p_TableMode table_modes);
char *add_dbf_ext(char db_name[], char db_file_name[]);

#endif
