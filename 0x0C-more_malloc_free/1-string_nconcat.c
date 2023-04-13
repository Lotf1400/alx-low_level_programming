#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string where to concatenate
 * @s2: the string from where we take the first n byte
 * n: the bytes to use
 * Return: a pointer, if it fails return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, a = 0, abc1 = 0, abc2 = 0;

	while (s1 && s1[abc1])
		abc1++;
	while (s2 && s2[abc2])
		abc2++;
	if (n < abc2)
		s = malloc(sizeof(char) * (abc1 + n + 1));
	else
		s = malloc(sizeof(char) * (abc1 + abc2 + 1));

	if (!s)
		return (NULL);
	while (i < abc1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < abc2 && i < (abc1 + n))
		s[i++] = s2[a++];
	while (n >= abc2 && i < (abc1 + abc2))
		s[i++] = s2[a++];
	s[i] = '\0';
	return (s);
}
