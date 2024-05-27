/**
 * If we list all the natural numbers below 10 that are
 * multiples of 3 or 5, we get 3, 5, 6, and 9.
 * The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>

int is_multiple_of_3(int number);
int is_multiple_of_5(int number);
int find_sum_below(int number);

int main()
{
    int sum1 = find_sum_below(10);
    int sum2 = find_sum_below(1000);

    printf("The sum is %d. \n", sum1);
    printf("The sum is %d. \n", sum2);
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

