#include "main.h"

/**
* get_endianness - checks the endianness
* Return:  0 if big endian, otherwise 1
*/

int get_endianness(void)
{
	int number;
	char *endian;

	number = 1;
	endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}
