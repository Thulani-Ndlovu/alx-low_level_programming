#include "main.h"

/**
* _strncpy - copy selected characters of a string
* @dest: destination string
* @src: source string
* @n: number of characters to be copied
* Return: destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_src = 0;

	i = 0;

	while (src[i++])
		len_src++;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = len_src; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
