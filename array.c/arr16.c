#include<stdio.h>
int main(){
    int arr[10];
    int i,sum=0;
printf("\n enter the element 10 of array \n ");
for(i=0; i<10; i++){
    scanf("%d",&arr[i]);
    sum = sum+arr[i];
}
printf("\n sum of all element of the array %d",sum);
return 0;
}