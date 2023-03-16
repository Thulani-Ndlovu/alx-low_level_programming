#include "main.h"
#include <string.h>

/**
* main - multiplies two positive integers
* @ac: argument count
* @argv: argument vector
* Return: 0 (success)
*/

int main(int ac, char **argv)
{
	int i, j;
	unsigned long mul = 0, num1 = 0, num2 = 0;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < ac; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	mul = num1 * num2;
	printf("%lu\n", mul);

	return (0);
}
