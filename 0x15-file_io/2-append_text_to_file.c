#include "main.h"

/**
* length - lenght of the string
* @text_content: text to be appended
* Return: length
*/

int length(char *text_content)
{
	int len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	return (len);
}

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: string to be added to a file
* Return: 1 (success), otherwise -1 (failure)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int _len = 0;
	int OPEN;
	int WRITE;

	if (filename == NULL)
		return (-1);

	_len = length(text_content);
	OPEN = open(filename, O_WRONLY | O_APPEND);
	WRITE = write(OPEN, text_content, _len);

	if (OPEN == -1 || WRITE == -1)
		return (-1);

	close(OPEN);
	return (1);
}
