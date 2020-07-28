#include "lists.h"

/**
  *pop_listint - function that deletes the first node of a list
  *@head: element of list
  *Return: n
  */


int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr_h;

	if (!head)
		return (0);

	ptr_h = *head;
	n = ptr_h->n;

	*head = (*head)->next;

	free(ptr_h);

	return (n);
}
