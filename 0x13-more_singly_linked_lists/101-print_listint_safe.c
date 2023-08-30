#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the head
 *
 * Return: 98 for failed
 */
size_t print_listint_safe(const listint_t *head)
{
	/*Floyd's Tortoise & Hare */
	/*
	 * Fast Pointer and Slow Pointer can help to checkf a full cycle
	 * It happens in linear time O(n) when the pointers meet
	 */
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		/* check if the fast and slow pointers are meeting */
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}
	/* if there is no loop, print the remaining node */
	if (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	return (count);
}
