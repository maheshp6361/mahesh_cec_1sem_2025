#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[] = "pawan";
    char last_name[] = "gowda";
    char another_name[] = "pawan";
    char other_name[] = "pawan";
    printf("length of first_name : %d\n", strlen(first_name));
    printf("full name :%s\n", strcat(first_name, last_name));
    printf("%d\n", strcmp(other_name, another_name));
    if (strcmp(other_name, another_name) == 0)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }
    printf("All the strings are: %s %s %s", first_name, last_name, another_name);
}