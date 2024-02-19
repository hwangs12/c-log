#include <stdio.h>

int main(void)
{
    // c doesn't warn you of out of bounds.
    int i;
    int a[5] = {22, 37, 3490, 18, 95};

    for (i = 0; i < 10; i++)
    { // BAD NEWS: printing too many elements!
        printf("%d\n", a[i]);
    }

    // advice from beej's guide
    // Short version: don’t do anything that causes undefined behavior. Ever
}