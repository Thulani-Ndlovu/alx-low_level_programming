#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a linked list
* @head: pointer to the head of the list
* @n: the data being added to the list
* Return: address of the new element, or NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New_node;

	New_node = malloc(sizeof(listint_t));

	if (New_node == NULL)
		return (NULL);

		New_node->n = n;
		New_node->next = *head;
		*head = New_node;

	return (New_node);
}
