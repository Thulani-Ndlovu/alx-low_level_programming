#include "main.h"

/**
* array_range - creates an array of integers
* @min: minimum
* @max: maximum
* Return: Null if min > max, Null if malloc fails
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int nav = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[nav] = i;
		nav++;
	}
	return (ptr);
}
