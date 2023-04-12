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

	for (a = 0; a < height; a++)
	{
		abc[a] = malloc(sizeof(int) * width);

		if (abc[a] == NULL)
		{
			for (; a >= 0; a--)
				free(abc[a]);
			free(abc);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			abc[a][b] = 0;
	}
	return (abc);
}   
