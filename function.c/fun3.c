#include<stdio.h>
void prcofsub(int,int,int,int,int);
void  prcofsub(int h,int e,int m,int c,int p){
    int pfsb;
    pfsb=((h+e+m+c+p)/5);
    printf("%d percentage",pfsb);
    }


   int main() {
       int h,e,m,c,p;
       printf("enter h,e,m,c,p");
       scanf("%d%d%d%d%d",&h,&e,&m,&c,&p);
           prcofsub(h,e,m,c,p);
    }