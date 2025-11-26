#include <stdio.h>
int main()
{
    int arr[5];
    int max, secondmax;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = secondmax = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            secondmax = max;
            max = arr[i];
        }
        else if (arr[i] > secondmax && arr[i] != max)
        {
            secondmax = arr[i];
        }
    }
    printf("%d is second largest ", secondmax);
}