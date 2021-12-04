#include<stdio.h>
int main(){
    int A;
    printf("enter the number A");
    scanf("%d",&A);
    if(A>0)
    printf("%d number is  positive",A);

    else
    if(A<0)
    printf("%d number is negative ",A);
    return 0;
}