#include "lists.h"

/**
* free_listint2 - Frees a linked list by setting the head to NULL
* @head: head of the list
* Return: Void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
