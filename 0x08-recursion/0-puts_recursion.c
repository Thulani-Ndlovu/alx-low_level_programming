#include "main.h"
#include <string.h>

/**
* _puts_recursion - prints a string followed by a newline
* @s: pointer to a string
*/

void _puts_recursion(char *s)
{
	int len = strlen(s);

	if (len == 0)
		_putchar('\n');

	else
	{
		_putchar(*s);
		s++;
		if (*s > '\0')
			_puts_recursion(s);
		else
			_putchar('\n');
	}
}
