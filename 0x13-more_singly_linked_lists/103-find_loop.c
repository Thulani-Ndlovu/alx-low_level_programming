#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: head of the linked list
* Return: The address of the node where the loop starts, otherwise NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Node_1, *Node_2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	Node_1 = head->next;
	Node_2 = (head->next)->next;

	while (Node_2)
	{
		if (Node_1 == Node_2)
		{
			Node_1 = Node_2;

			while (Node_1 != Node_2)
			{
				Node_1 = Node_1->next;
				Node_2 = Node_2->next;
			}
			return (Node_1);
		}

		Node_1 = Node_1->next;
		Node_2 = (Node_2->next)->next;
	}

	return (NULL);
}
