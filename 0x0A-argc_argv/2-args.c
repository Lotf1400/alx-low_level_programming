#include "main.h"
#include <stdio.h>
/**
 * main - prints all the arg it receives
 * @argc: num of arg
 * @argv: array of arg
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
