#include "lists.h"

/**
 *add_nodeint - function that adds a new nod at the beggining of the list
 *@head: head of the list
 *@n: member of the list
 *Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
