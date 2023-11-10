#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: the head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node or NULL for failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *current = *h;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0) /* insert the new node at the beginning of the list */
	{
		new = add_dnodeint(h, n);
	}
	for (i = 0; i < idx -1 && current != NULL; i++) /* searching for the index */
	{
		current = current->next;
	}
	if (current == NULL) /* reached the end before we find the index */
	{
		return (NULL);
	}
	if (current->next == NULL) /* is the end of the list? */
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = current->next; /*otherwise, insert middle */
	new->prev = current;
	current->next->prev = new;
	current->next = new;
	return (new);
}
