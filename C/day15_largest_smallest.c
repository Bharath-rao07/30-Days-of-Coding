
#include <stdio.h>

#define MAX 100

int main(void)
{
    int n;
    int numbers[MAX];
    int largest, smallest;

    printf("How many numbers do you want to enter? ");

    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n <= 0 || n > MAX)
    {
        printf("Enter a count between 1 and %d.\n", MAX);
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);

        if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid input. Please enter integers.\n");
            return 1;
        }
    }

    largest = numbers[0];
    smallest = numbers[0];

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }

        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
