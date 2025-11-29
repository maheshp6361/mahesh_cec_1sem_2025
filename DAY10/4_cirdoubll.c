// DOUBLY CIRCULAR LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head, *newNode, *tail;

int main()
{
    head = NULL;
    int ch = 1;

    while (ch)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter a number: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL)
        {
            head = tail = newNode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = head;
            head->prev = newNode;
            tail = newNode;
        }

        printf("Do you want to continue (0|1): ");
        scanf("%d", &ch);
    }

    printf("\nElements (forward traversal):\n");
    struct Node *temp = head;
    if (head != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }

    printf("\nElements (reverse traversal):\n");
    temp = tail;
    if (tail != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->prev;
        } while (temp != tail);
    }

    printf("\n");
    return 0;
}