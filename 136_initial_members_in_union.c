#include <stdio.h>

struct a {
    int x;     //
    float y;   // Common initial sequence

    char *p;
};

struct b {
    int x;     //
    float y;   // Common initial sequence

    double *p;
    short z;
};

union foo {
    struct a sa;
    struct b sb;
};

int main()
{
    union foo coco;
    coco.sa.x = 3;
    printf("%d\n", coco.sb.x);

    coco.sa.y = 5.14;
    printf("%f\n", coco.sb.y);



}