#include <stdio.h>
biggestNumber(int,int,int);
int biggestNumber(int a,int b,int c){
    int biggest;
if(a>b && a>c)
    biggest=a;
else if(b>a && b>c)
    biggest=b;
else
    biggest=c;
return biggest;
}
int main()
{
int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    int result=biggestNumber(a,b,c);
    printf("Biggest number is: %d\n",result);

    return 0;
}