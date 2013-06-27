#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "dat.h"
#include "types.h"
int i;
int insert(char tb_name[],char in_f[LEN][M],int cpf,char in_v[LEN][M],int cpv)
{
    printf ("%s\n",tb_name);
    printf ("%d %d\n",cpf,cpv);
    for(i=0;i<cpv;i++)puts(in_f[i]);
    for(i=0;i<cpv;i++)puts(in_v[i]);
    return 0;
}

int delete(char tb_name[])
{
    printf ("%s\n",tb_name);
    return 0;
}

int update(char tb_name[],char col_name[],char cond[LEN][M],int cpf)
{
    printf ("tb:%s\n",tb_name);
    printf ("col:%s\n",col_name);
    printf("%d\n",cpf);
    for(i=0;i<cpf;i++)puts(cond[i]);
    return 0;
}


