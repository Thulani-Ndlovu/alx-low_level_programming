#include <stdio.h>

/**
* main - prints all possible combinations of single digit numbers
* Return: 0 (success)
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num < 9)
		{
			putchar('0' + num);
			putchar(',');
		}
		else
			putchar('0' + num);
	}

	putchar('\n');

	return (0);
}
