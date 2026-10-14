#include<stdio.h>

int main()
{
    int number; 

    printf("Enter a number : ");  //taking the input from the user
    scanf("%d",&number);

    // checking whether the given number is even or odd

if (number % 2==0)

   printf("The number is even\n");

else

   printf("the number is odd\n");


//  checking whether the number is positive or negative or zero 


if (number >0)
  
    printf("the number is positive\n");
else if (number <0)
    printf("the number is negative\n");
else
    printf("the number is zero\n");

    return 0;

  }


