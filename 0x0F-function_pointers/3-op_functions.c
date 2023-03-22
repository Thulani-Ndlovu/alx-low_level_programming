#include "3-calc.h"

/**
* op_add - adds two integers
* @a: integer 1
* @b: integer 2
* Return: sum of the integers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracts b from a
* @a: integer 1
* @b: integer 2
* Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies 2 integers
* @a: integer 1
* @b: integer 2
* Return: product of the integers
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides two integers
* @a: integer 1
* @b: integer 2
* Return: a divided by b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - performs modulus of two integers
* @a: integer 1
* @b: integer 2
* Return: the remainder of the division of a & b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
