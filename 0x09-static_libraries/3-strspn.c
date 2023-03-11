#include "main.h"

/**
* _strspn - span on a string
* @s: string
* @accept: compare string
* Return: integer
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int search = 0;
	int i;

	while (s[search] >= '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[search] == accept[i])
			{
				counter++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (counter);
		}
		search++;
	}

	return (counter);
}
