#include "main.h"

/**
* _abs - returns the absolute value of an integer
* @n: integer
* Return: absolute value
*/

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
