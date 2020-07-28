#include "lists.h"

/**
  *free_listint2 - function that frees a listint_t list
  *@head: element of list
  */

void free_listint2(listint_t **head)
{
	if (head)
	{
		if (*head)
		{
			free_listint2(&(*(*head)).next);
			free(*head);
		}
		*head = NULL;
	}
}
