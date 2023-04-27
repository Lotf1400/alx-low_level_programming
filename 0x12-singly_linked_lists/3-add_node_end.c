#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - it adds a node at the end of list_t list
 * @head: double pointer
 * @str: the string to print in the new node
 * Return: the adress of the new element, otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *def;
	list_t *dest = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	def = malloc(sizeof(list_t));

	if (!def)
		return (NULL);
	def->str = strdup(str);
	def->len = len;
	def->next = NULL;

	if (*head == NULL)
	{
		*head = def;
		return (def);
	}

	while (dest->next)
		dest = dest->next;
	dest->next = def;

	return (def);
}
