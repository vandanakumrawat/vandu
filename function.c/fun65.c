//	Reverse a Number
#include <stdio.h>
int main()
{
    int num, reverse = 0;
    printf("Enter any number to get the reverse number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    printf("Reverse = %d", reverse);
    return 0;
}