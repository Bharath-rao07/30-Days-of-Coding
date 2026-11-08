// DAY 22 : CHECKING WHETHER THE GIVEN NUMBER IS PERFECT OR NOT 

#include<stdio.h>

int main(void)
{
    int num,i,sum=0;
    printf("Enter the number to check whether it is perfect or not :");
    if(scanf("%d",&num)!=1)
     {
        printf("Invalid input. Please enter the valid integer number .\n");
        return 1;
     }

    if (num<=0)
    {
        printf("Invalid input. Please enter a positive integer number .\n");

    } 
    else
    {
        for (i=1 ; i<num ; i++)
        {
            if(num % i ==0)
            {
                sum+=i;
            }
        }


        if(sum == num)
        {
            printf("The given number is a perfect number.\n");
        }
        else
        {
            printf("The given number is not a perfect number.\n");
        }
    }
    return 0;
}