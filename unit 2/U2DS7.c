#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, i, found = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for(i = 2; i <= num1 && i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            printf("Smallest Common Divisor = %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("No common divisor greater than 1 exists.\n");
    }

    return 0;
}
