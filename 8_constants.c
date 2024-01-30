#include <stdio.h>

int main()
{
    /* one way to create constant */
    const int num = 5;
    printf("%d \n", num);
    /* compilcation error since you put num as constant */
    num = 8;
    printf("%d \n", num);

    return 0;
}