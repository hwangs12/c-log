#include <stdio.h>

int main()
{
    // string initializer as pointer vs array
    char *c = "hello kid!";
    char v[] = "hello vid!";

    // pointer type cannot be modified
    // c[0] = 'c';
    v[0] = 'c';

    // printf("%s\n", c);
    printf("%s\n", v);

    return 0;
}