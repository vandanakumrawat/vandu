#include<stdio.h>
#include<string.h>
int main(){
    char pali[100];
    int i,n,temp=0;
    printf("enter a string\n");
    gets(pali);
    n = strlen(pali);
        for(i=0; i<n/2; i++){
        temp=pali[i];
        pali[i]=pali[n-1-i];
        pali[n-1-i]=temp;
    }
    printf("%sthe string is a palindrome");
    return 0;
}