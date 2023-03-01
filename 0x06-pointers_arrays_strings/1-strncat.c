#include "main.h"
#include <string.h>

/**
* _strncat - concatenates two strings
* @dest: string that holds the concatenation
* @src: string to be appended into dest
* @n: max number of characters dest can hold
* Return: dest (concatenated string)
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
