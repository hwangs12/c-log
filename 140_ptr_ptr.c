#include <stdio.h>

int main(void)
{
    int x = 3490;  // Type: int
    int *p = &x;   // Type: pointer to an int
    int **q = &p;  // Type: pointer to pointer to int

    printf("%d %d\n", *p, **q);  // 3490 3490

    printf("---------ADDRESSES-----------\n");
    printf("value %d stored at %p \n", x, &x);
    printf("value %p stored at %p \n", p, &p);
    printf("value %p stored at %p \n", q, &q);
    printf("---------ADDRESSES-----------");
}