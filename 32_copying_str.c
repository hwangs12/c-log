#include <stdio.h>

int main(void)
{
    char s[] = "Hello, world!";
    char *t;

    // This makes a copy of the pointer, not a copy of the string!
    t = s;

    // We modify t. how can we modify if modifying from initialization of pointer type cause program to crash?
    t[1] = 'z';

    // But printing s shows the modification!
    // Because t and s point to the same string!

    printf("%s\n", s); // "zello, world!"
}