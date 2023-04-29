#include "lists.h"
/**
 * add_nodeint_end - it adds a node at the end of the list
 * @head: the first node pointer
 * @n: the data to fill in
 * Return: the new node, otherwise NULL
 */

listint_t add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *tmp = *head;

	last = malloc(sizeof(listint_t));
        if (!last)
		return (NULL);
	
	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	while (tmp->next)
		tmp = tmp->next;
	
	tmp->next = last;

	return (last);
}
