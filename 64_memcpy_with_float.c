#include <stdio.h>
#include <string.h>

int main()
{
    float f = 20.0f;
    float *pf = &f;
    char data[sizeof(pf)];
    memcpy(data, &pf, sizeof(data));

    for (int i = 0; i < sizeof(pf); i++)
    {
        printf("0x%08x\n", data[i]);
    }
}