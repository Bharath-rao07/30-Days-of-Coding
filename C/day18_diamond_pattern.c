
#include <stdio.h>

int main() {
    int rows;
    int i, j;

    printf("Enter the number of rows for the top half: ");

    if (scanf("%d", &rows) != 1) {
        printf("Please enter a valid integer.\n");
        return 1;
    }

    if (rows <= 0) {
        printf("Please enter a positive number of rows.\n");
    } else {
        printf("\nDiamond Pattern:\n");

        // Top half, including the widest row
        for (i = 1; i <= rows; i++) {
            for (j = 0; j < rows - i; j++) {
                printf(" ");
            }

            for (j = 0; j < 2 * i - 1; j++) {
                printf("*");
            }

            printf("\n");
        }

        // Bottom half, without repeating the widest row
        for (i = rows - 1; i >= 1; i--) {
            for (j = 0; j < rows - i; j++) {
                printf(" ");
            }

            for (j = 0; j < 2 * i - 1; j++) {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}
