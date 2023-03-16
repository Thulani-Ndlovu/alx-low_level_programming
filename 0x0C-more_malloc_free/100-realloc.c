#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: old memory block
* @old_size: size of the old memory block
* @new_size: size of the new memory block
* Return: void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;
	char *new_ptr;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (ptr != NULL)
		tmp = ptr;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < (old_size || new_size); i++)
		*(new_ptr + i) = tmp[i];
	free(ptr);

	return (new_ptr);
}
