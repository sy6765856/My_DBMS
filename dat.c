#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "dat.h"
#include "dbf.h"
#include "types.h"
#include <sys/mman.h> 
typedef struct
{
    int pre_col;
    int pre_row;
    int nxt_col;
    int nxt_row;
    char data[256];
}TB,*Tb;
int i,j;
int error(char err[])
{
    printf("\e[1;31mERROR:");
    puts(err);
    printf("\e[1;32m");
    return 0;
}
char *dat = NULL;  
int file_length = 0;  
char *start_address = 0;
char *dbf=NULL;
int fd;
/* void init() */
/* { */
/*     fd = open("tes", O_RDONLY ); */
/*     struct stat fileinfo; */
/*     if ( fd > 0 )   */
/*     { */
/*         fstat(fd, &fileinfo); */
/*         file_length = lseek(fd, 1, SEEK_END); */
/*         printf ("%d\n",fileinfo.st_size); */
/*         dat = mmap( start_address, fileinfo.st_size, PROT_READ, MAP_SHARED, fd, 0 );   */
/*         close( fd ); */
/*         printf ("%d\n",*(int*)(&dat[0])); */
/*         munmap( dat, file_length ); */        
/*     } */
/* } */
int insert(char tb_name[],char in_f[LEN][M],int cpf,char in_v[LEN][M],int cpv)
{
    if(cpf&&cpf!=cpv)return error("values not match");

    /* debug */
    printf ("%s\n",tb_name);
    printf ("%d %d\n",cpf,cpv);
    for(i=0;i<cpv;i++)puts(in_f[i]);
    for(i=0;i<cpv;i++)puts(in_v[i]);
    /* end */
    
    /* get the absolute position in dat file */
    TableNode nd;
    strcpy(nd.table.table_name,tb_name);
    //    get(nd);
    int tb_pos=nd.pos=0;
    TB tb_hd=*(TB*)(&dat[tb_pos]);
    
    /* produce insert_line */
    int col_pos=nd.head_column;
    char col_name[M];
    int ct=0;
    do
    {
        ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
        strcpy(col_name,cnd.table_mode.field_name);
        TB tb_ins;
        int fg=-1;
        for(j=0;j<cpv;j++)
        {
            if(strcmp(col_name,in_f[j])==0)
            {
                fg=j;
                break;
            }
        }
        if(~fg)strcpy(tb_ins.data,in_f[fg]);
        else strcpy(tb_ins.data,in_f[cpv]);
        if(ct==0)
        {
            tb_ins.nxt_row=tb_pos;
            //do_dbf(file_length);
            ct++;
        }
        tb_ins.nxt_col=file_length;
        *(TB*)(&dat[file_length])=tb_ins;
        file_length+=sizeof(tb_ins);
        col_pos=cnd.next_column;
    }while(col_pos!=nd.tail_column);
    puts(nd.table.table_name);
    if(cpf)
    {
        
    }
    else
    {
        
    }
    return 1;
}

int delete(char tb_name[],char cond[LEN][M],int cp)
{
    printf ("%s\n",tb_name);

    TableNode nd;
    strcpy(nd.table.table_name,tb_name);
    //    get(nd);
    
    return 1;
}

int update(char tb_name[],char col_name[],char cond[LEN][M],int cpf)//type is the same
{
    printf ("tb:%s\n",tb_name);
    printf ("col:%s\n",col_name);
    printf("%d\n",cpf);
    for(i=0;i<cpf;i++)puts(cond[i]);

    TableNode nd;
    strcpy(nd.table.table_name,tb_name);
    //    get(nd);
    int tb_pos=nd.pos=0;
    int row_pos=tb_pos;
    do
    {
        TB tb_hd=*(TB*)(&dat[row_pos]);
        int cl_pos=row_pos;
        int col_pos=nd.head_column;
        do
        {
            TB rc=*(TB*)(&dat[cl_pos]);
            ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
            if(strcmp(col_name,cnd.table_mode.field_name)==0)
            {
                strcpy(rc.data,cond[0]);
                *(TB*)(&dat[cl_pos])=rc;
            }
            col_pos=cnd.next_column;
            cl_pos=rc.nxt_col;
        }while(col_pos!=nd.tail_column);
        row_pos=tb_hd.nxt_row;
    }while(row_pos!=file_length);
    return 1;
}


