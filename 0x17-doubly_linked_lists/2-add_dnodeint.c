#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a list
* @head: head node of a list
* @n: new data to be added
* Return: address of a new element, otherwise NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *firstNode, *newNode;

	if (*head == NULL)
	{
		firstNode =  malloc(sizeof(dlistint_t));
		firstNode->n = n;
		firstNode->prev = NULL;
		(*head) = firstNode;
		firstNode->next = NULL;
	}

	else if (*head != NULL)
	{
		newNode = malloc(sizeof(dlistint_t));
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = (*head);
		(*head) = newNode;
	}

	return (*head);
}
