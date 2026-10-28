#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
} *start = NULL, *newnode;

void insert_start() {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->prev = NULL;
    newnode->next = start;

    if (start != NULL) {
        start->prev = newnode;
    }
    start = newnode;
}

void insert_end(){
    struct node *ptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    ptr = start;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->prev = ptr;
}

void display() {
    struct node *ptr;
    for (ptr = start; ptr != NULL; ptr = ptr->next) {
        printf("%d ", ptr->data);
    }
}

void main() {
    int ch;
    while(1) {
        printf("\n------ Menu ------");
        printf("\n1.Insert at start");
        printf("\n2.Insert at end");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
        case 1:
            insert_start();
            break;

        case 2:
            insert_end();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Wrong Choice! Choose Between (1-4).");
        }
    }
    getch();
}
