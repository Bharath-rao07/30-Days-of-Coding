//# Day 11 : GREATEST COMMAN DIVISOR


#include <stdio.h>

int main()
{
    int a, b, remainder;

    printf("Enter the first non-negative number: ");
    if(scanf("%d", &a) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second non-negative number: ");
    if(scanf("%d", &b) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if(a < 0 || b < 0)
    {
        printf("Please enter non-negative numbers.\n");
    }
    else if(a == 0 && b == 0)
    {
        printf("GCD is undefined for two zeros.\n");
    }
    else
    {
        while(b != 0)
        {
            remainder = a % b;
            a = b;
            b = remainder;
        }

        printf("GCD = %d\n", a);
    }

    return 0;
}
