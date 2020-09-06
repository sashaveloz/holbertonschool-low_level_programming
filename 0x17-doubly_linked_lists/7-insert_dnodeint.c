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
	if (!ptr_h && idx > 0)
	{	free(node);
		return (NULL);
	}
	if (idx == 0)
	{
		if (!ptr_h)
			node->next = NULL;
		else
		{	node->next = ptr_h;
			ptr_h->prev = node;
		}
		node->prev = NULL;
		*h = node;
		return (node);
	}
	for (index = 0; index < (idx - 1); index++)
	{
		if (!ptr_h)
		{	free(node);
			return (NULL);
		}
		ptr_h = ptr_h->next;
	}
	node->next = ptr_h->next;
	node->prev = ptr_h;
	if (ptr_h->next)
		ptr_h->next->prev = node;
	ptr_h->next = node;
	return (node);
}
