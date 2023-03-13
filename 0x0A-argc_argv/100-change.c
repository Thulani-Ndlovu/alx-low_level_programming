#include "main.h"
#include <stdlib.h>

/**
* main - prints minimum number of coins to make change
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int amount = 0;
	int nav = 0;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount < 0)
		printf("0\n");

	while (coins[nav] != '\0')
	{
		if (amount >= coins[nav])
		{
			change += (amount / coins[nav]);
			amount -= coins[nav] * (amount / coins[nav]);
		}
		nav++;
	}
	printf("%d\n", change);
	return (0);
}
