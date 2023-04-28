#include "lists.h"
/**
 * sum_listint - it returns the sum of all data (n) in
 * the listint_t list
 * @head: ptr to the first node
 * Return: the sum of (n), NULL if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int i = 0;

	while (tmp)
	{
		i = i + tmp->n;
		tmp = tmp->next;
	}

	return (i);
}
