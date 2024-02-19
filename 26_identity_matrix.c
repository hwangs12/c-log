int main()
{
    // simple way to write matrix and array in general.
    // If you want rest as 0, just write non zero values using indices.
    int a[3][3] = {[0][0] = 1, [1][1] = 1, [2][2] = 1};

    // another example.
    // all 100 entries 0
    int a[100] = {0};

    // 2nd index value can be modified however you choose inside initialization.
    int a[5] = {[2] = 3, 4, 5};
}