#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: decimal number (bit)
* @index: index of the bit we want to get
* Return: value of a bit at index, or -1 if error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_memory;

	bit_memory = sizeof(unsigned long int) * 8;

	if (index >= bit_memory)
		return (-1);

	else if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
