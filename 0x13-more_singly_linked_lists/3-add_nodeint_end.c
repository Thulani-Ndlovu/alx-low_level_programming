#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a linked list
* @head: pointer to the head of the node
* @n: the data to be added in the list
* Return: The address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		tail = *head;

		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_node;
	}

	return (*head);
}
