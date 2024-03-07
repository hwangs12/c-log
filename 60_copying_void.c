#include <stdio.h>

int main()
{
    char a = 'c';
    void *p = &a;

    char *c = p;

    // printf("%c\n", *p); <- you cannot dereference void*
    printf("%c\n", *c);

    // printing memory address
    printf("%p\n", p);
    printf("%p\n", c);

    return 0;
}