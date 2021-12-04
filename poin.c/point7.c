#include<stdio.h>
int main(){
    int x,y,*a,*b,temp;
    printf("enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("befor swappinf\nx=%d\ny=%d\n",x,y);
    a=&x;
    b=&y;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("after swappinf\nx=%d\ny=%d\n",x,y);
    return 0;
}