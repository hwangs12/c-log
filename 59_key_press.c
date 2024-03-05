#include <stdio.h>
#include <stdlib.h>

int main()
{

    // for unix
    system("stty raw");

    while (1)
    {
        char c = getchar();
        // use e to exit
        if (c == 'e')
        {
            system("stty cooked");
            exit(0);
        }
        else
        {
            for (int i = 0; i < 10; i++)
                printf("%c ", c);
        }
    }

    system("stty cooked");

    return 0;
}