#include "main.h"

/**
* print_numbers - prints the numbers from 0-9
*/

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
