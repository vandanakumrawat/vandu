//	Count Number of Digits of an Integer
#include<stdio.h>
void count(){
     int number, count=0;

     printf("Enter a number: ");
     scanf("%d",&number);

     while (number!=0)
     {
       count++;
       number /= 10;
     }

     printf("Number of digits =  %d\n",count);

}
 int main()
 {
    count();
     return 0;
 }