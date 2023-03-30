#include "lists.h"
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list
* @head: pointer to the head of the list
* @str: pointer to the string to be added
* Return: Address of the new element or null if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *copy;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	copy = strdup(str);

	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new->str = copy;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
