#include<stdio.h>
#include<string.h>
     void copystring(char s2[],char s1[]){
         int i;
        for( i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];}
        s2[i]='\0';
    }
    int main(){
        char s1[100],s2[100];
        printf("emter a string \n");
        scanf("%s",s1);
        copystring(s2,s1);
        printf("s2: %s \n",s2);
    }
