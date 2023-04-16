#include "main.h"
#include <stdio.h>
/**
 * main - prints the num of arg passed into it
 * @argc: the num of arg
 * @argv: the array of arg
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore the argv*/
	printf("%d\n", argc - 1);

	return (0);
}
