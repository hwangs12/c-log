/**
 * character pi has code pointer 3C0
 * In UTF-16BE (backward endian), 03C0
 * In UTF-32BE, 000003C0
 * In UTF-16LE, C003
 * In UTF-32LE, C0030000
 * 
 * to binary, this number is 1111000000 (3C0 base 16)
 * in utf-8, presuming this is 11001111 10000000
 * converting to hex, this is CF 80 
 */