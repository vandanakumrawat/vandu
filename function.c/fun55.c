/* Fibonacci series like 0 1 1 2 3 5 8 13 */
#include<stdio.h>
void fibonoc(){
    int a,b,c,n;
a=-1;
b=1;
printf("enter limit");
scanf("%d",&n);
while(n!=0)
{
c=a+b;
printf(" %d",c);
a=b;
b=c;
n--;
}
}
int main()
{
fibonoc();
return 0;
}
