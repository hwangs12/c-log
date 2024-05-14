#include <stdio.h>

struct foo {
    unsigned int a:5; // tells how many bits we ask the program to hold. in this case 5 bit
    unsigned int b:5;
    unsigned int c:3;
    unsigned int d:3;

    // The tradeoff is, of course, that the 5-bit fields can only hold values from 0-31 and the 3-bit fields can only hold values from 0-7. But life’s all about compromise, after all.
};

int main(void)
{
    printf("%zu\n", sizeof(struct foo));
}