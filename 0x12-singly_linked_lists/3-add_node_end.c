#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end of a linked list
* @head: pointer to the head of the list (beginning)
* @str: string to be added
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new, *tail;
	char *copy;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	copy = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new->str = copy;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		tail = *head;

		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}

	return (*head);
}
