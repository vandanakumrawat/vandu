  /* x^n */
#include<stdio.h>
void whil(){
    int x,n,s=1;
 printf("enter the number:");
 scanf("%d",&x);
 printf("enter the number");
 scanf("%d",&n);

 do{
 s=s*x;
 n--;
 }
 while(n>0);
 printf("%d\n",s);
}
int main()
{
whil();
 
return 0;
}