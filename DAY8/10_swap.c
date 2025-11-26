#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    printf("Before swap: \n a=%d\n b=%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("After swap: \n a=%d\n b=%d \n",a,b);
}