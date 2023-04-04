#include "lists.h"

/**
* listint_len - Returns the number of elements in a linked list
* @h: head of the list
* Return: number of nodes in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		num_elements++;
		h = h->next;
	}

	return (num_elements);
}
