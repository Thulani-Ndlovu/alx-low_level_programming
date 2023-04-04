#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at specified index of a linked
* list
* @head: pointer to the head node in the list
* @index: index to delete from
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dup = *head, *tmp;
	unsigned int i = 0;

	if (dup == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dup);
		return (1);
	}

	while (i < index - 1)
	{
		if (dup->next == NULL)
			return (-1);
		dup = dup->next;
		i++;
	}

	tmp = dup->next;
	dup->next = tmp->next;
	free(tmp);

	return (1);
}
