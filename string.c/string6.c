#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[60],c[90];
    int i,n,n1,n2;
    printf("enter first string");
    gets(a);
    n1=strlen(a);
    printf("enter second string");
    gets(b);
    n2=strlen(b);
    for(i=0; i<(n1+n2); i++){
        if(i<n1)
        c[i]=a[i];
        else
        c[i]=b[i-n1];
    }
    printf("%s\n",c);

}