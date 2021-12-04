/* addition of no. from x^1+x^2+x^3.....x^n. */
#include<stdio.h>
void add(){
    int n,i=1,s,f=0,x,p;
 printf("enter the number:");
 scanf("%d",&x);
 printf("Enter the power:\n");
 scanf("%d",&n);

 do{
 p=i;
 s=1;
 while(p!=0)
 {
 s=s*x;
 p--;
 }
 f=f+s;
 i++;
 }while(i<=n);
 printf("%d",f);
}
int main()
{
 add();
return 0;
}