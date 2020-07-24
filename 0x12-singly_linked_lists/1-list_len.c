#include "lists.h"

/**
  *list_len - returns the number of elements
  *@h: elements
  *Return: number of elements
  */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
