#include<stdio.h>
void triangle();
void triangle(){
   int i,j;

for(i=1; i<=5; i++){
  for(j=1; j<=5; j++){
   if(i==1|| j==5|| i==j)
   printf("*");
   else
   printf(" ");  
 }
  printf("\n");
}

}
int main(){
 triangle();
return 0;
}