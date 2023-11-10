#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: head of the list
 * @index: the nth node
 *
 * Return: the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	/* checking if the head pointer is valid */
	if (!head)
	{
		return (NULL);
	}
	/* non_existent index */
	for (i = 0, current = head; current != NULL; i++)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
	}

	return (NULL); /* if the index if out of bounds */
}
