#include <stdio.h>

/**
 * Each new term in the fibonacci sequence is generated
 * by adding the prev two terms. Starting with 1 and 2
 * the first 10 terms will be
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,...
 * By considering the terms in the fibonacci sequence 
 * whose values do not exceed four million, find the
 * sum of the even-valued terms.
*/

/**
 * even-valued terms are in index, 1, 4, 7, 10, ... 
 * the values are 2, 8, 34, 144, ...
*/

/* up to 4000000 */

int main()
{
    int total = 0;
    int a = 1;
    int b = 2;
    int temp = 0;
    while (b <= 4000000)
    {
        if (b % 2 == 0)
        {
            total += b;
        }
        temp = b;
        b += a;
        a = temp;
        printf("b is %d. \n", b);
    }
    printf("total is %d. \n", total);
}