#include<stdio.h>
int main(){
    int arr[10];
    int n, i, sum=0;
    printf("enter the number of array element ");
    for(i=0; i<10; i++){
    scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\n sum of array elements%d", sum);
return 0;
}