#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @last: hold the test number
* Return: the last number of a digit
*/

int print_last_digit(int last)
{
	int n;

	n = last % 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar((n % 10) + '0');
	return (n);
}
