//power culculation 3^2.....
#include<stdio.h>
void culcu(){
    int n,p,f=1;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter power");
    scanf("%d",&p);
    while (p!=0)
    {
        f=n*f;
        p--;
        }
    printf("%d",f);
        
}
int main(){
    culcu();
    
        return 0;
}