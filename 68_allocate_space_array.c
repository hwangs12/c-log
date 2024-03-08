#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Allocate space for 10 ints
    int *p = malloc(sizeof(int) * 10);

    // Assign them values 0-45:
    for (int i = 0; i < 10; i++)
        p[i] = i * 5;

    // Print all values 0, 5, 10, 15, ..., 40, 45
    for (int i = 0; i < 10; i++)
        printf("%d\n", p[i]);

    /**
     * You can use calloc as well. It does two things:
     * 1. takes size of type you want in. and how many as argument.
     * 2. set all members to zero (built-in memset)
     *
     * Allocate space for 10 ints with calloc(), initialized to 0:
     *      int *p = calloc(10, sizeof(int));
     *
     * Allocate space for 10 ints with malloc(), initialized to 0:
     *      int *q = malloc(10 * sizeof(int));
     *      memset(q, 0, 10 * sizeof(int));   // set to 0
     *
     * both malloc and calloc need to be freed
     */

    // Free the space
    free(p);
}
