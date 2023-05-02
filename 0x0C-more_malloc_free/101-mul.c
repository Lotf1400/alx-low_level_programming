#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#define ERR_MSG "Error"
/**
 * is_digit - it checks if there's a digit in a str
 * @s: str
 * Return: 0 (success), 1 otherwise
 */

int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _strlen - it returns the length of a str
 * @s: the str to check
 * Return: len
 */

int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}
/**
 * errors - it finds the errors in a function
 * main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - it multiplies two nums
 * @argc: the num of args
 * @argv: an arr containing the nums
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	char i, j;
	int a, b, len, c, crr, num1, num2, *sum, o = 0;

	i = argv[1], j = argv[2];
	if (argc != 3 || !is_digit(i) || !is_digit(j))
		errors();
	a = _strlen(i);
	b = _strlen(j);
	len = a + b + 1;
	sum = malloc(sizeof(int) * len);
	if (!sum)
		return (1);
	for (c = 0; c <= a + b; c++)
		sum[c] = 0;
	for (a = a - 1; a >= 0; a--)
	{
		num1 = i[a] - '0';
		crr = 0;
		for (b = _strlen(j) - 1; b >= 0; b--)
		{
			num2 = j[b] - '0';
			crr = crr + sum[a + b + 1] + (num1 * num2);
			sum[a + b + 1] = crr % 10;
			crr /= 10;
		}
		if (crr > 0)
			sum[a + b + 1] += crr;
	}
	for (c = 0; c < len - 1; c++)
	{
		if (sum[c])
			o = 1;

		if (o)
			_putchar(sum[c] + '0');
	}
	if (!o)
		_putchar('0');
	_putchar('\n');
	free(sum);
	return (0);
}
