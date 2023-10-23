#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked
 * listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* Initialize a counter to zero */

	while (h != NULL)
	{
		count++; /* Increment the counter */
		h = h->next; /* Move to the next node */
	}

	return (count);
}
