#include<stdio.h>

int main()
{
    int arr[100],size,i;

    printf("Enter array size\n");
    scanf("%d",&size);

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
    scanf("%d",&arr[i]);

    printf("Elements are\n");
    for(i = 0; i < size; i++)
     printf("%d\n",arr[i]);

    return 0;
}