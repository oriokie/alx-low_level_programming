#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data in a doubly
 * linked list
 * @head: this is the head of the list
 *
 * Return: sum of all the data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
