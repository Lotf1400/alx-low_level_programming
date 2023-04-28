#include "lists.h"
/**
 * pop_listint - it deletes the head node of a listint_t
 * @head: it points to to the first node of the list
 * Return: the head node's data (n), otherwise 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
		return (0);
	
	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
