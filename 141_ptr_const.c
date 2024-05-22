int main(void)
{
    int x = 3490;
    int *const p = &x;
    int **q = &p;

    /**
     * 141_ptr_const.c:5:11: warning: initializing 'int **' with an    expression of type 'int *const *' discards qualifiers            [-Wincompatible-pointer-types-discards-qualifiers] int **q = &p;
     * this means that const is discarded
     */
}