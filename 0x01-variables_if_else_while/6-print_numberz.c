#include <stdio.h>

/**
* main - prints single digits followed by a new line using ONLY putchar
* Return: 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
