#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer that point to the nodes
 * Return: returns tghe number of nodes 'i'
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
