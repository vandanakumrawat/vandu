#include<stdio.h>
int main(){
    int arrA[10];
    int arrB[10];
    int n,i,j,count=0;
    printf("\n enter array size");
    scanf("%d",&n);
    printf("\n enter %d array elementn");
    for(i=0; i<n; i++){
        scanf("%d",&arrA[i]);  
     }
     printf("\n element of the array\n");
     for(i=0;i<n; i++){
         printf("%d",&arrA[i]);
     }
     for(i=0;i<n; i++){
         for(j=0;j<count; j++){
             if (arrA[i]==arrB[i])
             break;

         }
         if (j==count){
             arrA[i]==arrB[i];
             count++;

         }
     }
     printf("\n array after duplicate removel \n");
     for(i=0; i<count; i++){
         printf("%d",arrB[i]);
     }
     return 0;
}