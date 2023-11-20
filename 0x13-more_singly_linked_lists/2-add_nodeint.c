#include "lists.h"

/**
 * add_nodeint - add a newnode node at the beginning of a linked list
 * @head: head
 * @n: elements
 *
 * Return: address of the newnode element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
