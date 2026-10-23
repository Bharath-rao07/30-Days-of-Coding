
#include <stdio.h>

long long find_gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main()
{
    long long first, second, gcd, lcm;

    printf("Enter the first non-negative number: ");
    if (scanf("%lld", &first) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second non-negative number: ");
    if (scanf("%lld", &second) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (first < 0 || second < 0)
    {
        printf("Please enter non-negative numbers.\n");
    }
    else if (first == 0 || second == 0)
    {
        printf("LCM = 0\n");
    }
    else
    {
        gcd = find_gcd(first, second);
        lcm = (first / gcd) * second;

        printf("GCD = %lld\n", gcd);
        printf("LCM = %lld\n", lcm);
    }

    return 0;
}

