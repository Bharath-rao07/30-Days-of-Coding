// DAY 21 : FLOYDS TRIANGLE 

#include <stdio.h>

int main(void)
{
    int i,j,rows,num=1;
    printf("Enter the number of rows : ");
    if(scanf("%d",&rows)!=1)
    {
        printf("Invalid input. Please enter an integer .\n");
        return 1;
    }

    if(rows <= 0)
     {
        printf("please enter  the positive number of rows .\n");
     }
    else
    {
      printf(":Floyds triangle :\n");

      for(i=1;i<=rows;i++)
       {
            for(j=1;j<=i;j++)
            {
                printf("%d\t",num);

                num+=1;

            }
            printf("\n");
       }
    } 
    return 0;
}