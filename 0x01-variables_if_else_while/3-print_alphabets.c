#include <stdio.h>

/**
* main - Print alphabet in lowercase and then uppercase followed by a space
* Return: 0 (success)
*/

int main(void)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
	{
		putchar(lower_alpha);
	}

	for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
	{
		putchar(upper_alpha);
	}

	putchar('\n');

	return (0);
}
