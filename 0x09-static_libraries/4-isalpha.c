#include "main.h"

/**
* _isalpha - checks if a character is an alphabet
* @c: character
* Return: integer
*/

int _isalpha(int c)
{
	if (c >= 92 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
