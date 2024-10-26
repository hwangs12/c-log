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
        A[2] = A[1] = 5; // replace j+1 index with bigger one
        j = 1 - 1 = 0 (exit the loop)
    A[1] = 2; // assign with the lower one. [2, 5, 4, 6, 1, 3]

    i = 3;
    key = A[3] = 4;
    j = 3 - 1 = 2;
    while 2 > 0 and A[2] = 5 > key=4
        A[3] = A[2] = 5; // [2, 5, 5, 6, 1, 3]
        j = 1;
        A[1] = 2 > key = 4 not true so break
    A[2] = 4 // wherever j ended up replace that with key [2, 4, 5, 6, 1, 3]

    i = 4;
    key = A[4] = 6;
    j = 4 - 1 = 3;
    while 3 > 0 and A[3] = 5 > key = 6;
    fails immediate because left element is smaller
    A[4] = 6, // as is [2, 4, 5, 6, 1, 3]

    i = 5;
    key = A[5] = 1;
    j = 5-1 = 4;
    while 4 > 0 and A[4] = 6 > key = 1;
        A[5] = A[4] = 6  [2, 4, 5, 6, 6, 3] moving bigger element to the right
        j = 4 - 1 = 3;

        3 > 0 and A[3] = 5 > key = 1;
        A[4] = A[3] = 5; -> [2, 4, 5, 5, 6, 3]
        j = 3 - 1 = 2;

        2 > 0 and A[2] = 4 > key = 1;
        A[3] = A[2] = 4; -> [2, 4, 4, 5, 6, 3]
        j = 2 - 1 = 1;

        1 > 0 and A[1] = 2 > key = 1;
        A[2] = A[1] = 2 -> [2, 2, 4, 5, 6, 3]
        j = 1 - 1 = 0;

    A[0+1] = A[1] = key = 1; -> [1, 2, 4, 5, 6, 3]

    with i = 6;

    without all the iterations on vars, array will look as follows:

    [1, 2, 4, 5, 6, 3]
    [1, 2, 4, 5, 6, 6]
    [1, 2, 4, 5, 5, 6]
    [1, 2, 4, 4, 5, 6]
    [1, 2, 3, 4, 5, 6]


 */

/* SOLUTIONS */

int * sort(int * a) {
    for (int i = 0; i < sizeof(a) / sizeof(*a); i++) {
        
    }
}