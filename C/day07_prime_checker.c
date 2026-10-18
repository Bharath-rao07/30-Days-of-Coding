// day 07 : CHECKING THE GIVEN NUMBER IS PRIME OR NOT

#include<stdio.h>

int main()
{
    int i, num, is_prime = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    if ( num<2)
    {
        printf("%d is not a prime number .\n", num);
    }

    else
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                is_prime =0 ;
                break;
            }

        }
     if(is_prime==0)
     {
        printf("%d is not a prime number .\n", num);
     }
     else
     {
        printf("%d is a prime number . \n",num);
     }
    }
    return 0;
   
}