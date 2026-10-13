#include<stdio.h>

int main()
{
    float num1,num2,result;
    char operator;


    printf("==== Simple Calculator ====\n");


    printf("Enter the first number : ");
    scanf("%f",&num1);

    printf("Enter the operator (+,-,*,/) : ");
    scanf(" %c",&operator);

    printf("Enter the second number : ");
    scanf("%f",&num2);

#include <stdio.h>

int main()
{
    float num1, num2, result;
    char operator;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (operator == '+')
    {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator == '-')
    {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator == '*')
    {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Error: Cannot divide by zero!\n");
        }
    }
    else
    {
        printf("Invalid operator!\n");
    }

    return 0;
}
