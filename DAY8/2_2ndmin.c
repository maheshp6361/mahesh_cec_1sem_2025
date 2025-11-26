#include <stdio.h>
int main()
{
    int arr[5];
    int min, secondmin;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = secondmin = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            secondmin = min;
            min = arr[i];
        }
        else if (arr[i] < secondmin && arr[i] != min)
        {
            secondmin = arr[i];
        }
    }
    printf("%d is second smallest ", secondmin);
}