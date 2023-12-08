#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the
 * doubly linked list.
 * @n: Value to be assigned to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	/* Set the data for the new node */
	new_node->n = n;
	new_node->prev = NULL;
	h  = *head;

	/* Update the previous of the current head if it exists */
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_node->next = h;

	if (h != NULL)
		h->prev = new_node;

	*head = new_node;

	return (new_node);
}
