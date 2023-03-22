#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: integer array
* @size: size of the array
* @cmp: pointer function
* Return: index of the first element for which cmp does not return 0,
* return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
