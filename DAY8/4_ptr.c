//TO PRINT VALUE OF NUM USING POINTER
//TO PRINT VALUE OF POINTER USING NUM
#include<stdio.h>
int main()
{
    int num=100;
    int *ptr=&num;
    printf("Vlaue of num : %d\n",num);
    printf("Value of num using ptr : %d\n",*ptr);
    printf("Value of ptr : %p\n",ptr);
    printf("Value of ptr using num : %p\n",&num);
}