#include <stdio.h>

void *my_memcpy(void *dest, void *src, int byte_count)
{
    // Convert void*s to char*s. Q: how do I iterate over different types?
    char *s = src, *d = dest;

    // Now that we have char*s, we can dereference and copy them
    while (byte_count--)
    {
        *d++ = *s++;
    }

    // Most of these functions return the destination, just in case
    // that's useful to the caller.
    return dest;
}

int main()
{
    char a = 'c';
    char b;
    my_memcpy(&b, &a, 1);

    printf("%c\n", b);
}