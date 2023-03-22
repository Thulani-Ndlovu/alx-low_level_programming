#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - outputs the results of the operation selected
* @argc: argument count
* @argv: argument vector
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char operator;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	fun = get_op_func(argv[2]);

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}
	operator = *argv[2];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = fun(num1, num2);
	printf("%d\n", calc);

	return (0);
}
