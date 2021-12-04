#include<stdio.h>
void main(){
    float s1,s2,s3,s4,s5,*p1,*p2,*p3,*p4,*p5;
    float total,average,percentage;
    p1=&s1;
    p2=&s2;
    p3=&s3;
    p4=&s4;
    p5=&s5;
    printf("enter maeks of five sunbject:\n");
    scanf("%f%f%f%f%f",p1,p2,p3,p4,p5);
    total=s1+s2+s3+s4+s5;
    average=total/5.0;
    percentage=total/500.0;
    printf("total marks=%2f\n",total);
    printf("average marks=%2f\n",average);
    printf("percentage=%2f\n",percentage);
}