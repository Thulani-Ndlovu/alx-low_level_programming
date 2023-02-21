#include "main.h"
#include <ctype.h>

/**
* _isalpha - checks if a character is a letter, lowercase or uppercase
* @c: holds the character
* Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
*/

int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	return (0);
}
