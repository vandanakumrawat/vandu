#include<stdio.h>
int main(){
    int a,b,*p,*q,sum;
    printf("enter two number to add\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    sum= *p+*q;
    printf("sum of the number=%d\n",sum);
    return 0;
}