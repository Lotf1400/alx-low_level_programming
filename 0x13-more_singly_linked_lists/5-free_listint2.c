#include "lists.h"
/**
 * free_listint2 - it frees the listint_t list
 * @head: it points to the first node to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;
	while (*head)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}

	*head = NULL;
}
