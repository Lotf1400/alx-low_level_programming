#include "main.h"
/**
 * _memset - fills the memory area pointed by s by a value
 * @b: the constant byte to be filled
 * @s: the adress to be filled 
 * @n: the byte to be changed
 * Return: change the array with a new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
