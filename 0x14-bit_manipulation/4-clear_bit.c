#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: decimal number
* @index: index at which we want to set a zero
* Return: 1 (success), otherwise -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_memory;

	bit_memory = sizeof(unsigned long int) * 8;

	if (index >= bit_memory)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
