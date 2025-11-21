#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("Capital Letter");
    }
    else
    {
        printf("Small letter");
    }
    return 0;
}