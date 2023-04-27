#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list
 * @str: a string to add
 * Return: the adress of the new element, otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *abc;
	unsigned int len = 0;

	while (str[len])
		len++;
	abc = malloc(sizeof(list_t));
	if (!abc)
		return (NULL);
	abc->str = strdup(str);
	abc->len = len;
	abc->next = (*head);
	(*head) = abc;

	return (*head);
}
