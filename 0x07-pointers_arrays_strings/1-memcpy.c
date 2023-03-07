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
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
