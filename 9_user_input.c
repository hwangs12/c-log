#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    /* asking which type of data we want from user */
    scanf("%d", &age);
    printf("You are %d years old \n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    /* what is lf? */
    printf("Your gpa is %lf \n", gpa);
    
    char name[20];
    printf("Enter your name: ");
    /* no need for ambersand */
    scanf("%s", name);
    printf("Your name is %s \n", name);
    return 0;
}