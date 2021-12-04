#include<stdio.h>
int main(){
    int num1, num2, res;
    printf("\nenter the two number");
    scanf("%d%d",&num1,num2);
res = sum(num1,num2);
printf("\n addition of two number");
return 0;
}
int sum(int num1,int num2){
    int num3;
    num3=num1+num2;
    return (num3);

}