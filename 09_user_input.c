#include <stdio.h>

int main()
{
    /* some codes do not work as expected. How so? */

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
    /* issue with scanf is that everything after scan is ignored */
    
    char fullname[20];
    printf("Enter your full name: ");
    /* fgets does take space included input no need for ambersand */
    fgets(fullname, sizeof(fullname), stdin);
    printf("Your name is %s \n", fullname);
    /* issue with scanf is that everything after scan is ignored */
    return 0;
}