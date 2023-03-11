#include "main.h"

/**
* _strlen - returns length of the string
* @s: pointer to a string
* Return: length of the string
*/

int _strlen(char *s)
{
	int i = 0;
	int counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
