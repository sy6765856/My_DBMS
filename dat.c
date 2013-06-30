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
}TB;
typedef struct
{
    int pre_col;
    int pre_row;
    int nxt_col;
    int nxt_row;
    char data[256];
}TB_text;
typedef struct
{
    int pre_col;
    int pre_row;
    int nxt_col;
    int nxt_row;
    int data;
}TB_int;
typedef struct
{
    int pre_col;
    int pre_row;
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
        ans+=a[i]-'0';
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
        ans+=(a[i]-'0')*tea;
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
void n_col(TB_text *a,TB_dou *b,TB_int *c,int type)
{
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
    for(i=0;i<cp;i++)
    {
        *p=q[i];
        p++;
    }
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
int insert(char tb_name[],char in_f[LEN][M],int cpf,char in_v[LEN][M],int cpv)
{
    if(dat==NULL||dbf==NULL)return error("Please select a database!!");
    if(cpf&&cpf!=cpv)return error("values not match");

    /* debug */
    printf ("%s\n",tb_name);
    printf ("%d %d\n",cpf,cpv);
    for(i=0;i<cpv;i++)puts(in_f[i]);
    for(i=0;i<cpv;i++)puts(in_v[i]);
    /* end */
    
    /* get the absolute position in dat file */
    TableNode nd;
    p_TableNode ndr=&nd;
    strcpy(nd.table.table_name,tb_name);
    if(get_columns(&nd,&ndr)==NULL)return error("No such form!!");
    int tb_pos=nd.dat_index;//form head position
    
    /* produce insert_line */
    int col_pos=nd.head_column;
    int ct=0,typ;
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
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
            if(~fg)n_copy(&tb_inst,&tb_insd,&tb_insi,typ,in_v[fg]);
            else n_null(&tb_inst,&tb_insd,&tb_insi,typ);
            
            if(ct==0)
            {
                n_row(&tb_inst,&tb_insd,&tb_insi,typ,tb_pos);
                //do_dbf(file_length);
                ct++;
            }
            n_wt(&tb_inst,&tb_insd,&tb_insi,typ);
            col_pos=cnd.next_column;
        }while(col_pos!=nd.tail_column);
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
                //do_dbf(file_length);
                ct++;
            }
            n_wt(&tb_inst,&tb_insd,&tb_insi,typ);
            col_pos=cnd.next_column;
        }while(col_pos!=nd.tail_column);
    }
    return 1;
}

int update(char tb_name[],char col_name[],char cond[LEN][M],int cpf)//type is the same
{
    if(dat==NULL||dbf==NULL)return error("Please select a database!!");
    printf ("tb:%s\n",tb_name);
    printf ("col:%s\n",col_name);
    printf("%d\n",cpf);
    for(i=0;i<cpf;i++)puts(cond[i]);

    TableNode nd;
    strcpy(nd.table.table_name,tb_name);
    //    get(nd);
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
        do
        {
            TB tb_ins=*(TB*)(&dat[col_pos]);
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
        }while(col_pos!=nd.tail_column);
        row_pos=tb_hd.nxt_row;
    }while(row_pos!=file_length);
    return 1;
}

int delet(char tb_name[],char cond[LEN][M],int cp)
{
    if(dat==NULL||dbf==NULL)return error("Please select a database!!");
    printf ("%s\n",tb_name);
    printf("%d\n",cp);
    for(i=0;i<cp;i++)puts(cond[i]);
    TableNode nd;
    
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
    
    p_TableNode ndr;
    int typ;
    strcpy(nd.table.table_name,tb_name);
    //get_columns(&nd, &ndr);
    //ndr = get(tb_name);
    //memcpy(&nd, ndr, sizeof(TableNode));
    if(cp)
    {
        char col_name[M];
        strcpy(col_name,cond[0]);
        
        int tb_pos=nd.dat_index;
        int row_pos=tb_pos;
        do
        {
            int cl_pos=row_pos;
            int col_pos=nd.head_column;
            TB tb_ins=*(TB*)(&dat[col_pos]);
            int fg=0;
            do
            {
                TB rc=*(TB*)(&dat[col_pos]);
                ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
                typ=cnd.column.type_name;
                n_rd(&tb_inst,&tb_insd,&tb_insi,typ,cl_pos);
                if(strcmp(col_name,cnd.column.field_name)==0)
                {
                    fg=1;break;
                }
                col_pos=cnd.next_column;
                cl_pos=rc.nxt_col;
            }while(col_pos!=nd.tail_column);
            if(fg)
            {
                
            }
            row_pos=tb_ins.nxt_row;
        }while(row_pos!=file_length);
    }
    else
    {
        //do_dbf(file_length);
    }
    return 1;
}

int selec(char tb_name[],char in_f[LEN][M],int cpf)
{
    if(dat==NULL||dbf==NULL)return error("Please select a database!!");
    printf("%s\n",tb_name);
    printf("%d\n",cpf);
    for(i=0;i<cpf;i++)
    {
        printf("%s\n",in_f[i]);
    }
    int row=0,col=0,typ;
    TableNode nd;

    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
    
    p_TableNode ndr=&nd;
    strcpy(nd.table.table_name,tb_name);
    //get(ndr);
    if(cpf==1&&strcmp(in_f[0],"*")==0)
    {
        int row_pos=nd.dat_index;
        do
        {
            TB rr=*(TB*)(&dat[row_pos]);
            int cl_pos=row_pos;
            int col_pos=nd.head_column;
            col=0;
            do
            {
                TB tb_ins=*(TB*)(&dat[col_pos]);
                ColumnNode cnd=*(ColumnNode*)(&dbf[col_pos]);
                typ=cnd.column.type_name;
                n_rd(&tb_inst,&tb_insd,&tb_insi,typ,cl_pos);
                
                n_copy_form(&tb_inst,&tb_insd,&tb_insi,typ,form[row][col]);
                
                col++;
                col_pos=cnd.next_column;
                cl_pos=tb_ins.nxt_col;
            }while(col_pos!=nd.tail_column);
            row_pos=rr.nxt_row;
            row++;
        }while(row_pos!=file_length);
    }
    else
    {
        int row_pos=nd.dat_index;
        do
        {
            TB rr=*(TB*)(&dat[row_pos]);
            int cl_pos=row_pos;
            int col_pos=nd.head_column;
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
            }while(col_pos!=nd.tail_column);
            row_pos=rr.nxt_row;
            row++;
        }while(row_pos!=file_length);
    }
    //show_result(form,row,col);
    return 1;
}

int aler(int form_pos,int type)
{
    TableNode nd;
    
    TB_text tb_inst;
    TB_dou tb_insd;
    TB_int tb_insi;
    
    p_TableNode ndr;
    //get_columns(&nd, &ndr);
    int row_pos=nd.dat_index;
    do
    {
        TB rr=*(TB*)(&dat[row_pos]);
        int cl_pos=row_pos;
        int col_pos=nd.head_column;
    }while(row_pos!=file_length);
    return 1;
}
