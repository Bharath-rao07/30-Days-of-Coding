#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");

    if (scanf("%d", &rows) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (rows <= 0)
    {
        printf("Please enter a positive number of rows.\n");
    }
    else
    {
        printf("\nButterfly Pattern:\n");

        // Upper half
        for (i = 1; i <= rows; i++)
        {
            // Left stars
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }

            // Middle spaces
            for (j = 1; j <= 2 * (rows - i); j++)
            {
                printf(" ");
            }

            // Right stars
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }

        // Lower half
        for (i = rows - 1; i >= 1; i--)
        {
            // Left stars
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }

            // Middle spaces
            for (j = 1; j <= 2 * (rows - i); j++)
            {
                printf(" ");
            }

            // Right stars
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}