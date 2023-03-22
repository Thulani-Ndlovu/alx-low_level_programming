#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* array_iterator - executes a function given as a parameter on each
* element of an array
* @array: Array of integers
* @size: unsigned size of the array
* @action: Pointer array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
