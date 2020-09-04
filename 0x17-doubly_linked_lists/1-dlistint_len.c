#include "lists.h"

/**
  *dlistint_len - Returns the number of elements of a list
  *Return: number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t idx = 0;

	while (h)
	{
		idx++;
		h = h->next;
	}
	return (idx);
}
