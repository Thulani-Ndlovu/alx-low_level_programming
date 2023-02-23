#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int counter = 0;
	int i;
	int j;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= counter; j++)
			{
				if (j == counter)
					_putchar(92);
				else
					_putchar(' ');
			}
			counter++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

