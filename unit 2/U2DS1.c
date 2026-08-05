#include<stdio.h>
#include<conio.h>
#define MAX 10

int stack[10];
int top=-1;

//Function to push an element into stack

void push()
{
    int val;
    if(top==MAX - 1)
    {
        printf("\n Stack overflow! Cannot insert element.");
    }
    else
    {
        printf("Enter element to push.");
        scanf("%d",&val);
        top++;
        stack[top] = val;
        printf("Inserted successfully\n");
    }
}

//Function to pop element from stack
void pop()
{
    if(top==-1)
    {
        printf("\nStack underflow ! Stack is empty\n");
    }
    else
    {
        printf("Deleted element is:%d\n",stack[top]);
        top--;
    }
}
void peek()

{
    if(top == -1)

    {
        printf("\n Stack isempty.\n");
    }
    else
    {
        printf("fopmost element is %d",stack[top]);
    }
}

void update()
{
    int x;

    if (top == -1)
    {
        printf("\nStack is empty.\n");
        return;
    }

    printf("Current top element = %d\n", stack[top]);
    printf("Enter new value: ");
    scanf("%d", &x);

    stack[top] = x;

    printf("Top element updated successfully.\n");

}

//Function to display stack elements
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack is empty.\n");
    }
    else
    {
        printf("\nStack elements are:");
        for(i = top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

//Main function
void main()
{
    int choice;
    while(1)
    {
        printf("\n---STACK MENU---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
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
                printf("Program terminated.\n");
                exit(0);
                default:
                    printf("\nInvalid choice. Please enter a valid option.\n");
        }
    }
}
