#include<stdio.h>
int main(){
    int a[10],n,i,sum =0;
    printf("\n find sum of all array element\n");
    printf("input the number of elements to stord in the array");
    scanf("%d",&n);
    printf("input %d elements in the array  \n",n);
    {
        for(i=0;i<=n;i++){
            
        printf("element %d",i);
       scanf("%d",&a[i]);
        }
           for(i=0;i<=n; i++){
               sum +=a[i];
       }        
    printf("sum of all array elements stored in the array is %d\n\n", sum);
    }
}
