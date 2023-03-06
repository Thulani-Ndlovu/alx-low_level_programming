#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer to a string
* @accept: pointer to subset string
* Return: number of bytes in the initial segment of s
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
			{
				return (counter);
			}
		}
		search++;
	}

	return (counter);
}
