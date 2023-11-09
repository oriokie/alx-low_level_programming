#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a double linked
 * list
 * @h: the start of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}
	return (nodes);
}
