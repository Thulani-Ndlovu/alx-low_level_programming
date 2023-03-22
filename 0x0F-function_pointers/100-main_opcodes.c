#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own main function
* @argc: argument count
* @argv: argument vector
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i = 0, number_of_bytes;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	while (i < number_of_bytes)
	{
		if (i == (number_of_bytes - 1))
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
		i++;
	}

	return (0);
}
