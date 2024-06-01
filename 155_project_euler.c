#include <stdio.h>
#include <math.h>

/**
 * The prime factors of 13195 are 5, 7, 13, and 29.
 * What is the largest prime factor of the number 600851475143?
 */

void largest_prime_factor(long int numberInput)
{
    // remove evenness
    while (numberInput % 2 == 0)
    {
        printf("%d \t", 2);
        numberInput /= 2;
    }

    for (long int i=3; i < sqrt(numberInput); i+=2)
    {
        while (numberInput % i == 0)
        {
            printf("%ld \t", i);
            numberInput /= i;
        }
    }

    if (numberInput >= sqrt(numberInput))
    {
        printf("%ld \n", numberInput);
    }
}

int main()
{
    largest_prime_factor(2);
    largest_prime_factor(15);
    largest_prime_factor(16);
    largest_prime_factor(18);
    largest_prime_factor(21);
    largest_prime_factor(37);
    largest_prime_factor(46);
    largest_prime_factor(27);
    largest_prime_factor(600851475143);
}