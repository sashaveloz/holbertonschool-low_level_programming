#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node of a list
 *@head: pointer to head of the list
 *@index: element of the list
 *Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr_h = *head, *tmp;
	unsigned int idx;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = ptr_h->next;
		(*head)->prev = NULL;
		free(ptr_h);
		return (1);
	}
	for (idx = 0; ptr_h && idx < (index - 1); idx++)
		ptr_h = ptr_h->next;

	if (!ptr_h || !ptr_h->next)
		return (-1);

	tmp = ptr_h->next->next;
	free(ptr_h->next);
	ptr_h->next = tmp;

	if (ptr_h->tnext)
		ptr_h->next->prev = ptr_h;

	return (1);
}
