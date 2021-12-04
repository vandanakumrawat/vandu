#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,n,temp;
    printf("enter string \n");
    gets(str);
    printf("befor reversing string in %s\n",str);
    n=strlen(str);
    for(i=0; i<n/2; i++){
        temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    printf(" revars of the string %s\n",str);
    
    return 0;
}