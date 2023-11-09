#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a double
 * linked list
 * @h: point to the first element
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
