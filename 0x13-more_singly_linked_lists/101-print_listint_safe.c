#include "lists.h"

const listint_t *find_loop(const listint_t *head);
/**
 * find_listint_loop - finds the starting point of a loop in a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: pointer to the starting point of the loop, or NULL
 */
const listint_t *find_loop(const listint_t *head)
{
	const listint_t *slow, *fast, *start;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			start = head;
			while (start != slow)
			{
				start = start->next;
				slow = slow->next;
			}
			return (start);
		}
	}

	return (NULL);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *start;

	if (head == NULL)
		exit(98);

	start = find_loop(head);

	while (head != start)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	if (start)
	{
		printf("[%p] %d\n", (void *)start, start->n);
		count++;
		start = start->next;
		while (start != head)
		{
			printf("[%p] %d\n", (void *)start, start->n);
			start = start->next;
			count++;
		}
		printf("-> [%p] %d\n", (void *)start, start->n);
	}

	return (count);
}

