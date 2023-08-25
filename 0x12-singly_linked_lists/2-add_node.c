#include "lists.h"
#include <stdlib.h>
#include <strings.h>
/**
 * *add_node - This function adds a new node to a linked listt
 * @head: The beginning of the list
 * @str: The string to be added
 * Return: The address of the new element; NULL if not SUCCESS
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);

	(*head) = new;

	return (*head);
}
