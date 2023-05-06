 #include "main.h"

/**
* flip_bits - returns the number of bits that you have to flip to get
* from one number ot another
* @n: decimal number
* @m: flipped decimal number
* Return: number of bits flipped to get to m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_bits = 0, exclusive_or;

	exclusive_or = n ^ m;

	while (exclusive_or > 0)
	{
		num_bits = num_bits + (exclusive_or & 1);
		exclusive_or = (exclusive_or >> 1);
	}
	return (num_bits);
}
