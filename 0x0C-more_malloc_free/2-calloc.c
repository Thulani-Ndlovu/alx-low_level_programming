#include "main.h"

/**
* _calloc - allocates memory for an array using malloc.
* @nmemb: elements in the array
* @size: byte size of each element
* Return: Null if size or nmemb is 0, null if malloc fails.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
