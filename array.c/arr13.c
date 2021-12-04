#include<stdio.h>
int main(){
    int a[25],n,i;
    printf("enter the number of array element");
    scanf("%d",&n);
    printf("\n enter the array elements are \n");
    {
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("\n array elements are\n");
    for(i=1;i<=n;i++){
        printf("\t %d", a[i]);
    }
return 0;
}
}