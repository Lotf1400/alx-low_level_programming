#include <stdio.h>
#include <stdlib.h>
/**
 * main - it prints an opcode of it's own function
 * @argc: num of args in the function
 * @argv: an arr that contains args
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int a, i;
	char *abc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	abc = (char *)main;

	for (i = 0; i < a; i++)
	{
		if (i == a - 1)
		{
			printf("%02hhx\n", abc[i]);
			break;
		}

		printf("%02hhx", abc[i]);
	}
	return (0);
}
