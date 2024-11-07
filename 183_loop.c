#include <stdio.h>

void iterate(char * baba)
{
    int i = 0;
    while (*baba) {
        printf("i'm here and my value is %c. \n", *baba);
        baba++;
    }
}

int main()
{
    char * nana = "kakarot";

    iterate(nana);
}