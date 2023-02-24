#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size of the triangle
*/

void print_triangle(int size)
{
	int i;
	int j;
	int counter = 1;

	if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < (size - counter))
					_putchar(' ');
				else
					_putchar('#');
			}
			counter++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
