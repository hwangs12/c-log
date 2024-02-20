#include <stdio.h>

// Move the assignment into the test
void strcpy2(char dest[], const char source[])
{
    int i = 0;
    while ((dest[i] = source[i]) != '\0')
    {
        i++;
    }
}

int main()
{
    char *popo;
    char *pipi = "Maestro!";

    strcpy2(popo, pipi);

    printf("%s\n", popo);

    return 0;
}