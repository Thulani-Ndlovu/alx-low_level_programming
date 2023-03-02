#include "main.h"

/**
* string_toupper - changes lowercase letters to uppercase
* @s: string
* Return: uppercase string
*/

char *string_toupper(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
