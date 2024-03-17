#include <stdio.h>
#include <float.h>

int main()
{
    printf("%d\n", FLT_DIG);
    printf("%d\n", DBL_DIG);
    printf("%d\n", LDBL_DIG);
    printf("%d\n", FLT_DECIMAL_DIG);
    printf("%d\n", DBL_DECIMAL_DIG);
    printf("%d\n", LDBL_DECIMAL_DIG);
    printf("%d\n", DECIMAL_DIG);

    float flt1 = 0.12345f;
    float flt2 = 0.123456f;
    float flt3 = 0.1234567f;
    float flt4 = 0.12345678f;
    float flt5 = 0.123456789f;
    float flt6 = 0.1234567891f;

    // %f will only print up to 6 digits, at max.
    printf("%f\n", flt1);
    printf("%f\n", flt2);
    printf("%f\n", flt3);
    printf("%f\n", flt4);
    printf("%f\n", flt5);
    printf("%f\n", flt6);

    // if you specify number of decimals, it gets better but there are still some errors.
    printf("%.5f\n", flt1);
    printf("%.6f\n", flt2);
    printf("%.7f\n", flt3);
    printf("%.8f\n", flt4);
    printf("%.9f\n", flt5);
    printf("%.10f\n", flt6);
}