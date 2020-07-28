#include "lists.h"

/**
  *free_listint - frees a listint list
  *@head: head of the list
  *Return: void
  */

void free_listint(listint_t *head)
{
	free(head);
}
