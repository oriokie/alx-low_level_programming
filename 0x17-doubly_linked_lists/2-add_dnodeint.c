#include "lists.h"
/**
 * add_dnodeint - function that adds a node at the beginning of a list
 * @head: the first element of the list
 * @n: the data to be stored in the node
 *
 * Return: the address of the new element; NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
	if (!head)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
