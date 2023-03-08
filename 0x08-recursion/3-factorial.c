#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: number
* Return: factorial, otherwise -1 if n is negative
*/

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
