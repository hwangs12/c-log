#include <stdio.h>

/* Q: Can int arrays be copied to char arrays? */

int main()
{

    int num[] = {1, 2, 3, 4, 5};

    void *vo = num;
    char *ch = vo;
    char *cj = vo;

    for (int i = 0; i < 20; i += 4) // why 20? because each int takes up four space, char only 1 space. Ex) value 2 at num is on index 1. that's fourth index in char array
    {
        ch[i] = cj[i]; // at this point, putting integer value inside what we thought was char array turns out possible. WEIRD!
    }

    for (int i = 0; i < 20; i += 4)
    {
        printf("%d\n", ch[i]);
    }
    for (int i = 0; i < 20; i += 1)
    {
        printf("%d\n", ch[i]);
    }
}