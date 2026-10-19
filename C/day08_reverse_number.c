// day 08 : REVERSING THE GIVEN NUMBER

#include<stdio.h>

int main()
{

    int num,digit,rev=0,original;


    printf("Enter a non-negative number : ");
    scanf("%d",&num);

    if (num<0)
    {
     printf("Please enter the non-negative number ");
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
    }

 printf("The reverse of the %d  is %d .",num,rev);
 
 return 0;
      
}