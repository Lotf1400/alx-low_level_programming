#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - it prints the minimum num of coins
 * to make change for an amount of money
 * @argc: num of args
 * @argv: an array contains the args
 * Return: 0 (success), otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, a, sum;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	sum = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && i >= 0; a++)
	{
		while (i >= coin[a])
		{
			sum++;
			i = i - coin[a];
		}
	}

	printf("%d\n", sum);
	return (0);
}
