#include "lists.h"

/**
 *add_nodeint_end - adds a node at the end of the list
 *@head:head of the list
 *@n: member of the list
 *Return: elements of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *ptr_h = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;

	node->next = NULL;

	if (!head || !(*head))
	{
		*head = node;
	}
	else
	{
		while (ptr_h->next)
			ptr_h = ptr_h->next;
		ptr_h->next = node;
	}

	return (node);
}
