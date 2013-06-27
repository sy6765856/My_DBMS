#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "dat.h"
#include "types.h"
#define LEN 1000
#define M 10000
int i;
int insert(char tb_name[],char in_f[LEN][M],int cpf,char in_v[LEN][M],int cpv)
{
    printf ("%s\n",tb_name);
    printf ("%d %d\n",cpf,cpv);
    for(i=0;i<cpv;i++)puts(in_f[i]);
    for(i=0;i<cpv;i++)puts(in_v[i]);
}
