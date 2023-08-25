#include "lists.h"
/**
 * free_list - This function frees a given list
 * @head: The head to the first node for the list to be freed
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
