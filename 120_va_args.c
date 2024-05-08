#include <stdio.h>

// Combine the first two arguments to a single number,
// then have a commalist of the rest of them:

#define X(a, b, ...) (10*(a) + 20*(b)), __VA_ARGS__

#define Y(...) #__VA_ARGS__


int main(void)
{
    printf("%d %f %s %d\n", X(5, 4, 3.14, "Hi!", 12));

    //  you can stringify va args by putting # in front of it.

    printf("%s\n", X(1,2,3));  // Prints "1, 2, 3"
}