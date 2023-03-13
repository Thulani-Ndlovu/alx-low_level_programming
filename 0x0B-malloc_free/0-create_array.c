#include "main.h"

/**
* create_array - creates an array of chars, and initializes it with
* specific char
* @size: size of the array
* @c: character
* Return: array pointer
*/

char *create_array(unsigned int size, char c)
{
	char *ptr  = (char *)malloc(size * sizeof(char));
	unsigned int i;

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
