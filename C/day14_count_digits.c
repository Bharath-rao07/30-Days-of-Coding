
#include <stdio.h>

int main(void)
{
    long long number;
    int count = 0;

    printf("Enter an integer: ");

    if (scanf("%lld", &number) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (number == 0)
    {
        count = 1;
    }
    else
    {
        while (number != 0)
        {
            count++;
            number = number / 10;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
