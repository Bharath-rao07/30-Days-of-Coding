
#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, next_term;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number of terms.\n");
    }
    else
    {
        printf("Fibonacci Series:\n");

        for (int i = 0; i < n; i++)
        {
            printf("%d ", a);

            next_term = a + b;

            a = b;
            b = next_term;
        }
    }

    return 0;
}
