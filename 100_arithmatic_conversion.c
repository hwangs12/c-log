#include <stdio.h>

int main()
{
    int x = 3 + 1.2;   // Mixing int and double
                   // 4.2 is converted to int
                   // 4 is stored in x

    float y = 12 * 2;  // Mixing float and int
                    // 24 is converted to float
                       // 24.0 is stored in y

                       /* Just generally remember that int types become float types if there’s a floating point type anywhere in there, and the compiler makes an effort to make sure mixed integer types don’t overflow. */
}