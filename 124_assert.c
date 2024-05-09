#include <stdio.h>
#include <stdlib.h>

#define ASSERT(c, m) \
do { \
    if (!(c)) { \
        fprintf(stderr, __FILE__ ":%d: assertion %s failed: %s\n", \
                        __LINE__, #c, m); \
        exit(1); \
    } \
} while(0)

int main()
{
    int x = 30;

    ASSERT(x < 20, "x must be under 20");
}