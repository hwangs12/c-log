#include <stdio.h>

/**
 * Pointer is a variable that holds address.
 *
 * Also mean the same thing here:
 *
 * - Index into memory
 * - Address
 * - Location
 */

int main()
{
    int i;

    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);

    // %p expects the argument to be a pointer to void
    // so we cast it to make the compiler happy.

    // there's something called pointer type. If you want to save the address to a var.
    int j;  // j's type is "int"
    int *p; // p's type is "pointer to an int", or "int-pointer"

    p = &j; // p is assigned the address of i--p now "points to" i

    /* !IMPORTANT */

    // operator for dereferencing is *. Now, don’t get this confused with the asterisk you used in the pointer declaration, earlier. They are the same character, but they have different meanings in different contexts

    j = 10;  // i is now 10
    *p = 20; // the thing p points to (namely i!) is now 20!!

    printf("i is %d\n", j);  // prints "20"
    printf("i is %d\n", *p); // "20"! dereference-p is the same as i!
}