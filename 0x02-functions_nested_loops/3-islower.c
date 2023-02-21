#include "main.h"
#include <ctype.h>

/**
* _islower - checks if a character is lowercase or not
* @c: holds the input variable
* Return: 1 if lowercase or 0 otherwise
*/

int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
		return (0);
}
