#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: search string
* @accept: match string
* Return: pointer to the byte in s matching bytes in s
*/

char *_strpbrk(char *s, char *accept)
{
	int match;

	while (*s)
	{
		for (match = 0; accept[match]; match++)
		{
			if (*s == accept[match])
				return (s);
		}
		s++;
	}

	return (NULL);
}
