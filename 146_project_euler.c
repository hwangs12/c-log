/**
 * If we list all the natural numbers below 10 that are
 * multiples of 3 or 5, we get 3, 5, 6, and 9.
 * The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>
#include <time.h>

int is_multiple_of_3(int number);
int is_multiple_of_5(int number);
int find_sum_below(int number);

int main()
{
    clock_t t = clock();
    int sum2 = find_sum_below(1000);
    t = clock() - t;
    double time_taken = ((double) t)/CLOCKS_PER_SEC;
    printf("The sum is %d. \n", sum2);
    printf("The time it took to compute the sum is %f. \n", time_taken);
}

int is_multiple_of_3(int number)
{
    return number % 3 == 0;
}

int is_multiple_of_5(int number)
{
    return number % 5 == 0;
}

int find_sum_below(int number)
{
    int sum = 0;
    for (int i=0; i < number; i++)
    {
        if (is_multiple_of_3(i) || is_multiple_of_5(i))
        {
            sum += i;
        }
    }

    return sum;
}

