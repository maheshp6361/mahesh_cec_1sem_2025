#include <stdio.h>
int main()
{
    int arr[5];
    int max = 0;
    printf("Enter a number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d is maximum", max);
}