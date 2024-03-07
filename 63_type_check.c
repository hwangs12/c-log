#include <assert.h>
#include <string.h>

#define typename(x) _Generic((x), \
    int: "int",                   \
    float: "float",               \
    default: "other")

int main(void)
{
    int i;
    float f;
    void *v;
    assert(strcmp(typename(i), "int") == 0);
    assert(strcmp(typename(f), "float") == 0);
    assert(strcmp(typename(v), "other") == 0);
}