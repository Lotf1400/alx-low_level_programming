#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks in the str if there are digits
 * @str: array of the string
 * Return: 0 (success)
 */

int check_num(char *str)
{
	unsigned int i;
	i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - adds a positive numbs
 * @argc: it counts the arg
 * @argv: the arguments
 * Return: 0 (success)
 */

int main(int argc, int *argv[])
{
	int i;
	int d;
	int sum = 0;
	i = 1;

	while (i < argc) /*this should be applied on the whiole array*/
	{
		if (check_num(argv[i]))
		{
			d = atoi(argv[i]); /*atoi - converts the str to an int*/
			sum += d;
		}

		else
		{
			printf("ERROR\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);
	
	return (0);
}
