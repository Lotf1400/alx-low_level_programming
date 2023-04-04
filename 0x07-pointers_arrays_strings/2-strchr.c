#include "main.h"
/**
 * _strchr - locates a char in a str
 * @c: the char to be located
 * @s: the str where to locate
 * Return: the char c, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
