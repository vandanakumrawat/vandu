// Lcm of two numbers
#include<stdio.h>
int lcm(int,int);
int lcm(int n1,int n2)
{
    int max;
     max=(n1>n2 )? n1 : n2;

while(1){
    if(max%n1 ==0&&max%n2 ==0){
        printf("the Lcm of %d and %d is %d.",n1,n2,max);
        break;

    }
    ++max;
}
}
int main(){
    int n1, n2, max;
    printf("enter two positive integars:");
    scanf("%d%d", &n1,&n2);
    lcm(n1,n2);
    return 0;
}