#include <stdio.h>

int main()
{
    /* p is e in decimal floats (exponent) by 2 */
    double x = 0xa.1p3;

    printf("%a\n", x); // 0x1.42p+6
    printf("%f\n", x); // 80.500000
}