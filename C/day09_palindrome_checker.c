// day 09 : THE PALINDROME CHECKER 


#include<stdio.h>

int main()
{
    int num, original,rev=0,digit;


    printf("Enter a non-negative number :");
    scanf("%d",&num);

    if(num<0)
    {
        printf("Please enter a non-negative number !!.\n");
    }

    else
    {
        original=num;

        while(num>0)
        {
            digit=num%10;
            rev=rev*10+digit;
            num=num/10;
        }
        if(rev==original)
        {
        printf("The entered number is  a palindrome.\n ");
        }
        else
        {
        printf("The entered number is not a prime number.\n ");
        }
    }
    return 0;
}

