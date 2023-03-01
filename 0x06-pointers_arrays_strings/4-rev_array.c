#include "main.h"

/**
* reverse_array - reverses the content og an array of integers
* @a: array of integers
* @n: Size of the array
*/

void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int midpoint = n / 2;

	for (i = 0; i < midpoint; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
