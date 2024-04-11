#include <stdio.h>

int main()
{
    int x[] = {10, 20};
    const int *p = x; 

    p++;  // We can modify p, no problem

    *p = 30; // Compiler error! Can't change what it points to

    // what if we want to change what the pointer points to but not the pointer itself? by changing order

    int *const q; // integer pointer const
    q++; // compiler error

    int x = 10;
    int *const r = &x;

    *r = 20;   // Set "x" to 20, no problem

}