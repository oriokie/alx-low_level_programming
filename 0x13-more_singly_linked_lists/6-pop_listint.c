#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: the pointer to pointer of the head
 *
 * Return: the head node's data (n);
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	/* return 0 if the linked list is null */
	if (*head == NULL)
		return (0);

	/* tmp should point to the head */
	tmp = *head;

	/* move the head to the next item */
	*head = (*head)->next;

	/* num should contain the previous node's data */
	num = tmp->n;

	/* free the temp location */
	free(tmp);

	return (num);

}
