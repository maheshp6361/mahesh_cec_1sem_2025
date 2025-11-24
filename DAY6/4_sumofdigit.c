#include <stdio.h>
int main()
{
    int num, sum;
    printf("Enter a number :\n");
    scanf("%d", &num);
    sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}