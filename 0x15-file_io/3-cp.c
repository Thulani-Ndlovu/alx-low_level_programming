#include "main.h"

/**
* memory_allocate - allocates memory for text
* @filename: Name of a file
* Return: allocated memory
*/

char *memory_allocate(char *filename)
{
	char *text = malloc(sizeof(char) * 1024);

	if (text == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (text);
}

/**
* CLOSE - close file
*@fd: file descriptor
*/

void CLOSE(int fd)
{
	int _close =  close(fd);

	if (_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd);
		exit(100);
	}
}

/**
* main - copy contents from one file to another
* @argc: argument count
* @argv: argument vector
* Return: 0 (success)
*/

int main(int argc, char **argv)
{
	char *text;
	int old, new, WRITE, READ;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	text = memory_allocate(argv[2]);
	old = open(argv[1], O_RDONLY);
	READ = read(old, text, 1024);
	new = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (old == -1 || READ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(text);
			exit(98);
		}
		WRITE = write(new, text, READ);

		if (new == -1 || WRITE == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n"
					, argv[2]);
			exit(99);
		}

		READ = read(old, text, 1024);
		new = open(argv[2], O_WRONLY | O_APPEND);
	} while (READ > 0);

	free(text);
	CLOSE(old);
	CLOSE(new);

	return (0);
}
