#include <stdio.h>

/**
* main - Print different combinations of 3 digits
* 012,120,102,021,201,210 are considered the same 3 digits combo
* Return: 0 (success)
*/

int main(void)
{
	int i;
	int j;
	int z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (z = 0; z < 10; z++)
			{
				if (i != j && j != z && i != z && i < j && j < z)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + z);

					if (i + j + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
