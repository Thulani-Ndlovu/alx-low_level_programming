#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data of a linked list
* @head: head node of the list
* Return: 0 if the list is empty, otherwise the sum
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum  = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
