#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *pdest = dest;
    char *psrc = src;

    for (unsigned int i = 0; i < n; i++)
    {
        *(pdest + i) = *(psrc + i);
    }

    return dest;
}