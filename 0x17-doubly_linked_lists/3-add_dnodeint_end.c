#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a linked list
* @head: head pointer
* @n: data to be added
* Return: address of the new element, otherwise NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *firstNode, *newNode, *iter = *head;

	if (*head == NULL)
	{
		firstNode = malloc(sizeof(dlistint_t));
		if (firstNode == NULL)
			return (NULL);
		firstNode->n = n;
		firstNode->prev = NULL;
		(*head) = firstNode;
		firstNode->next = NULL;
	}
	else if (*head != NULL)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);
		while (iter->next != NULL)
			iter = iter->next;
		newNode->n = n;
		newNode->prev = iter;
		iter->next = newNode;
		newNode->next = NULL;
	}
	return (*head);
}
