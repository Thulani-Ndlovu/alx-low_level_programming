#include "main.h"
#include <ctype.h>

/**
* _isalpha - checks if a character is an alphabet
* @c: character
* Return: integer
*/

int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	return (0);
}
