#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: the head of the list
 *
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	/* check if head is null */
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
