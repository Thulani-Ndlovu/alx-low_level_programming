#include <unistd.h>

/**
* _putchar - prints a character
* @c: holds a character
* Return: character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
