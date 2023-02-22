#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @last: hold the test number
* Return: the last number of a digit
*/

int print_last_digit(int last)
{
	int n;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar((last % 10) + '0');
	n = last % 10;
	return (n);
}
