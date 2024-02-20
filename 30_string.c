#include <stdio.h>

int main()
{
    // string initializer as pointer vs array
    char *c = "hello kid!";
    char v[] = "hello vid!";

    char z[12] = "hello vid!";

    // pointer type cannot be modified
    // c[0] = 'c'; this will crash the program at runtime
    v[0] = 'c';

    // printf("%s\n", c);
    printf("%s\n", v);

    size_t stringlen = sizeof(v);
    int leng = stringlen / sizeof(v[0]);

    printf("length of string is %d\n", leng);

    for (int i = 0; v[i]; i++)
    {
        printf("%zu \n", sizeof(v[i]));
    }
    printf("%zu \n", sizeof(v)); // number of char is inclusive of '\0' terminating char.
    printf("%zu \n", sizeof(z)); // size of z is size defined in the array size.
    printf("%zu \n", sizeof(c)); // size of c is undefined when it is initialized as pointer.

    return 0;
}