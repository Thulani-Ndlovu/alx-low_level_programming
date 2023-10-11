#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Jump search Algorithm
 * @array: Array to search from
 * @size: size of the search array
 * @value: value to be searched
 * Return: index of the search, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, step;

	if (!array)
		return (-1);

	step = sqrt(size);
	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);
			for (j = i - step; j <= i && j < size; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
				{
					return (j);
				}
			}
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);
	for (j = i - step; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			printf("Found %d at index: %lu\n", value, j);
			return (j);
		}
	}
	return (-1);
}
