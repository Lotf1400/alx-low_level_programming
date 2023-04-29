#include "lists.h"
/**
 * insert_nodeint_at_index - it inserts a new node at a given
 * position
 * @head: the first node of the list
 * @idx: the index of the list where the node should be added
 * Return: the new node, otherwise NULL, if not possible to add
 * new node, return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *node;
	unsigned int i;

	node = malloc(sizeof(listint_t));

	if (!node || !head)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
