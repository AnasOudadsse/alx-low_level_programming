#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: the head of the linked list
 * @n: the data that will be stored in the new node
 * Return: return the new node or null if it didnt exist
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else
		return (NULL);
}
