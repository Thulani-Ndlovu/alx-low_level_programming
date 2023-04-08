#include "main.h"

/**
* isbinary - checks if the input contains 1s and 0s ONLY
* @p: input string
* Return: number of times 1 or 0 was found
*/

unsigned int isbinary(const char *p)
{
	unsigned int is_bin = 0, count = 0;

	while (p[count] != '\0')
	{
		if (p[count] == '1' || p[count] == '0')
		{
			is_bin++;
		}
		count++;
	}
	return (is_bin);
}

/**
* len - calculates the length of the input binary number
* @p: input string
* Return: length of the input string
*/

unsigned int len(const char *p)
{
	unsigned int _len = 0;

	while (*p)
	{
		_len++;
		p++;
	}
	return (_len);
}

/**
* power - binary to decimal conversion
* @n: Base 2 Power
* Return: decimal number
*/

unsigned int power(unsigned int n)
{
	unsigned int prod = 1, i;

	for (i = 0; i < n; i++)
		prod *= 2;
	return (prod);
}

/**
* binary_to_uint - converts binary number to unsigned int
* @b: pointer to a string of 1's and 0's.
* Return: converted number, 0 if not all characters are 1's and 0's or b
* is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, _isbin, _len, i;

	_isbin = isbinary(b);
	_len = len(b);

	if (b == NULL)
		return (0);

	if (_isbin != _len)
		return (0);

	for (i = 0; i < _len; i++)
	{
		if (b[i] == '1')
			dec += power(_len - 1 - i);
	}

	return (dec);
}
