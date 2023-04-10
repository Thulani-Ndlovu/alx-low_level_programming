#include "main.h"

/**
* len - length of the string
* @text_content: contents to be added
* Return: string lenght
*/

int len(char *text_content)
{
	int _len = 0;

	if (text_content != NULL)
	{
		for (_len = 0; text_content[_len];)
			_len++;
	}

	return (_len);
}

/**
* create_file - creates a file
* @filename: name of the file to be created
* @text_content: string to write tto the file
* Return: 1 (success), otherwise -1 (failure)
*/

int create_file(const char *filename, char *text_content)
{
	int WRITE;
	int length;
	int OPEN;

	if (filename == NULL)
		return (-1);

	length = len(text_content);
	OPEN = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	WRITE = write(OPEN, text_content, length);

	if (OPEN == -1 || WRITE == -1)
		return (-1);

	close(OPEN);
	return (1);
}
