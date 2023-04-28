#include "lists.h"
/**
 * add_nodeint - it adds a new node at the beginning
 * of a listint_t list
 * @head: a ptr to the previous node
 * @n: the data to implement in the node
 * Return: the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;
	nw = malloc(sizeof(listint_t));

	if (!nw)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
