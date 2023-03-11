#include "main.h"

/**
* _memcpy - function
* @dest: destination string
* @src: source string
* @n: integer
* Return: destination string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
