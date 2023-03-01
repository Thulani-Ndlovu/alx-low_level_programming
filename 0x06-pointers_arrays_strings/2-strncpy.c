#include "main.h"

/**
* _strncpy - copies a string
* @dest: string variable to hold copied string
* @src: holds the string that will be copied to dest
* @n: number of characters to be copied
* Return: copied string
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
