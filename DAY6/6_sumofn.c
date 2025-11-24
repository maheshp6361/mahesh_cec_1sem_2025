#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number :");
    scanf("%d", &n);
    while (n > 0)
    {
        sum += n;
        n--;
    }
    printf("Sum of numbers : %d", sum);
    // sum = n * (n + 1) / 2;
}