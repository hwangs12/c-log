#include <stdio.h>

int main()
{
    /* fault proof scanf usage for int input */
    int a;
    printf("enter a number: \n");
    /* you can check input validity */
    while (scanf("%d", &a) != 1)
    {
        // input was not a number, ask again;
        printf("enter a number: \n");
    }
    printf("You entered %d.\n", a);
    /* above program will indefinitely run */
}