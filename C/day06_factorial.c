// day 06 : FACTORIAL NUMBER 

#include<stdio.h>

int main()
{
    int n,i, fact=1;

    printf("Enter a number to find the factorial: ");
    scanf("%d",&n);

    if (n<0)
      {
        printf(" Please enter a positive number to find the factorial \n");
      }
    else 
     {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("The factorial of the number %d is :%d \n",n,fact);
     } 
 return 0;
}