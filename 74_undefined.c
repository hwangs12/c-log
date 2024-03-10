#include <stdio.h>

int *func(void)
{
    int local = 5;
    return &local;
}

int main(void)
{
    printf("%p\n", (void *)func());
}