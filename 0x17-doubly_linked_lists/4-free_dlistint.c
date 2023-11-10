#include "lists.h"
/**
 * free_dlistint - function that frees a doubly linked list
 * @head: the pointer to the first element
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current);
	}
}
