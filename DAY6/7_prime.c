#include <stdio.h>
int main()
{
    int num = 0;
    printf("Enter a number :");
    scanf("%d", &num);
    int isprime = 1;
    if (num <= 1)
    {
        isprime = 0;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        printf("It is a prime number \n");
    }
    else
    {
        printf("it is not a prime number \n");
    }
}