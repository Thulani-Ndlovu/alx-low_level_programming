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
	int len_s1 = strlen(dest);
	int i = len_s1;
	int j;

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
