#include<stdio.h>
void week(){
    int week;
printf("enter week number (1-7)");
scanf("%d",&week);
switch(week)
{
    case 1:
    printf("monday");
    break;
    case 2:
    printf("tuesday");
    break;
    case 3:
   printf("wednesday");
    break;
    case 4:
   printf("thuresday");
    break;
    case 5:
   printf("friday");
    break;
    case 6:
    printf("saturday");
    break;
    case 7:
   printf("sunday");
    break;
    default:
    printf("invalit input plz enter week no 1-7");
}

}

int main(){
week();
return 0;
}