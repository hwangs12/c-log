// condense the dweight.c program by replacing the assignments to height, length, and width with initializers and removing the weight variable, instead calculating volumn + 165 / 166 within the last printf

/* dweight.c */

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", height * length * width);
    printf("Dimensional weight (pounds): %d\n", (height * length * width + 165)/166);

    return 0;
}