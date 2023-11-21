#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: head
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *x;
	listint_t *h;

	if (*head == NULL)
		return (0);

	x = *head;

	n = x->n;

	h = x->next;

	free(x);

	*head = h;

	return (n);
}
