#include <stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};

int main()
{
    // Now with an initializer! Same field order as in the struct declaration:
    struct car saturn = {"Saturn SL/2", 16000.99, 175};

    printf("Name:      %s\n", saturn.name);
    printf("Price:     %f\n", saturn.price);
    printf("Top Speed: %d km\n", saturn.speed);

    // we can be specific with the initializers
    struct car soturn = {.speed = 175, .name = "Saturn SL/2"}; // any missing field designators are initialized to zero, pricing for example.
}