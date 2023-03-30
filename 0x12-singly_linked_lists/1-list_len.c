#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: pointer to the linked list
* Return: total number of elements in the list
*/

size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		num_elements++;
		h = h->next;
	}

	return (num_elements);
}
