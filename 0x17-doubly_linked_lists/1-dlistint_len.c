#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a
 * dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int  node_count;

	node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
	node_count++;
	h = h->next;
	}

	return (node_count);
}
