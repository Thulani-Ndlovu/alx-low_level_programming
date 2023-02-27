#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: holds first integer
* @b: holds the second integer
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
