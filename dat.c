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
    int nxt_col;
    int nxt_row;
}TB;
typedef struct
{
    int nxt_col;
    int nxt_row;
    char data[256];
}TB_text;
typedef struct
{
    int nxt_col;
    int nxt_row;
    int data;
}TB_int;
typedef struct
{
    int nxt_col;
    int nxt_row;
    double data;
}TB_dou;
int i,j,fd;
int error(char err[])
{
    printf("\e[1;31mERROR:");
    puts(err);
    printf("\e[1;32m");
    return 0;
}
extern char* g_mem_dbf;
extern char* g_mem_dat;
#define dat g_mem_dat
#define dbf g_mem_dbf
extern struct stat g_dat_fi;
#define file_length g_dat_fi.st_size
char col_name[M];
char form[LEN][H][M];
int do_int(char a[])
{
    int ans=0;
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        ans*=10;
        if('0'<=a[i]&&a[i]<='9')ans+=a[i]-'0';
        else return 0;
    }
    return ans;
}

double do_real(char a[])
{
    double ans=0;
    int len=strlen(a);
    int fg=len;
    for(i=0;i<len;i++)if(a[i]=='.'){a[i]='\0';fg=i;break;}
    ans=(double)do_int(a);
    double tea=0.10000;
    for(i=fg+1;i<len;i++)
    {
        if('0'<=a[i]&&a[i]<='9')ans+=(a[i]-'0')*tea;
        else return 0;
        tea=tea/10;
    }
    return ans;
}

void n_rd(TB_text *a,TB_dou *b,TB_int *c,int type,int pos)
{
    if(type==TEXT)*a=*(TB_text*)(&dat[pos]);
    else if(type==REAL)*b=*(TB_dou*)(&dat[pos]);
    else if(type==INTEGER)*c=*(TB_int*)(&dat[pos]);
}

void n_wt(TB_text *a,TB_dou *b,TB_int *c,int type)
{
     if(type==TEXT)
     {
         a->nxt_col=file_length+sizeof(*a);
         *(TB_text*)(&dat[file_length])=*a;
         file_length+=sizeof(*a);
     }
     else if(type==REAL)
     {
         b->nxt_col=file_length+sizeof(*b);
         *(TB_dou*)(&dat[file_length])=*b;
         file_length+=sizeof(*b);
     }
     else if(type==INTEGER)
     {
         c->nxt_col=file_length+sizeof(*c);
         *(TB_int*)(&dat[file_length])=*c;
         file_length+=sizeof(*c);
     }
}

void n_wt_col(TB_text *a,TB_dou *b,TB_int *c,int type)
{
     if(type==TEXT)
     {
         *(TB_text*)(&dat[file_length])=*a;
         file_length+=sizeof(*a);
     }
     else if(type==REAL)
     {
         *(TB_dou*)(&dat[file_length])=*b;
         file_length+=sizeof(*b);
     }
     else if(type==INTEGER)
     {
         *(TB_int*)(&dat[file_length])=*c;
         file_length+=sizeof(*c);
     }
}

void n_wt_one(TB_text *a,TB_dou *b,TB_int *c,int type,int pos)
{
    if(type==TEXT)
    {
        *(TB_text*)(&dat[pos])=*a;
    }
    else if(type==REAL)
    {
        *(TB_dou*)(&dat[pos])=*b;
    }
    else if(type==INTEGER)
    {
        *(TB_int*)(&dat[pos])=*c;
    }
}

void n_row(TB_text *a,TB_dou *b,TB_int *c,int type,int pos)
{
    if(type==TEXT)a->nxt_row=pos;
    else if(type==REAL)b->nxt_row=pos;
    else if(type==INTEGER)c->nxt_row=pos;
}

void n_copy(TB_text *a,TB_dou *b,TB_int *c,int type,char in_v[])
{
    if(type==TEXT)strcpy(a->data,in_v);
    else if(type==REAL)b->data=do_real(in_v);
    else if(type==INTEGER)c->data=do_int(in_v);
}

char* int_do(int a,char* p)
{
    int cp=0;
    char q[M];
    while(a)
    {
        q[cp++]=a%10+'0';
        a/=10;
    }
    for(i=cp-1;i>=0;i--)
    {
        *p=q[i];
        p++;
    }
    if(cp==0){*p='0';p++;}
    *p='\0';
    return p;
}

void real_do(double a,char* p)
{
    int aa=(int)a;
    p=int_do(aa,p);
    *p='.';p++;
    a-=aa*1.0;
    for(i=0;i<4;i++)
    {
        aa*=10;
        int yu=(int)aa;
        *p=yu+'0';
        p++;
    }
    *p='\0';
}

void n_copy_form(TB_text *a,TB_dou *b,TB_int *c,int type,char v_in[])
{
    char ans[M];
    if(type==TEXT)
    {
        strcpy(v_in,a->data);
    }
    else if(type==REAL)
    {
        real_do(b->data,ans);
        strcpy(v_in,ans);
    }
    else if(type==INTEGER)
    {
        int_do(c->data,ans);
        strcpy(v_in,ans);
    }
}

void n_null(TB_text *a,TB_dou *b,TB_int *c,int type)
{
    if(type==TEXT)strcpy(a->data,"NULL\0");
    else if(type==REAL)b->data=0.0;
    else if(type==INTEGER)c->data=0;
}

int jud(TB_text *a,TB_dou *b,TB_int *c,int type,char op[],char va[])
{
    if(type==TEXT)
    {
        char left[M],right[M];
        strcpy(left,a->data);
        strcpy(right,va);
        if(strcmp(op,"=\0")==0)
        {
            if(strcmp(left,right)==0)return 1;
            else return 0;
        }
        else if(strcmp(op,">\0")==0)
        {
            if(strcmp(left,right)>0)return 1;
            else return 0;
        }
        else if(strcmp(op,"<\0")==0)
        {
            if(strcmp(left,right)<0)return 1;
            else return 0;
        }
        else if(strcmp(op,">=\0")==0)
        {
            if(strcmp(left,right)>=0)return 1;
            else return 0;
        }
        else if(strcmp(op,"<=\0")==0)
        {
            if(strcmp(left,right)<=0)return 1;
            else return 0;
        }
    }
    else if(type==REAL)
    {
        int left=b->data;
        int right=do_real(va);
        if(strcmp(op,"=\0")==0)
        {
            if(left==right)return 1;
            else return 0;
        }
        else if(strcmp(op,">\0")==0)
        {
            if(left>right)return 1;
            else return 0;
        }
        else if(strcmp(op,"<\0")==0)
        {
            if(left<right)return 1;
            else return 0;
        }
        else if(strcmp(op,">=\0")==0)
        {
            if(left>=right)return 1;
            else return 0;
        }
        else if(strcmp(op,"<=\0")==0)
        {
            if(left<=right)return 1;
            else return 0;
        }
    }
    else if(type==INTEGER)
    {
        int left=c->data;
        int right=do_int(va);
        if(strcmp(op,"=\0")==0)
        {
            if(left==right)return 1;
            else return 0;
        }
        else if(strcmp(op,">\0")==0)
        {
            if(left>right)return 1;
            else return 0;
        }
        else if(strcmp(op,"<\0")==0)
        {
            if(left<right)return 1;
            else return 0;
        }
        else if(strcmp(op,">=\0")==0)
        {
            if(left>=right)return 1;
            else return 0;
        }
        else if(strcmp(op,"<=\0")==0)
        {
            if(left<=right)return 1;
            else return 0;
        }
    }
    return 1;
}

int judge(TB_text *a,TB_dou *b,TB_int *c,int type,char cond[LEN][M],int cp)
{
    if(strcmp(cond[cp-1],"exp\0")==0)
    {
        return jud(a,b,c,type,cond[0],cond[1]);
    }
    else if(strcmp(cond[cp-1],"name\0")==0)
    {
        
    }
    return 1;
}

int check_row(int col_pos,int cl_pos,char cond[LEN][M],int cp,int end,char col_name[])
{
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
    do
    {
        TB tb_ins=*(TB*)(&dat[cl_pos]);
        ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
        int type=cnd.column.type_name;
        n_rd(&tb_inst,&tb_insd,&tb_insi,type,cl_pos);
        if(strcmp(col_name,cnd.column.field_name)==0)
        {
            if(!judge(&tb_inst,&tb_insd,&tb_insi,type,cond,cp))return 0;
        }
        col_pos=cnd.next_column;
        cl_pos=tb_ins.nxt_col;
    }while(col_pos!=end);
    return 1;
}

int insert(char tb_name[],char in_f[LEN][M],int cpf,char in_v[LEN][M],int cpv)
{
    if(dat==NULL||dbf==NULL)return error("Please select a database!!");
    if(cpf&&cpf!=cpv)return error("values not match");

    TableNode nd;
    p_TableNode ndr=&nd;
    strcpy(nd.table.table_name,tb_name);
    if(get_columns(&nd,&ndr)==NULL)return error("No such form!!");
    int tb_pos=nd.dat_index;
    
    int col_pos=nd.head_column;
    int ct=0,typ;
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
    int le=file_length;
    if(cpf)
    {
        do
        {
            ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
            typ=cnd.column.type_name;
            n_rd(&tb_inst,&tb_insd,&tb_insi,typ,tb_pos);
            
            strcpy(col_name,cnd.column.field_name);
            int fg=-1;
            for(j=0;j<cpf;j++)
            {
                if(strcmp(col_name,in_f[j])==0)
                {
                    fg=j;
                    break;
                }
            }
            if(~fg)
            {
                n_copy(&tb_inst,&tb_insd,&tb_insi,typ,in_v[fg]);         
            }
            else n_null(&tb_inst,&tb_insd,&tb_insi,typ);
            
            if(ct==0)
            {
                n_row(&tb_inst,&tb_insd,&tb_insi,typ,tb_pos);
                ndr->dat_index=file_length;
                ct++;
            }
            n_wt(&tb_inst,&tb_insd,&tb_insi,typ);
            col_pos=cnd.next_column;
        }while(col_pos!=0);
        
        if(nd.dat_index==0)
        {
            ColumnNode cnd=*(ColumnNode*)(&dbf[nd.head_column]);
            typ=cnd.column.type_name;
            n_rd(&tb_inst,&tb_insd,&tb_insi,typ,le);
            n_row(&tb_inst,&tb_insd,&tb_insi,typ,0);
            n_wt_one(&tb_inst,&tb_insd,&tb_insi,typ,le);
        }
    }
    else
    {
        int rep=0;
        do
        {
            ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
            typ=cnd.column.type_name;
            n_rd(&tb_inst,&tb_insd,&tb_insi,typ,tb_pos);
            if(rep<cpv)
            {
                n_copy(&tb_inst,&tb_insd,&tb_insi,typ,in_v[rep]);
                rep++;
            }
            else n_null(&tb_inst,&tb_insd,&tb_insi,typ);
            if(ct==0)
            {
                n_row(&tb_inst,&tb_insd,&tb_insi,typ,tb_pos);
                ndr->dat_index=file_length;
                ct++;
            }
            n_wt(&tb_inst,&tb_insd,&tb_insi,typ);
            col_pos=cnd.next_column;
        }while(col_pos!=0);
        
        if(nd.dat_index==0)
        {
            ColumnNode cnd=*(ColumnNode*)(&dbf[nd.head_column]);
            typ=cnd.column.type_name;
            n_rd(&tb_inst,&tb_insd,&tb_insi,typ,le);
            n_row(&tb_inst,&tb_insd,&tb_insi,typ,0);
            n_wt_one(&tb_inst,&tb_insd,&tb_insi,typ,le);
        }
    }
    printf("\e[1;31m");
    puts("Success!!");
    printf("\e[0m");
    return 1;
}

int update(char tb_name[],char col_name[],char cond[LEN][M],int cpf,char codd[LEN][M],int cpd)
{
    if(dat==NULL||dbf==NULL)return error("Please select a database!!");
    TableNode nd;
    p_TableNode ndr=&nd;
    strcpy(nd.table.table_name,tb_name);
    if(get_columns(&nd,&ndr)==NULL)return error("No such form!!");

    if(nd.dat_index==0)return error("This form is empty!!");
    
    int tb_pos=nd.dat_index;
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
    
    int row_pos=tb_pos;
    int typ;
    do
    {
        TB tb_hd=*(TB*)(&dat[row_pos]);
        int cl_pos=row_pos;
        int col_pos=nd.head_column;
        int fg=1;
        printf("cpd: %d\n",cpd);
        if(cpd)fg=check_row(col_pos,cl_pos,codd,cpd,0,codd[cpd-2]);
        printf("fg: %d\n",fg);
        if(fg)
        {
            do
            {
                TB tb_ins=*(TB*)(&dat[cl_pos]);
                ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
                typ=cnd.column.type_name;
                n_rd(&tb_inst,&tb_insd,&tb_insi,typ,cl_pos);
           
                if(strcmp(col_name,cnd.column.field_name)==0)
                {
                    n_copy(&tb_inst,&tb_insd,&tb_insi,typ,cond[0]);
                    n_wt_one(&tb_inst,&tb_insd,&tb_insi,typ,cl_pos);
                }
                col_pos=cnd.next_column;
                cl_pos=tb_ins.nxt_col;
            }while(col_pos!=0);
        }
        row_pos=tb_hd.nxt_row;
    }while(row_pos);
    printf("\e[1;31m");
    puts("Update!!");
    printf("\e[0m");
    return 1;
}

int delet(char tb_name[],char cond[LEN][M],int cp)
{
    if(dat==NULL||dbf==NULL)return error("Please select a database!!");
    
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
    int typ;
    
    TableNode nd;
    p_TableNode ndr=&nd;
    strcpy(nd.table.table_name,tb_name);
    if(get_columns(&nd,&ndr)==NULL)return error("No such form!!");
    if(nd.dat_index==0)return error("This form is empty!!");    
    if(cp)
    {
        char col_name[M];
        strcpy(col_name,cond[cp-2]);
        int tb_pos=nd.dat_index;
        int row_pos=tb_pos;
        int row_ps=0;
        do
        {
            TB tb_pre;
            if(row_ps)
            {
                tb_pre=*(TB*)(&dat[row_ps]);
            }
            TB tb_ins=*(TB*)(&dat[row_pos]);
            int cl_pos=row_pos;
            int col_pos=nd.head_column;
            int fg=0;
            do
            {
                TB rc=*(TB*)(&dat[cl_pos]);
                ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
                typ=cnd.column.type_name;
                n_rd(&tb_inst,&tb_insd,&tb_insi,typ,cl_pos);
                if(strcmp(col_name,cnd.column.field_name)==0)
                {
                    /* judge whether to delete */
                    if(judge(&tb_inst,&tb_insd,&tb_insi,typ,cond,cp))
                    {
                        fg=1;break;
                    }
                }
                col_pos=cnd.next_column;
                cl_pos=rc.nxt_col;
            }while(col_pos!=0);
            if(fg)
            {
                if(row_ps)
                {
                    tb_pre.nxt_row=tb_ins.nxt_row;
                    *(TB*)(&dat[row_ps])=tb_pre;
                }
                else ndr->dat_index=tb_ins.nxt_row;
            }
            else row_ps=row_pos;
            row_pos=tb_ins.nxt_row;
        }while(row_pos);
    }
    else
    {
        ndr->dat_index=0;
    }
    printf("\e[1;31m");
    puts("Delete!!");
    printf("\e[0m");
    return 1;
}

int selec(char tb_name[],char in_f[LEN][M],int cpf,char cond[LEN][M],int cpd)
{
    if(dat==NULL||dbf==NULL)return error("Please select a database!!");
    int row=0,col=0,typ;
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;

    TableNode nd;
    p_TableNode ndr=&nd;
    strcpy(nd.table.table_name,tb_name);
    if(get_columns(&nd,&ndr)==NULL)return error("No such form!!");

    if(nd.dat_index==0)return error("This form is empty!!");
    if(cpd)strcpy(col_name,cond[cpd-2]);
    if(cpf==1&&strcmp(in_f[0],"*\0")==0)
    {
        int ctt=0,cl=nd.head_column;
        do
        {
            ColumnNode cnd=*(ColumnNode*)(&dbf[cl]);
            strcpy(form[row][col],cnd.column.field_name);
            col++;cl=cnd.next_column;
        }while(cl!=0);
        row++;
        int row_pos=nd.dat_index;
        int coll=0;
        do
        {
            TB rr=*(TB*)(&dat[row_pos]);
            int cl_pos=row_pos;
            int col_pos=nd.head_column;
            int fg=1;
            if(cpd)fg=check_row(col_pos,cl_pos,cond,cpd,0,col_name);
            if(fg)
            {
                cl_pos=row_pos;
                col_pos=nd.head_column;
                col=0;
                do
                {
                    TB tb_ins=*(TB*)(&dat[cl_pos]);
                    ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
                    typ=cnd.column.type_name;
                    n_rd(&tb_inst,&tb_insd,&tb_insi,typ,cl_pos);
                    n_copy_form(&tb_inst,&tb_insd,&tb_insi,typ,form[row][col]);
                    col++;
                    col_pos=cnd.next_column;
                    cl_pos=tb_ins.nxt_col;
                }while(col_pos!=0);
                row++;
            }
            row_pos=rr.nxt_row;
        }while(row_pos);
    }
    else
    {
        int ctt=0,cl=nd.head_column;
        do
        {
            ColumnNode cnd=*(ColumnNode*)(&dbf[cl]);
            int fg=-1;
            for(j=0;j<cpf;j++)
            {
                if(strcmp(in_f[j],cnd.column.field_name)==0)
                {
                    fg=j;break;
                }
            }
            if(~fg)
            {
                strcpy(form[row][col],cnd.column.field_name);
                col++;
            }cl=cnd.next_column;
        }while(cl!=0);
        row++;
        
        int row_pos=nd.dat_index;
        do
        {
            TB rr=*(TB*)(&dat[row_pos]);
            int cl_pos=row_pos;
            int col_pos=nd.head_column;
            int fh=1;
            if(cpd)fh=check_row(col_pos,cl_pos,cond,cpd,0,col_name);
            if(fh)
            {
                cl_pos=row_pos;
                col_pos=nd.head_column;
                col=0;
                do
                {
                    TB tb_ins=*(TB*)(&dat[cl_pos]);
                    ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
                    typ=cnd.column.type_name;
                    n_rd(&tb_inst,&tb_insd,&tb_insi,typ,cl_pos);
                    int fg=-1;
                    for(j=0;j<cpf;j++)
                    {
                        if(strcmp(in_f[j],cnd.column.field_name)==0)
                        {
                            fg=j;break;
                        }
                    }
                    if(~fg)
                    {
                        n_copy_form(&tb_inst,&tb_insd,&tb_insi,typ,form[row][col]);
                        col++;
                    }
                    col_pos=cnd.next_column;
                    cl_pos=tb_ins.nxt_col;
                }while(col_pos!=0);
                row++;
            }
            row_pos=rr.nxt_row;
        }while(row_pos);
    }
    /* debug */
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%s  ",form[i][j]);
        }puts("");
    }
    //show_result(form,row,col);
    return 1;
}

int alter_add(p_TableNode ndr,int type)
{
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
    
    TableNode nd=*ndr;
    if(nd.dat_index==0)return 1;
    int row_pos=nd.dat_index;
    do
    {
        TB rr=*(TB*)(&dat[row_pos]);
        int col_pos=nd.head_column;
        int cl_pos=row_pos;
        TB tb_ins;
        do
        {
            tb_ins=*(TB*)(&dat[cl_pos]);
            ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
            col_pos=cnd.next_column;
            if(col_pos==0)break;
            cl_pos=tb_ins.nxt_col;
        }while(col_pos!=0);
        
        tb_ins.nxt_col=file_length;
        *(TB*)(&dat[cl_pos])=tb_ins;
        
        n_wt_col(&tb_inst,&tb_insd,&tb_insi,type);
        
        row_pos=rr.nxt_row;
    }while(row_pos);
    return 1;
}

int alter_dele(p_TableNode ndr,int type,char col_name[])
{
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
    
    TableNode nd=*ndr;
    if(nd.dat_index==0)return 1;
    int row_pos=nd.dat_index;
    do
    {
        TB rr=*(TB*)(&dat[row_pos]);
        int col_pos=nd.head_column;
        int cl_pos=row_pos;
        int cl_ps=0;
        TB tb_ins;
        do
        {
            tb_ins=*(TB*)(&dat[cl_pos]);
            ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
            if(strcmp(col_name,cnd.column.field_name)==0)
            {
                if(cl_ps)
                {
                    (*(TB*)(&dat[cl_ps])).nxt_col=tb_ins.nxt_col;
                }
            }
            else cl_ps=cl_pos;
            col_pos=cnd.next_column;
            cl_pos=tb_ins.nxt_col;
        }while(col_pos!=0);
        row_pos=rr.nxt_row;
    }while(row_pos);
    return 1;
}
