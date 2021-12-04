#include<stdio.h>
void main(){
    float p,r,t,si,*p1,*p2,*p3;
    p1=&p;
    p2=&r;
    p3=&t;
    printf("enter principal amount");
    scanf("%f",p1);
    printf("enter rate of inters");
    scanf("%f",p2);
    printf("enter time");
    scanf("%f",p3);
    si=(*p1**p2**p3)/100;
    printf("\n simpal intrers=%f",si);
}