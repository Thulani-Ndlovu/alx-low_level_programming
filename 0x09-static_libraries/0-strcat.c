#include "main.h"

/**
* _strcat - combines two strings
* @dest: destination string
* @src: source string
* Return: combined string
*/

char *_strcat(char *dest, char *src)
{
	int len_s1 = strlen(dest);
	int len_s2 = strlen(src);
	int i = len_s1;
	int j;

	for (j = 0; j < len_s2; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
