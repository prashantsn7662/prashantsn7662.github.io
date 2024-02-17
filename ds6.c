#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertAtBeginning(struct Node *head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newNode->data = value;
    newNode->next = head;

    head = newNode;

    printf("Element %d inserted at the beginning.\n", value);

    return head;
}

struct Node *deleteElement(struct Node *head, int value)
{
    if (head == NULL)
    {
        printf("List is empty. Cannot delete element.\n");
        return head;
    }

    if (head->data == value)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        printf("Element %d deleted from the list.\n", value);
        return head;
    }

    struct Node *current = head;
    struct Node *prev = NULL;

    while (current != NULL && current->data != value)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
    {
        printf("Element %d not found in the list.\n", value);
        return head;
    }

    prev->next = current->next;
    free(current);
    printf("Element %d deleted from the list.\n", value);

    return head;
}

void displayList(struct Node *head)
{
    printf("Linked List: ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void freeList(struct Node *head)
{
    struct Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    struct Node *head = NULL;

    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 10);

    displayList(head);

    head = deleteElement(head, 20);

    displayList(head);

    freeList(head);

    return 0;
}