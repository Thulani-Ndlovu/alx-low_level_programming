#include "main.h"
#include <string.h>

/**
* leet - encodes a string into 1337
* @s: holds a string
* Return: An encoded string
*/

char *leet(char *s)
{
	int len = strlen(s);
	int i;
	int j;
	char encrypt[10] = "4433007711";
	char match[10] = "aAeEoOtTlL";

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == match[j])
				s[i] = encrypt[j];
		}
	}

	return (s);
}
