#include "lists.h"

/**
 * sum_listint - function that returns the x of all the data (n)
 * of a listint_t linked list.
 * @head: head
 * Return: x of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int x;

	x = 0;
	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}

	return (x);
}
