#include "main.h"

/**
* _strcat - combines two strings
* @dest: destination string
* @src: source string
* Return: combined string
*/

char *_strcat(char *dest, char *src)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int i;
	int j;

	while (dest[len_s1] != '\0')
	{
		len_s1++;
	}
	while (src[len_s2] != '\0')
		len_s2++;

	i = len_s1;

	for (j = 0; j < len_s2; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
