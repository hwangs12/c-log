#include <stdio.h>

int main()
{
    // you can declare multiple variables using comma
    for (int i = 0, j = 999; i < 10; i++, j--) {
        printf("%d, %d\n", i, j);
    }
}