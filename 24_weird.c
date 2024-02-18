#include <stdio.h>

/* passing array to function is passing a pointer to first element of the array */

void foo(int x[12])
{
    // you can still set and get the value from array indices.
    x[1] = 3;
    printf("%zu\n", sizeof x);    // 8?! What happened to 48?
    printf("%zu\n", sizeof(int)); // 4 bytes per int

    printf("%zu\n", sizeof x / sizeof(int)); // 8/4 = 2 ints?? WRONG.

    // you can still access indices?
    printf("%d\n", x[1]);
}

int main()
{
    int a[12];
    foo(a);

    // you can get the size of array without declaring
    printf("%zu\n", sizeof(double[4]));

    return 0;
}