#include <stdio.h>

void increment(int *p) // note that it accepts a pointer to an int. here, * is a type pointer.
{
    *p = *p + 1; // add one to the thing p points to. here, * is a operator to dereference from the pointer.
}

int main(void)
{
    int i = 10;
    int *j = &i; // note the address-of; turns it into a pointer to i

    printf("i is %d\n", i);       // prints "10"
    printf("i is also %d\n", *j); // prints "10"

    increment(j); // j is an int*--to i. j copied into p as a pointer type.

    printf("i is %d\n", i); // prints "11"!

    /**
     * Every value passed into function gets copied into parameter. EVERY SINGLE ARGUMENT gets copied into parameters and the function uses a copy of the argument. The function will get a copy of the pointer.
     */

    // trying out the idea of copy from above. When it is a copy. it is literally just a copy. Nothing of memory address of memory address.
    // always think of root value that they are pointing at.
    int *co = j;

    printf("i and co are same? might be cuz it is %d\n", *co);
    printf("memory address of j? is %p \n", (void *)co);
    printf("memory address of j? is %p \n", (void *)j);
}