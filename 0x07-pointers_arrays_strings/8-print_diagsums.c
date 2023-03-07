#include "main.h"

/**
* print_diagsums - prints sum of two diagonals of a square matrix
* @a: pointer to a 2d array
* @size: size of the array
*/

void print_diagsums(int *a, int size)
{
	int right_diag = 0;
	int left_diag = 0;
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		right_diag += a[i * size + i];
	}

	for (j = size - 1; j >= 0; j--)
	{
		left_diag += a[j * size + (size - j - 1)];
	}

	printf("%d, %d\n", right_diag, left_diag);
}
