#include "main.h"

int print_alphabet_x10(void)
{
	   int i;
	   int count = 0;

		while (count++ <= 9)
		{
			for (i = 'a'; i <= 'z'; i++)
			{
				_putchar(i);
			}
				_putchar('\n');
		}
	return (0);
}
