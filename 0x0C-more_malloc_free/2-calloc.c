#include "main.h"
#include <stdlib.h>
/**
 * _memset - it fills the memory with a constant byte
 * @s: the memory to be filled
 * @n: the character to copy
 * @j: number of time copying n
 * Return: pointer
 */

char *_memset(char *s, char n, unsigned int j)
{
	unsigned int i;

	for (i = 0; i < j; i++)
	{
		s[i] = n;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: the num of elements in an array
 * @size: the size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
        char *ptr;
        
        if ( nmemb == 0 || size == 0)
	
	         return (NULL);
        ptr = malloc(size * nmemb);
      
        if ( ptr == NULL)
	        return (NULL);
        _memset(ptr, 0, nmemb * size);
           return (ptr);
}	   
