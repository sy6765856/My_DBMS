#ifndef DAT_H
#define DAT_H

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include "types.h"
#include "dbf.h"
#define LEN 1000
#define M 10000
int insert(char tb_name[],char in_f[LEN][M],int cpf,char in_v[LEN][M],int cpv);
int delet(char tb_name[],char cond[LEN][M],int cp);
int update(char tb_name[],char col_name[],char cond[LEN][M],int cpf);
int selec(char tb_name[],char in_f[LEN][M],int cpf);
int alter_add(p_TableNode ndr,int type);
int alter_dele(p_TableNode ndr,int type,char col_name[]);
#endif
