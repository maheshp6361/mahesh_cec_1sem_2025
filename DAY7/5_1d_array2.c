#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter a number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d value is : %d \n", i + 1, arr[i]);
    }
    printf("size of array: %d \n", sizeof(arr));
    printf("length of array: %d \n", (sizeof(arr) / sizeof(arr[0])));
}