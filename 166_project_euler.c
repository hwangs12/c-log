/**
 * Find the diff between the sum of the squares of
 * the first 100 natural numbers 
 * and the square of the sum
 */

#include <stdio.h>

int sumOfSquares(int number);
int squareOfSums(int number);

int main()
{
    int difference = squareOfSums(100) - sumOfSquares(100);

    printf("The diff of first 100 is %d.\n", difference);

}

int sumOfSquares(int number)
{
    int sum=0;
    for (int i=1; i <= number; i++)
    {
        sum+=i*i;
    }
    return sum;
}

int squareOfSums(int number)
{
    int sum=(number+1)*(number)/2;
    return sum*sum;
}
