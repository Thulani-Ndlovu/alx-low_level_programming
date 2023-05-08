#include "main.h"

/**
* len - length of the string
* @text_content: text to be appended
* Return: length of the string
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
* append_text_to_file - appends a text at the end of a file
* @filename: name of the file to be appended
* @text_content: contents of the text to be appended to a file
* Return: 1 (success), otherwise -1 (failed)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int _len;
	int OPEN;
	int WRITE;

	if (filename == NULL)
		return (-1);

	_len = len(text_content);
	OPEN = open(filename, O_WRONLY | O_APPEND);
	WRITE = write(OPEN, text_content, _len);

	if (OPEN == -1 || WRITE == -1)
		return (-1);

	close(OPEN);
	return (1);
}
