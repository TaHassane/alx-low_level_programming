#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *x;
	listp_t *y;

	if (head != NULL)
	{
		y = *head;
		while ((x = y) != NULL)
		{
			y = y->next;
			free(x);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listp_t *p, *x, *z;
	listint_t *y;

	p = NULL;
	while (*h != NULL)
	{
		x = malloc(sizeof(listp_t));

		if (x == NULL)
			exit(98);

		x->p = (void *)*h;
		x->next = p;
		p = x;

		z = p;

		while (z->next != NULL)
		{
			z = z->next;
			if (*h == z->p)
			{
				*h = NULL;
				free_listp2(&p);
				return (n);
			}
		}

		y = *h;
		*h = (*h)->next;
		free(y);
		n++;
	}

	*h = NULL;
	free_listp2(&p);
	return (n);
}
