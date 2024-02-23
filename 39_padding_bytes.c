#include <stdio.h>

struct foo
{
    int a;
    char b;
    int c;
    char d;
};

int main(void)
{
    printf("%zu\n", sizeof(int) + sizeof(char) + sizeof(int) + sizeof(char));
    printf("%zu\n", sizeof(struct foo));

    /**
     * Prints
     * 10
     * 16
     */

    // Safe conclusion to make: there can be at least 0 or more bytes added to struct
}