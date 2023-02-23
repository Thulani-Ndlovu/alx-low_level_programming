#include "main.h"
#include <unistd.h>

/**
* _putchar - prints characters
* @ch: holds a character
* Return: 0 (success)
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
