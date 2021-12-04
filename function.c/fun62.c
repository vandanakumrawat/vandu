/* print the number 1 to n */
#include<stdio.h>
void num(){
    int n,i=1;
 printf("Enter the number:\n");
 scanf("%d",&n);

 do{
 printf("%d",i);
 i++;
 }while(i<=n);
}
int main()
{
 num();
return 0;
}