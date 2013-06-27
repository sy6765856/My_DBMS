#ifndef DAT_H
#define DAT_H

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include "types.h"
#define LEN 1000
#define M 10000
int insert(char tb_name[],char in_f[LEN][M],int cpf,char in_v[LEN][M],int cp);
#endif
