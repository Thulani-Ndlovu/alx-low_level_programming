#include "lists.h"

/**
* Unique_nodes - searches for unique nodes in the linked list
* @head: head node of the list
* Return: the number of unique nodes
*/

size_t Unique_nodes(const listint_t *head)
{
	const listint_t *Node_1, *Node_2;
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
* print_listint_safe - Prints a linked list in a safe way
* @head: head node of the linked list
* Return: the number of nodes in the list, exits 98 if function fails
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0, i = 0;

	num_nodes = Unique_nodes(head);

	if (num_nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			num_nodes++;
			head = head->next;
		}
	}

	else
	{
		while (i < num_nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			i++;
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_nodes);
}
