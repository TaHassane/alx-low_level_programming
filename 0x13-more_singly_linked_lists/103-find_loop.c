#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: head
 *
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x;
	listint_t *y;

	x = head;
	y = head;
	while (head && x && x->next)
	{
		head = head->next;
		x = x->next->next;

		if (head == x)
		{
			head = y;
			y =  x;
			while (1)
			{
				x = y;
				while (x->next != head && x->next != y)
				{
					x = x->next;
				}
				if (x->next == head)
					break;

				head = head->next;
			}
			return (x->next);
		}
	}

	return (NULL);
}
