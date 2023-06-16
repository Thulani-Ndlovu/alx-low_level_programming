#include "lists.h"

/**
* list_size - returns size of the list
* @head: head node
* Return: the number of elements in the list
*/

size_t list_size(dlistint_t *head)
{
	size_t size = 0;
	dlistint_t *tmp = head;

	while (tmp->next != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}

/**
* get_dnodeint_at_index - returns the nth node of a double linked list
* @head: pointer to the head node of the list
* @index: index of the node we want to return
* Return: return the address of the node, otherwise NULL if doesnt exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = list_size(head);
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (index < 0 || index > len - 1)
		return (NULL);

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
