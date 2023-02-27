#include <unistd.h>

/**
* _putchar - prints a character
* @ch: holds a character to be printed
* Return: returns a character
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
