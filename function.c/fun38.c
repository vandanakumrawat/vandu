#include<stdio.h>
int main(){
    int cp, sp, amut;
    printf("enter cost price");
    scanf("%d",&cp);
    printf("enter selling price");
    scanf("%d",&sp);
    if (sp>cp){
        amut=sp-cp;
        printf("%d",amut);
    }
    else if(cp>sp){
        amut=cp-sp;
        printf("loss= %d",amut);

    }else{
        printf("no profit no loss");
    }
    return 0;
}
