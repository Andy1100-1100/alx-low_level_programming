#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *snail, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	snail = head->next;
	hare = (head->next)->next;

	while (hare)
	{
	if (snail == hare)
	{
	snail = head;
	while (snail != hare)
	{
	nodes++;
	snail = snail->next;
	hare = hare->next;
	}

	snail = snail->next;
	while (snail != hare)
	{
	nodes++;
	snail = snail->next;
	}

	return (nodes);
	}

	snail = snail->next;
	hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
