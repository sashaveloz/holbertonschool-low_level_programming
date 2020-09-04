#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning of a list
 *@head: ** to the head of the list
 *@n: element of list
 *Return: the address of th new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
