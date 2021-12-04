#include<stdio.h>
int evenodd(int num){
    return num;
}
int main(){
    int num;
    printf("enter any number");
    scanf("%d",&num);
    if(evenodd(num)){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
    return 0;
}