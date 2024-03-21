#include <stdio.h>

int main()
{
    int a = 0x1A2B; // Hexadecimal
    int b = 0x1a2b; // Case doesn't matter for hex digits

    printf("%x", a); // Print a hex number, "1a2b"

    // octal starts with 0
    int c = 012;

    printf("%o\n", c); // Print an octal number, "12"

    int x = 11111; // Decimal 11111
    int y = 00111; // Decimal 73 (Octal 111)
    int z = 01111; // Decimal 585 (Octal 1111)
}