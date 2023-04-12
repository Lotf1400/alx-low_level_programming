#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is duplicated from another str
 * @str: the string to use
 * Return: 0 (success)
 */

char *_strdup(char *str)
{
	char *abc;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	abc = malloc(sizeof(char) * (i + 1));
	
	if (abc == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		abc[j] = str[j];
	return (abc);
}
