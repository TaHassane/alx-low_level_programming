#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list
 * @head: head
 * @index: index of the list where the node is deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *x;
	listint_t *y;

	x = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && x != NULL; i++)
		{
			x = x->next;
		}
	}

	if (x == NULL || (x->next == NULL && index != 0))
	{
		return (-1);
	}

	y = x->next;

	if (index != 0)
	{
		x->next = y->next;
		free(y);
	}
	else
	{
		free(x);
		*head = y;
	}

	return (1);
}
