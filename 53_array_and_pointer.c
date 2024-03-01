#include <stdio.h>

int main()
{
    int a[6] = {33, 55, 11, 22, 35};
    int *p = a;

    printf("%d\n", *(p + 1));
    printf("%d\n", p[1]);
    printf("%d\n", *(p + 2));
    printf("%d\n", p[2]);

    printf("%p\n", p);
    printf("%p\n", p + 1);

    /**
     * 0x7ff7bb580200
     * 0x7ff7bb580204
     * notice one jump int pointer is sizeof int
     */
}