///gretest number among the given three number.
#include<stdio.h>
int main(){
    int num1,num2,num3;
    int *p1,*p2,*p3;
    printf("enter fast number");
    scanf("%d",&num1);
     printf("enter second number");
    scanf("%d",&num2);
     printf("enter third number");
    scanf("%d",&num3);
    p1 =&num1;
      p2 =&num2;
        p3 =&num3;
        if(*p1>*p2){
            if(*p1>*p3)
        {
            printf("%d is the largest number",*p1);
         } else
         {
           printf("%d is the largest number",*p2);  
        } 
        }else
         {
             if(*p2>*p3){
                  printf("%d is the largest number",*p2);

             }
             else{
                  printf("%d is the largest number",*p3);
             }
        }

return 0;        
}
