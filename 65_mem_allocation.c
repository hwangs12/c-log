#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Allocate space for a single int (sizeof(int) bytes-worth):

    int *p = malloc(sizeof(int));

    *p = 12; // Store something there

    printf("%d\n", *p); // Print it: 12

    free(p); // All done with that memory

    *p = 3490;          // ERROR: undefined behavior! Use after free()!
    printf("%d\n", *p); // Print it: 3490

    // if there is any error allocating memory you get NULL
    int *coco = malloc(sizeof(int) * 10);
    if (coco == NULL)
    {
        printf("error allocating the memory");
    }
}