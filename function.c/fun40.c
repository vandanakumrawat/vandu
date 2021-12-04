#include<stdio.h>
int armstrong(int num);
int main(){
    int num, result;
    printf("enter the number");
    scanf("%d",&num );
    result=armstrong(num);
    if(result==1)
    printf("%d is armstrong number",num);
    else
     printf("%d is not armstrong number",num);
     return 0;
}int armstrong(int num){
    int sum=0,r,n;
    n=num;
    while(n>0){
        r=n%10;
        sum=sum + (r*r*r);
        n=n/10;
    }if (sum==num)
    return 1;
    else
    return 0;
}