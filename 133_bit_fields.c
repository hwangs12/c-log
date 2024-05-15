#include <stdio.h>

struct foo {
    unsigned int a:5; // tells how many bits we ask the program to hold. in this case 5 bit
    unsigned int b:5;
    unsigned int c:3;
    unsigned int d:3;

    // The tradeoff is, of course, that the 5-bit fields can only hold values from 0-31 and the 3-bit fields can only hold values from 0-7. But life’s all about compromise, after all.
};

/* unnamed bit fields */
struct fee {
    unsigned char a:2;
    unsigned char :5;   // <-- unnamed bit-field!
    unsigned char b:1;
};

/* unsigned ints in struct */
struct fii {
    unsigned int a:1;
    unsigned int b:2;
    unsigned int c:3;
    unsigned int d:4;
};

/* bit splitting */
struct fuu {
    unsigned int a:1;
    unsigned int b:2;
    unsigned int :0;   // <--Zero-width unnamed bit-field
    unsigned int c:3;
    unsigned int d:4;
};


int main(void)
{
    printf("%zu\n", sizeof(struct foo));
    printf("%zu\n", sizeof(struct fee));
    printf("%zu\n", sizeof(struct fii));
    printf("%zu\n", sizeof(struct fuu));
}