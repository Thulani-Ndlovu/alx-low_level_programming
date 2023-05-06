#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: decimal number
* @index: index of the bit we want to set
* Return: 1 (if it worked), otherwise -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_memory;

	bit_memory = sizeof(unsigned long int) * 8;

	if (index >= bit_memory)
		return (-1);
	*n = *n ^ (1 << index);
	return (1);
}
