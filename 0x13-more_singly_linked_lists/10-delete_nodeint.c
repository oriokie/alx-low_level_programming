#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes a node at a given index
 * @head:pointer to pointer for the head
 * @index: index for thee node
 *
 * Return: 1- success; -1 - failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	current = *head;
	count = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (count < index - 1 && current != NULL)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);

	return (1);
}
