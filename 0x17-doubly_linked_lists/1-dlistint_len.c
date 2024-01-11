#include "lists.h"

/**
 * dlistint_len - Counts ²the number of elements in a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 * Return: Number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
