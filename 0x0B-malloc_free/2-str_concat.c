#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first value to concatenate
 * @s2: the second to concatenate
 * Return:the concatenated s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *i;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	i = malloc(sizeof(char) * (a + b + 1));

	if (i == NULL)
	      return (NULL);

	  a = b = 0;

        while (s1[a] != '\0')
	{
	      i[a] = s1[a];
	      a++;
	}

	while (s2[b] != '\0')
	{
	     i[b] = s2[b];
	    
	     a++, b++;
        }
	i[a] = '\0';
	return (i);
}
