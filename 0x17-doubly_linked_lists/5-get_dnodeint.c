#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a double linked list
* @head: pointer to the head node of the list
* @index: index of the node we want to return
* Return: return the address of the node, otherwise NULL if doesnt exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = 0;
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	tmp = head;
	if (index < 0 || index >= len)
		return (NULL);

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
