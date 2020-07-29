#include "lists.h"

/**
  *delete_nodeint_at_index - deletes a node
  *@head: element of list
  *@index: index of list
  *Return: int
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr_h, *tmp;
	unsigned int idx;

	if (!*head)
		return (-1);

	ptr_h = *head;

	if (index == 0)
	{
		*head = ptr_h->next;
		free(ptr_h);
		return (1);
	}
	idx = 0;
	while (ptr_h && idx < (index - 1))
	{
		idx++;
		ptr_h = ptr_h->next;
	}
	if (!ptr_h || !ptr_h->next)
		return (-1);

	tmp = ptr_h->next->next;

	free(ptr_h->next);

	ptr_h = tmp;

	return (1);
}
