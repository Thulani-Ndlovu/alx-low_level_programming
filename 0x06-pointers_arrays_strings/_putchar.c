#include "main.h"
#include <unistd.h>

/**
* _putchar - prints a character
* @ch: Holds a character
* Return: a character
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
