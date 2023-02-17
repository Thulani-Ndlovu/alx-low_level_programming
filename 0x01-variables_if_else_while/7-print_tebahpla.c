#include <stdio.h>
#include <string.h>

/**
* main - Prints lowercase alphabet in reverse
* Return: 0 (success)
*/

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char tmp = ' ';
	int alphabet_length = strlen(alphabet);
	int midpoint = alphabet_length / 2;
	int i;

	for (i = 0; i < midpoint; i++)
	{
		tmp = alphabet[i];
		alphabet[i] = alphabet[(alphabet_length - 1) - i];
		alphabet[(alphabet_length - 1) - i] = tmp;
	}

	for (i = 0; i < alphabet_length; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');

	return (0);
}
