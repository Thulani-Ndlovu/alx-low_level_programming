#include "lists.h"

/**
* print_listint - Prints all the elements of a linked list
* @h: head of the list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *New_node = h;

	while (New_node != NULL)
	{
		printf("%d\n", New_node->n);
		num_nodes++;
		New_node = New_node->next;
	}

	return (num_nodes);
}
