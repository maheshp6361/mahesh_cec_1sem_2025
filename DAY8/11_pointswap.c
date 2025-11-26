#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("Before swap :\n a=%d\n b=%d\n",a,b);
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("After swap :\n a=%d\n b=%d\n",a,b);
}