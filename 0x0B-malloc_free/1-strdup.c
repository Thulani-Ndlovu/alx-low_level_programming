#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: pointer to a string to be copied
* Return: allocated space in memory
*/

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	ptr = (char *) malloc(sizeof(char));

	if (ptr == 0)
		return (NULL);

	else
	{
		while (str[i] != '\0')
		{
			ptr[i] = str[i];
			i++;
		}
	}

	return (ptr);
}
