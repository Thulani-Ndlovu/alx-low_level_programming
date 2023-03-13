#include "main.h"

/**
* _whats_my_name - prints the name of the function
* @argc: argument count
* @argv: argument vector
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[argc - 1]);
	return (0);
}
