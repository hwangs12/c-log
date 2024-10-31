#include <stdio.h>

int find_index(int * arr, int num, int arr_length) 
{
    for (int i = 0; i < arr_length; i++) 
    {
        if (arr[i] == num) {
            return i;
        }
    }
    return NULL;
}

int main()
{

}