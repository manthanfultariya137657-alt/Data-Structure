// Linked Lists
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*start, *newnode;

void main() {
    start = NULL;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter a value : ");
    scanf("%d", &newnode -> data);

    newnode -> next = NULL;
    start = newnode;

    printf("Start value is %d.", start -> data);

    getch();
}
