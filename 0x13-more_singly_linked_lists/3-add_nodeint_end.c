#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: the head of the linked list
 * @n: the data that will be stored in the newNode
 * Return: returns newNode or null
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current;

	if (newNode)
	{
		newNode->n = n;
		newNode->next = NULL;

		if (*head == NULL)
			*head = newNode;

		else
		{
			current = *head;

			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = newNode;
		}
		return (newNode);
	}
	else
		return (NULL);
}
