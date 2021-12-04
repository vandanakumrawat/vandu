#include<stdio.h>
int main(){
    int i;
    int arr[5]={1,2,3,4,5};
    printf("original array\n");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("array in reverse order \n");
    for(i=5-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}