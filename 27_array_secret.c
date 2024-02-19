#include <stdio.h>

int main()
{
    // pointer to array means pointer to first element of array.
    int a[10];
    int *p;

    p = &a[0]; // this is what it means to point to an array

    // as a shorthand you can do this.
    p = a; // a little different from actual integer value is assigned because you will use &a not a itself.
    // so you know above is pointer to array.

    int i = 0;
    int *q = &i;

    printf("%d is the number i pointed at", *q);
}