#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * The function should set the head to NULL
 * @head: the pointer to the pointer of the first element
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
