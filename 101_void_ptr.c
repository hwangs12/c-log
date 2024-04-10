/* void* type can be converted from or to any pointer type */

int main()
{
    int x = 10;

    void *p = &x;  // &x is type int*, but we store it in a void*

    int *q = p;    // p is void*, but we store it in an int*

}