#include <stdio.h>
#include <float.h>

int main()
{
    printf("%d\n", FLT_RADIX);

    printf("%e\n", 123456.0);  // Prints 1.234560e+05

    /* a couple of fun facts */

    /* You don’t have to write them with a single leading digit before the decimal point. Any number of numbers can go in front. */
    double x = 123.456e+3;  // 123456

    /* The plus can be left off the exponent, as it’s default, but this is uncommon in practice from what I’ve seen. */

    printf("%d\n", 1.2345e10 == 1.2345e+10);

    /* You can apply the F or L suffixes to E-notation constants: */

    float y = 1.2345e10F;
    long z = 1.2345e10L;

    printf("%e\n", y);
    printf("%e\n", y);
}
