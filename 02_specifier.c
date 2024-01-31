#include <stdio.h>

int main() 
{
    /**
     * First, try this out
     */

    float f;
    for (f = 0.0; f <= 3; f += 1.1)   
        printf("A: %3d B: %6.2f\n", f, f + 0.15);

    /**
     * This is what I got
     * ------------------------
     * A: -1101028192 B: 0.00
     * A: 73896 B: 1.10
     * A: 73896 B: 2.20
     * ------------------------
     */

    return 0;
}