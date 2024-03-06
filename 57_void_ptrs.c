/**
 * example of void
 * void *memcpy(void *s1, void *s2, size_t n);
 * This function copies n bytes of memory starting from address s2 into the memory starting at address s1.
 * what would it mean to take void params? it means it can take all kinds of types
 *
 * all of these work because of void * signature
 *
 * memcpy_int(int *a, int *b, int count);
 * memcpy_float(float *a, float *b, int count);
 * memcpy_double(double *a, double *b, int count);
 * memcpy_char(char *a, char *b, int count);
 * memcpy_unsigned_char(unsigned char *a, unsigned char *b, int count);
 *
 * Some limitations with void*;
 * 1. You cannot do pointer arithmatic
 * 2. You cannot dereference void *
 * 3. You cannot use arrow operator on void *
 * 4. You cannot use array notation because it is dereference as well.
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