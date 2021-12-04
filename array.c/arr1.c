#include<stdio.h>
int main(){
    int a[100],i,n,min,max;
    printf("enter size of the array");
    scanf("%d",&n);
    printf("enter element in arry");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0],max=a[0];
    for(i=1;i<n;i++){
        if(min>a[i])
          min=a[i];
        if(max<a[i])
         max=a[i];
    }
printf("minimum of array is %d",min);
printf("\n maximum of array is %d",max);

    
return 0;
    }