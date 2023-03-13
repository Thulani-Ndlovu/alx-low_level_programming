#include "main.h"
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}