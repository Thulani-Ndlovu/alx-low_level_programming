#include "main.h"

/**
* _process - compares if a number is equal to its square root or not
* @n: integer to compute the root of
* @y: compare integer
* Return: -1 if n > y squared, y if n == y, otherwise the square root
*/

int _process(int n, int y)
{
	if ((y * y) > n)
		return (-1);
	else if ((y * y) == n)
		return (y);
	else
		return (_process(n, y + 1));
}

/**
* _sqrt_recursion - returns the natural squareroot of a number
* @n: integer to obtain the root of
* Return: -1 if n has no square root, otherwise the actual squareroot
*/

int _sqrt_recursion(int n)
{
	return (_process(n, 1));
}
