#include "main.h"
#include <stdio.h>
/**
 * main - it prints the name of the new program
 * @argc: num of arg
 * @argv: the array of arg
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
