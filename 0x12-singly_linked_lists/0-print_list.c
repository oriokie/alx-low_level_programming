#include <stdio.h>
#include <list.h>
/**
 * print_list - function that prints all the elements in the given list
 * @h: the pointer to the list being printed
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++
	}
	return (count);
}