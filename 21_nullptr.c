#include <stdio.h>

int main()
{
    // when a pointer doesn't point to anything.
    int *p;
    p = NULL;

    // then this can crash because there's nothing to deference from.
    *p = 12;
}