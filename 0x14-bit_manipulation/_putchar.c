#include "main.h"

/**
* _putchar - Prints a character
* @c: holds a character
* Return: printed character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
