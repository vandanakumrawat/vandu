#include<stdio.h>
#include<string.h>
int main(){
    char st[50];
    int i,n,d=0;
    printf("enter the string\n");
    gets(st);
    n=strlen(st);
    for(i=0;st[i]; i++){
        if(st[i] ==' ')
        d++;
    }
    if(d)
    printf("in enter string %d word \n",d+1);
    else
    printf("in enter string 1 word \n");
    return 0;

}