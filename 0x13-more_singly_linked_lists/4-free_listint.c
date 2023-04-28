#include "lists.h"
/**
 * free_listint - it frees a listint_t list
 * @head: it points to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free (head);
		head = tmp;
	}
}
