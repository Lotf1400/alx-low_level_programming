#include "lists.h"
/**
 * delete_nodeint_at_index - deletes th node in the list
 * @head: it points to the first node
 * @index: the index that should be deleted
 * Return: 1 (success), otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *def = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		
		tmp = tmp->next;
		a++;
	}

	def = tmp->next;
	tmp->next = def->next;
	free(def);

	return (1);
}
