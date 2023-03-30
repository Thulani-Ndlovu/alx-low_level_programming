#include "lists.h"

/**
* free_list - frees the linked list (list_t)
* @head: pointer to the start of the list
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
