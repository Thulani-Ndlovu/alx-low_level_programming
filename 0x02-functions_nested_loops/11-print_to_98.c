#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: initial number
*/

void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				break;
			}
			else
				printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				break;
			}
			else
				printf("%d, ", i);
		}
	}
}
