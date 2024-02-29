#include <stdio.h>

int main(void)
{
    FILE *fp;
    int x[] = {13, 15, 17};
    float y[] = {13.5, 15.7, 18.55};
    char *z[] = {"hello", "friend", "you rock!"};

    fp = fopen("output.csv", "w");

    // fp = stdout; (if you want to write on to a console)

    for (int i = 0; i < sizeof(x) / sizeof(int); i++)
    {
        fprintf(fp, "%s, %d, %f\n", z[i], x[i], y[i]); // when reading float, it's one decimal (rounded) but when writing, it's 6 decimals weird!!!
    }

    fclose(fp);
}