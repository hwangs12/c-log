#include <stdio.h>
#include <string.h>

void *my_memcpy(void *dest, void *src, int byte_count)
{
    // Convert void*s to char*s. Q: how do I iterate over different types?
    char *s = src, *d = dest;

    // Now that we have char*s, we can dereference and copy them
    while (byte_count--)
    {
        printf("a");
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

    int isrc[] = {10, 20, 30, 40, 50};
    int n = sizeof(isrc) / sizeof(isrc[0]);
    int idest[n], i;
    my_memcpy(idest, isrc, sizeof(isrc));
    printf("\nCopied array is ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", idest[i]);
    }

    // memcpy works on float but my_memcpy can't
    float f = 1.1;
    float g;

    memcpy(&g, &f, 1);
    printf("%f\n", g);
    // my_memcpy(&b, &a, 1);

    // printf("%c\n", b);
}

// is copy to argument as int[] then to char* preserve the ints in the array?