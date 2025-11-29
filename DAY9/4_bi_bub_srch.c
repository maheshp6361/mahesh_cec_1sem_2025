#include <stdio.h>

int main()
{
    int arr[50], size = 0, ele = 0;

    printf("Enter the size of the array: \n");
    scanf("%d", &size);

    if (size > 50)
    {
        printf("Array out of bound\n");
        return 0;
    }

    printf("Enter elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
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
    printf("Enter an element to search: \n");
    scanf("%d", &ele);
    int left = 0, right = size - 1, mid, pos = -1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == ele)
        {
            pos = mid;
            break;
        }
        else if (ele > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (pos != -1)
        printf("Element %d found at position %d \n", ele, pos + 1, pos);
    else
        printf("Element %d not found in the array\n", ele);

    return 0;
}
