#include <stdio.h>

int main()
{
    const int num = 5;
    printf("%d \n", num);
    /* compilcation error since you put num as constant */
    num = 8;
    printf("%d \n", num);

    return 0;
}