#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *act;

	while ((act = head) != NULL)
	{
		head = head->next;
		free(act->str);
		free(act);
	}
}
