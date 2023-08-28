#include "lists.h"
/**
 * print_listint - function that prints all the elements present
 * in the listint_t list
 * @h: list to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/** size t is appropriate for counting elements*/
	size_t count = 0;

	/**Lets return 0 for an empty list*/
	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		/**Move to the next node*/
		h = h->next;
		count++;
	}
	/*return the count of the nodes*/
	return (count);
}
