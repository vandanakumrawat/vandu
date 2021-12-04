#include<stdio.h>
void simpleInterest(int,int,int);
void simpleInterest(int s,int i,int p){
    int sip;
    sip=((s*i*p)/100);
    printf("%d",sip);
    }
   int main() {
       int s,i,p;
       printf("enter s,i,p");
       scanf("%d%d%d",&s,&i,&p);
          simpleInterest(s,i,p);
    }