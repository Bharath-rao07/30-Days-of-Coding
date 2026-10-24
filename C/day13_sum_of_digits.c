
#include <stdio.h>

int main(void)
{
    long long number;
    long long digit;
    long long digit_sum = 0;

    printf("Enter a number: ");

    if (scanf("%lld", &number) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    while (number != 0)
    {
        digit = number % 10;

        if (digit < 0)
        {
            digit = -digit;
        }

        digit_sum = digit_sum + digit;
        number = number / 10;
    }

    printf("Sum of digits = %lld\n", digit_sum);

    return 0;
}
