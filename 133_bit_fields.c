#include <stdio.h>

struct foo {
    unsigned int a:5; // tells how many bits we ask the program to hold. in this case 5 bit
    unsigned int b:5;
    unsigned int c:3;
    unsigned int d:3;
};

int main(void)
{
    printf("%zu\n", sizeof(struct foo));
}