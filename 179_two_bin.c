#include <stdio.h>   

/*
 * Consider adding two n-bit bin integers a and b 
 * stores in two n-element arrays A and B 
 * each element is either 0 or 1
 */

void add_binary_integers(int* a, int* b, int* c, int length)
{

    for (int i = 0; i < length; i++)
    {
        c[i] = a[i] + b[i];
    }
}

int main() 
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int c[10];

    add_binary_integers(a, b, c, 10);
    for (int i = 0; i < 10; i++) {
        printf('hey i\'m c %d element: value is %d', i, c[i]);
    }
}