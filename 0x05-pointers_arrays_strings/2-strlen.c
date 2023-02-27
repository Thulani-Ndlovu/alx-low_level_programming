#include "main.h"

/**
* _strlen - calculates the length of the string
* @s: holds a string
* Return: the length of the string
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
