#include <stdio.h>

void __attribute__((constructor)) Tortoise_Hare(void);

/**
* Tortoise_Hare - Prints a string before the main function can be executed
* Return: void
*/

void Tortoise_Hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
