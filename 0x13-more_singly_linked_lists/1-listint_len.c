#include "lists.h"

/**
 * listint_len - returns the number of nodes in the list
 * @h: pointer to the node
 * Return: returns the number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
