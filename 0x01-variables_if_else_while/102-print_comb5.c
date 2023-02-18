#include <stdio.h>

/**
* main - prints combinations of two two-digit numbers
* ranging from 0 to 99
* Return: 0 (success)
*/

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int i;
	int j;

	for (i = 0; i < 99 ; i++)
	{
		a = i / 10 + '0';
		b = i % 10 + '0';
		for (j = 0; j < 100; j++)
		{
			c = j / 10 + '0';
			d = j % 10 + '0';
			if (i < j)
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);
				if (i != 98)
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
