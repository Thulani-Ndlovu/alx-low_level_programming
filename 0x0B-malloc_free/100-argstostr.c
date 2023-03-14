#include "main.h"
#include <string.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: argument count
* @av: argument vector
* Return: concatenated string, otherwise a null if it fails
*/

char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int i;
	char newline[1] = "\n";

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = (char *) malloc(2 * 10 * ac * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, newline);

	}
	return (ptr);
}
