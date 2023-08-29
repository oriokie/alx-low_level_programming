#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node to a specified
 * position
 * @head: pointer to pointer for the head
 * @idx: index of the list where the new node should be added
 * @n: the value to be added
 *
 * Return: NUll if it failed; the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int count;

	count = 0;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	/* If the current list is empty */
	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;

	/* Traversing the current list to the index position */

	while (count < idx - 1 && current != NULL)
	{
		current = current->next;
		count++;
	}

	/* Inserting the new node */

	new->next = current->next;
	current->next = new;

	return (new);
}

