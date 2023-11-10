#include "lists.h"
/**
 * add_dnodeint_end - function to add a node to the end of a doubly linked list
 * @head: - head of the list
 * @n: data
 *
 * Return: address of the new element; NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/* list empty? make the new node the head */
	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	/* Get the last node in the list */
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	/* appending th enew node to the end of the list */
	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
