#include "lists.h"

/**
* pop_listint -  deletes the head node of a linked list, and returns the
* head node's data (n)
* @head: pointer the head of the list
* Return: 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int head_data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	head_data = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (head_data);
}
