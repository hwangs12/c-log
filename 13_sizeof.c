#include <stdio.h>

int main()
{
    char a = 'c';
    size_t papa = -sizeof(a);
    // zu for unsigned size_t zd for signed
    printf("%zu\n", sizeof 3.14);
    printf("%zd\n", papa);
    return 0;
}