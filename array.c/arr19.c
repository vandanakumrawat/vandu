#include<stdio.h>
int main(){
int a [100];
int i,n,sum=0;
printf("\n\n find sum of all element of array\n");
printf("input the number of elements tostord in the array");
scanf("%d",&n);
printf("input %d elements in the array \n",n);
for(i=0; i<n; i++){
    printf("element %d",i);
    scanf("%d",&a[i]);
}
for(i=0;i<n; i++){
    sum+=a[i];
}
printf("sum of all element stored in the arrayis %d \n\n",sum);
}