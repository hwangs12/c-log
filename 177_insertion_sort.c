// input: a1, a2, a3, ..., an
// output: a'1, a'2, a'3,  ... , a'n where a'i >= a'i-1

// peudocode
/* 
    for i = 2 to n
        key = A[i]
        j = i - 1
        while j > 0 and A[j] > key
            A[j+1] = A[j]
            j = j - 1
        A[j+1] = key
 */

/* example with [5, 2, 4, 6, 1, 3] */
/* 
    i = 2;
    key = A[2] = 2
    j = 2 - 1 = 1;
    while 1 > 0 and A[1] (5) > 2;
        A[2] = A[1] = 5;
        j = 1 - 1 = 0 (exit the loop)
    A[1] = 2; // assign with the lower one. [2, 5]

    i = 3;
    key = A[3] = 4;


 */