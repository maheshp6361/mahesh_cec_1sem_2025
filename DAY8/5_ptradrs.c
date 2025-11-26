// TO PRINT VALUE OF A AND POINTER IN DIFFERENT WAYS
#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;

    // VALUE OF A

    printf("Value of a : %d\n",a); 
    printf("Value of a : %d\n",*p);
    printf("Value of a : %d\n",*(&a));
    printf("Value of a : %d\n",*(*(&p)));
    printf("Value of a : %d\n",*(&(*(&a))));

    // VALUE OF P

    printf("Value of p : %p\n",p);
    printf("Value of p : %p\n",&a);
    printf("Value of p : %p\n",*(&p));
    printf("Value of p : %p\n",&(*(&a)));
}