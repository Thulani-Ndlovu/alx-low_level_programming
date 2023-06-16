#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: head node
* @idx: index to add the new node
* @n: data of the new node
* Return: address of the new node, otherwise NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *iter = *h;
	unsigned int size = 0, i = 0;

	while (iter)
	{
		size++;
		iter = iter->next;
	}
	iter = *h;
	if (idx < 0 || idx >= size)
		return (NULL);
	while (i < idx)
	{
		iter = iter->next;
		i++;
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	(iter->prev)->next = newNode;
	newNode->prev = (iter->prev);
	newNode->next = iter;
	iter->prev = newNode;

	return (newNode);
}
