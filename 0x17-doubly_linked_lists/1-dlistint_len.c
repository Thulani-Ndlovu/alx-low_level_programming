#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked list
* @h: head node of the list
* Return: total number of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t elementCount = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		elementCount++;
		temp = temp->next;
	}
	return (elementCount);
}
