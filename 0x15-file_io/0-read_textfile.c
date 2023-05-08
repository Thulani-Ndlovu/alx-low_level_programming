#include "main.h"

/**
* read_textfile - Reads a text file and prints it to te standard ouput of
* POSIX
* @filename: name of the file to be read from
* @letters: number of letters that should be read and print by the function
* Return: Number of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t WRITE, READ, OPEN;

	if (filename == NULL)
		return (0);

	text =  malloc(sizeof(char) * letters);

	if (text == NULL)
		return (0);

	OPEN = open(filename, O_RDONLY);
	READ = read(OPEN, text, letters);
	WRITE = write(STDOUT_FILENO, text, READ);

	if (OPEN == -1 || READ == -1 || WRITE == -1 || WRITE != READ)
	{
		free(text);
		return (0);
	}

	free(text);
	close(OPEN);

	return (WRITE);
}
