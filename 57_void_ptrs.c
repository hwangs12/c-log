/**
 * example of void
 * void *memcpy(void *s1, void *s2, size_t n);
 * This function copies n bytes of memory starting from address s2 into the memory starting at address s1.
 * what would it mean to take void params? it means it can be various things
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Goats!";
    char t[100];

    memcpy(t, s, 7); // Copy 7 bytes--including the NUL terminator!

    printf("%s\n", t); // "Goats!"

    int a[] = {11, 22, 33};
    int b[3];

    memcpy(b, a, 3 * sizeof(int)); // Copy 3 ints of data

    printf("%d\n", b[1]); // 22
}