#include "lists.h"

/**
 * list_len - This function returns the number of elements in a
 * given list linked (list_t list)
 * @h: The linked list
 * Return: The number of elements in the linked list provided
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

