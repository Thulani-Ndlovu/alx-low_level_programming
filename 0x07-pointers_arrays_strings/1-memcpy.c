#include "main.h"

/**
* _memcpy - copies memory area
* @dest: points to destination array
* @src: points to the source array
* @n: number of items to be copied
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*dest = src[i];
		dest++;
		i++;
	}

	return (dest);
}
