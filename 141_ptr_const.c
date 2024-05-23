int main(void)
{
    int x = 3490;
    int *const p = &x;
    int **q = &p;

    /**
     * 141_ptr_const.c:5:11: warning: initializing 'int **' with an    expression of type 'int *const *' discards qualifiers            [-Wincompatible-pointer-types-discards-qualifiers] int **q = &p;
     * this means that const is discarded
     */

    int x1 = 3490;
    int *const p1 = &x1;
    int *const *q1 = &p1;

    /**
     * line 14 means that whatever q1 points to is const
    */

    int x2 = 3490;
    int *const p2 = &x2;
    int *const *const q2= &p2;  // More const!
}