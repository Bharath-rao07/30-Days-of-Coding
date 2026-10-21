
#include <stdio.h>

int power(int base, int exponent)
{
    int result = 1;
    int i;

    for(i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int num, original, temp;
    int digit, digits = 0, total = 0;

    printf("Enter a non-negative number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else
    {
        original = num;
        temp = num;

        // Count the digits
        do
        {
            digits++;
            temp = temp / 10;
        }
        while(temp > 0);

        // Calculate the sum of digit powers
        while(num > 0)
        {
            digit = num % 10;
            total = total + power(digit, digits);
            num = num / 10;
        }

        if(total == original)
        {
            printf("%d is an Armstrong number.\n", original);
        }
        else
        {
            printf("%d is not an Armstrong number.\n", original);
        }
    }

    return 0;
}
