#include <stdio.h>

struct car
{
    char *maple;
    char *syrup;
};

int main()
{
    struct car a = {.maple = "coco", .syrup = "nini"}, b;

    b = a;

    b.maple = "chocho"; // does not change struct property of a source;

    printf("I changed b maple. A maple is %s", a.maple);

    return 0;
}