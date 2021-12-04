#include<stdio.h>
int findReverse(int n){
    int sum=0;
    while(n!=0){
        sum=sum*10+n%10;
        n /= 10;
    }
    return sum;
}
int main(){
    int number, reverse;
    printf("enter a positive interger");
    scanf("%d",&number);
    reverse= findReverse(number);
    printf("the reverse of %d is: %d",number,reverse);
    return 0;
}sss