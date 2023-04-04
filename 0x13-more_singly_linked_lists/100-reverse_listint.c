#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: pointer to the head node of the list
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *HEAD, *TAIL;

	if (head == NULL || *head == NULL)
		return (NULL);

	TAIL = NULL;

	while ((*head)->next != NULL)
	{
		HEAD = (*head)->next;
		(*head)->next = TAIL;
		TAIL = *head;
		*head = HEAD;
	}

	(*head)->next = TAIL;

	return (*head);
}
