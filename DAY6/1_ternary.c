#include <stdio.h>
int main()
{
    int a = 90;
    int b = 40;
    if (a > b)
    {
        printf("a is : %d \n", a);
    }
    else
    {
        printf("b is : %d \n", b);
    }
    (a > b) ? printf("a is : %d \b", a) : printf("b is : %d ", b);
    return 0;
}