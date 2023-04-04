#include "main.h"
char *_strpbrk(char *s, char *accept)
char *_strpbrk(char *s, char *accept)
{
    for (size_t i = 0; s[i] != '\0'; i++) {
        for (size_t j = 0; accept[j] != '\0'; j++) {
            if (s[i] == accept[j]) {
                return &s[i];
            }
        }
    }

    return (void *) 0;
}