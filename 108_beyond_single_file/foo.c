// File foo.c

#include <stdio.h>
/* needing to type in the prototype every time you want to use a function is not maintainable */
// int add(int, int);  // Add the prototype

// you can do the same thing as above from header file

int main(void)
{
    printf("%d\n", add(2, 3));  // 5!
}