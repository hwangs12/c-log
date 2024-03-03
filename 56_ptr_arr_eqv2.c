#include <stdio.h>

int my_strlen(char *s);

int main()
{
    char *t = "your mom!";
    char u[] = "coco chanel";

    printf("length is %d\n", my_strlen(t));
    printf("length is %d\n", my_strlen(u)); // both array and pointer notation works
}

int my_strlen(char *s)
{
    char *p = s;
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}