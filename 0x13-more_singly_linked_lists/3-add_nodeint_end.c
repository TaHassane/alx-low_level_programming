#include "lists.h"

/**
 * add_nodeint_end - add a newnode node at the end of a linked list
 * @head: head
 * @n: elements
 *
 * Return: address of the newnode element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *x;

	(void)x;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	x = *head;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (x->next != NULL)
		{
			x = x->next;
		}
		x->next = newnode;
	}

	return (*head);
}
