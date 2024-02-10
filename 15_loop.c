#include <stdio.h>

int main()
{
    // you can declare multiple variables using comma
    for (int i = 0, j = 999; i < 10; i++, j--) {
        printf("%d, %d\n", i, j);
    }

    // empty loop will runs forever
    for(;;) {  // "forever"
    printf("I will print this again and again and again\n" );
    printf("for all eternity until the heat-death of the universe.\n");

    printf("Or until you hit CTRL-C.\n");
}
}