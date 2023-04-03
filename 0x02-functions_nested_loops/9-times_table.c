#include <stdio.h>

void times_table(void)
{
  int i, j, result, tens, units;

  for (i = 0; i <= 9; i++)
  {
    for (j = 0; j <= 9; j++)
    {
      result = i * j;
      tens = result / 10;
      units = result % 10;
      if (j == 0)
      {
        putchar('0');
      }
      else if (result < 10)
      {
        putchar(' ');
        putchar(units + '0');
      }
      else
      {
        putchar(tens + '0');
        putchar(units + '0');
      }
      if (j < 9)
      {
        putchar(',');
        putchar(' ');
      }
    }
    putchar('\n');
  }
}