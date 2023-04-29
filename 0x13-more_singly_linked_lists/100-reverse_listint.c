#include "lists.h"
/**
 * reverse_listint - it reverses a listint_t list
 * @head: it points to the first node
 * Return: a ptr to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *abc = NULL;
	listint_t *def = NULL;

	while (*head)
	{
		def = (*head)->next;
		(*head)->next = abc;
		abc = *head;
		*head = def;
	}
	
	*head = abc;

	return (*head);
}
