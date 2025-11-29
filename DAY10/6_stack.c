#include <stdio.h>

int stack[100];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int choice;
    while (1)
    {
        printf("Enter your choice:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid choice!!!\n");
            break;
        }
    }
}

void push()
{
    if (top >= 100)
    {
        printf("Stack is Full");
    }
    else
    {
        int n;
        printf("Enter a number:\n");
        scanf("%d", &n);
        top++;
        stack[top] = n;
        printf("%d element is pudhed\n", n);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("element poped is : %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}