#include <stdio.h>

/**
 * stdin    :	Standard Input, generally the keyboard by default
 * stdout   :	Standard Output, generally the screen by default
 * stderr   :	Standard Error, generally the screen by default, as well
 */

int main()
{
    /* READING */
    FILE *fp; // Variable to represent open file

    fp = fopen("hello.txt", "r"); // Open file for reading
    if (fp)
    {
        int c = fgetc(fp); // Read a single character
        printf("%c\n", c); // Print char to stdout
    }
    else
    {
        printf("file not there");
    }

    fclose(fp);
}