#include<stdio.h>
int main(){
    int a[100];
    int i,n,mini,max;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter element of array");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    mini=a[0],max=a[0];
    for(i=1;i<n;i++){
    if(mini>a[i])
    mini=a[i];
    if(max<a[i]) 
    max=a[i];
    }
    printf("the number is minimum %d",mini);
    printf("\nthe number is maximum %d",max);
    
    return 0;
}
