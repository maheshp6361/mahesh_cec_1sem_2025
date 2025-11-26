// Changing the value of a using pointer

#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    printf("Before change : %d\n",a);
    *ptr=20;
    printf("After change :%d\n",a);
    (*ptr)++;
    printf("After increment : %d\n",a);
}