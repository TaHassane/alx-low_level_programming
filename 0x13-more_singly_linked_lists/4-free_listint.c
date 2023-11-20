#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while ((x = head) != NULL)
	{
		head = head->next;
		free(x);
	}
}

