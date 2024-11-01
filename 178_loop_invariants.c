#include <stdio.h>

int find_index(int * arr, int num, int arr_length) 
{
    for (int i = 0; i < arr_length; i++) 
    {
        if (arr[i] == num) {
            return i;
        }
    }
    return NULL;
}

int main()
{
    /* what is loop invariant: a logical condition that is true before, during, and after each iteration of a loop in a computer program */
    /* found index is either null or existing in array */
    
    /*  */

    /* loop invariant holds before iteration:  */

    /* loop invariant holds before i = 0 to arr_length-1 */
    /* loop invariant holds  */
}