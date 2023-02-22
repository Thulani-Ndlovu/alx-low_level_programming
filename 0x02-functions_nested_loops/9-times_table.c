#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0 && j == 0)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((i * j) < 10 && j != 9)
			{
				_putchar(' ');
				_putchar((i * j) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((i * j) >= 10 && j != 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((i * j) >= 10 && j == 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else if ((i * j) < 10 && j == 9)
			{
				_putchar(' ');
				_putchar((i * j) + '0');
			}
		}
		_putchar('\n');
	}
}
