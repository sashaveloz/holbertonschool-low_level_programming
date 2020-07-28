#include "lists.h"

/**
 *print_listint -  function that prints all the elements of a listint_t list.
 * @h: element of linked list
 *Return: counter of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes;

	while (h)
	{
		printf("%d\n", h->n);

		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
