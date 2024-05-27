#include <stdio.h>
#include <time.h>

/* refer to file number 146 */

/* SAME PROBLEM, DIFFERENT SOLUTION */

/* sum it up as you progress */

int main()
{
    clock_t t = clock();
    int  sum = 0;
    for (int i = 0; i < 1000; i+=3)
    {
        sum += i;        
    }
    for (int j = 0; j < 1000; j+=5)
    {
        sum += j;
    }
    for (int k = 0; k < 1000; k+=15)
    {
        sum -= k;
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("The sum is %d. \n", sum);
    printf("TIME IT TOOK: %f SECONDS. \n", time_taken);

}