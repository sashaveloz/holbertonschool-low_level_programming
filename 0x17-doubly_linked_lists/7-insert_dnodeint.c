#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *@h: pointer to head of the list
 *@n: element of the list
 *@idx: element of the list
 *Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index;
	dlistint_t *ptr_h, *node;

	ptr_h = *h;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	if (idx == 0)
	{
		node->next = ptr_h;
		*h = node;
		return (node);
	}
	index = 0;
	while (ptr_h && index < (idx - 1))
	{
		index++;
		ptr_h = ptr_h->next;
	}

	if (!ptr_h)
	{
		free(node);
		return (NULL);
	}
	node->next = ptr_h->next;
	ptr_h->next = node;

	return (node);
}
