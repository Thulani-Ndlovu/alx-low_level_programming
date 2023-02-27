#include "main.h"
#include <string.h>

/**
* print_rev - prints string in reverse
* @s: holds a string
*/

void print_rev(char *s)
{
	int length = strlen(s);
	int i = length - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
