#include <stdio.h>

/**
* main - prints all possible combinations of two digits
* Separated by , and the digits must be different
* Return: 0 (success)
*/

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i != j) && (i < j))
			{
				putchar('0' + i);
				putchar('0' + j);

				if ((i + j) != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
