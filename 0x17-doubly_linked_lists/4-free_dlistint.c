#include "lists.h"

/**
 *free_dlistint - Frees a list
 *@head: pointer to head of the list
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
