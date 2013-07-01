#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "dbf.h"
#include "types.h"
#include "ui.h"
#include "error.h"
#include "def.h"

char g_db_name[256];
char *g_mem_dbf;
char *g_mem_dat;
int g_dbf_fd;
int g_dat_fd;
struct stat g_dbf_fi;
struct stat g_dat_fi;
#define dat g_mem_dat
#define dbf g_mem_dbf
int create_database(char db_name[])
{
    FILE *fp;
    int a = 0;
    char db_file_name[260];
    if (check_exist_db(db_name) == TRUE) {
        error(DB_NOT_EXIST, db_name);
        return -1;
    }
    add_dbf_ext(db_name, db_file_name);
    fp = fopen(db_file_name, "w");
    fwrite(&a, sizeof(int), 1, fp);
    fwrite(&a, sizeof(int), 1, fp);
    fwrite(&a, sizeof(int), 1, fp);
    fclose(fp);
    add_dat_ext(db_name, db_file_name);
    fp = fopen(db_file_name, "w");
    fwrite(&a, sizeof(int), 1, fp);
    fclose(fp);
    return 0;
}

int drop_database(char db_name[])
{
    char db_file_name[260];
    if (strcmp(db_name, g_db_name) == 0) {
        close_db();
    }
    if (check_exist_db(db_name) == FALSE) {
        error(DB_NOT_EXIST, db_name);
        return -1;
    }
    add_dbf_ext(db_name, db_file_name);
    if (remove(db_file_name) == -1) {
        error(DB_DROP_FAILED, db_name);
        return -1;
    }
    add_dat_ext(db_name, db_file_name);
    remove(db_file_name);
    return 0;
}

int use_database(char db_name[])
{
    if (check_exist_db(db_name) == FALSE) {
        error(DB_NOT_EXIST, db_name);
        return -1;
    }

    if (g_mem_dbf != NULL) {
        close_db();
    }

    if (strcmp(db_name, g_db_name) == 0) {
        error(DB_IN_USE, db_name);
        return 0;
    }
    
    strcpy(g_db_name, db_name);
    open_db();
    puts("$$");
    return 0;
}

int show_tables()
{
    if(dbf==NULL||dat==NULL)return -1;
    char tables[1000][256];
    int i = 0, head;
    p_TableNode table_node;
    int num_table = INT(g_mem_dbf[0]);
    head = INT(g_mem_dbf[4]);
    //tables = (char *)calloc(TABLE_NAME_LENGTH, num_table);
    table_node = PTNODE(g_mem_dbf[head]);
    for (; i < num_table; i++) {
        strcpy(tables[i], table_node->table.table_name);
        table_node = PTNODE(g_mem_dbf[table_node->next_table]);
    }
    for(i=0;i<num_table;i++)
    puts(tables[i]);
    //ui_show_tables(tables, num_table);
    return 0;
}

int sv_create_table(char table_name[],char in_f[LEN][M],int cp)
{
    if(dat==NULL||dbf==NULL)return -1;
    int i;
    for(i=0;i<cp;i++)
        printf("%s\n",in_f[i]);
    Column p[LEN];
    int ck=0,h=0;
    while(ck<cp)
    {
        strcpy(p[h].field_name,in_f[ck]);ck++;
        puts(p[h].field_name);
        if(strcmp(in_f[ck],"char\0")==0)
        {
            p[h].type_name=TEXT;
        }
        else if(strcmp(in_f[ck],"int\0")==0)
        {
             p[h].type_name=INTEGER;
        }
        else if(strcmp(in_f[ck],"double\0")==0)
        {
             p[h].type_name=REAL;
        }ck++;h++;
    }
    if(create_table(table_name,cp,p)!=-1)puts("Create Successfully!!");
    return 1;
}

int create_table(char table_name[], int num_column, p_Column columns)
{
    int pre_end = g_dbf_fi.st_size;
    int i = 0;
    int *tail = VP(g_mem_dbf[8], int);
    int *head = VP(g_mem_dbf[4], int);
    p_TableNode table_node, pre_tail_node;

    if (g_mem_dbf == NULL) {
        error(DB_NOT_CHOICED);
        return -1;
    }
    if (check_exist_table(table_name) == TRUE) {
        error(TABLE_EXIST, table_name);
        return -1;
    }
    safe_add_space(sizeof(TableNode));

    if (*tail != 0) {
        pre_tail_node = PTNODE(g_mem_dbf[*tail]);
        pre_tail_node->next_table = pre_end;
    }
    else {
        *head = pre_end;
    }
    INT(g_mem_dbf[0]) += 1;

    table_node = PTNODE(g_mem_dbf[pre_end]);
    table_node->next_table = 0;
    table_node->pre_table = *tail;
    table_node->head_column = 0;
    table_node->tail_column = 0;
    table_node->dat_index = 0;
    strcpy(table_node->table.table_name, table_name);
    table_node->table.num_column = num_column;

    for (i = 0; i < num_column; i++) {
        add_column(table_node, columns[i]);
    }
    
    *tail = pre_end;
    return 0;
}

int alter_table(char table_name[], Column column, AlterMode alter_mode) {
    p_TableNode table_node;
    if ((table_node = get_table_node(table_name)) == NULL) {
        error(TABLE_NOT_EXIST, table_name);
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
            error(UNKNOW_OPERATOR);
            break;
    }
    return 0;
}

int add_column(p_TableNode table_node, Column column)
{
    int pre_end = g_dbf_fi.st_size;
    p_ColumnNode cols_node, tail_node;

    if (table_node->tail_column != 0) {
        tail_node = PCNODE(g_mem_dbf[table_node->tail_column]);
        tail_node->next_column = pre_end;
    }
    else {
        table_node->head_column = pre_end;
    }
    
    safe_add_space(sizeof(ColumnNode));
    cols_node = PCNODE(g_mem_dbf[pre_end]);
    cols_node->pre_column = table_node->tail_column;
    cols_node->next_column = 0;
    memcpy(&(cols_node->column), &column, sizeof(Column));

    table_node->tail_column = pre_end;
    return 0;
}

int drop_column(p_TableNode table_node, Column column)
{
    p_ColumnNode col_node = get_col_node(table_node, column.field_name);
    p_ColumnNode pre_node, next_node;
    if (col_node == NULL) {
        error(COLUMN_NOT_EXIST, column.field_name);
        return -1;
    }

    if (col_node->pre_column == 0) {
        table_node->head_column = col_node->next_column;
        if (col_node->next_column != 0) {
            next_node = PCNODE(g_mem_dbf[col_node->next_column]);
            next_node->pre_column = 0;
        }
    }
    else if (col_node->next_column == 0) {
        table_node->tail_column = col_node->pre_column;
        pre_node = PCNODE(g_mem_dbf[col_node->pre_column]);
        pre_node->next_column = 0;
    }
    else {
        pre_node = PCNODE(g_mem_dbf[col_node->pre_column]);
        next_node = PCNODE(g_mem_dbf[col_node->next_column]);
        pre_node->next_column = col_node->next_column;
        next_node->pre_column = col_node->pre_column; 
    }
    return 0;
}

int alter_column(p_TableNode table_node, Column column)
{
    p_ColumnNode col_node = get_col_node(table_node, column.field_name);
    if (col_node == NULL) {
        error(COLUMN_NOT_EXIST, column.field_name);
        return -1;
    }
    col_node->column.type_name = column.type_name;
    return 0;
}

int drop_table(char table_name[])
{
    p_TableNode table_node = get_table_node(table_name);
    p_TableNode next, pre;
    int *head = VP(g_mem_dbf[4], int);
    int *tail = VP(g_mem_dbf[8], int);
    int *count = VP(g_mem_dbf[0], int);
    if (table_node == NULL) {
        error(TABLE_NOT_EXIST, table_name);
        return -1;
    }

    if (table_node->pre_table == 0) {
        *head = table_node->next_table;
        if (table_node->next_table != 0) {
            next = PTNODE(g_mem_dbf[table_node->next_table]);
            next->pre_table = 0;
        }
    }
    else if (table_node->next_table == 0) {
        *tail = table_node->pre_table;
        pre = PTNODE(g_mem_dbf[table_node->pre_table]);
        pre->next_table = 0;
    }
    else {
        next = PTNODE(g_mem_dbf[table_node->next_table]);
        pre = PTNODE(g_mem_dbf[table_node->pre_table]);
        next->pre_table = table_node->pre_table;
        pre->next_table = table_node->next_table;
    }

    *count -= 1;
    if (*count == 0) {
        *head = *tail = 0;
    }
    return 0;
}

int rename_table(char table_name[], char new_name[])
{
    p_TableNode table_node = get_table_node(table_name);
    if (table_node == NULL) {
        error(TABLE_NOT_EXIST, table_name);
        return -1;
    }
    strcpy(table_node->table.table_name, new_name);
    return 0;
}

p_Column get_columns(p_TableNode table_node, p_TableNode *tp)
{
    p_Column columns;
    p_ColumnNode tmp_cols;
    int i = 0;
    if((*tp = get_table_node(table_node->table.table_name)) == NULL) {
        error(TABLE_NOT_EXIST, table_node->table.table_name);
        return NULL;
    }
    memcpy(table_node, *tp, sizeof(TableNode));
    columns = calloc(sizeof(Column), table_node->table.num_column);
    tmp_cols = PCNODE(g_mem_dbf[table_node->head_column]);
    for(i = 0; i < table_node->table.num_column; i++) {
        memcpy(&columns[i], &(tmp_cols->column), sizeof(Column));
        tmp_cols = PCNODE(g_mem_dbf[tmp_cols->next_column]); 
    } 
    return columns;
}

p_ColumnNode get_col_node(p_TableNode table_node, char column_name[])
{
    p_ColumnNode col_node;
    int i = 0;
    col_node = PCNODE(g_mem_dbf[table_node->head_column]);
    for (i = 0; i < table_node->table.num_column; i++) {
        if (strcmp(column_name, col_node->column.field_name) == 0) {
            return col_node;
        }
        col_node = PCNODE(g_mem_dbf[col_node->next_column]);
    }
    return NULL;
}

p_TableNode get_table_node(char table_name[])
{
    int head = INT(g_mem_dbf[4]);
    int i = 0;
    p_TableNode tmp_node = PTNODE(g_mem_dbf[head]);
    for (i = 0; i < INT(g_mem_dbf[0]); i++) {
        if (strcmp(tmp_node->table.table_name, table_name) == 0) {
            return tmp_node;
        } 
        tmp_node = PTNODE(g_mem_dbf[tmp_node->next_table]);
    }
    return NULL;
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
    int head = INT(g_mem_dbf[4]);
    int i = 0;
    p_TableNode tmp_node = PTNODE(g_mem_dbf[head]);
    for (i = 0; i < INT(g_mem_dbf[0]); i++) {
        if (strcmp(tmp_node->table.table_name, table_name) == 0) {
            return TRUE;
        } 
        tmp_node = PTNODE(g_mem_dbf[tmp_node->next_table]);
    }
    return FALSE;
}

int open_db()
{
    char filename[260];
    add_dbf_ext(g_db_name, filename);
    open_mmap(&g_dbf_fd, &g_dbf_fi, &g_mem_dbf, filename);
    add_dat_ext(g_db_name, filename);
    open_mmap(&g_dat_fd, &g_dat_fi, &g_mem_dat, filename);
    return 0;
}

int close_db()
{
    close_mmap(g_dbf_fd, g_dbf_fi.st_size, g_mem_dbf);
    close_mmap(g_dat_fd, g_dat_fi.st_size, g_mem_dat);
    return 0;
}

int close_mmap(int fd, int size, char *membuf)
{
    ftruncate(fd, size);
    close(fd);
    munmap(membuf, size);
    return 0;
}

int open_mmap(int *fd, struct stat *fi, char **membuf, char filename[])
{
    *fd = open(filename, O_RDWR);
    fstat(*fd, fi);
    *membuf = mmap(NULL, fi->st_size, PROT_READ|PROT_WRITE, MAP_SHARED, *fd, 0);
    return 0;
}

char *add_dbf_ext(char db_name[], char db_file_name[])
{
    return (char *)add_ext(db_name, ".dbf", db_file_name);
}

char *add_dat_ext(char db_name[], char db_file_name[])
{
    return (char *)add_ext(db_name, ".dat", db_file_name);
}

int safe_add_space(int size)
{
    int page_size = getpagesize();
    char filename[260];
    int pages = (size + g_dbf_fi.st_size % page_size) / page_size;
    if (pages) {
        ftruncate(g_dbf_fd, g_dbf_fi.st_size+size);
        close(g_dbf_fd);
        munmap(g_mem_dbf, g_dbf_fi.st_size+size);
        g_dbf_fd = open(filename, O_RDWR);
        open_mmap(&g_dbf_fd, &g_dbf_fi, &g_mem_dbf, (char *)add_dbf_ext(g_db_name, filename));
    }
    else {
        g_dbf_fi.st_size += size;
    }
    return 0;
}
int safe_add_dat_space(int size)
{
    int page_size = getpagesize();
    char filename[260];
    int pages = (size + g_dat_fi.st_size % page_size) / page_size;
    if (pages) {
        ftruncate(g_dat_fd, g_dat_fi.st_size+size);
        close(g_dat_fd);
        munmap(g_mem_dat, g_dat_fi.st_size+size);
        g_dat_fd = open(filename, O_RDWR);
        open_mmap(&g_dat_fd, &g_dat_fi, &g_mem_dat, (char *)add_dat_ext(g_db_name, filename));
    }
    else
    {
        g_dat_fi.st_size += size;

     }

     return 0;

 }
