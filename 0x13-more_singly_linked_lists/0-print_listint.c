#include "lists.h"

/**
 *print_listint -  function that prints all the elements of a listint_t list.
 * @h: element of linked list
 *Return: counter of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}
	return (count);
}
