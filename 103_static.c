/**
 * has two meanings:
 * 1. file scope
 * 2. block scope
 */

/**
 * BLOCK SCOPE 
 * static in block scope means 
 * single instance of variable shared between calls
*/

/**
 * static in block scope with an initializer will only be * initialized one time on program startup, not each time * the function is called.
 */

#include <stdio.h>

void counter(void)
{
    static int count = 1;  // This is initialized one time

    printf("This has been called %d time(s)\n", count);

    count++;
}

int main(void)
{
    counter();  // "This has been called 1 time(s)"
    counter();  // "This has been called 2 time(s)"
    counter();  // "This has been called 3 time(s)"
    counter();  // "This has been called 4 time(s)"
    /* notice that count is not assigned to 1 */
}

