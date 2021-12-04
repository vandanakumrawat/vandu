#include<stdio.h>
void whil(){
    int a,b,c,n;
    a=-1;
    b=1;
    printf("enter limit");
    scanf("%d",&n);
    while (n!=0){
   c=a+b;
   printf("%d,c");
   a=b;
   b=c;
   n--;
}
}

int main(){
    
    whil();

}
