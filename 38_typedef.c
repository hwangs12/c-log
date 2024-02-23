#include <stdio.h>

struct Point
{
    int x;
    int y;
};

struct PointType
{
    char x;
    char y;
};

typedef struct PointType Point; // Setting Point as the alias to PointType

int main()
{
    /* without TYPEDEF */
    struct Point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);

    /* with TYPEDEF */
    Point p2; // you don't need struct to indicate PointType. And, notice we are using alias to indicate the PointType.
    p2.x = 44;
    p2.y = 100000;
    printf("%c \n", p2.x);
    printf("%c \n", p2.y);
    return 0;
}