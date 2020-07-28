#include "lists.h"

/**
  *get_nodeint_at_index - function that returns
  *@head: element of the list
  *@index: index
  *Return: listint_t
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr_h;
	unsigned int idx;

	ptr_h = head;
	idx = 0;

	if (!ptr_h)
		return (NULL);

	while (ptr_h && idx < index)
	{
		idx++;
		ptr_h = ptr_h->next;
	}
	return (ptr_h);
}
