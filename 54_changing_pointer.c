#include <stdio.h>

int main()
{
    int a[] = {11, 22, 33, 44, 55, 999}; // Add 999 here as a sentinel

    // int *p = a is equivalent to int *p = &a[0] so if you don't want to use default you can always pointer to point to certain index in array.

    int *p = &a[1]; // p points to the 11

    while (*p != 999)
    {                       // While the thing p points to isn't 999
        printf("%d\n", *p); // Print it
        p++;                // Move p to point to the next int!
    }

    return 0;
}