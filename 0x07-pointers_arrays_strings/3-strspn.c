#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: contains the wanted bytes
 * Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
