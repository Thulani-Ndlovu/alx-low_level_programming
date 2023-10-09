#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * linear search algorithm
 * @array: array to search from
 * @size: size of the array
 * @value: value to search for
 * Return: first index where value is, otherwise NULL, or -1 if array
 * is NULL
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
