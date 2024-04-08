#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = "34x90";  // "x" is not a valid digit in base 10!
    char *badchar;

    // Convert string s, a number in base 10, to an unsigned long int.

    unsigned long int x = strtoul(s, &badchar, 10);

    // It tries to convert as much as possible, so gets this far:

    printf("%lu\n", x);  // 34

    // But we can see the offending bad character because badchar
    // points to it!

    printf("Invalid character: %c\n", *badchar);  // "x"

    /* what if nothing goes wrong? */

    char *t = "3490";  // "x" is not a valid digit in base 10!
    char *badchr;

    // Convert string s, a number in base 10, to an unsigned long int.

    unsigned long int y = strtoul(t, &badchr, 10);

    // Check if things went well

    if (*badchr == '\0') {
        printf("Success! %lu\n", y);
    } else  {
        printf("Partial conversion: %lu\n", y);
        printf("Invalid character: %c\n", *badchr);
    }
}