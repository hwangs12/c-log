#include <stdio.h>
#include <string.h>

/**
 * A palindromic number reads the same both ways.
 * The largest palindrome made from the product of two
 * 2-digit numbers is 9009 = 91 * 99.
 * 
 * Find the largest palindrome made from the product of 
 * two 3-digit numbers.
*/

/**
 * let's use the given to our benefit.
 * we just need to find a pair of 3 digit numbers
 * that make up palindrome
 * 
 * let's build function that checks a number is palindrome
 * 
 * then iterate through the 3 digit numbers from high to 
 * low (999 - 100)
*/

/**
 * finding middle index is tricky
 * because you have to find for both even and odd
 * 
 * idea : if length is 10 middle index is 4 and 5
 * if length is 9 middle index is 4. 
 * 
 * the way it is derived is 10 / 2 +- 1 for even
 * 9 / 2 and type cast to int for odd. 
*/

/**
 * create a function that measures 
 * length is even or odd
*/

int isEven(char* numberString)
{
    return strlen(numberString) % 2 == 0;
}

/**
 * think of way we need to compare each letter
 * from both ends. 
 * for length 10, we need to see 10 / 2 and 10 / 2 - 1
 * are same 
 * for length 9, we need to see int (9 / 2) - 1 
 * and int (9 / 2) + 1 are same
*/

int isPalindrome(int number)
{
    char str[10];
    sprintf(str, "%d", number);
    int i = 0;
    if (isEven(str))
    {
        while (i <= strlen(str) / 2)
        {
            if (str[i] == str[strlen(str) - i - 1])
            {
                i++;
                continue;
            } 
            else
            {
                return 0;
            }
        }

    }
    else
    {
        while (i < strlen(str) / 2)
        {
            if (str[i] == str[strlen(str) - i - 1])
            {
                i++;
                continue;
            } 
            else
            {
                return 0;
            }
        }
    }
    return 1;
}


int main()
{
    int maxPalindrome = 0;;

    for (int i=999; i > 100; i--)
    {
        for (int j=i; j > 100; j--)
        {
            if (isPalindrome(i * j))
            {
                if (maxPalindrome < i*j)
                {
                    maxPalindrome = i * j; 
                }
            }
        }
    }

    printf("maximum palindrome %d. \n", maxPalindrome);
}