#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int total = 0;
    
    // Cute trick to get the compiler to stop warning about the
    // unused variable argc:
    (void)argc;

    for (char **p = argv + 1; *p != NULL; p++) {
        int value = atoi(*p);  // Use strtol() for better error handling
        printf("%p\t", (void *)p);
        printf("%p\t", (void *)*p);
        printf("%c\n", **p);
        total += value;
    }

    printf("%d\n", total);
}