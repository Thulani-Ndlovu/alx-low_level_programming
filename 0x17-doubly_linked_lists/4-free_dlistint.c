#include "lists.h"

/**
* free_dlistint - frees a double linked list
* @head: pointer the head node of the list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp)
	{
		dlistint_t *tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
}
