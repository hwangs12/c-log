#include <stdio.h>

int main()
{
    printf("%s \n", __DATE__);
    printf("%s \n", __TIME__);
    printf("%s \n", __FILE__);
    printf("%d \n", __LINE__);
    printf("%s \n", __func__);
    printf("%d \n", __STDC__);
    printf("%d \n", __STDC_HOSTED__);
    printf("%ld\n", __STDC_VERSION__);


}