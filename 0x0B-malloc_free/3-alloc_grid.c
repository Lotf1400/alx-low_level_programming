#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: first input
 * @height: second input
 * Return: a pointer to 2 dimen array
 */

int **alloc_grid(int width, int height)
{
	int **abc;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	abc = malloc(sizeof(int *) * height);
        
	if (abc == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		abc[i] = malloc(sizeof(int) * width);

		if (abc[i] == NULL)
		{
			for (; i >= 0; i--)
				free(abc[i]);
			free(abc);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			abc[i][j] = 0;
	}
	return (abc);
}   
