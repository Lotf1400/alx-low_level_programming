#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - prints the result of the operations
 * @argc: the num of arg
 * @argv: the array of pointers
 * Return: 0 (success)
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_funct(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_funct(op)(num1, num2));
	return (0);
}
