#include<stdio.h>
int main(){
    
    int a,r,c,and,m,n;
    printf("give matrix....\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
        printf("%4d",a[r][c]);
     }  printf("enter oder of matrix\n");
     scanf("%d%d",&m,&n);
     printf("enter %d+%d matrix\n",m,n);
     for(r=0;r<3;r++){
         printf("enter %d elemmentof %d row\n",n,(r+1));
         for (c=0;c<3;c++){
             scanf("%d",&a[r][c]);
             }
     }
             for(r=0;r<m;r++){
             for(c=0;c<n;c++){
                 printf("%4d",a[r][c]);
         
     }
    } 
    return 0; 
}