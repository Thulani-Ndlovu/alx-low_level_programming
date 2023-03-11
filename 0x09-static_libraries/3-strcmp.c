#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: results of the comparison
*/

int _strcmp(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	unsigned int tally = 0;
	int i;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (len_s1 <= len_s2)
	{
		for (i = 0; i < len_s1; i++)
		{
			if (s1[i] != s2[i])
			{
				tally = (s1[i] - '0') - (s2[i] - '0');
				break;
			}
		}
	}

	else
	{
		for (i = 0; i < len_s2; i++)
		{
			if (s1[i] != s2[i])
			{
				tally = (s1[i] - '0') - (s2[i] - '0');
				break;
			}
		}
	}

	return (tally);
}
