#include "main.h"
#include <ctype.h>

/**
* _islower - checks if a character is lowercase
* @c: character
* Return: 0 if not lower case, > 0 otherwise
*/

int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	return (0);
}
