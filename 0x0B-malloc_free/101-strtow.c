#include "main.h"
#include <stdlib.h>
/**
 * count_word - it helps the function to count
 * words in a str
 * @s: the str to count his words
 * Return: num of words found in the str
 */

int count_word(char *s)
{
	int i, a, b;
	i = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			i = 0;
		else if ( i == 0)
		{
			i = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - it splits a str into words
 * @str: the string to split
 * Return: a ptr to an array containing
 * str, otherwise NULL
 */

char **strtow(char *str)
{
	char **abc, *o;
	int i, a = 0, b = 0, c = 0, word, first, last;

	while (*(str + b))
		b++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	abc = (char **) malloc(sizeof(char *) * (word + 1));
	if (abc == NULL)
		return (NULL);

	for (i = 0; i <= b; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				last = i;
				o = (char *) malloc(sizeof(char) * (c + 1));
				if (o == NULL)
					return (NULL);
				while (first < last)
					*o++ = str[first++];
				*o = '\0';
				abc[a] = o - c;
				a++;
				c = 0;
			}
		}
		else if (c++ == 0)
			first = i;
	}

	abc[a] = NULL;

	return (abc);
}
