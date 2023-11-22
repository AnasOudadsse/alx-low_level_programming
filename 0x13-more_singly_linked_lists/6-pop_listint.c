#include "lists.h"

/**
 *pop_listint - pops head node of a list
 *@head: adress of pointer to the first node
 * Return: returns the data of the node deleted
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head)
	{
		node = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = node;
		return (n);
	}
	else
		return (0);
}
