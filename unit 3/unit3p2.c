#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *start = NULL, *newnode;

void create_ll()
{
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = start;
    start = newnode;
}

void insert_beginning()
{
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = start;
    start = newnode;

    printf("\nNode inserted at beginning.");
}

void insert_end()
{
    struct node *ptr;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    // If list is empty
    if (start == NULL)
    {
        start = newnode;
        printf("\nNode inserted at end.");
        return;
    }

    ptr = start;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = newnode;

    printf("\nNode inserted at end.");
}

void display()
{
    struct node *ptr;

    if (start == NULL)
    {
        printf("\nList is empty.");
        return;
    }

    printf("\nLinked List:\n");

    for (ptr = start; ptr != NULL; ptr = ptr->next)
    {
        printf("%d ", ptr->data);
    }

    printf("\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n\n1. Create");
        printf("\n2. Insert at Beginning");
        printf("\n3. Insert at End");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create_ll();
            break;

        case 2:
            insert_beginning();
            break;

        case 3:
            insert_end();
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);

        default:
            printf("\nWrong choice.");
        }
    }

    return 0;
}
