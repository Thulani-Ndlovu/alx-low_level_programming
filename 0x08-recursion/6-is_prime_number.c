#include "main.h"

/**
* check - recursively checks if numbers are prime or not
* @n: the test integer
* @y: compare integer
* Return: 1 if prime, otherwise 0
*/

int check(int n, int y)
{
	if (n % y == 0)
		return (0);
	else if (y == n - 1)
		return (1);
	else if (n % y != 0)
		return (check(n, y + 1));
	return (0);
}

/**
* is_prime_number - returns 1 if number is prime otherwise 0
* @n: test integer
* Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
	int y = 2;

	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	return (check(n, y));
}
