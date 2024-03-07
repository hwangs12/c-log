#include <stdio.h>

/* Q: Can int arrays be copied to char arrays? */

int main()
{

    int src[] = {1, 2, 3, 4, 5};
    int dest[5];

    void *source = src;
    void *destin = dest;
    char *chsource = source;
    char *chdestin = destin;

    // this jump by four is due to char array is not jumping at 1 interval while int memory jumps by four.
    for (int i = 0; i < 20; i += 1)
    {
        *chdestin++ = *chsource++;
    }

    for (int i = 0; i < 5; i += 1)
    {
        printf("%d\n", dest[i]);
    }
}