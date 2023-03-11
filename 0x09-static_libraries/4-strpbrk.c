#include "main.h"

/**
* _strpbrk - function
* @s: main string
* @accept: compare string
* Return: pointer to string
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
