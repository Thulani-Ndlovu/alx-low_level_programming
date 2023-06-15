#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: head of the doubly linked list
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int nodeCount = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodeCount++;
		temp = temp->next;
	}
	return (nodeCount);
}
