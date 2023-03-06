#include "main.h"

/**
* _strchr - locates a character in a string
* @s: pointer to a string
* @c: character being searched
* Return: returns a pointer to the first occurrence of c
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}
