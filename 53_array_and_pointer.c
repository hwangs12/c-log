#include <stdio.h>

int main()
{
    int a[6] = {33, 55, 11, 22, 35};
    int *p = a;

    printf("%d\n", *(p + 1));
    printf("%d\n", p[1]);
    printf("%d\n", *(p + 2));
    printf("%d\n", p[2]);
}