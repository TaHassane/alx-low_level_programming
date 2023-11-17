#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new, *dup;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = NULL;
	dup = *head;

	if (dup == NULL)
	{
		*head = new;
	}
	else
	{
		while (dup->next != NULL)
			dup = dup->next;
		dup->next = new;
	}

	return (*head);
}
