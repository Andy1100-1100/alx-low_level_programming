#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: The address where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
	return (NULL);

	slow = head->next;
	fast = head->next->next;

	while (fast && fast->next)
	{
	if (slow == fast)
	{
/* Loop detected, now find the start of the loop */
		slow = head;
	while (slow != fast)
		{
		slow = slow->next;
		fast = fast->next;
		}
		return (slow);
	}
	slow = slow->next;
	fast = fast->next->next;
	}

	return (NULL);
}
