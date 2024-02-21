#include <stdio.h>
/**
 * There are basically two cases when you’d want to pass a pointer to the struct:
 * - You need the function to be able to make changes to the struct that was passed in, and have those changes show in the caller.
 * - The struct is somewhat large and it’s more expensive to copy that onto the stack than it is to just copy a pointer.
 *
 * It's not illegal to pass struct by value.
 */

struct car
{
    char *name;
    float price;
    int speed;
};

void set_price(struct car *entity, float price)
{
    (*entity).price = price;
}

int main(void)
{
    struct car saturn = {.speed = 175, .name = "Saturn SL/2"};

    // Pass a pointer to this struct car, along with a new,
    // more realistic, price:
    set_price(&saturn, 799.99);

    printf("Price: %f\n", saturn.price); // if we defined function to pass struct car by value, the saturn var will not change.
}