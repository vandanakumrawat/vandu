/* find armstrong */
#include<stdio.h>
void armstrong(){
    int n,s=0,r,p,i;
 printf("enter the number");
 scanf("%d",&n);
 p=n;
 do{
 r=n%10;
 s=s+r*r*r;
 n=n/10;
 }while(n!=0);

 if(p==s)
 {printf("it is armstrong \n");}
}
int main()
{
armstrong();
 
return 0;
}