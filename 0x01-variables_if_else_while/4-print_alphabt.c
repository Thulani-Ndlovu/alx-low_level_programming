#include <stdio.h>

/**
* main - code prints the alphabet in lowercase except for q and e
* Return: 0 (success)
*/

int main(void)
{
	char lower_alpha = 'a';

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
	{
		if (lower_alpha != 'q' && lower_alpha != 'e')
		{
			putchar(lower_alpha);
		}
	}

	putchar('\n');

	return (0);
}
