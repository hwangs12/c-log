#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int main(void)
{
    for (int i = 10; i >= 0; i--) {
        printf("\rT minus %d second%s... \b", i, i != 1? "s": "");

        fflush(stdout);  // Force output to update

        // Sleep for 1 second
        sleep(1);
    }

    printf("\rLiftoff!             \n");
}