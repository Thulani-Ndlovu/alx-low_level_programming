#include "main.h"

/**
* _strncat - combines two strings for selected characters
* @dest: destination string
* @src: source string
* @n: number of characters to copy from src
* Return: destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int len_s1 = 0;
	int i;
	int j;

	while (dest[len_s1] != '\0')
		len_s1++;

	i = len_s1;

	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}

	return (dest);
}
