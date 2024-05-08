#include <stdio.h>

#define CAT(a, b) a ## b

int main()
{
    printf("%f\n", CAT(3.14, 1592));   // 3.141592
}
