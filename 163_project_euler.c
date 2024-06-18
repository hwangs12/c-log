#include <stdio.h>
#include <time.h>
/**
 * 2520 is the smallest number that can be divided by
 * each of the numbers from 1 to 10 without any remainder
 * what is the smallest positive number that is
 * even divisible by all of the numbers from 1 to 20?
*/

/**
 * Given numbers 1 to 10, we can iterate like this:
 * 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
 * 1, 1, 3, 2, 5, 3, 7, 4, 9, 5 -> taken off 2 from here
 * 1, 1, 3, 1, 5, 3, 7, 2, 9, 5 -> taken off 2 from here
 * 1, 1, 3, 1, 5, 3, 7, 1, 9, 5 -> taken off 2 from here
 * 1, 1, 1, 1, 5, 1, 7, 1, 3, 5 -> taken off 3 from here
 * 1, 1, 1, 1, 5, 1, 7, 1, 1, 5 -> taken off 3 from here
 * 1, 1, 1, 1, 1, 1, 7, 1, 1, 1 -> taken off 5 from here
 * 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 -> taken off 7 from here
 * 
 * so the idea is you take each prime factor until you do 
 * not see them in the list and keep multiplying
 * those factors until all the members become 1.
*/

/**
 * here's the pattern. starting from 2
 * 2 can divide anything index 2i+1
 * once it is done, the next thing it can do is
 * it can divide at index that's increment of 4
 * the next it can divide is 8th.
*/

/**
 * let's try different approach
 * start with 2: you go 2, then 4, ... up until it is
 * less than 20
 * start with 3: same logic, you add that to multiplication
 * remove four from the list because 2 used it up
 * 5
 * 7
 * 11
 * 13
 * 17
 * 19
 * 
 * Question is: how do we check not to use 4?
 */

int isPrime(int number)
{
    int win1 = 0;
    int win2 = 0;

    if (number == 0 || number == 1) // 0 and 1 are not prime
    {
        return 0;
    }

    for (int i = 2; i <= number / 2; i++)
    {
        clock_t start = clock();
        int popo = (i * (number / i)) == number;
        clock_t end = clock();

        clock_t start1 = clock();
        int papa = number % i == 0;
        clock_t end1 = clock();

        double total_t = (double)(end - start) / CLOCKS_PER_SEC;
        double total_t1 = (double)(end1 - start1) / CLOCKS_PER_SEC;

        

        if (total_t < total_t1)
        {
            // printf("first calculation is faster.\n");
            win1++;
        } else 
        {
            win2++;
        }


        if (popo && papa) // no need to do this 
        {
            return 0;
        }
    }
    
    // printf("FINAL RESULT win1 vs win2 %d : %d \n", win1, win2);

    return 1;

}

int main()
{
    int i = 2;
    int product = i;
    while (i <= 20)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
            int multiplier = i;
            while (i <= 20)
            {
                product *= multiplier;
                i *= i;
            }
            i = multiplier;
        }
        i++;
    }

    printf("the product of all numbers under or equal to 20 is %d. \n", product);
}