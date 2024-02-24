#include <stdio.h>
#include <string.h>
/**
 * int strcmp(const char *a, const char *b);
 *
 * returns
 * x < 0 if first non matching char in a is less than in b
 * x = 0 if all match
 * x > 0 if first non matching chat in a is greater than in b
 */

int main()
{
    // example omitted because i'm lazy but... ok let's do one.
    int popo = strcmp("hello", "hallo"); // result? positive because e is bigger than a in ascii. e - a > 0
    printf("%d \n", popo);
}