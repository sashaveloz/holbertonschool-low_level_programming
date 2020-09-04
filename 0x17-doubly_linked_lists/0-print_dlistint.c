#include "lists.h"

/**
 * print_dlistint - Print a list of nodes
 *@h: pointer to node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t idx = 0;

	while (idx)
	{
		printf("%d\n", h->n);
		idx++;
		h = h->next;
	}
	return (idx);
}
