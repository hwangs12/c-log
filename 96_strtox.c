#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = "3490";

    // Convert string s, a number in base 10, to an unsigned long int.
    // NULL means we don't care to learn about any error information.

    unsigned long int x = strtoul(s, NULL, 10);

    printf("%lu\n", x);  // 3490

    char *k = "101010";  // What's the meaning of this number?

    // Convert string s, a number in base 2, to an unsigned long int.

    unsigned long int y = strtoul(k, NULL, 2);

    printf("%lu\n", y);  // 42

    // what's with the NULL in there?

    /* it helps us figure out if an error occurred in the processing of the string. it's a pointer to a pointer to a char, which sounds scary, but isn't once you wrap your head around it. */

    /* let's do an example where we feed in a deliberately bad number, and we'll see how strtol() lets us know where the first invalid digit is */

    /* in the next c file... */
}