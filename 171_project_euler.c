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
    int prime_counter = 0;
    // remove evenness
    while (numberInput % 2 == 0)
    {
        printf("%d \t", 2);
        prime_counter++;
        if (prime_counter > 2)
        {
            goto finish;
        }
        numberInput /= 2;
    }



    for (long int i=3; i < sqrt(numberInput); i+=2)
    {
        while (numberInput % i == 0)
        {
            prime_counter++;
            if (prime_counter > 2)
            {
                goto finish;
            }
            printf("%ld \t", i);
            numberInput /= i;

        }
    }

    if (numberInput >= sqrt(numberInput))
    {
        printf("%ld \n", numberInput);
    }

    finish:

    return prime_counter <= 2;
}

int main()
{
    for (int i=2; i<10; i++)
    {
        if (is_prime(i))
        {
            printf("%d is prime. \n", i);
        }
    }

}