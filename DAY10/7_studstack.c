// STUDENT MANAGEMENT SYSTEM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Student
{
    int id;
    char name[50];
    int age;
    float marks;
};

struct Student stack[MAX];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int choice;
    while (1)
    {
        printf("\n--- Student Management System (Stack) ---\n");
        printf("1. Push (Add Student)\n");
        printf("2. Pop (Remove Student)\n");
        printf("3. Display Students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
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
        default:
            printf("Invalid choice!!!\n");
        }
    }
}

void push()
{
    if (top >= MAX - 1)
    {
        printf("Stack is Full!\n");
    }
    else
    {
        struct Student s;
        printf("Enter Student ID: ");
        scanf("%d", &s.id);
        printf("Enter Student Name: ");
        scanf("%s", s.name);
        printf("Enter Age: ");
        scanf("%d", &s.age);
        printf("Enter Marks: ");
        scanf("%f", &s.marks);

        top++;
        stack[top] = s;
        printf("Student %s (ID: %d) pushed onto stack.\n", s.name, s.id);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        struct Student s = stack[top];
        printf("Popped Student: ID: %d | Name: %s | Age: %d | Marks: %.2f\n",
               s.id, s.name, s.age, s.marks);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        printf("\n--- Students in Stack ---\n");
        for (int i = top; i >= 0; i--)
        {
            printf("ID: %d | Name: %s | Age: %d | Marks: %.2f\n",
                   stack[i].id, stack[i].name, stack[i].age, stack[i].marks);
        }
    }
}