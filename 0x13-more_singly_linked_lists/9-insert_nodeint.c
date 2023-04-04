#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the first node in a list
* @idx: index of the list where the new node should be added
* @n: is the data to be added
* Return: address of the new node, otherwisr null if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tail = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = tail;
		*head = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		if (tail == NULL || tail->next == NULL)
			return (NULL);
		tail = tail->next;
		i++;
	}

	new_node->next = tail->next;
	tail->next = new_node;

	return (new_node);
}
