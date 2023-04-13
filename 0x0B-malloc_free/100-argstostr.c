#include "main.h"
#include <stdlib.h>		
/**
		
 * argstostr - concatenates all the arg of the program
		
 * @ac: integer inputed
		
 * @av: double pointer array
		
 * Return: 0 (success)
		
 */
		
char *argstostr(int ac, char **av)
		
{
		
	int i, n, a = 0, b = 0;
	  
	char *cdf;
		

		
	if (ac == 0 || av == NULL)
		
		return (NULL);
		

		
	for (i = 0; i < ac; i++)
		
	{
		
		for (n = 0; av[i][n]; n++)
		
			b++;
		
	}
		
	b += ac;
		

		
	cdf = malloc(sizeof(char) * b + 1);
		
	if (cdf == NULL)
		
		return (NULL);
		
	for (i = 0; i < ac; i++)
		
	{
		
	for (n = 0; av[i][n]; n++)
		
	{
		
		cdf[a] = av[i][n];
		
		a++;
		
	}
		
	if (cdf[a] == '\0')
		
	{
		
		cdf[a++] = '\n';
		
	}
		
	}
		
	return (cdf);
		
}
