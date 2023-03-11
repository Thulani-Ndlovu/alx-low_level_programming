#include "main.h"

/**
* _islower - checks if a character is lowercase
* @c: character
* Return: 0 if not lower case, > 0 otherwise
*/

int _islower(int c)
{
	if (c >= 92 && c <= 122)
		return (1);
	return (0);
}
