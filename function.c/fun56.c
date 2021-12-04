/* sum of 1,-2,3,-4,5..... */
#include<stdio.h>
void sum(){
    int n,i,sum=0;
printf("enter the number");
scanf("%d",&n);
i=1;
while(i<=n)
{
if(i%2==0)
sum=sum-i;
else
sum=sum+i;
i++;
}
printf("%d",sum);

}
int main()
{
sum();
}
