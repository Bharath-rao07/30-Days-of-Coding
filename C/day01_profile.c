#include<stdio.h>

int main()
{
    char name[50];
    int age;
    char course[30];
    char goal[50];


    printf("==== MY PROFILE ====\n");



    printf(" Enter your name :");
    scanf("%s", name);

    printf(" Enter your age : ");
    scanf("%d", &age);

    printf(" Enter your course : ");
    scanf("%s", course);

    printf(" Enter your goal : ");
    scanf("%s", goal);



    printf("\n==== PROFILE SUMMARY ====\n");

    printf(" Name : %s\n", name);
    printf(" Age : %d\n", age); 
    printf(" Course : %s\n", course);
    printf("Career Goal : %s\n", goal);


    return 0;
    
}