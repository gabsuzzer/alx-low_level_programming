#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
		dest[i] = src[i];

	return (dest);
}