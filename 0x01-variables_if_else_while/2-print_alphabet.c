#include <stdio.h>

/**
* main - Code prints the alphabet in lowercase
* Return: 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	return (0);
}
