#include<stdio.h>
void tables(int);
int main(){
    int num;
    printf("enter a positivre number\n");
    scanf("%d",&num);
    printf("\n multiplication table for %d \n",num);
    tables(num);
    return 0;
}
void tables(int num){
    for(int count=1; count<=10; count++){
        printf("%d*%d =%d\n",num,count,num*count);
    }
}