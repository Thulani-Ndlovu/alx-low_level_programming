#include "main.h"

/**
* string_length - returns the length of the string
* @s - string
* Return: length of the string
*/

int string_length(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + string_length(++s));
}

/**
* check - checks every head and tail character in a string if they are equal
* @s: pointer to a string
* @len: traverse iterator
* Return: 1 for palindrome 0 otherwise
*/

int check(char *s, int len)
{
	if (len < 1)
		return (1);
	else if (*s == *(s + 1))
		return (check(s + 1, len - 2));
	return (0);
}

/**
* is_palindrome - returns 1 if a string is a palindrome otherwise 0
* @s: pointer to a string
* Return: 1 if palindrome, otherwise 0
*/

int is_palindrome(char *s)
{
	int len = string_length(s);

	return (check(s, len - 1));
}
