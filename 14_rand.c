#include <stdio.h>   // For printf
#include <stdlib.h>  // For rand

int main(void)
{
    int r;


    do {
        r = rand() % 100; // Get a random number between 0 and 99
        // if you place srand here with r as argument, you will never get value 37
        srand(r);
        printf("%d\n", r);
    } while (r != 37);    // Repeat until 37 comes up

    // notice same sequence repeats at each execution
}