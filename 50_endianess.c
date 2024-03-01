

#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("output2.bin", "wb"); // wb mode for "write binary"!

    // In the call to fwrite, the arguments are:
    //
    // * Pointer to data to write
    // * Size of each "piece" of data
    // * Count of each "piece" of data
    // * FILE*

    unsigned short v = 0x1234; // Two bytes, 0x12 and 0x34

    fwrite(&v, sizeof v, 1, fp); // prints out 34 12. weird because in array of ints, the order was the opposite

    fclose(fp);
}