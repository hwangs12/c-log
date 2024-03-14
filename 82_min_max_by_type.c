#include <stdio.h>
#include <limits.h>

int main()
{
    printf("char min max %d, %d \n", CHAR_MIN, CHAR_MAX);
    printf("short char min max %d, %d \n", SCHAR_MIN, SCHAR_MAX);
    printf("short min max %d, %d \n", SHRT_MIN, SHRT_MAX);
    printf("int min max %d, %d \n", INT_MIN, INT_MAX);
    printf("long min max %ld, %ld \n", LONG_MIN, LONG_MAX);
    printf("long long min max %lld, %lld \n", LLONG_MIN, LLONG_MAX);
    printf("unsigned char max %d \n", UCHAR_MAX);
    printf("unsigned short max %d \n", USHRT_MAX);
    printf("unsigned int max %u \n", UINT_MAX);
    printf("unsigned long max %lu \n", ULONG_MAX);
    printf("unsigned long long max %llu \n", ULLONG_MAX);
}

/**
 * char min max -128, 127 -> 2^8
 * short char min max -128, 127 -> 2^8
 * short min max -32768, 32767 -> 2^16
 * int min max -2147483648, 2147483647 -> 2^32
 * long min max -9223372036854775808, 9223372036854775807 -> 2^64
 * long long min max -9223372036854775808, 9223372036854775807
 * unsigned char max 255
 * unsigned short max 65535
 * unsigned int max 4294967295
 * unsigned long max 18446744073709551615
 * unsigned long long max 18446744073709551615
 */
