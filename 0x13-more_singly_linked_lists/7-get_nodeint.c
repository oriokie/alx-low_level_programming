#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: head of the linked list
 * @index: index of the node
 *
 * Return: the point to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* counter for moving the pointer */
	unsigned int counter;

	counter = 0;

	/* check if the head is null */
	if (head == NULL)
		return (NULL);

	/* transverse the list to the nth node */
	for (; counter < index && head != NULL; counter++)
	{
		/*move the head pointer */
		head = head->next;
	}
	return (head);
}

