#include <stdio.h>
int main()
{
    int num, sum = 0;
    int fact = 1;
    printf("Enter a number :\n");
    scanf("%d", &num);
    int orig = num;
    while (num != 0)
    {
        int digit = num % 10;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
        fact = 1;
    }
    if (orig == sum)
    {
        printf("%d is a strong number ", orig);
    }
    else
    {
        printf("%d is not a strong number ", orig);
    }
}