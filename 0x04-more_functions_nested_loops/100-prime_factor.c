#include <stdio.h>

/**
* main - Prints the largest prime factor
* Return: 0 success
*/

int main(void)
{
	long int num = 612852475143;
	int largest_factor = 0;
	int prime_number = 2;

	while (num != 0)
	{
		if (num % prime_number != 0)
			prime_number += 1;
		else
		{
			largest_factor = num;
			num /= prime_number;
			if (num == 1)
			{
				printf("%d", largest_factor);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
