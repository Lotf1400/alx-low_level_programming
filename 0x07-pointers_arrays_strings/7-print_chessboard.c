#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: 0 is success
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int a;

	while (i = 0; i < 8; i++)
	{
		for (a = 0; a < 8; a++)
		       _putchar(a[i][j]);
	_putchar('\n');
	}
}	
