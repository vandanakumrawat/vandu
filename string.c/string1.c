//string compair
#include<stdio.h>
#include<string.h>
int main(){
char s1[100],s2[100];
int x;
printf("enter 1st string \n");
scanf("%s",s1);
printf("enter 2nd string\n");
scanf("%s",s2);
x = strcmp(s1,s2);
if(x==0)
printf("%s equals to %s\n",s1,s2);
else if(x>0)
printf("%s greter then %s\n",s1,s2);
else 
printf("%s less then %s \n ",s1,s2);
return 0;
}