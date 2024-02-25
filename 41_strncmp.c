#include <stdio.h>
#include <string.h>

// int strncmp(const char *s1, const char *s2, size_t n);
// similar to strcmp. You specify num chars to compare

int main()
{
    int popo = strncmp("hallo", "hello", 1); // 0 because we are only comparing first characters of hallo and hello.
    printf("%d\n", popo);

    // what about 0?
    int pipi = strncmp("hallo", "hello", 0); // obviously. 0
    printf("%d\n", pipi);

    // how about this?
    int papa = strncmp("hello\0coco", "hello\0titi", 8);
    printf("%d\n", papa); // prints 0. it's strncmp. doesn't check anything after \0.

    // oh is there a way to check?
    int pypy = memcmp("hello\0coco", "hello\0titi", 8); // notice how c is less than t.
    printf("%d\n", pypy);                               // prints negative
}