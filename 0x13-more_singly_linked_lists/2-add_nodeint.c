#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of the list
 * @head: pointer to the head of the list
 * @n: the value of the node to be added
 *
 * Return: address of the new element or NULL for failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Lets allocate memomry for the new node */
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		/* Assign the value n to the n element of the new node */
		new->n = n;

		/* set the next pointer of the new node to the current head */
		new->next = *head;

		/* Update the head pointer to point to the new code */
		*head = new;

		/* Return the address of the new node */

		return (new);
	}
}
