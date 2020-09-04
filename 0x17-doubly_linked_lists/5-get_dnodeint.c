#include "lists.h"

/**
 *get_dnodeint_at_index - Returns the nth node of a list
 *@head: pointer to the head of the list
 *@index: element of the list
 *Return: the node or NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr_h;
	unsigned int idx = 0;

	ptr_h = head;

	if (!ptr_h)
		return (NULL);

	while (ptr_h && idx < index)
	{
		idx++;
		ptr_h = ptr_h->next;
	}
	return (ptr_h);
}
