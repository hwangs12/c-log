/**
 * step 1: determine sign
 * step 2: convert the integral portion to unsigned binary
 * step 3: convert the fractional portion to binary
 * step 4: normalize the value via adjusting the exponent
 * step 5: add bias to the exponent
 * step 6: convert the biased exponent to unsigned binary
 * step 7: determine the final bits for the mantissa
 */

/**
 * IEEE-754
 * 16 bits - 1 sign bit, 5 exponent bits, 10 fraction bits
 * 32 bits = 1 sign bit, 8 exponent bits, 23 fraction bits
 * 64 bits - 1 sign bit, 11 exponent bits, 52 fraction bits.
 */