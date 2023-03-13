#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _isdigit - checks if the element in an array is a digit or not
* @s: pointer to an array
* Return: 1 if its a digit or 0 if not a digit
*/

int _isdigit(char *s)
{
	unsigned int nav = 0;

	while (nav < strlen(s))
	{
		if (!isdigit(s[nav]))
		{
			return (0);
		}
		nav++;
	}
	return (1);
}

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		if (_isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
