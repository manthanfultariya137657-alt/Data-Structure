#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Create a linked list
struct Node* create() {
    struct Node *head = NULL, *temp = NULL, *newNode;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head;
}

// Display linked list
void display(struct Node *head) {
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Merge two linked lists
struct Node* merge(struct Node *head1, struct Node *head2) {
    struct Node *temp;

    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;

    temp = head1;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = head2;

    return head1;
}

int main() {
    struct Node *head1, *head2, *head3;

    printf("\nCreate First Linked List\n");
    head1 = create();

    printf("\nCreate Second Linked List\n");
    head2 = create();

    printf("\nFirst Linked List:\n");
    display(head1);

    printf("Second Linked List:\n");
    display(head2);

    // Merge
    head3 = merge(head1, head2);

    printf("\nAfter Merging:\n");
    display(head3);

    return 0;
}
