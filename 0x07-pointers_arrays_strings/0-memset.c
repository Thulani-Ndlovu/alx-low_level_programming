#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: pointer to an array
* @b: constant byte
* @n: number of times to fill the constant byte
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
