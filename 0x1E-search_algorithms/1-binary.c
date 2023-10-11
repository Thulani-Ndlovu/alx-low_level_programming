#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to search from
 * @size: size of the search array
 * @value: value to search for
 * Return: index where the value is located, otherwise -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid_ptr;
	size_t right_ptr;
	size_t left_ptr;
	size_t i;

	if (!array)
		return (-1);

	left_ptr = 0;
	right_ptr = size - 1;

	while (left_ptr <= right_ptr)
	{
		mid_ptr = left_ptr + (right_ptr - left_ptr) / 2;
		printf("Searching in array: ");
		for (i = left_ptr; i <= right_ptr; i++)
		{
			printf("%d", array[i]);
			if (i != right_ptr)
				printf(", ");
		}
		printf("\n");

		if (array[mid_ptr] == value)
			return (mid_ptr);
		else if (array[mid_ptr] > value)
		{
			right_ptr = mid_ptr - 1;
		}
		else
		{
			left_ptr = mid_ptr + 1;
		}
	}
	return (-1);
}
