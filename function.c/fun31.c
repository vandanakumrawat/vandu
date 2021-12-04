#include<stdio.h>
void alpphabet(char c){
    if((c>='a'&&c<='z')||c>='A'&&c<='Z')
    printf("%c is a alpphabet.",c);
   
    else
        printf("%c is not alpphabet.",c);
    
}
        int main(){ 
            char c;
    
 printf("enter a charecter");
    scanf("%c",&c);
    alpphabet(c);
    return 0;
}
