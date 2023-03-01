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

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			break;
	}

	return (dest);
}
