
#include <stdio.h>

int main(void) {
    int rows;

    printf("Enter the number of rows: ");

    if (scanf("%d", &rows) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (rows <= 0) {
        printf("Please enter a positive number of rows.\n");
        return 0;
    }

    printf("\nPattern 1: Star Triangle\n");

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPattern 2: Number Triangle\n");

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\nPattern 3: Repeated-Number Triangle\n");

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
