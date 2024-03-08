#include <stdio.h>
#include <stdlib.h>

/**
 * motivation: take a look at file 44_reading_lines.c
 * c has a way to read lines from a file, with fgets function.
 * yet the size of lines should be determined before we initiate the function call
 * let's solve this issue using manual allocation of memory.
 */

char *readline(FILE *fp)
{
    // read a line of arbitrary size
    int offset = 0;
    int bufsize = 4;
    char *buf;
    int c;

    /**
     * another way to initialize buffer
     * char *p = malloc(3490);
     * char *p = realloc(NULL, 3490);
     */

    buf = malloc(bufsize);

    if (buf == NULL)
    {
        return NULL;
    }

    // getting a char from file, until newline or end of file is reached.
    while ((c = fgetc(fp), c != '\n' && c != EOF))
    {
        if (offset == bufsize - 1)
        {
            bufsize *= 2;
            char *new_buf = realloc(buf, bufsize);
            if (new_buf == NULL)
            {
                return NULL;
            }
            buf = new_buf;
        }
        buf[offset++] = c;
    }

    // We hit newline or EOF...

    // If at EOF and we read no bytes, free the buffer and
    // return NULL to indicate we're at EOF:
    if (c == EOF && offset == 0)
    {
        free(buf);
        return NULL;
    }

    // Shrink to fit
    if (offset < bufsize - 1)
    {
        char *new_buf = realloc(buf, offset + 1);

        if (new_buf != NULL)
        {
            buf = new_buf;
        }
    }

    buf[offset] = '\0';

    return buf;
}

int main()
{
    FILE *file = fopen("hello.txt", "r");
    char *beef;
    while ((beef = readline(file)) != NULL)
    {
        printf("%s \n", beef);
        free(beef); // since we didn't free buffer inside the function unless they are null.
    }

    fclose(file);

    return 0;
}
