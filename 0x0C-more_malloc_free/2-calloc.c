#include "main.h"

/**
* _calloc - allocates memory for an array using malloc.
* @nmemb: elements in the array
* @size: byte size of each element
* Return: Null if size or nmemb is 0, null if malloc fails.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
