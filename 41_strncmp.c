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
}