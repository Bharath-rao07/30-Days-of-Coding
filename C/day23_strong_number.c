//DAY 23 : CHECKING STORNG NUMBER 


#include <stdio.h>

int main()
{
    int number, original, digit;
    int factorial, sum = 0;
    int i;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    if (number < 0)
    {
        printf("Please enter a non-negative number.");
    }
    else
    {
        while (number > 0)
        {
            digit = number % 10;

            factorial = 1;

            for (i = 1; i <= digit; i++)
            {
                factorial = factorial * i;
            }

            sum = sum + factorial;

            number = number / 10;
        }

        if (sum == original)
        {
            printf("%d is a Strong Number.\n", original);
        }
        else
        {
            printf("%d is not a Strong Number.\n", original);
        }
    }

    return 0;
}


