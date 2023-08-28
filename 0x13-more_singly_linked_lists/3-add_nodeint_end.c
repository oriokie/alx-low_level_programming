#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a given list
 * @head: pointer to a pointer of the head of the linked list
 * @n: int value of the new node
 *
 * Return: address of the new element; NULL for failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*allocating memory to the new node */

	listint_t *new = malloc(sizeof(listint_t));

	/* return NULL if it failed */

	if (new == NULL)
	{
		return (NULL);
	}

	/* the last node has a NULL address */
	new->n = n;
	new->next = NULL;
	/* if an empty list,  make the new node the head */
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		listint_t *last = *head;
		/* Finding the last node */

		while (last->next != NULL)
		{
			last = last->next;
		}
		/* set the next of the last node to the new node */
		last->next = new;
	}
	/* return the address of the new node */
	return (new);
}
