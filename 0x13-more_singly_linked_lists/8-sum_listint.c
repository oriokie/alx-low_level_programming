#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the elements in a list
 * @head: the pointer to the head element
 *
 * Return: 0 if empty; sum
 */
int sum_listint(listint_t *head)
{
	/*initialize the sum variable */
	unsigned int sum;

	sum = 0;

	/* check if list is empty */
	if (head == NULL)
		return (0);

	/* Transverse the list while adding the items */
	while (head != NULL)
	{
		sum += head->n;

		/* move to the next node */
		head = head->next;
	}
	return (sum);
}
