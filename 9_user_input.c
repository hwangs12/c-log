#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    /* asking which type of data we want from user */
    scanf("%d", &age);
    printf("You are %d years old \n", age);
    return 0;
}