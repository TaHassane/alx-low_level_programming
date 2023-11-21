#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: head
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *n;

	x = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = n;
	}

	*head = x;
	return (*head);
}
