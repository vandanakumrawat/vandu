#include<stdio.h>
int areaOft(int b, int h){

    int area;
    area = b*h/2;
     return area;
}

 int main()
 {
     int b,h,x;
     printf("enter value of base & hight:");
     scanf("%d%d",&b,&h);
 x = areaOft(b,h);

 printf("%d",x);


 }
 