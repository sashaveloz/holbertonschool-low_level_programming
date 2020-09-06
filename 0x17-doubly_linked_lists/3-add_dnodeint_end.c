#include "lists.h"

/**
 *add_dnodeint_end - Adds a node at th end of the list
 *@head: pointer to head of the list
 *@n: elemnt of the list
 *Return: the address of the new element o NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *ptr_h = *head;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;

	node->next = NULL;

	if (!ptr_h)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	while (ptr_h->next)
		ptr_h = ptr_h->next;

	ptr_h->next = node;
	node->prev = ptr_h;

	return (node);
}
