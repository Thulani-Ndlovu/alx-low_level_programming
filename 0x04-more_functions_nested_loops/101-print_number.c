#include "main.h"

/**
* print_number - prints an integer
* @n: hold the number to be printed
*/

void print_number(int n)
{
	unsigned int tmp = n;

	if (n < 0)
	{
		n = n * -1;
		tmp = n;
		_putchar('-');
	}
	tmp = tmp / 10;
	if (tmp != 0)
		print_number(tmp);
	_putchar((unsigned int) n % 10 + '0');
}
