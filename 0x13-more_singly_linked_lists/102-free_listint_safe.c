#include "lists.h"

/**
* Unique_nodesNum - searches for unique nodes in the linked list
* @head: pointer to the head node of the list
* Return: the number of unique nodes
*/

size_t Unique_nodesNum(listint_t *head)
{
	listint_t *Node_1, *Node_2;
	size_t unique_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	Node_1 = head->next;
	Node_2 = (head->next)->next;

	while (Node_2)
	{
		if (Node_1 == Node_2)
		{
			Node_1 = head;

			while (Node_1 != Node_2)
			{
				unique_nodes++;
				Node_1 = Node_1->next;
				Node_2 = Node_2->next;
			}

			Node_1 = Node_1->next;

			while (Node_1 != Node_2)
			{
				unique_nodes++;
				Node_1 = Node_1->next;
			}

			return (unique_nodes);
		}
		Node_1 = Node_1->next;
		Node_2 = (Node_2->next)->next;
	}

	return (0);
}

/**
* free_listint_safe - Frees a linked list in a safe way
* @h: pointer to the head node of the linked list
* Return: the size of the list that was free_d
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t num_nodes = 0, i = 0;

	num_nodes = Unique_nodesNum(*h);

	if (num_nodes == 0)
	{
		while (*h != NULL)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			num_nodes++;
		}
	}

	else
	{
		while (i < num_nodes)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			i++;
		}
		*h = NULL;
	}
	h = NULL;

	return (num_nodes);
}
