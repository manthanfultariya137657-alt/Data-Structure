#include<stdio.h>
#include<conio.h>

#define MAX 10

int main()
{
    {
    char str[MAX] = "Drashya";
    char stack[MAX];
    int top = -1;
    int i;

    printf("Non Reversed : %s\n", str);

    for(i = 0; i < strlen(str); i++)
        stack[top++] = str[i];
    }

    for(i=0; top>=0; i++)
    {
        str[i] = stack[top--];
    }
    printf("Reversed : %s\n", str);

    return 0;
}
