#include "variadic_functions.h"

/**
* sum_them_all - sums up all the function parameters (arguments)
* @n: arguments
* Return: sum of the arguments, otherwise zero if n==0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list nav;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(nav, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nav, unsigned int);
	va_end(nav);
	return (sum);
}
