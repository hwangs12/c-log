#include <stdio.h>

int main(void)
{
    char name[40];
    printf("What's your name? ");
    /* this means scan anything that's not a new line of length at most 39 */
    scanf(" %39[^\n]", name);
    //     ^ note the space here, matching any whitespace
    printf("Hello %s!\n", name);
}