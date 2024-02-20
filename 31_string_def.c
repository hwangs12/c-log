#include <stdio.h>

int my_strlen(char *s)
{
    int count = 0;

    while (s[count] != '\0') // Single quotes for single char
        count++;

    return count;
}

int main()
{
    /**
     * In C, a “string” is defined by two basic characteristics:
     * A pointer to the first character in the string.
     * A zero-valued byte (or NUL character64) somewhere in memory after the pointer that indicates the end of the string.
     */

    // When you include a string in double quotes in your code, the NUL character is automatically, implicitly included.

    char *s = "Hello!"; // Actually "Hello!\0" behind the scenes

    printf("%d", my_strlen(s));
}