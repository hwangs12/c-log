// if your code has millions of float but you later need to change to double

// typedef can come to your rescue

/**
 * float x1
 * float x2
 * float x3
 * .
 * .
 * .
 * float x10000000
 * float x10000001
 * float x10000002
 */

/**
 * typedef float coocoo; -> change this to typedef double coocoo; will take care of all coocoo types
 * coocoo x1
 * coocoo x2
 * coocoo x3
 * .
 * .
 * .
 * coocoo x10000000
 * coocoo x10000001
 * coocoo x10000002
 */