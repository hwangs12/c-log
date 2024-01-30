#include <stdlib.h>
#include <stdio.h>
int main()
{

    printf("%d, %c, %s \n", 400, 'c', "pay");
    printf("%f \n", 8.9);
    /* you should expect 6 decimals for float */
    printf("%f \n`", 9);
    /* compiler gives warning the type is int so use %d instead */
    /* it gives out 8.90000. so undefined behavior maybe? */
    return 0;
}