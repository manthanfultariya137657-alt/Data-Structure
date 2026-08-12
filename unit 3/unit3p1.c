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
        printf("\n2. Display");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create_ll();
            break;

        case 2:
            display();
            break;

        case 3:
            exit(0);

        default:
            printf("\nWrong choice.");
        }
    }

    return 0;
}
