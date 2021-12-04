#include<stdio.h>
int main(){
  int no1,no2;
  int *p1,*p2;
  printf("enter first number\n");
  scanf("%d",&no1);
  printf("enter sacond number \n");
  scanf("%d",&no2);
  p1 = &no1;
  p2 = &no2;
  if(*p1>*p2){
    printf("maximum number is %d",*p1);
  } else{
    printf("maximum number is %d",*p2);
  }
  return 0;
}