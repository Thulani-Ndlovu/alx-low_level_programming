#include <unistd>
#include "main.h"

/**
* _putchar - prints a character
* @c: character
* Return: returns the character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
