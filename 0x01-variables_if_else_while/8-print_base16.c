#include <stdio.h>

/**
* main - print base 16 numbers in lowercase using putchar
* Return: 0 (success)
*/

int main(void)
{
	int counter = 0, i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
			counter++;
		}
		else
			putchar('a' + i - counter);
	}

	putchar('\n');

	return (0);
}


