#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: this is the head of the string
 * @str: the string to be read
 *
 * Return: the address of the new element. Return NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/**initialize a new variable as per our user defined struct */

	list_t *new;
	list_t *tmp;

	/** allocate memory for our variable */

	new = malloc(sizeof(list_t));

	/** check if it is null */

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (*head);
}
