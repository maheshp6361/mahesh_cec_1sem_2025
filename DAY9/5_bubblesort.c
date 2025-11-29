#include <stdio.h>
int main()
{
    int arr[50], pos = 0, ele = 0, size = 0;
    printf("Enter a size of array: \n");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Array out of bound\n");
    }
    else
    {
        printf("Enter elements: \n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array Elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}