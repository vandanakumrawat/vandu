#include<stdio.h>
int main(){
    int b,h;
    float area;
    printf("enter the values of breadth and height \n");
    scanf("%d%d",&b,&h);
    area =(b*h)/2;
    printf("area of the triangle = %.2f\n",area);
    return 0;
    }