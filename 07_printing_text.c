#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{

    printf("%d, %c, %s \n", 400, 'c', "pay");
    printf("%f \n", 8.9);
    /* you should expect 6 decimals for float */
    printf("%f \n", 9);
    /* compiler gives warning the type is int so use %d instead */
    /* it gives out 8.90000. so undefined behavior maybe? */
    printf("%f \n", pow(2, 3));
    /* doesn't complain for the end value but we get correct decimal value */
    printf("%f \n", floor(35.444));
    return 0;
}