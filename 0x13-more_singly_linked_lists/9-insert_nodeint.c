#include "lists.h"

/**
  *insert_nodeint_at_index - insterts a node at a given position
  *@head: element of the list
  *@idx: index
  *@n: element of the list
  *Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *ptr_h, *node;

	ptr_h = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	if (idx == 0)
	{
		node->next = ptr_h;
		*head = node;
		return (node);
	}
	index = 0;
	while (ptr_h && index < (idx - 1))
	{
		index++;
		ptr_h = ptr_h->next;
	}

	if (!ptr_h)
	{
		free(node);
		return (NULL);
	}
	node->next = ptr_h->next;
	ptr_h->next = node;

	return (node);
}
