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

/**
 * example: -27.15625
 * conver this to IEEE 754
 * sign -> negative -> 1
 * 27 -> 11011
 * .15625 * 2 = 0.31250 -> 0
 * 0.31250 * 2 = 0.62500 -> 0
 * 0.62500 * 2 = 1.25000 -> 1
 * 0.25 * 2 = 0.5 -> 0
 * 0.5 * 2 = 1 -> 1
 *  ---> .00101
 *
 * looks like -> 11011.00101
 * -> 1.101100101 (exponent is 4)
 *
 * -> exponent = 15 + 4 = 19
 * -> in bin -> 10011
 * -> ieee 754 form: 1100111011001010 (sweet!)
 */

/**
 * things i don't understand yet
 *
 * when converting from float to a decimal representation and back to float, definitely use flt_decimal_dig (9) to do that so that all the bits are preserved exactly.
 *
 * what does preserving digits mean? what does converting from floatt o decimal mean?
 *
 */