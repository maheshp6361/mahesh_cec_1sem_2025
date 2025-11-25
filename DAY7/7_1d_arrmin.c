#include <stdio.h>
int main()
{
    int arr[5];
    int min = 0;
    printf("Enter a number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d is minimum", min);
}