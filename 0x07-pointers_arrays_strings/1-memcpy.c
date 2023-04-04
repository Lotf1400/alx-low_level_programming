#include "main.h"
/**
 * _memcpy - copies the memory area
 * @n: the value to be copied
 * @src: the memory from where we copy
 * @dest: the memory where we copy
 * Return: the copied memory with n changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
