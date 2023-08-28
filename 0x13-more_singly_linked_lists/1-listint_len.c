#include "lists.h"
/**
 * listint_len - function that return the number of elements in a list
 * @h: the pointer to the linked list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
