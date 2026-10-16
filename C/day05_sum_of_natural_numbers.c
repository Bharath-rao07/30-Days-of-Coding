// day 05 : SUM OF NATURAL NUMBERS
#include<stdio.h>

int main()
{
    int num, i, tot=0;

    printf("Enter the positive number : ");
     scanf("%d",&num);

    if (num<0)
     {
        printf("Please enter a positive number \n");
    
     }
     else
     {
        for(i=0;i<=num;i++)
        {
            tot=tot+i;
        }
        printf("The sum of numbers from 1 to %d is: %d\n", num, tot);
     }
}
