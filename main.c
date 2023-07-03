#include <stdio.h>

int main()
{
    // variables
    float x;
    float y;
    char op;

    //start to linsten
    printf("Hello! This is a simple calculator in C.\n");
    printf("Choose a number: ");
    scanf("%f", &x);

    printf("\nOkay, now choose another number: ");
    scanf("%f", &y);

    printf("\nOkay, now choose an operator (+ for addition, - for subtraction, * for multiplication, and / for division): ");
    scanf(" %c", &op);

    // division
    if (op == '/')
    {
        if (y != 0)
        {
            x /= y;
            printf("The result is: %f\n", x);
        }
        else
        {
            printf("Error: Division by zero is not allowed!\n");
        }
    }
    // addition
    if (op == '+')
    {
            x += y;
            printf("The result is: %f\n", x);
       
    }
   // subtraction
    if (op == '-')
    {
        x -= y;
        printf("The result is: %f\n", x);

    }
    //multiplication
    if (op == '*')
    {
        x *= y;
        printf("The result is: %f\n", x);

    }
    
    return 0;
}
