/* This is a keyword to hint to the compiler that this variable is frequently-used, and should be made as fast as possible to access. The compiler is under no obligation to agree to it. */

#include <stdio.h>

int main(void)
{
    register int a;   // Make "a" as fast to use as possible.

    for (a = 0; a < 10; a++)
        printf("%d\n", a);

    /* You can’t take the address of a register: */
    register int b;
    int *p = &b;    // COMPILER ERROR! Can't take address of a register
}
