/**
 * Trying to understand 75_data_alignment.c
 *
 * I was led here.
 *
 * For efficient memory access (whatever that is, I don't know what it is yet),
 * there is this thing called a word size, a certain number of bytes that's being allocated
 * without being 'mixed' with other data type
 *
 * say, we have struct of short, int, char like so:
 *
 * struct test1
 * {
 *     short s;
 *     int i;
 *     char c;
 * };
 *
 * this will be sizeof 12 bytes... because s takes up two bytes, int i do not want to be in the same block with short
 * because of the word size - aka it wants to be in its own word.
 * so those two will occupy 8 bytes and char c will be placed in another word
 */

#include <stdio.h>

// first structure
struct test1
{
    short s;
    int i;
    char c;
};

// second structure
struct test2
{
    int i;
    char c;
    short s;
};

// driver program
int main()
{
    struct test1 t1;
    struct test2 t2;
    printf("size of struct test1 is %zu \n", sizeof(t1));
    printf("size of struct test1 is %zu \n", sizeof(t2));
    return 0;
}
