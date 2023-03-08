#include <unistd.h>

/**
* _putchar - prints a character
* @ch: character
* Return: returns a character
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
