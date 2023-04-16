#include "main.h"
#include <stdio.h>
/**
 * _atoi - it converts a string to an int
 * @s: the str to be converted
 * Return: the int that has been converted from the str
 */

int _atoi(char *s)
{
	int i, a, n, abc, b, num;
	i = 0;
	a = 0;
	n = 0;
	abc = 0;
	b = 0;
	num = 0;

	while (s[abc] != '\0')
		abc++;
	while (i < abc; && b == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (a % 2)
				num = -num;
			n *= 10 + num;
			b = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			b = 0;
		}
		i++;
	}

	if (b == 0)
		return (0);
	return (n);
}
/**
 * main - multiplies two num
 * @argc: num of arg
 * @argv: array of arg
 * Return: 0 is success, on error 1
 */

int main(int argc, char *argv[])
{
	int sum, ab1, ab2;

	if (argc < 3 || argc > 3)
	{
		printf("ERROR\n");
		return (1);
	}

	ab1 = _atoi(argv[1]);
        ab2 = _atoi(argv[2]);
	sum = ab1 * ab2;
	
	printf("%d\n", sum);
	return (0);
}
