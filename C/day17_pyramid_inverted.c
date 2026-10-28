
#include <stdio.h>

int main(void)
{
    int rows;

    printf("Enter the number of rows: ");

    if (scanf("%d", &rows) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (rows <= 0)
    {
        printf("Please enter a positive number of rows.\n");
        return 1;
    }

    printf("\nPyramid Pattern:\n");

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\nInverted Pyramid Pattern:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
