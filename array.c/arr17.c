//print array in revarse ordar
#include<stdio.h>
int main(){
    int arr[5];
    int i;
    printf("enter element of the array \n");
    for(i=0; i<5;i++){
    scanf("%d",& arr[i]);
    }
    printf("element of the array\n");
    for(i=0; i<5; i++){
        printf("%d\n",arr[i]);

    }
    printf("element of the array in revers order\n");
    for(i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }
return 0;
}