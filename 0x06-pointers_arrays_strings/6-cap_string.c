#include "main.h"
#include <string.h>

/**
* cap_string - capitalizes all world of a string
* @s: holds a string
* Return: capitalized string
*/

char *cap_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len - 1; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		else if ((s[i] >= 32 && s[i] <= 46 && s[i] != 45))
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}

		else if (s[i] >= 9 && s[i] <= 10 && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] -= 32;
	}

	return (s);
}
