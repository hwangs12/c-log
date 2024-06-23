#include <stdio.h>
#include <math.h>
/**
 * By listing the first six prime numbers
 * we can see that the 6th prime is 13
 * what is the 10001st prime number?
 */

/**
 * let's use function we used in doc 155
 * Modify it a little:
 * Add a prime counter inside it so 
 * when it's greater than 2 we exit the program.
 * Return int
 */

int is_prime(long int numberInput)
{
    int original = numberInput;
    // remove evenness
    while (numberInput % 2 == 0)
    {
        // printf("%d \t", 2);
        numberInput /= 2;
    }



    for (long int i=3; i <= sqrt(numberInput); i+=2)
    {
        while (numberInput % i == 0)
        {
            // printf("%ld \t", i);
            numberInput /= i;

        }
    }

    if (numberInput >= sqrt(numberInput))
    {
        // printf("%ld \n", numberInput);
    }

    return numberInput == original;
}

int main()
{
    int i = 3;
    int prime_counter = 1;
    while (prime_counter != 10001)
    {
        if (is_prime(i))
        {
            printf("%d is prime \n", i);
            prime_counter++;
        };
        i++;
    }
}