#include<stdio.h>
void main(){
    int num1=10,num2=20,num3=30;
    int *p1,*p2,*p3;
    int largest;
    p1=&num1;
    p2=&num2;
    p3=&num3;
   
   if(*p1>*p1&&*p1>*p3){
       printf("%d",*p1);
   }else if(*p2>*p3){
            printf("%d",*p2);
   }else{
       printf("%d",*p3);

   }
}
