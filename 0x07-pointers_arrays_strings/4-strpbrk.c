#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int i, j, found = 0;

	for (i = 0; s[i] != '\0' && !found; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
	}

	if (found)
		return &s[i - 1];
	else
		return '\0';
}