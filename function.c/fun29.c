#include<stdio.h>  
  
int biggest(int, int);  
  
int main()  
{  
    int a, b;  
  
    printf("Enter 2 integer numbers\n");  
    scanf("%d%d", &a, &b);  

    printf("Biggest of %d and %d is %d\n", a, b, biggest(a, b));  
  
    return 0;  
}  
   
int biggest(int x, int y)  
{  
    return( x>y?x:y );  
} 