#include <unistd.h>

/**
* _putchar - prints character
* @c: holds a character
* Return: character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
