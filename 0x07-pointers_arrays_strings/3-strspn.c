#include "main.h"
char *_strchr(char *s, char c)
{
    while (*s && *s != c)
    {
        s++;
    }
    return (*s == c) ? s : 0;
}