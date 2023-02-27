#include "main.h"

/**
* _strcpy - copies the string pointed to by src to dest
* @dest: first string
* @src: second string
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
