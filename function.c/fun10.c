#include<stdio.h>
void hollow_square();
void hollow_square(){
 int i,j;
 for(i=1; i<=9; i++){
    for(j=1; j<=9; j++){
      if(i==1||j==1||i==9||j==9||i==j||j==(9-i+1))
        printf("*");
      else
        printf(" ");
  
    }
   printf("\n");
 }

}

int main(){
 hollow_square();    
return 0;
}