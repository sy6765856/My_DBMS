#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "dat.h"
#include "dbf.h"
#include "types.h"
#include <sys/mman.h> 
struct TB
{
    int pre_col;
    int pre_row;
    int nxt_col;
    int nxt_row;
    int tail;
};
int i;
int error(char err[])
{
    printf("\e[1;31mERROR:");
    puts(err);
    printf("\e[1;32m");
    return 0;
}
void init()
{
    char *memory = NULL;  
    int file_length = 0;  
    char *start_address = 0;  
    int line_num = 0;  
    int time_start = time(NULL);  
    int fd = open( argv[1], O_RDONLY );
    if ( fd > 0 )  
    {  
        file_length = lseek(fd, 1, SEEK_END);  
        memory = mmap( start_address, file_length, PROT_READ, MAP_SHARED, fd, 0 );  
        close( fd );  
        munmap( memory, file_length );
    }
}
int insert(char tb_name[],char in_f[LEN][M],int cpf,char in_v[LEN][M],int cpv)
{
    if(cpf&&cpf!=cpv)return error("values not match");
    /* get the absolute position in dat file */
    TableNode nd;
    strcpy(nd.table.table_name,tb_name);
    int tb_pos=get(nd);
    if(cpf)
    {
        
    }
    else
    {
        
    }
    printf ("%s\n",tb_name);
    printf ("%d %d\n",cpf,cpv);
    for(i=0;i<cpv;i++)puts(in_f[i]);
    for(i=0;i<cpv;i++)puts(in_v[i]);
    return 1;
}

int delete(char tb_name[])
{
    printf ("%s\n",tb_name);
    return 1;
}

int update(char tb_name[],char col_name[],char cond[LEN][M],int cpf)
{
    printf ("tb:%s\n",tb_name);
    printf ("col:%s\n",col_name);
    printf("%d\n",cpf);
    for(i=0;i<cpf;i++)puts(cond[i]);
    return 1;
}


